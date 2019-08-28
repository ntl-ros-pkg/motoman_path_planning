/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration'.
 */

#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"

boolean_T MotoMINI_Model_a0f7e8cf_1_getTargetStatus(const
  RuntimeDerivedValuesBundle *rtdv, const double *state, const size_t
  targetIndex)
{
  return true;
}

void MotoMINI_Model_a0f7e8cf_1_setTargets(const RuntimeDerivedValuesBundle *rtdv,
  CTarget *targets)
{
  (void) rtdv;
  (void) targets;
}

void MotoMINI_Model_a0f7e8cf_1_resetStateVector(const void *mech, double *state)
{
  double xx[1];
  (void) mech;
  xx[0] = 0.0;
  state[0] = xx[0];
  state[1] = xx[0];
  state[2] = xx[0];
  state[3] = xx[0];
  state[4] = xx[0];
  state[5] = xx[0];
  state[6] = xx[0];
  state[7] = xx[0];
  state[8] = xx[0];
  state[9] = xx[0];
  state[10] = xx[0];
  state[11] = xx[0];
  state[12] = xx[0];
  state[13] = xx[0];
  state[14] = xx[0];
  state[15] = xx[0];
}

void MotoMINI_Model_a0f7e8cf_1_initializeTrackedAngleState(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *motionData, double
  *state, void *neDiagMgr0)
{
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) rtdv;
  (void) motionData;
  (void) state;
  (void) neDiagMgr;
}

void MotoMINI_Model_a0f7e8cf_1_computeDiscreteState(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, double *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
}

void MotoMINI_Model_a0f7e8cf_1_adjustPosition(const void *mech, const double
  *dofDeltas, double *state)
{
  (void) mech;
  state[0] = state[0] + dofDeltas[0];
  state[2] = state[2] + dofDeltas[1];
  state[4] = state[4] + dofDeltas[2];
  state[6] = state[6] + dofDeltas[3];
  state[8] = state[8] + dofDeltas[4];
  state[10] = state[10] + dofDeltas[5];
  state[12] = state[12] + dofDeltas[6];
  state[14] = state[14] + dofDeltas[7];
}

static void perturbJointPrimitiveState_2_0(double mag, double *state)
{
  state[0] = state[0] + mag;
}

static void perturbJointPrimitiveState_2_0v(double mag, double *state)
{
  state[0] = state[0] + mag;
  state[1] = state[1] - 0.875 * mag;
}

static void perturbJointPrimitiveState_3_0(double mag, double *state)
{
  state[2] = state[2] + mag;
}

static void perturbJointPrimitiveState_3_0v(double mag, double *state)
{
  state[2] = state[2] + mag;
  state[3] = state[3] - 0.875 * mag;
}

static void perturbJointPrimitiveState_4_0(double mag, double *state)
{
  state[4] = state[4] + mag;
}

static void perturbJointPrimitiveState_4_0v(double mag, double *state)
{
  state[4] = state[4] + mag;
  state[5] = state[5] - 0.875 * mag;
}

static void perturbJointPrimitiveState_5_0(double mag, double *state)
{
  state[6] = state[6] + mag;
}

static void perturbJointPrimitiveState_5_0v(double mag, double *state)
{
  state[6] = state[6] + mag;
  state[7] = state[7] - 0.875 * mag;
}

static void perturbJointPrimitiveState_6_0(double mag, double *state)
{
  state[8] = state[8] + mag;
}

static void perturbJointPrimitiveState_6_0v(double mag, double *state)
{
  state[8] = state[8] + mag;
  state[9] = state[9] - 0.875 * mag;
}

static void perturbJointPrimitiveState_7_0(double mag, double *state)
{
  state[10] = state[10] + mag;
}

static void perturbJointPrimitiveState_7_0v(double mag, double *state)
{
  state[10] = state[10] + mag;
  state[11] = state[11] - 0.875 * mag;
}

static void perturbJointPrimitiveState_10_0(double mag, double *state)
{
  state[12] = state[12] + mag;
}

