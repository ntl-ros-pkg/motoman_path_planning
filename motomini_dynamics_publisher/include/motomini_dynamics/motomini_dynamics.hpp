#ifndef MOTOMINI_DYNAMICS_PUBLISHER_H
#define MOTOMINI_DYNAMICS_PUBLISHER_H

#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "trajectory_msgs/JointTrajectory.h"

namespace motomini_dynamics_publisher
{
class MotominiDynamicsPublisher
{
public:
  MotominiDynamicsPublisher(ros::NodeHandle& nh);

private:
  ros::NodeHandle nh_;
  ros::Subscriber traj_sub;
  ros::Publisher torque_pub;
  void trajCallback(const trajectory_msgs::JointTrajectory& msg);
};

}  // motomini_dynamics_publisher

#endif  // MOTOMINI_DYNAMICS_PUBLISHER_H
