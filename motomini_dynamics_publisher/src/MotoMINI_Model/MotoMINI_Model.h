/*
 * File: MotoMINI_Model.h
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

#ifndef RTW_HEADER_MotoMINI_Model_h_
#define RTW_HEADER_MotoMINI_Model_h_
#include <string.h>
#ifndef MotoMINI_Model_COMMON_INCLUDES_
# define MotoMINI_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "MotoMINI_Model_a0f7e8cf_1_gateway.h"
#endif                                 /* MotoMINI_Model_COMMON_INCLUDES_ */

#include "MotoMINI_Model_types.h"
#include "rtsplntypes.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T OUTPUT_1_0[44];               /* '<S108>/OUTPUT_1_0' */
  real_T dv0[32];
  real_T dv1[32];
  real_T dv2[32];
  NeParameterBundle expl_temp;
  real_T TmpSignalConversionAtDotPro[6];
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_m;
  int_T iv0[9];
  int_T iv1[9];
  int_T iv2[9];
  real_T INPUT_5_1_1[4];               /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S108>/INPUT_1_1_1' */
  real_T uDLookupTable;                /* '<S2>/1-D Lookup Table' */
  real_T INPUT_6_1_1[4];               /* '<S108>/INPUT_6_1_1' */
  real_T uDLookupTable1;               /* '<S2>/1-D Lookup Table1' */
  real_T INPUT_7_1_1[4];               /* '<S108>/INPUT_7_1_1' */
  real_T uDLookupTable2;               /* '<S2>/1-D Lookup Table2' */
  real_T INPUT_8_1_1[4];               /* '<S108>/INPUT_8_1_1' */
  real_T uDLookupTable3;               /* '<S2>/1-D Lookup Table3' */
  real_T INPUT_2_1_1[4];               /* '<S108>/INPUT_2_1_1' */
  real_T uDLookupTable4;               /* '<S2>/1-D Lookup Table4' */
  real_T INPUT_3_1_1[4];               /* '<S108>/INPUT_3_1_1' */
  real_T uDLookupTable5;               /* '<S2>/1-D Lookup Table5' */
  real_T INPUT_4_1_1[4];               /* '<S108>/INPUT_4_1_1' */
  real_T DotProduct;                   /* '<S1>/Dot Product' */
  real_T time;
  real_T d0;
  real_T time_c;
  real_T time_k;
} B_MotoMINI_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_5_1_1_Discrete;         /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_5_1_1_FirstOutput;      /* '<S108>/INPUT_5_1_1' */
  real_T INPUT_1_1_1_Discrete;         /* '<S108>/INPUT_1_1_1' */
  real_T INPUT_1_1_1_FirstOutput;      /* '<S108>/INPUT_1_1_1' */
  real_T INPUT_6_1_1_Discrete;         /* '<S108>/INPUT_6_1_1' */
  real_T INPUT_6_1_1_FirstOutput;      /* '<S108>/INPUT_6_1_1' */
  real_T INPUT_7_1_1_Discrete;         /* '<S108>/INPUT_7_1_1' */
  real_T INPUT_7_1_1_FirstOutput;      /* '<S108>/INPUT_7_1_1' */
  real_T INPUT_8_1_1_Discrete;         /* '<S108>/INPUT_8_1_1' */
  real_T INPUT_8_1_1_FirstOutput;      /* '<S108>/INPUT_8_1_1' */
  real_T INPUT_2_1_1_Discrete;         /* '<S108>/INPUT_2_1_1' */
  real_T INPUT_2_1_1_FirstOutput;      /* '<S108>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_Discrete;         /* '<S108>/INPUT_3_1_1' */
  real_T INPUT_3_1_1_FirstOutput;      /* '<S108>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_Discrete;         /* '<S108>/INPUT_4_1_1' */
  real_T INPUT_4_1_1_FirstOutput;      /* '<S108>/INPUT_4_1_1' */
  real_T m_bpLambda;                   /* '<S2>/1-D Lookup Table' */
  real_T m_yyA;                        /* '<S2>/1-D Lookup Table' */
  real_T m_yyB;                        /* '<S2>/1-D Lookup Table' */
  real_T m_yy2;                        /* '<S2>/1-D Lookup Table' */
  real_T m_up[6];                      /* '<S2>/1-D Lookup Table' */
  real_T m_y2[6];                      /* '<S2>/1-D Lookup Table' */
  real_T prevBp0AndTableData[12];      /* '<S2>/1-D Lookup Table' */
  real_T m_bpLambda_i;                 /* '<S2>/1-D Lookup Table1' */
  real_T m_yyA_f;                      /* '<S2>/1-D Lookup Table1' */
  real_T m_yyB_j;                      /* '<S2>/1-D Lookup Table1' */
  real_T m_yy2_h;                      /* '<S2>/1-D Lookup Table1' */
  real_T m_up_d[6];                    /* '<S2>/1-D Lookup Table1' */
  real_T m_y2_e[6];                    /* '<S2>/1-D Lookup Table1' */
  real_T prevBp0AndTableData_e[12];    /* '<S2>/1-D Lookup Table1' */
  real_T m_bpLambda_p;                 /* '<S2>/1-D Lookup Table2' */
  real_T m_yyA_b;                      /* '<S2>/1-D Lookup Table2' */
  real_T m_yyB_n;                      /* '<S2>/1-D Lookup Table2' */
  real_T m_yy2_k;                      /* '<S2>/1-D Lookup Table2' */
  real_T m_up_dl[6];                   /* '<S2>/1-D Lookup Table2' */
  real_T m_y2_c[6];                    /* '<S2>/1-D Lookup Table2' */
  real_T prevBp0AndTableData_a[12];    /* '<S2>/1-D Lookup Table2' */
  real_T m_bpLambda_py;                /* '<S2>/1-D Lookup Table3' */
  real_T m_yyA_i;                      /* '<S2>/1-D Lookup Table3' */
  real_T m_yyB_k;                      /* '<S2>/1-D Lookup Table3' */
  real_T m_yy2_hm;                     /* '<S2>/1-D Lookup Table3' */
  real_T m_up_h[6];                    /* '<S2>/1-D Lookup Table3' */
  real_T m_y2_c0[6];                   /* '<S2>/1-D Lookup Table3' */
  real_T prevBp0AndTableData_d[12];    /* '<S2>/1-D Lookup Table3' */
  real_T m_bpLambda_f;                 /* '<S2>/1-D Lookup Table4' */
  real_T m_yyA_d;                      /* '<S2>/1-D Lookup Table4' */
  real_T m_yyB_h;                      /* '<S2>/1-D Lookup Table4' */
  real_T m_yy2_c;                      /* '<S2>/1-D Lookup Table4' */
  real_T m_up_l[6];                    /* '<S2>/1-D Lookup Table4' */
  real_T m_y2_cc[6];                   /* '<S2>/1-D Lookup Table4' */
  real_T prevBp0AndTableData_m[12];    /* '<S2>/1-D Lookup Table4' */
  real_T m_bpLambda_a;                 /* '<S2>/1-D Lookup Table5' */
  real_T m_yyA_g;                      /* '<S2>/1-D Lookup Table5' */
  real_T m_yyB_p;                      /* '<S2>/1-D Lookup Table5' */
  real_T m_yy2_hd;                     /* '<S2>/1-D Lookup Table5' */
  real_T m_up_n[6];                    /* '<S2>/1-D Lookup Table5' */
  real_T m_y2_l[6];                    /* '<S2>/1-D Lookup Table5' */
  real_T prevBp0AndTableData_c[12];    /* '<S2>/1-D Lookup Table5' */
  real_T OUTPUT_1_0_Discrete;          /* '<S108>/OUTPUT_1_0' */
  real_T STATE_1_Discrete;             /* '<S108>/STATE_1' */
  void* m_bpDataSet;                   /* '<S2>/1-D Lookup Table' */
  void* TWork[6];                      /* '<S2>/1-D Lookup Table' */
  void* SWork[9];                      /* '<S2>/1-D Lookup Table' */
  void* m_bpDataSet_h;                 /* '<S2>/1-D Lookup Table1' */
  void* TWork_g[6];                    /* '<S2>/1-D Lookup Table1' */
  void* SWork_i[9];                    /* '<S2>/1-D Lookup Table1' */
  void* m_bpDataSet_i;                 /* '<S2>/1-D Lookup Table2' */
  void* TWork_c[6];                    /* '<S2>/1-D Lookup Table2' */
  void* SWork_f[9];                    /* '<S2>/1-D Lookup Table2' */
  void* m_bpDataSet_d;                 /* '<S2>/1-D Lookup Table3' */
  void* TWork_h[6];                    /* '<S2>/1-D Lookup Table3' */
  void* SWork_iz[9];                   /* '<S2>/1-D Lookup Table3' */
  void* m_bpDataSet_d0;                /* '<S2>/1-D Lookup Table4' */
  void* TWork_b[6];                    /* '<S2>/1-D Lookup Table4' */
  void* SWork_n[9];                    /* '<S2>/1-D Lookup Table4' */
  void* m_bpDataSet_a;                 /* '<S2>/1-D Lookup Table5' */
  void* TWork_bl[6];                   /* '<S2>/1-D Lookup Table5' */
  void* SWork_c[9];                    /* '<S2>/1-D Lookup Table5' */
  void* OUTPUT_1_0_Simulator;          /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S108>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S108>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S108>/STATE_1' */
  void* STATE_1_SimData;               /* '<S108>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S108>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S108>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S108>/STATE_1' */
  uint32_T m_bpIndex;                  /* '<S2>/1-D Lookup Table' */
  uint32_T m_bpIndex_k;                /* '<S2>/1-D Lookup Table1' */
  uint32_T m_bpIndex_j;                /* '<S2>/1-D Lookup Table2' */
  uint32_T m_bpIndex_o;                /* '<S2>/1-D Lookup Table3' */
  uint32_T m_bpIndex_k2;               /* '<S2>/1-D Lookup Table4' */
  uint32_T m_bpIndex_jr;               /* '<S2>/1-D Lookup Table5' */
  int_T OUTPUT_1_0_Modes;              /* '<S108>/OUTPUT_1_0' */
  int_T STATE_1_Modes;                 /* '<S108>/STATE_1' */
  uint8_T reCalcSecDerivFirstDimCoeffs;/* '<S2>/1-D Lookup Table' */
  uint8_T reCalcSecDerivFirstDimCoeffs_g;/* '<S2>/1-D Lookup Table1' */
  uint8_T reCalcSecDerivFirstDimCoeffs_j;/* '<S2>/1-D Lookup Table2' */
  uint8_T reCalcSecDerivFirstDimCoeffs_m;/* '<S2>/1-D Lookup Table3' */
  uint8_T reCalcSecDerivFirstDimCoeffs_p;/* '<S2>/1-D Lookup Table4' */
  uint8_T reCalcSecDerivFirstDimCoeffs_pm;/* '<S2>/1-D Lookup Table5' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S108>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S108>/STATE_1' */
} DW_MotoMINI_Model_T;