static void perturbJointPrimitiveState_10_0v(double mag, double *state)
{
  state[12] = state[12] + mag;
  state[13] = state[13] - 0.875 * mag;
}

static void perturbJointPrimitiveState_11_0(double mag, double *state)
{
  state[14] = state[14] + mag;
}

static void perturbJointPrimitiveState_11_0v(double mag, double *state)
{
  state[14] = state[14] + mag;
  state[15] = state[15] - 0.875 * mag;
}

void MotoMINI_Model_a0f7e8cf_1_perturbJointPrimitiveState(const void *mech,
  size_t stageIdx, size_t primIdx, double mag, boolean_T doPerturbVelocity,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch ((stageIdx * 6 + primIdx) * 2 + (doPerturbVelocity ? 1 : 0))
  {
   case 24:
    perturbJointPrimitiveState_2_0(mag, state);
    break;

   case 25:
    perturbJointPrimitiveState_2_0v(mag, state);
    break;

   case 36:
    perturbJointPrimitiveState_3_0(mag, state);
    break;

   case 37:
    perturbJointPrimitiveState_3_0v(mag, state);
    break;

   case 48:
    perturbJointPrimitiveState_4_0(mag, state);
    break;

   case 49:
    perturbJointPrimitiveState_4_0v(mag, state);
    break;

   case 60:
    perturbJointPrimitiveState_5_0(mag, state);
    break;

   case 61:
    perturbJointPrimitiveState_5_0v(mag, state);
    break;

   case 72:
    perturbJointPrimitiveState_6_0(mag, state);
    break;

   case 73:
    perturbJointPrimitiveState_6_0v(mag, state);
    break;

   case 84:
    perturbJointPrimitiveState_7_0(mag, state);
    break;

   case 85:
    perturbJointPrimitiveState_7_0v(mag, state);
    break;

   case 120:
    perturbJointPrimitiveState_10_0(mag, state);
    break;

   case 121:
    perturbJointPrimitiveState_10_0v(mag, state);
    break;

   case 132:
    perturbJointPrimitiveState_11_0(mag, state);
    break;

   case 133:
    perturbJointPrimitiveState_11_0v(mag, state);
    break;
  }
}

void MotoMINI_Model_a0f7e8cf_1_perturbFlexibleBodyState(const void *mech, size_t
  stageIdx, double mag, boolean_T doPerturbVelocity, double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) mag;
  (void) doPerturbVelocity;
  (void) state;
  switch (stageIdx * 2 + (doPerturbVelocity ? 1 : 0))
  {
  }
}

void MotoMINI_Model_a0f7e8cf_1_computeDofBlendMatrix(const void *mech, size_t
  stageIdx, size_t primIdx, const double *state, int partialType, double *matrix)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) state;
  (void) partialType;
  (void) matrix;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void MotoMINI_Model_a0f7e8cf_1_projectPartiallyTargetedPos(const void *mech,
  size_t stageIdx, size_t primIdx, const double *origState, int partialType,
  double *state)
{
  (void) mech;
  (void) stageIdx;
  (void) primIdx;
  (void) origState;
  (void) partialType;
  (void) state;
  switch ((stageIdx * 6 + primIdx))
  {
  }
}

