#include "motomini_dynamics/motomini_dynamics.hpp"

#include <sstream>

// Add for MotoMINI_Model
#include <stddef.h>
#include <stdio.h> /* This ert_main.c example uses printf/fflush */

#ifdef __cplusplus
extern "C" {
#endif

#include "MotoMINI_Model.h" /* Model's header file */
#include "rtwtypes.h"

#ifdef __cplusplus
}
#endif

using motomini_dynamics_publisher::MotominiDynamicsPublisher;

MotominiDynamicsPublisher::MotominiDynamicsPublisher(ros::NodeHandle& nh)
  : nh_(nh)
  , traj_sub(nh_.subscribe("planned_trajectory", 10, &MotominiDynamicsPublisher::trajCallback, this))
  , torque_pub(nh_.advertise<std_msgs::Float64>("torque_cost", 10))
{
}

void MotominiDynamicsPublisher::trajCallback(const trajectory_msgs::JointTrajectory& msg)
{
  // Extract trajectory
  for (int i = 0; i < 6; i++)
  {
    t[i] = msg.points[i].time_from_start.toSec();
    ROS_DEBUG("t[%d] = %f", i, t[i]);
  }

  for (int i = 0; i < 6; i++)
  {
    Qt1[i] = msg.points[i].positions[0];
    Qt2[i] = msg.points[i].positions[1];
    Qt3[i] = msg.points[i].positions[2];
    Qt4[i] = msg.points[i].positions[3];
    Qt5[i] = msg.points[i].positions[4];
    Qt6[i] = msg.points[i].positions[5];
    ROS_DEBUG("Qt1[%d] = %f", i, Qt1[i]);
    ROS_DEBUG("Qt2[%d] = %f", i, Qt2[i]);
    ROS_DEBUG("Qt3[%d] = %f", i, Qt3[i]);
    ROS_DEBUG("Qt4[%d] = %f", i, Qt4[i]);
    ROS_DEBUG("Qt5[%d] = %f", i, Qt5[i]);
    ROS_DEBUG("Qt6[%d] = %f", i, Qt6[i]);
  }

  // Initialize model
  MotoMINI_Model_initialize();

  // Simulate model
  for (int i = 0; i < 1000; i++)
  {
    /* Simulating the model step behavior (in non real-time) to
     *  simulate model behavior at stop time.
     */
    MotoMINI_Model_step();
  }

  // Get the cumulated torque
  std_msgs::Float64 torque_msg;
  torque_msg.data = MotoMINI_Model_Y.torqueCost;
  ROS_DEBUG("Torque = %f", torque_msg.data);

  // Terminate model
  MotoMINI_Model_terminate();

  // Publish
  torque_pub.publish(torque_msg);
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "motomini_dynamics_publisher_node");
  ros::NodeHandle nh;

  MotominiDynamicsPublisher motomini_dynamics_publisher_obj(nh);

  ros::spin();

  return 0;
}