/* Continuous states (default storage) */
typedef struct {
  real_T MotoMINI_ModelYaskawa_MotominiS[2];/* '<S108>/INPUT_5_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_c[2];/* '<S108>/INPUT_1_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_j[2];/* '<S108>/INPUT_6_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_n[2];/* '<S108>/INPUT_7_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_e[2];/* '<S108>/INPUT_8_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_h[2];/* '<S108>/INPUT_2_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomi_eq[2];/* '<S108>/INPUT_3_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_g[2];/* '<S108>/INPUT_4_1_1' */
  real_T Integrator_CSTATE;            /* '<S1>/Integrator' */
} X_MotoMINI_Model_T;

/* State derivatives (default storage) */
typedef struct {
  real_T MotoMINI_ModelYaskawa_MotominiS[2];/* '<S108>/INPUT_5_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_c[2];/* '<S108>/INPUT_1_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_j[2];/* '<S108>/INPUT_6_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_n[2];/* '<S108>/INPUT_7_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_e[2];/* '<S108>/INPUT_8_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_h[2];/* '<S108>/INPUT_2_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomi_eq[2];/* '<S108>/INPUT_3_1_1' */
  real_T MotoMINI_ModelYaskawa_Motomin_g[2];/* '<S108>/INPUT_4_1_1' */
  real_T Integrator_CSTATE;            /* '<S1>/Integrator' */
} XDot_MotoMINI_Model_T;