void MotoMINI_Model_a0f7e8cf_1_propagateMotion(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const double *state, double *motionData)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  double xx[107];
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  xx[0] = - 1.0;
  xx[1] = 0.0;
  xx[2] = 0.103;
  xx[3] = 0.5;
  xx[4] = xx[3] * state[0];
  xx[5] = cos(xx[4]);
  xx[6] = sin(xx[4]);
  xx[4] = xx[3] * state[2];
  xx[7] = cos(xx[4]);
  xx[8] = sin(xx[4]);
  xx[4] = 0.02;
  xx[9] = xx[3] * state[4];
  xx[10] = cos(xx[9]);
  xx[11] = sin(xx[9]);
  xx[9] = 0.165;
  xx[12] = xx[3] * state[6];
  xx[13] = cos(xx[12]);
  xx[14] = sin(xx[12]);
  xx[12] = xx[3] * state[8];
  xx[15] = cos(xx[12]);
  xx[16] = sin(xx[12]);
  xx[12] = xx[3] * state[10];
  xx[3] = cos(xx[12]);
  xx[17] = sin(xx[12]);
  xx[12] = 0.04;
  xx[18] = 0.035;
  xx[19] = 4.320510343363756e-8;
  xx[20] = 0.9999999999999991;
  xx[21] = 3.999999913589793e-3 - 8.641020686727511e-8 * state[12];
  xx[22] = 8.999999999999998e-3 + state[12];
  xx[23] = 0.046;
  xx[24] = 4.0e-3;
  xx[25] = - (9.000000000000001e-3 + state[14]);
  xx[26] = 0.17;
  xx[27] = xx[5] * xx[7];
  xx[28] = xx[6] * xx[8];
  xx[29] = xx[5] * xx[8];
  xx[30] = xx[7] * xx[6];
  xx[31] = 2.0;
  xx[32] = xx[4] * xx[6];
  xx[33] = xx[4] - xx[31] * xx[32] * xx[6];
  xx[34] = xx[31] * xx[5] * xx[32];
  xx[32] = xx[10] * xx[27] + xx[29] * xx[11];
  xx[35] = xx[30] * xx[11] - xx[10] * xx[28];
  xx[36] = xx[10] * xx[29] - xx[27] * xx[11];
  xx[37] = xx[10] * xx[30] + xx[28] * xx[11];
  xx[38] = xx[9] * xx[29];
  xx[39] = xx[9] * xx[28];
  xx[40] = xx[31] * (xx[38] * xx[27] - xx[39] * xx[30]) + xx[33];
  xx[41] = (xx[39] * xx[27] + xx[38] * xx[30]) * xx[31] + xx[34];
  xx[42] = xx[9] - (xx[39] * xx[28] + xx[38] * xx[29]) * xx[31] + xx[26];
  xx[38] = xx[32] * xx[13] + xx[14] * xx[35];
  xx[39] = xx[32] * xx[14] - xx[13] * xx[35];
  xx[43] = xx[37] * xx[14] - xx[13] * xx[36];
  xx[44] = xx[37] * xx[13] + xx[14] * xx[36];
  xx[45] = xx[9] * xx[36];
  xx[46] = xx[37] * xx[9];
  xx[47] = xx[9] - (xx[45] * xx[36] + xx[37] * xx[46]) * xx[31] + xx[40];
  xx[48] = (xx[32] * xx[46] + xx[45] * xx[35]) * xx[31] + xx[41];
  xx[49] = xx[31] * (xx[46] * xx[35] - xx[32] * xx[45]) + xx[42];
  xx[45] = xx[38] * xx[15] - xx[16] * xx[43];
  xx[46] = xx[44] * xx[16] - xx[15] * xx[39];
  xx[50] = xx[38] * xx[16] + xx[15] * xx[43];
  xx[51] = xx[44] * xx[15] + xx[16] * xx[39];
  xx[52] = xx[51] * xx[17] - xx[3] * xx[45];
  xx[53] = xx[50] * xx[17] - xx[3] * xx[46];
  xx[54] = xx[50] * xx[3] + xx[17] * xx[46];
  xx[55] = xx[17] * xx[45] + xx[51] * xx[3];
  xx[56] = xx[12] * xx[53];
  xx[57] = xx[54] * xx[12];
  xx[58] = xx[8] * state[1];
  xx[59] = xx[31] * xx[7] * xx[58];
  xx[60] = state[1] - xx[31] * xx[58] * xx[8];
  xx[58] = xx[4] * state[1];
  xx[61] = xx[11] * xx[60];
  xx[62] = xx[59] * xx[11];
  xx[63] = (xx[10] * xx[61] + xx[62] * xx[11]) * xx[31] - xx[59];
  xx[64] = state[3] - state[5];
  xx[65] = xx[60] + xx[31] * (xx[10] * xx[62] - xx[61] * xx[11]);
  xx[61] = xx[9] * state[3];
  xx[62] = xx[61] * xx[11];
  xx[66] = xx[61] - xx[31] * xx[62] * xx[11];
  xx[61] = xx[9] * xx[59] + xx[58];
  xx[67] = xx[31] * xx[10] * xx[62];
  xx[62] = xx[63] - state[7];
  xx[68] = xx[65] * xx[14];
  xx[69] = xx[14] * xx[64];
  xx[70] = xx[64] - (xx[13] * xx[68] + xx[69] * xx[14]) * xx[31];
  xx[71] = xx[65] + xx[31] * (xx[13] * xx[69] - xx[68] * xx[14]);
  xx[68] = xx[65] * xx[9] + xx[61];
  xx[69] = xx[9] * xx[64] + xx[67];
  xx[72] = xx[69] * xx[14];
  xx[73] = xx[68] * xx[14];
  xx[74] = xx[68] + xx[31] * (xx[13] * xx[72] - xx[73] * xx[14]);
  xx[68] = (xx[13] * xx[73] + xx[72] * xx[14]) * xx[31] - xx[69];
  xx[69] = xx[71] * xx[16];
  xx[72] = xx[16] * xx[62];
  xx[73] = xx[62] + xx[31] * (xx[15] * xx[69] - xx[72] * xx[16]);
  xx[75] = xx[70] - state[9];
  xx[76] = xx[71] - (xx[15] * xx[72] + xx[69] * xx[16]) * xx[31];
  xx[69] = xx[16] * xx[68];
  xx[72] = xx[16] * xx[66];
  xx[77] = xx[66] + xx[31] * (xx[15] * xx[69] - xx[72] * xx[16]);
  xx[78] = xx[68] - (xx[15] * xx[72] + xx[69] * xx[16]) * xx[31];
  xx[69] = xx[17] * xx[75];
  xx[72] = xx[73] * xx[17];
  xx[79] = xx[73] + xx[31] * (xx[3] * xx[69] - xx[72] * xx[17]);
  xx[80] = xx[75] - (xx[3] * xx[72] + xx[69] * xx[17]) * xx[31];
  xx[69] = xx[76] + state[11];
  xx[72] = xx[74] * xx[17];
  xx[81] = xx[77] * xx[17];
  xx[82] = xx[77] + xx[31] * (xx[3] * xx[72] - xx[81] * xx[17]);
  xx[83] = xx[74] - (xx[3] * xx[81] + xx[72] * xx[17]) * xx[31];
  xx[72] = xx[80] - xx[31] * xx[80];
  xx[81] = xx[69] - xx[69] * xx[31];
  xx[84] = xx[82] - xx[12] * xx[80];
  xx[85] = xx[83] + xx[79] * xx[12];
  xx[86] = xx[85] - xx[31] * xx[85];
  xx[85] = xx[78] - xx[31] * xx[78];
  xx[87] = xx[18] * xx[72] + xx[84];
  xx[88] = xx[86] - xx[79] * xx[18];
  xx[89] = xx[20] * xx[72];
  xx[90] = xx[79] * xx[20];
  xx[91] = xx[79];
  xx[92] = xx[72];
  xx[93] = xx[81];
  pm_math_cross3(xx + 91, xx + 21, xx + 94);
  xx[97] = xx[94] + xx[87];
  xx[98] = xx[95] + xx[88];
  xx[99] = xx[98] * xx[20];
  xx[100] = xx[97] * xx[20];
  xx[101] = xx[24];
  xx[102] = xx[25];
  xx[103] = xx[23];
  pm_math_cross3(xx + 91, xx + 101, xx + 104);
  motionData[0] = xx[0];
  motionData[1] = xx[1];
  motionData[2] = xx[1];
  motionData[3] = xx[1];
  motionData[4] = xx[1];
  motionData[5] = xx[1];
  motionData[6] = 0.067;
  motionData[7] = xx[0];
  motionData[8] = xx[1];
  motionData[9] = xx[1];
  motionData[10] = xx[1];
  motionData[11] = xx[1];
  motionData[12] = xx[1];
  motionData[13] = xx[2];
  motionData[14] = - xx[5];
  motionData[15] = xx[1];
  motionData[16] = xx[1];
  motionData[17] = - xx[6];
  motionData[18] = xx[1];
  motionData[19] = xx[1];
  motionData[20] = xx[2];
  motionData[21] = - xx[7];
  motionData[22] = xx[1];
  motionData[23] = - xx[8];
  motionData[24] = xx[1];
  motionData[25] = xx[4];
  motionData[26] = xx[1];
  motionData[27] = xx[1];
  motionData[28] = - xx[10];
  motionData[29] = xx[1];
  motionData[30] = xx[11];
  motionData[31] = xx[1];
  motionData[32] = xx[1];
  motionData[33] = xx[1];
  motionData[34] = xx[9];
  motionData[35] = - xx[13];
  motionData[36] = xx[14];
  motionData[37] = xx[1];
  motionData[38] = xx[1];
  motionData[39] = xx[9];
  motionData[40] = xx[1];
  motionData[41] = xx[1];
  motionData[42] = - xx[15];
  motionData[43] = xx[1];
  motionData[44] = xx[16];
  motionData[45] = xx[1];
  motionData[46] = xx[1];
  motionData[47] = xx[1];
  motionData[48] = xx[1];
  motionData[49] = - xx[3];
  motionData[50] = xx[1];
  motionData[51] = xx[1];
  motionData[52] = - xx[17];
  motionData[53] = xx[1];
  motionData[54] = xx[1];
  motionData[55] = xx[1];
  motionData[56] = xx[1];
  motionData[57] = xx[0];
  motionData[58] = xx[1];
  motionData[59] = xx[1];
  motionData[60] = xx[1];
  motionData[61] = xx[1];
  motionData[62] = - xx[12];
  motionData[63] = xx[0];
  motionData[64] = xx[1];
  motionData[65] = xx[1];
  motionData[66] = xx[1];
  motionData[67] = xx[1];
  motionData[68] = xx[1];
  motionData[69] = xx[18];
  motionData[70] = xx[19];
  motionData[71] = xx[1];
  motionData[72] = xx[1];
  motionData[73] = - xx[20];
  motionData[74] = xx[21];
  motionData[75] = xx[22];
  motionData[76] = xx[23];
  motionData[77] = xx[0];
  motionData[78] = xx[1];
  motionData[79] = xx[1];
  motionData[80] = xx[1];
  motionData[81] = xx[24];
  motionData[82] = xx[25];
  motionData[83] = xx[23];
  motionData[84] = xx[5];
  motionData[85] = xx[1];
  motionData[86] = xx[1];
  motionData[87] = xx[6];
  motionData[88] = xx[1];
  motionData[89] = xx[1];
  motionData[90] = xx[26];
  motionData[91] = - xx[27];
  motionData[92] = xx[28];
  motionData[93] = - xx[29];
  motionData[94] = - xx[30];
  motionData[95] = xx[33];
  motionData[96] = xx[34];
  motionData[97] = xx[26];
  motionData[98] = xx[32];
  motionData[99] = xx[35];
  motionData[100] = xx[36];
  motionData[101] = xx[37];
  motionData[102] = xx[40];
  motionData[103] = xx[41];
  motionData[104] = xx[42];
  motionData[105] = - xx[38];
  motionData[106] = xx[39];
  motionData[107] = xx[43];
  motionData[108] = - xx[44];
  motionData[109] = xx[47];
  motionData[110] = xx[48];
  motionData[111] = xx[49];
  motionData[112] = xx[45];
  motionData[113] = xx[46];
  motionData[114] = - xx[50];
  motionData[115] = xx[51];
  motionData[116] = xx[47];
  motionData[117] = xx[48];
  motionData[118] = xx[49];
  motionData[119] = xx[52];
  motionData[120] = xx[53];
  motionData[121] = xx[54];
  motionData[122] = - xx[55];
  motionData[123] = xx[47];
  motionData[124] = xx[48];
  motionData[125] = xx[49];
  motionData[126] = xx[53];
  motionData[127] = - xx[52];
  motionData[128] = xx[55];
  motionData[129] = xx[54];
  motionData[130] = xx[31] * (xx[55] * xx[56] - xx[57] * xx[52]) + xx[47];
  motionData[131] = xx[48] + (xx[56] * xx[52] + xx[55] * xx[57]) * xx[31];
  motionData[132] = xx[49] + (xx[56] * xx[53] + xx[54] * xx[57]) * xx[31] - xx
    [12];
  motionData[133] = xx[1];
  motionData[134] = xx[1];
  motionData[135] = xx[1];
  motionData[136] = xx[1];
  motionData[137] = xx[1];
  motionData[138] = xx[1];
  motionData[139] = xx[1];
  motionData[140] = xx[1];
  motionData[141] = xx[1];
  motionData[142] = xx[1];
  motionData[143] = xx[1];
  motionData[144] = xx[1];
  motionData[145] = xx[1];
  motionData[146] = xx[1];
  motionData[147] = state[1];
  motionData[148] = xx[1];
  motionData[149] = xx[1];
  motionData[150] = xx[1];
  motionData[151] = - xx[59];
  motionData[152] = state[3];
  motionData[153] = xx[60];
  motionData[154] = xx[1];
  motionData[155] = xx[58];
  motionData[156] = xx[1];
  motionData[157] = xx[63];
  motionData[158] = xx[64];
  motionData[159] = xx[65];
  motionData[160] = xx[66];
  motionData[161] = xx[61];
  motionData[162] = - xx[67];
  motionData[163] = xx[62];
  motionData[164] = xx[70];
  motionData[165] = xx[71];
  motionData[166] = xx[66];
  motionData[167] = xx[74];
  motionData[168] = xx[68];
  motionData[169] = xx[73];
  motionData[170] = xx[75];
  motionData[171] = xx[76];
  motionData[172] = xx[77];
  motionData[173] = xx[74];
  motionData[174] = xx[78];
  motionData[175] = xx[79];
  motionData[176] = xx[80];
  motionData[177] = xx[69];
  motionData[178] = xx[82];
  motionData[179] = xx[83];
  motionData[180] = xx[78];
  motionData[181] = xx[79];
  motionData[182] = xx[72];
  motionData[183] = xx[81];
  motionData[184] = xx[84];
  motionData[185] = xx[86];
  motionData[186] = xx[85];
  motionData[187] = xx[79];
  motionData[188] = xx[72];
  motionData[189] = xx[81];
  motionData[190] = xx[87];
  motionData[191] = xx[88];
  motionData[192] = xx[85];
  motionData[193] = xx[79] - (xx[19] * xx[89] + xx[20] * xx[90]) * xx[31];
  motionData[194] = xx[72] + xx[31] * (xx[19] * xx[90] - xx[20] * xx[89]);
  motionData[195] = xx[81];
  motionData[196] = xx[97] - (xx[19] * xx[99] + xx[20] * xx[100]) * xx[31];
  motionData[197] = xx[98] + xx[31] * (xx[19] * xx[100] - xx[20] * xx[99]) -
    state[13];
  motionData[198] = xx[96] + xx[85];
  motionData[199] = xx[79];
  motionData[200] = xx[72];
  motionData[201] = xx[81];
  motionData[202] = xx[104] + xx[87];
  motionData[203] = xx[105] + xx[88] - state[15];
  motionData[204] = xx[106] + xx[85];
}

