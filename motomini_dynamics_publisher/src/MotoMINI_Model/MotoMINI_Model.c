/*
 * File: MotoMINI_Model.c
 *
 * Code generated for Simulink model 'MotoMINI_Model'.
 *
 * Model version                  : 1.221
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Aug 22 19:09:53 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MotoMINI_Model.h"
#include "MotoMINI_Model_private.h"

/* Exported block parameters */
real_T Qt1[6] = { 0.0, 0.1571, 0.3142, 0.4712, 0.6283, 0.7854 } ;/* Variable: Qt1
                                                                  * Referenced by: '<S2>/1-D Lookup Table'
                                                                  */

real_T Qt2[6] = { 0.0, 0.3141, 0.6283, 0.9424, 1.2566, 1.5707 } ;/* Variable: Qt2
                                                                  * Referenced by: '<S2>/1-D Lookup Table1'
                                                                  */

real_T Qt3[6] = { 0.0, 0.1201, 0.2403, 0.3604, 0.4806, 0.6007 } ;/* Variable: Qt3
                                                                  * Referenced by: '<S2>/1-D Lookup Table2'
                                                                  */

real_T Qt4[6] = { 0.0, -0.0, -0.0, -0.0, -0.0, -0.0 } ;/* Variable: Qt4
                                                        * Referenced by: '<S2>/1-D Lookup Table3'
                                                        */

real_T Qt5[6] = { 0.0, 0.5079, 1.0158, 1.5237, 2.0317, 2.5396 } ;/* Variable: Qt5
                                                                  * Referenced by: '<S2>/1-D Lookup Table4'
                                                                  */

real_T Qt6[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 } ;/* Variable: Qt6
                                                   * Referenced by: '<S2>/1-D Lookup Table5'
                                                   */

real_T t[6] = { 0.0, 0.2, 0.4, 0.6, 0.8, 1.0 } ;/* Variable: t
                                                 * Referenced by:
                                                 *   '<S2>/1-D Lookup Table'
                                                 *   '<S2>/1-D Lookup Table1'
                                                 *   '<S2>/1-D Lookup Table2'
                                                 *   '<S2>/1-D Lookup Table3'
                                                 *   '<S2>/1-D Lookup Table4'
                                                 *   '<S2>/1-D Lookup Table5'
                                                 */

/* Block signals (default storage) */
B_MotoMINI_Model_T MotoMINI_Model_B;

/* Continuous states */
X_MotoMINI_Model_T MotoMINI_Model_X;

/* Block states (default storage) */
DW_MotoMINI_Model_T MotoMINI_Model_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_MotoMINI_Model_T MotoMINI_Model_Y;

/* Real-time model */
RT_MODEL_MotoMINI_Model_T MotoMINI_Model_M_;
RT_MODEL_MotoMINI_Model_T *const MotoMINI_Model_M = &MotoMINI_Model_M_;

/* n-D Spline interpolation function */
real_T look_SplNBinSZcd(uint32_T numDims, const real_T* u, const
  rt_LUTSplineWork * const SWork)
{
  /*
   *   n-D column-major table lookup operating on real_T with:
   *       - Spline interpolation
   *       - Spline extrapolation
   *       - Binary breakpoint search
   *       - Index search starts at the same place each time
   */
  rt_LUTnWork * const TWork_look = SWork->m_TWork;
  real_T* const fraction = (real_T*) TWork_look->m_bpLambda;
  uint32_T* const bpIdx = TWork_look->m_bpIndex;
  const uint32_T* const maxIndex = TWork_look->m_maxIndex;
  uint32_T k;
  for (k = 0U; k < numDims; k++) {
    const real_T* const bpData = ((const real_T * const *)
      TWork_look->m_bpDataSet)[k];
    bpIdx[k] = plook_binx(u[k], &bpData[0], maxIndex[k], &fraction[k]);
  }

  return(intrp_NSplcd(numDims, SWork, 3U));
}

/*
 * Second derivative initialization function for spline
 * for last dimension.
 */
void rt_Spline2Derivd(const real_T *x, const real_T *y, uint32_T n, real_T *u,
                      real_T *y2)
{
  real_T p, qn, sig, un;
  uint32_T n1, i, k;
  n1 = n - 1U;
  y2[0U] = 0.0;
  u[0U] = 0.0;
  for (i = 1U; i < n1; i++) {
    real_T dxm1 = x[i] - x[i - 1U];
    real_T dxp1 = x[i + 1U] - x[i];
    real_T dxpm = dxp1 + dxm1;
    sig = dxm1 / dxpm;
    p = (sig * y2[i - 1U]) + 2.0;
    y2[i] = (sig - 1.0) / p;
    u[i] = ((y[i + 1U] - y[i]) / dxp1) - ((y[i] - y[i - 1U]) / dxm1);
    u[i] = (((6.0 * u[i]) / dxpm) - (sig * u[i - 1U])) / p;
  }

  qn = 0.0;
  un = 0.0;
  y2[n1] = (un - (qn * u[n1 - 1U])) / ((qn * y2[n1 - 1U]) + 1.0);
  for (k = n1; k > 0U; k--) {
    y2[k-1U] = (y2[k-1U] * y2[k]) + u[k-1U];
  }

  return;
}