/* State disabled  */
typedef struct {
  boolean_T MotoMINI_ModelYaskawa_MotominiS[2];/* '<S108>/INPUT_5_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_c[2];/* '<S108>/INPUT_1_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_j[2];/* '<S108>/INPUT_6_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_n[2];/* '<S108>/INPUT_7_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_e[2];/* '<S108>/INPUT_8_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_h[2];/* '<S108>/INPUT_2_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomi_eq[2];/* '<S108>/INPUT_3_1_1' */
  boolean_T MotoMINI_ModelYaskawa_Motomin_g[2];/* '<S108>/INPUT_4_1_1' */
  boolean_T Integrator_CSTATE;         /* '<S1>/Integrator' */
} XDis_MotoMINI_Model_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/1-D Lookup Table'
   *   '<S2>/1-D Lookup Table1'
   *   '<S2>/1-D Lookup Table2'
   *   '<S2>/1-D Lookup Table3'
   *   '<S2>/1-D Lookup Table4'
   *   '<S2>/1-D Lookup Table5'
   */
  uint32_T pooled1;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/1-D Lookup Table'
   *   '<S2>/1-D Lookup Table1'
   *   '<S2>/1-D Lookup Table2'
   *   '<S2>/1-D Lookup Table3'
   *   '<S2>/1-D Lookup Table4'
   *   '<S2>/1-D Lookup Table5'
   */
  uint32_T pooled2;

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<S2>/1-D Lookup Table'
   *   '<S2>/1-D Lookup Table1'
   *   '<S2>/1-D Lookup Table2'
   *   '<S2>/1-D Lookup Table3'
   *   '<S2>/1-D Lookup Table4'
   *   '<S2>/1-D Lookup Table5'
   */
  uint32_T pooled3[2];
} ConstP_MotoMINI_Model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T torqueCost;                   /* '<Root>/torqueCost' */
} ExtY_MotoMINI_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_MotoMINI_Model_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_MotoMINI_Model_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[17];
  real_T odeF[3][17];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_MotoMINI_Model_T MotoMINI_Model_B;