size_t MotoMINI_Model_a0f7e8cf_1_computeAssemblyError(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const double *state,
  const double *motionData, double *error)
{
  (void) mech;
  (void)rtdv;
  (void) state;
  (void) motionData;
  (void) error;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t MotoMINI_Model_a0f7e8cf_1_computeAssemblyJacobian(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, boolean_T
  forVelocitySatisfaction, const double *state, const double *motionData, double
  *J)
{
  (void) mech;
  (void) rtdv;
  (void) state;
  (void) forVelocitySatisfaction;
  (void) motionData;
  (void) J;
  switch (constraintIdx)
  {
  }

  return 0;
}

size_t MotoMINI_Model_a0f7e8cf_1_computeFullAssemblyJacobian(const void *mech,
  const RuntimeDerivedValuesBundle *rtdv, const double *state, const double
  *motionData, double *J)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) state;
  (void) motionData;
  (void) J;
  return 0;
}

int MotoMINI_Model_a0f7e8cf_1_isInKinematicSingularity(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, size_t constraintIdx, const double
  *motionData)
{
  (void) mech;
  (void) rtdv
    ;
  (void) motionData;
  switch (constraintIdx)
  {
  }

  return 0;
}

PmfMessageId MotoMINI_Model_a0f7e8cf_1_convertStateVector(const void *asmMech,
  const RuntimeDerivedValuesBundle *rtdv, const void *simMech, const double
  *asmState, double *simState, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) asmMech;
  (void) rtdvd;
  (void) rtdvi;
  (void) simMech;
  (void) neDiagMgr;
  simState[0] = asmState[0];
  simState[1] = asmState[1];
  simState[2] = asmState[2];
  simState[3] = asmState[3];
  simState[4] = asmState[4];
  simState[5] = asmState[5];
  simState[6] = asmState[6];
  simState[7] = asmState[7];
  simState[8] = asmState[8];
  simState[9] = asmState[9];
  simState[10] = asmState[10];
  simState[11] = asmState[11];
  simState[12] = asmState[12];
  simState[13] = asmState[13];
  simState[14] = asmState[14];
  simState[15] = asmState[15];
  return NULL;
}