/* n-D natural spline calculation function */
real_T intrp_NSplcd(uint32_T numDims, const rt_LUTSplineWork * const splWork,
                    uint32_T extrapMethod)
{
  uint32_T il;
  uint32_T iu, k, i;
  real_T h, s, p, smsq, pmsq;

  /* intermediate results work areas "this" and "next" */
  const rt_LUTnWork *TWork_interp = (const rt_LUTnWork *)splWork->m_TWork;
  const real_T *fraction = (real_T *) TWork_interp->m_bpLambda;
  const real_T *yp = (real_T *) TWork_interp->m_tableData;
  real_T *yyA = (real_T *) splWork->m_yyA;
  real_T *yyB = (real_T *) splWork->m_yyB;
  real_T *yy2 = (real_T *) splWork->m_yy2;
  real_T *up = (real_T *) splWork->m_up;
  real_T *y2 = (real_T *) splWork->m_y2;
  uint8_T* reCalc = splWork->m_reCalc;
  real_T *dp = (real_T *) splWork->m_preBp0AndTable;
  const real_T **bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
  const real_T *xp = bpDataSet[0U];
  real_T *yy = yyA;
  uint32_T bufBank = 0U;
  uint32_T len = TWork_interp->m_maxIndex[0U] + 1U;

  /* compare bp0 and table to see whether they get changed */
  {
    /* compare the bp0 data */
    if (memcmp(dp, xp,
               len * sizeof(real_T)) != 0) {
      *reCalc = 1;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
    }

    /* compare the table data */
    dp = &(dp[len]);
    if (memcmp(dp, yp,
               len * splWork->m_numYWorkElts[0U] * sizeof(real_T)) != 0) {
      *reCalc = 1;
      (void) memcpy(dp, yp,
                    len * splWork->m_numYWorkElts[0U] * sizeof(real_T));
    }
  }

  if (*reCalc == 1) {
    /* If table and bps are tunable calculate 1st dim 2nd deriv */
    /* Generate first dimension's second derivatives */
    for (i = 0U; i < splWork->m_numYWorkElts[0U]; i++) {
      rt_Spline2Derivd(xp, yp, len, up, y2);
      yp = &yp[len];
      y2 = &y2[len];
    }

    /* Set pointers back to beginning */
    yp = (const real_T *) TWork_interp->m_tableData;
    y2 = (real_T *) splWork->m_y2;
  }

  *reCalc = 0;

  /* Generate at-point splines in each dimension */
  for (k = 0U; k < numDims; k++ ) {
    /* this dimension's input setup */
    xp = bpDataSet[k];
    len = TWork_interp->m_maxIndex[k] + 1U;
    il = TWork_interp->m_bpIndex[k];
    iu = il + 1U;
    h = xp[iu] - xp[il];
    p = fraction[k];
    s = 1.0 - p;
    pmsq = p * ((p*p) - 1.0);
    smsq = s * ((s*s) - 1.0);

    /*
     * Calculate spline curves for input in this
     * dimension at each value of the higher
     * other dimensions\' points in the table.
     */
    if ((p > 1.0) && (extrapMethod == 2U) ) {
      real_T slope;
      for (i = 0U; i < splWork->m_numYWorkElts[k]; i++) {
        slope = (yp[iu] - yp[il]) + ((y2[il]*h*h)*(1.0/6.0));
        yy[i] = yp[iu] + (slope * (p-1.0));
        yp = &yp[len];
        y2 = &y2[len];
      }
    } else if ((p < 0.0) && (extrapMethod == 2U) ) {
      real_T slope;
      for (i = 0U; i < splWork->m_numYWorkElts[k]; i++) {
        slope = (yp[iu] - yp[il]) - ((y2[iu]*h*h)*(1.0/6.0));
        yy[i] = yp[il] + (slope * p);
        yp = &yp[len];
        y2 = &y2[len];
      }
    } else {
      for (i = 0U; i < splWork->m_numYWorkElts[k]; i++) {
        yy[i] = yp[il] + p * (yp[iu] - yp[il]) +
          ((smsq * y2[il] + pmsq * y2[iu])*h*h)*(1.0/6.0);
        yp = &yp[len];
        y2 = &y2[len];
      }
    }

    /* set pointers to new result and calculate second derivatives */
    yp = yy;
    y2 = yy2;
    if (splWork->m_numYWorkElts[k+1U] > 0U ) {
      uint32_T nextLen = TWork_interp->m_maxIndex[k+1U] + 1U;
      const real_T *nextXp = bpDataSet[k+1U];
      for (i = 0U; i < splWork->m_numYWorkElts[k+1U]; i++) {
        rt_Spline2Derivd(nextXp, yp, nextLen, up, y2);
        yp = &yp[nextLen];
        y2 = &y2[nextLen];
      }
    }

    /*
     * Set work vectors yp, y2 and yy for next iteration;
     * the yy just calculated becomes the yp in the
     * next iteration, y2 was just calculated for these
     * new points and the yy buffer is swapped to the space
     * for storing the next iteration\'s results.
     */
    yp = yy;
    y2 = yy2;

    /*
     * Swap buffers for next dimension and
     * toggle bufBank for next iteration.
     */
    if (bufBank == 0U) {
      yy = yyA;
      bufBank = 1U;
    } else {
      yy = yyB;
      bufBank = 0U;
    }
  }

  return( yp[0U] );
}

uint32_T plook_binx(real_T u, const real_T bp[], uint32_T maxIndex, real_T
                    *fraction)
{
  uint32_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
    *fraction = (u - bp[0U]) / (bp[1U] - bp[0U]);
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d(u, bp, maxIndex >> 1U, maxIndex);
    *fraction = (u - bp[bpIndex]) / (bp[bpIndex + 1U] - bp[bpIndex]);
  } else {
    bpIndex = maxIndex - 1U;
    *fraction = (u - bp[maxIndex - 1U]) / (bp[maxIndex] - bp[maxIndex - 1U]);
  }

  return bpIndex;
}

uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIndex;
  uint32_T iRght;
  uint32_T bpIdx;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 17;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  MotoMINI_Model_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  MotoMINI_Model_step();
  MotoMINI_Model_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  MotoMINI_Model_step();
  MotoMINI_Model_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void MotoMINI_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_Integrator;
  if (rtmIsMajorTimeStep(MotoMINI_Model_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&MotoMINI_Model_M->solverInfo,
                          ((MotoMINI_Model_M->Timing.clockTick0+1)*
      MotoMINI_Model_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(MotoMINI_Model_M)) {
    MotoMINI_Model_M->Timing.t[0] = rtsiGetT(&MotoMINI_Model_M->solverInfo);
  }

  {
    boolean_T first_output;
    NeslSimulationData *simulationData;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T i;
    char *msg;
    real_T time;
    real_T rtb_Integrator_tmp;

    /* SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
    if (rtmIsMajorTimeStep(MotoMINI_Model_M)) {
      MotoMINI_Model_DW.INPUT_5_1_1_Discrete = 0.023;
    }

    first_output = false;
    if (MotoMINI_Model_DW.INPUT_5_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_5_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[0] =
        MotoMINI_Model_DW.INPUT_5_1_1_Discrete;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_5_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[0];
    MotoMINI_Model_B.INPUT_5_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[1];
    MotoMINI_Model_B.INPUT_5_1_1[2] = ((MotoMINI_Model_DW.INPUT_5_1_1_Discrete -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_5_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_5_1_1' */

    /* SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
    if (rtmIsMajorTimeStep(MotoMINI_Model_M)) {
      MotoMINI_Model_DW.INPUT_1_1_1_Discrete = 0.023;
    }

    first_output = false;
    if (MotoMINI_Model_DW.INPUT_1_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_1_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[0] =
        MotoMINI_Model_DW.INPUT_1_1_1_Discrete;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_1_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[0];
    MotoMINI_Model_B.INPUT_1_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[1];
    MotoMINI_Model_B.INPUT_1_1_1[2] = ((MotoMINI_Model_DW.INPUT_1_1_1_Discrete -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_1_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_1_1_1' */

    /* Clock: '<S2>/Clock' incorporates:
     *  SimscapeExecutionBlock: '<S108>/OUTPUT_1_0'
     *  SimscapeExecutionBlock: '<S108>/STATE_1'
     */
    rtb_Integrator_tmp = MotoMINI_Model_M->Timing.t[0];
    rtb_Integrator = rtb_Integrator_tmp;

    /* Lookup_n-D: '<S2>/1-D Lookup Table' */
    /*
     * About '<S2>/1-D Lookup Table':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_6_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_6_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[0] =
        MotoMINI_Model_B.uDLookupTable;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_6_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[0];
    MotoMINI_Model_B.INPUT_6_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[1];
    MotoMINI_Model_B.INPUT_6_1_1[2] = ((MotoMINI_Model_B.uDLookupTable -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_6_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_6_1_1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table1' */
    /*
     * About '<S2>/1-D Lookup Table1':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable1 = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork_i[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_7_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_7_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[0] =
        MotoMINI_Model_B.uDLookupTable1;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_7_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[0];
    MotoMINI_Model_B.INPUT_7_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[1];
    MotoMINI_Model_B.INPUT_7_1_1[2] = ((MotoMINI_Model_B.uDLookupTable1 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_7_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_7_1_1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table2' */
    /*
     * About '<S2>/1-D Lookup Table2':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable2 = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork_f[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_8_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_8_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[0] =
        MotoMINI_Model_B.uDLookupTable2;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_8_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[0];
    MotoMINI_Model_B.INPUT_8_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[1];
    MotoMINI_Model_B.INPUT_8_1_1[2] = ((MotoMINI_Model_B.uDLookupTable2 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_8_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_8_1_1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table3' */
    /*
     * About '<S2>/1-D Lookup Table3':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable3 = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork_iz[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_2_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_2_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[0] =
        MotoMINI_Model_B.uDLookupTable3;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_2_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[0];
    MotoMINI_Model_B.INPUT_2_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[1];
    MotoMINI_Model_B.INPUT_2_1_1[2] = ((MotoMINI_Model_B.uDLookupTable3 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_2_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_2_1_1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table4' */
    /*
     * About '<S2>/1-D Lookup Table4':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable4 = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork_n[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_3_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_3_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[0] =
        MotoMINI_Model_B.uDLookupTable4;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_3_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[0];
    MotoMINI_Model_B.INPUT_3_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[1];
    MotoMINI_Model_B.INPUT_3_1_1[2] = ((MotoMINI_Model_B.uDLookupTable4 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_3_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_3_1_1' */

    /* Lookup_n-D: '<S2>/1-D Lookup Table5' */
    /*
     * About '<S2>/1-D Lookup Table5':
     *       Table size:  6
     *    Interpolation:  Spline
     *    Extrapolation:  Spline
     *   Breakpt Search:  Binary
     *    Breakpt Cache:  OFF
     */
    MotoMINI_Model_B.uDLookupTable5 = look_SplNBinSZcd(1U, &rtb_Integrator,
      (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork_c[0]);

    /* SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
    first_output = false;
    if (MotoMINI_Model_DW.INPUT_4_1_1_FirstOutput == 0.0) {
      MotoMINI_Model_DW.INPUT_4_1_1_FirstOutput = 1.0;
      first_output = true;
    }

    if (first_output) {
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[0] =
        MotoMINI_Model_B.uDLookupTable5;
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[1] = 0.0;
    }

    MotoMINI_Model_B.INPUT_4_1_1[0] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[0];
    MotoMINI_Model_B.INPUT_4_1_1[1] =
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[1];
    MotoMINI_Model_B.INPUT_4_1_1[2] = ((MotoMINI_Model_B.uDLookupTable5 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[0]) * 1000.0 - 2.0 *
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[1]) * 1000.0;
    MotoMINI_Model_B.INPUT_4_1_1[3] = 0.0;

    /* End of SimscapeInputBlock: '<S108>/INPUT_4_1_1' */

    /* SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' incorporates:
     *  SimscapeExecutionBlock: '<S108>/STATE_1'
     */
    simulationData = (NeslSimulationData *)MotoMINI_Model_DW.OUTPUT_1_0_SimData;
    MotoMINI_Model_B.time = rtb_Integrator_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &MotoMINI_Model_B.time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &MotoMINI_Model_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &MotoMINI_Model_DW.OUTPUT_1_0_Modes;
    first_output = false;
    simulationData->mData->mFoundZcEvents = first_output;
    first_output = rtmIsMajorTimeStep(MotoMINI_Model_M);
    simulationData->mData->mIsMajorTimeStep = first_output;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    MotoMINI_Model_B.iv0[0] = 0;
    MotoMINI_Model_B.dv0[0] = MotoMINI_Model_B.INPUT_5_1_1[0];
    MotoMINI_Model_B.dv0[1] = MotoMINI_Model_B.INPUT_5_1_1[1];
    MotoMINI_Model_B.dv0[2] = MotoMINI_Model_B.INPUT_5_1_1[2];
    MotoMINI_Model_B.dv0[3] = MotoMINI_Model_B.INPUT_5_1_1[3];
    MotoMINI_Model_B.iv0[1] = 4;
    MotoMINI_Model_B.dv0[4] = MotoMINI_Model_B.INPUT_1_1_1[0];
    MotoMINI_Model_B.dv0[5] = MotoMINI_Model_B.INPUT_1_1_1[1];
    MotoMINI_Model_B.dv0[6] = MotoMINI_Model_B.INPUT_1_1_1[2];
    MotoMINI_Model_B.dv0[7] = MotoMINI_Model_B.INPUT_1_1_1[3];
    MotoMINI_Model_B.iv0[2] = 8;
    MotoMINI_Model_B.dv0[8] = MotoMINI_Model_B.INPUT_6_1_1[0];
    MotoMINI_Model_B.dv0[9] = MotoMINI_Model_B.INPUT_6_1_1[1];
    MotoMINI_Model_B.dv0[10] = MotoMINI_Model_B.INPUT_6_1_1[2];
    MotoMINI_Model_B.dv0[11] = MotoMINI_Model_B.INPUT_6_1_1[3];
    MotoMINI_Model_B.iv0[3] = 12;
    MotoMINI_Model_B.dv0[12] = MotoMINI_Model_B.INPUT_7_1_1[0];
    MotoMINI_Model_B.dv0[13] = MotoMINI_Model_B.INPUT_7_1_1[1];
    MotoMINI_Model_B.dv0[14] = MotoMINI_Model_B.INPUT_7_1_1[2];
    MotoMINI_Model_B.dv0[15] = MotoMINI_Model_B.INPUT_7_1_1[3];
    MotoMINI_Model_B.iv0[4] = 16;
    MotoMINI_Model_B.dv0[16] = MotoMINI_Model_B.INPUT_8_1_1[0];
    MotoMINI_Model_B.dv0[17] = MotoMINI_Model_B.INPUT_8_1_1[1];
    MotoMINI_Model_B.dv0[18] = MotoMINI_Model_B.INPUT_8_1_1[2];
    MotoMINI_Model_B.dv0[19] = MotoMINI_Model_B.INPUT_8_1_1[3];
    MotoMINI_Model_B.iv0[5] = 20;
    MotoMINI_Model_B.dv0[20] = MotoMINI_Model_B.INPUT_2_1_1[0];
    MotoMINI_Model_B.dv0[21] = MotoMINI_Model_B.INPUT_2_1_1[1];
    MotoMINI_Model_B.dv0[22] = MotoMINI_Model_B.INPUT_2_1_1[2];
    MotoMINI_Model_B.dv0[23] = MotoMINI_Model_B.INPUT_2_1_1[3];
    MotoMINI_Model_B.iv0[6] = 24;
    MotoMINI_Model_B.dv0[24] = MotoMINI_Model_B.INPUT_3_1_1[0];
    MotoMINI_Model_B.dv0[25] = MotoMINI_Model_B.INPUT_3_1_1[1];
    MotoMINI_Model_B.dv0[26] = MotoMINI_Model_B.INPUT_3_1_1[2];
    MotoMINI_Model_B.dv0[27] = MotoMINI_Model_B.INPUT_3_1_1[3];
    MotoMINI_Model_B.iv0[7] = 28;
    MotoMINI_Model_B.dv0[28] = MotoMINI_Model_B.INPUT_4_1_1[0];
    MotoMINI_Model_B.dv0[29] = MotoMINI_Model_B.INPUT_4_1_1[1];
    MotoMINI_Model_B.dv0[30] = MotoMINI_Model_B.INPUT_4_1_1[2];
    MotoMINI_Model_B.dv0[31] = MotoMINI_Model_B.INPUT_4_1_1[3];
    MotoMINI_Model_B.iv0[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &MotoMINI_Model_B.dv0[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &MotoMINI_Model_B.iv0[0];
    simulationData->mData->mOutputs.mN = 44;
    simulationData->mData->mOutputs.mX = &MotoMINI_Model_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      MotoMINI_Model_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    /* SignalConversion: '<S1>/TmpSignal ConversionAtDot ProductInport2' */
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[0] =
      MotoMINI_Model_B.OUTPUT_1_0[11];
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[1] =
      MotoMINI_Model_B.OUTPUT_1_0[15];
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[2] =
      MotoMINI_Model_B.OUTPUT_1_0[19];
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[3] =
      MotoMINI_Model_B.OUTPUT_1_0[23];
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[4] =
      MotoMINI_Model_B.OUTPUT_1_0[27];
    MotoMINI_Model_B.TmpSignalConversionAtDotPro[5] =
      MotoMINI_Model_B.OUTPUT_1_0[31];

    /* SimscapeExecutionBlock: '<S108>/STATE_1' */
    simulationData = (NeslSimulationData *)MotoMINI_Model_DW.STATE_1_SimData;
    time = rtb_Integrator_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &MotoMINI_Model_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &MotoMINI_Model_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = first_output;
    first_output = false;
    simulationData->mData->mIsSolverAssertCheck = first_output;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    MotoMINI_Model_B.iv1[0] = 0;
    MotoMINI_Model_B.dv1[0] = MotoMINI_Model_B.INPUT_5_1_1[0];
    MotoMINI_Model_B.dv1[1] = MotoMINI_Model_B.INPUT_5_1_1[1];
    MotoMINI_Model_B.dv1[2] = MotoMINI_Model_B.INPUT_5_1_1[2];
    MotoMINI_Model_B.dv1[3] = MotoMINI_Model_B.INPUT_5_1_1[3];
    MotoMINI_Model_B.iv1[1] = 4;
    MotoMINI_Model_B.dv1[4] = MotoMINI_Model_B.INPUT_1_1_1[0];
    MotoMINI_Model_B.dv1[5] = MotoMINI_Model_B.INPUT_1_1_1[1];
    MotoMINI_Model_B.dv1[6] = MotoMINI_Model_B.INPUT_1_1_1[2];
    MotoMINI_Model_B.dv1[7] = MotoMINI_Model_B.INPUT_1_1_1[3];
    MotoMINI_Model_B.iv1[2] = 8;
    MotoMINI_Model_B.dv1[8] = MotoMINI_Model_B.INPUT_6_1_1[0];
    MotoMINI_Model_B.dv1[9] = MotoMINI_Model_B.INPUT_6_1_1[1];
    MotoMINI_Model_B.dv1[10] = MotoMINI_Model_B.INPUT_6_1_1[2];
    MotoMINI_Model_B.dv1[11] = MotoMINI_Model_B.INPUT_6_1_1[3];
    MotoMINI_Model_B.iv1[3] = 12;
    MotoMINI_Model_B.dv1[12] = MotoMINI_Model_B.INPUT_7_1_1[0];
    MotoMINI_Model_B.dv1[13] = MotoMINI_Model_B.INPUT_7_1_1[1];
    MotoMINI_Model_B.dv1[14] = MotoMINI_Model_B.INPUT_7_1_1[2];
    MotoMINI_Model_B.dv1[15] = MotoMINI_Model_B.INPUT_7_1_1[3];
    MotoMINI_Model_B.iv1[4] = 16;
    MotoMINI_Model_B.dv1[16] = MotoMINI_Model_B.INPUT_8_1_1[0];
    MotoMINI_Model_B.dv1[17] = MotoMINI_Model_B.INPUT_8_1_1[1];
    MotoMINI_Model_B.dv1[18] = MotoMINI_Model_B.INPUT_8_1_1[2];
    MotoMINI_Model_B.dv1[19] = MotoMINI_Model_B.INPUT_8_1_1[3];
    MotoMINI_Model_B.iv1[5] = 20;
    MotoMINI_Model_B.dv1[20] = MotoMINI_Model_B.INPUT_2_1_1[0];
    MotoMINI_Model_B.dv1[21] = MotoMINI_Model_B.INPUT_2_1_1[1];
    MotoMINI_Model_B.dv1[22] = MotoMINI_Model_B.INPUT_2_1_1[2];
    MotoMINI_Model_B.dv1[23] = MotoMINI_Model_B.INPUT_2_1_1[3];
    MotoMINI_Model_B.iv1[6] = 24;
    MotoMINI_Model_B.dv1[24] = MotoMINI_Model_B.INPUT_3_1_1[0];
    MotoMINI_Model_B.dv1[25] = MotoMINI_Model_B.INPUT_3_1_1[1];
    MotoMINI_Model_B.dv1[26] = MotoMINI_Model_B.INPUT_3_1_1[2];
    MotoMINI_Model_B.dv1[27] = MotoMINI_Model_B.INPUT_3_1_1[3];
    MotoMINI_Model_B.iv1[7] = 28;
    MotoMINI_Model_B.dv1[28] = MotoMINI_Model_B.INPUT_4_1_1[0];
    MotoMINI_Model_B.dv1[29] = MotoMINI_Model_B.INPUT_4_1_1[1];
    MotoMINI_Model_B.dv1[30] = MotoMINI_Model_B.INPUT_4_1_1[2];
    MotoMINI_Model_B.dv1[31] = MotoMINI_Model_B.INPUT_4_1_1[3];
    MotoMINI_Model_B.iv1[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &MotoMINI_Model_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &MotoMINI_Model_B.iv1[0];
    simulationData->mData->mOutputs.mN = 0;
    simulationData->mData->mOutputs.mX = NULL;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)MotoMINI_Model_DW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diagnosticManager);
    if (i != 0) {
      first_output = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (first_output) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    /* DotProduct: '<S1>/Dot Product' incorporates:
     *  Math: '<S1>/Math Function'
     */
    MotoMINI_Model_B.DotProduct = 0.0;
    for (i = 0; i < 6; i++) {
      MotoMINI_Model_B.DotProduct +=
        MotoMINI_Model_B.TmpSignalConversionAtDotPro[i] *
        MotoMINI_Model_B.TmpSignalConversionAtDotPro[i];
    }

    /* End of DotProduct: '<S1>/Dot Product' */

    /* Integrator: '<S1>/Integrator' */
    rtb_Integrator = MotoMINI_Model_X.Integrator_CSTATE;

    /* Outport: '<Root>/torqueCost' */
    MotoMINI_Model_Y.torqueCost = rtb_Integrator;
  }

  if (rtmIsMajorTimeStep(MotoMINI_Model_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;

    /* Update for SimscapeExecutionBlock: '<S108>/STATE_1' */
    simulationData = (NeslSimulationData *)MotoMINI_Model_DW.STATE_1_SimData;
    time = MotoMINI_Model_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &MotoMINI_Model_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &MotoMINI_Model_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (MotoMINI_Model_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    MotoMINI_Model_B.iv2[0] = 0;
    MotoMINI_Model_B.dv2[0] = MotoMINI_Model_B.INPUT_5_1_1[0];
    MotoMINI_Model_B.dv2[1] = MotoMINI_Model_B.INPUT_5_1_1[1];
    MotoMINI_Model_B.dv2[2] = MotoMINI_Model_B.INPUT_5_1_1[2];
    MotoMINI_Model_B.dv2[3] = MotoMINI_Model_B.INPUT_5_1_1[3];
    MotoMINI_Model_B.iv2[1] = 4;
    MotoMINI_Model_B.dv2[4] = MotoMINI_Model_B.INPUT_1_1_1[0];
    MotoMINI_Model_B.dv2[5] = MotoMINI_Model_B.INPUT_1_1_1[1];
    MotoMINI_Model_B.dv2[6] = MotoMINI_Model_B.INPUT_1_1_1[2];
    MotoMINI_Model_B.dv2[7] = MotoMINI_Model_B.INPUT_1_1_1[3];
    MotoMINI_Model_B.iv2[2] = 8;
    MotoMINI_Model_B.dv2[8] = MotoMINI_Model_B.INPUT_6_1_1[0];
    MotoMINI_Model_B.dv2[9] = MotoMINI_Model_B.INPUT_6_1_1[1];
    MotoMINI_Model_B.dv2[10] = MotoMINI_Model_B.INPUT_6_1_1[2];
    MotoMINI_Model_B.dv2[11] = MotoMINI_Model_B.INPUT_6_1_1[3];
    MotoMINI_Model_B.iv2[3] = 12;
    MotoMINI_Model_B.dv2[12] = MotoMINI_Model_B.INPUT_7_1_1[0];
    MotoMINI_Model_B.dv2[13] = MotoMINI_Model_B.INPUT_7_1_1[1];
    MotoMINI_Model_B.dv2[14] = MotoMINI_Model_B.INPUT_7_1_1[2];
    MotoMINI_Model_B.dv2[15] = MotoMINI_Model_B.INPUT_7_1_1[3];
    MotoMINI_Model_B.iv2[4] = 16;
    MotoMINI_Model_B.dv2[16] = MotoMINI_Model_B.INPUT_8_1_1[0];
    MotoMINI_Model_B.dv2[17] = MotoMINI_Model_B.INPUT_8_1_1[1];
    MotoMINI_Model_B.dv2[18] = MotoMINI_Model_B.INPUT_8_1_1[2];
    MotoMINI_Model_B.dv2[19] = MotoMINI_Model_B.INPUT_8_1_1[3];
    MotoMINI_Model_B.iv2[5] = 20;
    MotoMINI_Model_B.dv2[20] = MotoMINI_Model_B.INPUT_2_1_1[0];
    MotoMINI_Model_B.dv2[21] = MotoMINI_Model_B.INPUT_2_1_1[1];
    MotoMINI_Model_B.dv2[22] = MotoMINI_Model_B.INPUT_2_1_1[2];
    MotoMINI_Model_B.dv2[23] = MotoMINI_Model_B.INPUT_2_1_1[3];
    MotoMINI_Model_B.iv2[6] = 24;
    MotoMINI_Model_B.dv2[24] = MotoMINI_Model_B.INPUT_3_1_1[0];
    MotoMINI_Model_B.dv2[25] = MotoMINI_Model_B.INPUT_3_1_1[1];
    MotoMINI_Model_B.dv2[26] = MotoMINI_Model_B.INPUT_3_1_1[2];
    MotoMINI_Model_B.dv2[27] = MotoMINI_Model_B.INPUT_3_1_1[3];
    MotoMINI_Model_B.iv2[7] = 28;
    MotoMINI_Model_B.dv2[28] = MotoMINI_Model_B.INPUT_4_1_1[0];
    MotoMINI_Model_B.dv2[29] = MotoMINI_Model_B.INPUT_4_1_1[1];
    MotoMINI_Model_B.dv2[30] = MotoMINI_Model_B.INPUT_4_1_1[2];
    MotoMINI_Model_B.dv2[31] = MotoMINI_Model_B.INPUT_4_1_1[3];
    MotoMINI_Model_B.iv2[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &MotoMINI_Model_B.dv2[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &MotoMINI_Model_B.iv2[0];
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)
      MotoMINI_Model_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_0 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S108>/STATE_1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(MotoMINI_Model_M)) {
    rt_ertODEUpdateContinuousStates(&MotoMINI_Model_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++MotoMINI_Model_M->Timing.clockTick0;
    MotoMINI_Model_M->Timing.t[0] = rtsiGetSolverStopTime
      (&MotoMINI_Model_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      MotoMINI_Model_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void MotoMINI_Model_derivatives(void)
{
  XDot_MotoMINI_Model_T *_rtXdot;
  _rtXdot = ((XDot_MotoMINI_Model_T *) MotoMINI_Model_M->derivs);

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_5_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_MotominiS[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[1];
  _rtXdot->MotoMINI_ModelYaskawa_MotominiS[1] =
    ((MotoMINI_Model_DW.INPUT_5_1_1_Discrete -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_MotominiS[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_1_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_c[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_c[1] =
    ((MotoMINI_Model_DW.INPUT_1_1_1_Discrete -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_c[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_6_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_j[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_j[1] = ((MotoMINI_Model_B.uDLookupTable
    - MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[0]) * 1000.0 - 2.0 *
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_j[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_7_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_n[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_n[1] =
    ((MotoMINI_Model_B.uDLookupTable1 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_n[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_8_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_e[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_e[1] =
    ((MotoMINI_Model_B.uDLookupTable2 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_e[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_2_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_h[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_h[1] =
    ((MotoMINI_Model_B.uDLookupTable3 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_h[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_3_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomi_eq[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomi_eq[1] =
    ((MotoMINI_Model_B.uDLookupTable4 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomi_eq[1]) * 1000.0;

  /* Derivatives for SimscapeInputBlock: '<S108>/INPUT_4_1_1' */
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_g[0] =
    MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[1];
  _rtXdot->MotoMINI_ModelYaskawa_Motomin_g[1] =
    ((MotoMINI_Model_B.uDLookupTable5 -
      MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[0]) * 1000.0 - 2.0 *
     MotoMINI_Model_X.MotoMINI_ModelYaskawa_Motomin_g[1]) * 1000.0;

  /* Derivatives for Integrator: '<S1>/Integrator' */
  _rtXdot->Integrator_CSTATE = MotoMINI_Model_B.DotProduct;
}

/* Model initialize function */
void MotoMINI_Model_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)MotoMINI_Model_M, 0,
                sizeof(RT_MODEL_MotoMINI_Model_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&MotoMINI_Model_M->solverInfo,
                          &MotoMINI_Model_M->Timing.simTimeStep);
    rtsiSetTPtr(&MotoMINI_Model_M->solverInfo, &rtmGetTPtr(MotoMINI_Model_M));
    rtsiSetStepSizePtr(&MotoMINI_Model_M->solverInfo,
                       &MotoMINI_Model_M->Timing.stepSize0);
    rtsiSetdXPtr(&MotoMINI_Model_M->solverInfo, &MotoMINI_Model_M->derivs);
    rtsiSetContStatesPtr(&MotoMINI_Model_M->solverInfo, (real_T **)
                         &MotoMINI_Model_M->contStates);
    rtsiSetNumContStatesPtr(&MotoMINI_Model_M->solverInfo,
      &MotoMINI_Model_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&MotoMINI_Model_M->solverInfo,
      &MotoMINI_Model_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&MotoMINI_Model_M->solverInfo,
      &MotoMINI_Model_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&MotoMINI_Model_M->solverInfo,
      &MotoMINI_Model_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&MotoMINI_Model_M->solverInfo, (&rtmGetErrorStatus
      (MotoMINI_Model_M)));
    rtsiSetRTModelPtr(&MotoMINI_Model_M->solverInfo, MotoMINI_Model_M);
  }

  rtsiSetSimTimeStep(&MotoMINI_Model_M->solverInfo, MAJOR_TIME_STEP);
  MotoMINI_Model_M->intgData.y = MotoMINI_Model_M->odeY;
  MotoMINI_Model_M->intgData.f[0] = MotoMINI_Model_M->odeF[0];
  MotoMINI_Model_M->intgData.f[1] = MotoMINI_Model_M->odeF[1];
  MotoMINI_Model_M->intgData.f[2] = MotoMINI_Model_M->odeF[2];
  MotoMINI_Model_M->contStates = ((X_MotoMINI_Model_T *) &MotoMINI_Model_X);
  rtsiSetSolverData(&MotoMINI_Model_M->solverInfo, (void *)
                    &MotoMINI_Model_M->intgData);
  rtsiSetSolverName(&MotoMINI_Model_M->solverInfo,"ode3");
  rtmSetTPtr(MotoMINI_Model_M, &MotoMINI_Model_M->Timing.tArray[0]);
  MotoMINI_Model_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) memset(((void *) &MotoMINI_Model_B), 0,
                sizeof(B_MotoMINI_Model_T));

  /* states (continuous) */
  {
    (void) memset((void *)&MotoMINI_Model_X, 0,
                  sizeof(X_MotoMINI_Model_T));
  }

  /* states (dwork) */
  (void) memset((void *)&MotoMINI_Model_DW, 0,
                sizeof(DW_MotoMINI_Model_T));

  /* external outputs */
  MotoMINI_Model_Y.torqueCost = 0.0;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_1;
    char *msg;
    NeslSimulationData *simulationData;
    boolean_T tmp_2;
    real_T time_tmp;

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt1;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)&MotoMINI_Model_DW.SWork[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table1' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork_g[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet_h;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt2;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex_k;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda_i;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)
        &MotoMINI_Model_DW.SWork_i[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork_g[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA_f;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB_j;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2_h;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up_d[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2_e[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs_g;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData_e[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table2' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork_c[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet_i;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt3;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex_j;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda_p;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)
        &MotoMINI_Model_DW.SWork_f[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork_c[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA_b;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB_n;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2_k;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up_dl[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2_c[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs_j;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData_a[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table3' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork_h[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet_d;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt4;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex_o;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda_py;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)
        &MotoMINI_Model_DW.SWork_iz[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork_h[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA_i;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB_k;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2_hm;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up_h[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2_c0[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs_m;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData_d[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table4' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork_b[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet_d0;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt5;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex_k2;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda_f;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)
        &MotoMINI_Model_DW.SWork_n[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork_b[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA_d;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB_h;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2_c;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up_l[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2_cc[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs_p;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData_m[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for Lookup_n-D: '<S2>/1-D Lookup Table5' */
    {
      rt_LUTnWork *TWork_start = (rt_LUTnWork *) &MotoMINI_Model_DW.TWork_bl[0];
      void **bpDataSet = (void **) &MotoMINI_Model_DW.m_bpDataSet_a;
      TWork_start->m_dimSizes = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled2;
      TWork_start->m_tableData = (void *) Qt6;
      TWork_start->m_bpDataSet = bpDataSet;
      TWork_start->m_bpIndex = &MotoMINI_Model_DW.m_bpIndex_jr;
      TWork_start->m_bpLambda = &MotoMINI_Model_DW.m_bpLambda_a;
      TWork_start->m_maxIndex = (const uint32_T *)
        &MotoMINI_Model_ConstP.pooled1;
      bpDataSet[0] = (void *) t;
    }

    {
      const real_T **bpDataSet;
      const real_T *xp, *yp;
      real_T *dp;
      uint32_T len;
      const rt_LUTnWork *TWork_interp;
      rt_LUTSplineWork *rt_SplWk = (rt_LUTSplineWork*)
        &MotoMINI_Model_DW.SWork_c[0];
      rt_SplWk->m_TWork = (rt_LUTnWork*)&MotoMINI_Model_DW.TWork_bl[0];
      rt_SplWk->m_yyA = &MotoMINI_Model_DW.m_yyA_g;
      rt_SplWk->m_yyB = &MotoMINI_Model_DW.m_yyB_p;
      rt_SplWk->m_yy2 = &MotoMINI_Model_DW.m_yy2_hd;
      rt_SplWk->m_up = &MotoMINI_Model_DW.m_up_n[0];
      rt_SplWk->m_y2 = &MotoMINI_Model_DW.m_y2_l[0];
      rt_SplWk->m_numYWorkElts = MotoMINI_Model_ConstP.pooled3;
      rt_SplWk->m_reCalc = &MotoMINI_Model_DW.reCalcSecDerivFirstDimCoeffs_pm;
      rt_SplWk->m_preBp0AndTable = &MotoMINI_Model_DW.prevBp0AndTableData_c[0];
      *rt_SplWk->m_reCalc = 1;

      /* cache table data and first breakpoint data */
      TWork_interp = (const rt_LUTnWork *)rt_SplWk->m_TWork;
      bpDataSet = (const real_T **) TWork_interp->m_bpDataSet;
      xp = bpDataSet[0U];
      len = TWork_interp->m_maxIndex[0U] + 1U;
      dp = (real_T *) rt_SplWk->m_preBp0AndTable;
      yp = (real_T *) TWork_interp->m_tableData;
      (void) memcpy(dp, xp,
                    len * sizeof(real_T));
      dp = &(dp[len]);

      /* save the table data */
      (void) memcpy(dp, yp,
                    len * rt_SplWk->m_numYWorkElts[0U] * sizeof(real_T));
    }

    /* Start for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' incorporates:
     *  SimscapeExecutionBlock: '<S108>/STATE_1'
     */
    tmp = nesl_lease_simulator(
      "MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1", 1, 0);
    MotoMINI_Model_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(MotoMINI_Model_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      MotoMINI_Model_a0f7e8cf_1_gateway();
      tmp = nesl_lease_simulator(
        "MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1", 1, 0);
      MotoMINI_Model_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    MotoMINI_Model_DW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    MotoMINI_Model_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    MotoMINI_Model_B.modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    MotoMINI_Model_B.modelParameters.mSolverTolerance = 0.001;
    MotoMINI_Model_B.modelParameters.mVariableStepSolver = false;
    MotoMINI_Model_B.modelParameters.mFixedStepSize = 0.001;
    MotoMINI_Model_B.modelParameters.mStartTime = 0.0;
    MotoMINI_Model_B.modelParameters.mLoadInitialState = false;
    MotoMINI_Model_B.modelParameters.mUseSimState = false;
    MotoMINI_Model_B.modelParameters.mLinTrimCompile = false;
    MotoMINI_Model_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    MotoMINI_Model_B.modelParameters.mRTWModifiedTimeStamp = 4.88333567E+8;
    MotoMINI_Model_B.d0 = 0.001;
    MotoMINI_Model_B.modelParameters.mSolverTolerance = MotoMINI_Model_B.d0;
    MotoMINI_Model_B.d0 = 0.001;
    MotoMINI_Model_B.modelParameters.mFixedStepSize = MotoMINI_Model_B.d0;
    tmp_0 = false;
    MotoMINI_Model_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator((NeslSimulator *)
      MotoMINI_Model_DW.OUTPUT_1_0_Simulator, &MotoMINI_Model_B.modelParameters,
      diagnosticManager);
    if (tmp_1 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)MotoMINI_Model_DW.OUTPUT_1_0_SimData;
    time_tmp = MotoMINI_Model_M->Timing.t[0];
    MotoMINI_Model_B.time_c = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &MotoMINI_Model_B.time_c;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &MotoMINI_Model_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &MotoMINI_Model_DW.OUTPUT_1_0_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_0 = rtmIsMajorTimeStep(MotoMINI_Model_M);
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_2 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_2;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      MotoMINI_Model_DW.OUTPUT_1_0_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_1 != 0) {
      tmp_2 = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp_2) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */

    /* Start for SimscapeExecutionBlock: '<S108>/STATE_1' */
    tmp = nesl_lease_simulator(
      "MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1", 0, 0);
    MotoMINI_Model_DW.STATE_1_Simulator = (void *)tmp;
    tmp_2 = pointer_is_null(MotoMINI_Model_DW.STATE_1_Simulator);
    if (tmp_2) {
      MotoMINI_Model_a0f7e8cf_1_gateway();
      tmp = nesl_lease_simulator(
        "MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1", 0, 0);
      MotoMINI_Model_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    MotoMINI_Model_DW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    MotoMINI_Model_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    MotoMINI_Model_B.modelParameters_m.mSolverType = NE_SOLVER_TYPE_DAE;
    MotoMINI_Model_B.modelParameters_m.mSolverTolerance = 0.001;
    MotoMINI_Model_B.modelParameters_m.mVariableStepSolver = false;
    MotoMINI_Model_B.modelParameters_m.mFixedStepSize = 0.001;
    MotoMINI_Model_B.modelParameters_m.mStartTime = 0.0;
    MotoMINI_Model_B.modelParameters_m.mLoadInitialState = false;
    MotoMINI_Model_B.modelParameters_m.mUseSimState = false;
    MotoMINI_Model_B.modelParameters_m.mLinTrimCompile = false;
    MotoMINI_Model_B.modelParameters_m.mLoggingMode = SSC_LOGGING_NONE;
    MotoMINI_Model_B.modelParameters_m.mRTWModifiedTimeStamp = 4.88333567E+8;
    MotoMINI_Model_B.d0 = 0.001;
    MotoMINI_Model_B.modelParameters_m.mSolverTolerance = MotoMINI_Model_B.d0;
    MotoMINI_Model_B.d0 = 0.001;
    MotoMINI_Model_B.modelParameters_m.mFixedStepSize = MotoMINI_Model_B.d0;
    tmp_2 = false;
    MotoMINI_Model_B.modelParameters_m.mVariableStepSolver = tmp_2;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = nesl_initialize_simulator((NeslSimulator *)
      MotoMINI_Model_DW.STATE_1_Simulator, &MotoMINI_Model_B.modelParameters_m,
      diagnosticManager);
    if (tmp_1 != 0) {
      tmp_2 = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp_2) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    MotoMINI_Model_B.expl_temp.mRealParameters.mN = 0;
    MotoMINI_Model_B.expl_temp.mRealParameters.mX = NULL;
    MotoMINI_Model_B.expl_temp.mLogicalParameters.mN = 0;
    MotoMINI_Model_B.expl_temp.mLogicalParameters.mX = NULL;
    MotoMINI_Model_B.expl_temp.mIntegerParameters.mN = 0;
    MotoMINI_Model_B.expl_temp.mIntegerParameters.mX = NULL;
    MotoMINI_Model_B.expl_temp.mIndexParameters.mN = 0;
    MotoMINI_Model_B.expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)MotoMINI_Model_DW.STATE_1_Simulator,
      MotoMINI_Model_B.expl_temp);
    simulationData = (NeslSimulationData *)MotoMINI_Model_DW.STATE_1_SimData;
    MotoMINI_Model_B.time_k = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &MotoMINI_Model_B.time_k;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &MotoMINI_Model_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &MotoMINI_Model_DW.STATE_1_Modes;
    tmp_2 = false;
    simulationData->mData->mFoundZcEvents = tmp_2;
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      MotoMINI_Model_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_1 = ne_simulator_method((NeslSimulator *)
      MotoMINI_Model_DW.STATE_1_Simulator, NESL_SIM_INITIALIZEONCE,
      simulationData, diagnosticManager);
    if (tmp_1 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(MotoMINI_Model_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(MotoMINI_Model_M, msg);
      }
    }

    /* InitializeConditions for Integrator: '<S1>/Integrator' */
    MotoMINI_Model_X.Integrator_CSTATE = 0.0;
  }
}

/* Model terminate function */
void MotoMINI_Model_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S108>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    MotoMINI_Model_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    MotoMINI_Model_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S108>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    MotoMINI_Model_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    MotoMINI_Model_DW.STATE_1_SimData);
  nesl_erase_simulator("MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration_1");
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