/* Continuous states (default storage) */
extern X_MotoMINI_Model_T MotoMINI_Model_X;

/* Block states (default storage) */
extern DW_MotoMINI_Model_T MotoMINI_Model_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_MotoMINI_Model_T MotoMINI_Model_Y;

/* Constant parameters (default storage) */
extern const ConstP_MotoMINI_Model_T MotoMINI_Model_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T Qt1[6];                  /* Variable: Qt1
                                        * Referenced by: '<S2>/1-D Lookup Table'
                                        */
extern real_T Qt2[6];                  /* Variable: Qt2
                                        * Referenced by: '<S2>/1-D Lookup Table1'
                                        */
extern real_T Qt3[6];                  /* Variable: Qt3
                                        * Referenced by: '<S2>/1-D Lookup Table2'
                                        */
extern real_T Qt4[6];                  /* Variable: Qt4
                                        * Referenced by: '<S2>/1-D Lookup Table3'
                                        */
extern real_T Qt5[6];                  /* Variable: Qt5
                                        * Referenced by: '<S2>/1-D Lookup Table4'
                                        */
extern real_T Qt6[6];                  /* Variable: Qt6
                                        * Referenced by: '<S2>/1-D Lookup Table5'
                                        */
extern real_T t[6];                    /* Variable: t
                                        * Referenced by:
                                        *   '<S2>/1-D Lookup Table'
                                        *   '<S2>/1-D Lookup Table1'
                                        *   '<S2>/1-D Lookup Table2'
                                        *   '<S2>/1-D Lookup Table3'
                                        *   '<S2>/1-D Lookup Table4'
                                        *   '<S2>/1-D Lookup Table5'
                                        */