void MotoMINI_Model_a0f7e8cf_1_constructStateVector(const void *mech, const
  double *solverState, const double *u, const double *uDot, double
  *discreteState, double *fullState)
{
  (void) mech;
  (void) solverState;
  (void) discreteState;
  fullState[0] = u[2];
  fullState[1] = uDot[2];
  fullState[2] = u[3];
  fullState[3] = uDot[3];
  fullState[4] = u[4];
  fullState[5] = uDot[4];
  fullState[6] = u[5];
  fullState[7] = uDot[5];
  fullState[8] = u[6];
  fullState[9] = uDot[6];
  fullState[10] = u[7];
  fullState[11] = uDot[7];
  fullState[12] = u[0];
  fullState[13] = uDot[0];
  fullState[14] = u[1];
  fullState[15] = uDot[1];
}

void MotoMINI_Model_a0f7e8cf_1_extractSolverStateVector(const void *mech, const
  double *fullState, double *solverState)
{
  (void) mech;
  (void) fullState;
  (void) solverState;
}

int MotoMINI_Model_a0f7e8cf_1_isPositionViolation(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  return 0;
}

int MotoMINI_Model_a0f7e8cf_1_isVelocityViolation(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *state)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) state;
  return 0;
}

PmfMessageId MotoMINI_Model_a0f7e8cf_1_projectStateSim(const void *mech, const
  RuntimeDerivedValuesBundle *rtdv, const int *eqnEnableFlags, const double
  *input, double *state, void *neDiagMgr0)
{
  const double *rtdvd = rtdv->mDoubles.mValues;
  const int *rtdvi = rtdv->mInts.mValues;
  NeuDiagnosticManager *neDiagMgr = (NeuDiagnosticManager *) neDiagMgr0;
  (void) mech;
  (void) rtdvd;
  (void) rtdvi;
  (void) eqnEnableFlags;
  (void) input;
  (void) state;
  (void) neDiagMgr;
  return NULL;
}