/* Model entry point functions */
extern void MotoMINI_Model_initialize(void);
extern void MotoMINI_Model_step(void);
extern void MotoMINI_Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MotoMINI_Model_T *const MotoMINI_Model_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<S83>/RESHAPE' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'MotoMINI_Model'
 * '<S1>'   : 'MotoMINI_Model/Calculate Torque Cost'
 * '<S2>'   : 'MotoMINI_Model/Spline Generator'
 * '<S3>'   : 'MotoMINI_Model/Yaskawa Motomini'
 * '<S4>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter'
 * '<S5>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter1'
 * '<S6>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter10'
 * '<S7>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter11'
 * '<S8>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter12'
 * '<S9>'   : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter13'
 * '<S10>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter14'
 * '<S11>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter15'
 * '<S12>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter16'
 * '<S13>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter17'
 * '<S14>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter18'
 * '<S15>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter19'
 * '<S16>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter2'
 * '<S17>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter20'
 * '<S18>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter21'
 * '<S19>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter22'
 * '<S20>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter23'
 * '<S21>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter24'
 * '<S22>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter25'
 * '<S23>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter26'
 * '<S24>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter27'
 * '<S25>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter28'
 * '<S26>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter29'
 * '<S27>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter3'
 * '<S28>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter30'
 * '<S29>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter31'
 * '<S30>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter32'
 * '<S31>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter33'
 * '<S32>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter34'
 * '<S33>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter35'
 * '<S34>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter4'
 * '<S35>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter5'
 * '<S36>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter6'
 * '<S37>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter7'
 * '<S38>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter8'
 * '<S39>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter9'
 * '<S40>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter1'
 * '<S41>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter10'
 * '<S42>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter11'
 * '<S43>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter12'
 * '<S44>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter2'
 * '<S45>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter7'
 * '<S46>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter8'
 * '<S47>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter9'
 * '<S48>'  : 'MotoMINI_Model/Yaskawa Motomini/World'
 * '<S49>'  : 'MotoMINI_Model/Yaskawa Motomini/base'
 * '<S50>'  : 'MotoMINI_Model/Yaskawa Motomini/base_link1'
 * '<S51>'  : 'MotoMINI_Model/Yaskawa Motomini/gripper_EE_joint'
 * '<S52>'  : 'MotoMINI_Model/Yaskawa Motomini/gripper_finger_link_l'
 * '<S53>'  : 'MotoMINI_Model/Yaskawa Motomini/gripper_finger_link_r'
 * '<S54>'  : 'MotoMINI_Model/Yaskawa Motomini/gripper_palm_link'
 * '<S55>'  : 'MotoMINI_Model/Yaskawa Motomini/link_1_s'
 * '<S56>'  : 'MotoMINI_Model/Yaskawa Motomini/link_2_l'
 * '<S57>'  : 'MotoMINI_Model/Yaskawa Motomini/link_3_u'
 * '<S58>'  : 'MotoMINI_Model/Yaskawa Motomini/link_4_r'
 * '<S59>'  : 'MotoMINI_Model/Yaskawa Motomini/link_5_b'
 * '<S60>'  : 'MotoMINI_Model/Yaskawa Motomini/link_6_t'
 * '<S61>'  : 'MotoMINI_Model/Yaskawa Motomini/tool0'
 * '<S62>'  : 'MotoMINI_Model/Yaskawa Motomini/world1'
 * '<S63>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter/EVAL_KEY'
 * '<S64>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter1/EVAL_KEY'
 * '<S65>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter10/EVAL_KEY'
 * '<S66>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter11/EVAL_KEY'
 * '<S67>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter12/EVAL_KEY'
 * '<S68>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter13/EVAL_KEY'
 * '<S69>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter14/EVAL_KEY'
 * '<S70>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter15/EVAL_KEY'
 * '<S71>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter16/EVAL_KEY'
 * '<S72>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter17/EVAL_KEY'
 * '<S73>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter18/EVAL_KEY'
 * '<S74>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter19/EVAL_KEY'
 * '<S75>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter2/EVAL_KEY'
 * '<S76>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter20/EVAL_KEY'
 * '<S77>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter21/EVAL_KEY'
 * '<S78>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter22/EVAL_KEY'
 * '<S79>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter23/EVAL_KEY'
 * '<S80>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter24/EVAL_KEY'
 * '<S81>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter25/EVAL_KEY'
 * '<S82>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter26/EVAL_KEY'
 * '<S83>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter27/EVAL_KEY'
 * '<S84>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter28/EVAL_KEY'
 * '<S85>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter29/EVAL_KEY'
 * '<S86>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter3/EVAL_KEY'
 * '<S87>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter30/EVAL_KEY'
 * '<S88>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter31/EVAL_KEY'
 * '<S89>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter32/EVAL_KEY'
 * '<S90>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter33/EVAL_KEY'
 * '<S91>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter34/EVAL_KEY'
 * '<S92>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter35/EVAL_KEY'
 * '<S93>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter4/EVAL_KEY'
 * '<S94>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter5/EVAL_KEY'
 * '<S95>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter6/EVAL_KEY'
 * '<S96>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter7/EVAL_KEY'
 * '<S97>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter8/EVAL_KEY'
 * '<S98>'  : 'MotoMINI_Model/Yaskawa Motomini/PS-Simulink Converter9/EVAL_KEY'
 * '<S99>'  : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter1/EVAL_KEY'
 * '<S100>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter10/EVAL_KEY'
 * '<S101>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter11/EVAL_KEY'
 * '<S102>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter12/EVAL_KEY'
 * '<S103>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter2/EVAL_KEY'
 * '<S104>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter7/EVAL_KEY'
 * '<S105>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter8/EVAL_KEY'
 * '<S106>' : 'MotoMINI_Model/Yaskawa Motomini/Simulink-PS Converter9/EVAL_KEY'
 * '<S107>' : 'MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration'
 * '<S108>' : 'MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_MotoMINI_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
