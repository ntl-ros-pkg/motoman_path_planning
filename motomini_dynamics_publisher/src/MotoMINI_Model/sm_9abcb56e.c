#include "pm_std.h"
#include "math.h"
#include "string.h"
#include "stddef.h"
#include "pm_std.h"
boolean_T sm_core_math_bestFitPlane3D(size_t sm_86H_90EJUesJD2dkdQe_I1,const
double*sm_G1oJK9oZfgNLq5TaAydCL1,double*sm_2FrwNv3T6KyA5tr3JAlci1,double*
sm__C4osuKafjRC35il8VstV_);struct sm_gUrANCi8jgSWCTgutzxW_1{double x;double
sm_ET9_5EAP116KvP5KVqsrD2;double sm_SheEjf_3lOXDmgzkmhMGG2;};typedef struct
sm_gUrANCi8jgSWCTgutzxW_1 sm_jOpV5RZtLJap8M8Anjn_I0;static double
sm_oa7jOQ9GsdCyoEVwnJU_l0(double a,double b,double sm_ojAHyVHgbHhAjmJFnG_l31){
const double sm_AnS7Y4euB5dEkvfZmgB7x_=a+b;const double
sm_t4xP2dw1g2qcI2WS3WOWv2=a-b;const double sm_PIqWtbzrbQqv_KS_31HnE2=sqrt(
sm_t4xP2dw1g2qcI2WS3WOWv2*sm_t4xP2dw1g2qcI2WS3WOWv2+4*
sm_ojAHyVHgbHhAjmJFnG_l31*sm_ojAHyVHgbHhAjmJFnG_l31);const double
sm_HSkfNEJycNki8tfRF2QgV0=fabs(sm_AnS7Y4euB5dEkvfZmgB7x_+
sm_PIqWtbzrbQqv_KS_31HnE2);const double sm_R4dhgN_pgZiUEvyc__Bfq_=fabs(
sm_AnS7Y4euB5dEkvfZmgB7x_-sm_PIqWtbzrbQqv_KS_31HnE2);const double
sm_Dj3SKUr0SMPK_kkcVZCjc2=sm_HSkfNEJycNki8tfRF2QgV0<sm_R4dhgN_pgZiUEvyc__Bfq_?
sm_HSkfNEJycNki8tfRF2QgV0:sm_R4dhgN_pgZiUEvyc__Bfq_;const double
sm_wRgpc67xPGXg_q6QsZOaA0=sm_HSkfNEJycNki8tfRF2QgV0>sm_R4dhgN_pgZiUEvyc__Bfq_?
sm_HSkfNEJycNki8tfRF2QgV0:sm_R4dhgN_pgZiUEvyc__Bfq_;return
sm_Dj3SKUr0SMPK_kkcVZCjc2==0.0?pmf_get_real_max():(sm_wRgpc67xPGXg_q6QsZOaA0/
sm_Dj3SKUr0SMPK_kkcVZCjc2);}boolean_T sm_core_math_bestFitPlane3D(size_t
sm_86H_90EJUesJD2dkdQe_I1,const double*sm__x61vmmKaTsMDArYqpVdh2,double*
sm_f01KY5nAaUudJVpJzW5WY2,double*sm__C4osuKafjRC35il8VstV_){const
sm_jOpV5RZtLJap8M8Anjn_I0*sm_G1oJK9oZfgNLq5TaAydCL1=(const
sm_jOpV5RZtLJap8M8Anjn_I0*)sm__x61vmmKaTsMDArYqpVdh2;sm_jOpV5RZtLJap8M8Anjn_I0
*sm_2FrwNv3T6KyA5tr3JAlci1=(sm_jOpV5RZtLJap8M8Anjn_I0*)
sm_f01KY5nAaUudJVpJzW5WY2;size_t sm_SmSSPSQfR1qEYWsVj5ELF0;int
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_ljExW6hRw43Vg4SLQUAvT1,sm_NnCmJnsXc51VOXM7s0_HH0;
int sm_cZGCTtml6n_loFBtlmtcF2;double sm_KmlKeslps074Jt17jAHXH0[3][3]={{0,0,0},
{0,0,0},{0,0,0}};if(sm_86H_90EJUesJD2dkdQe_I1<3)return false;
sm_2FrwNv3T6KyA5tr3JAlci1->x=sm_G1oJK9oZfgNLq5TaAydCL1->x;
sm_2FrwNv3T6KyA5tr3JAlci1->sm_ET9_5EAP116KvP5KVqsrD2=sm_G1oJK9oZfgNLq5TaAydCL1
->sm_ET9_5EAP116KvP5KVqsrD2;sm_2FrwNv3T6KyA5tr3JAlci1->
sm_SheEjf_3lOXDmgzkmhMGG2=sm_G1oJK9oZfgNLq5TaAydCL1->sm_SheEjf_3lOXDmgzkmhMGG2
;for(sm_SmSSPSQfR1qEYWsVj5ELF0=1;sm_SmSSPSQfR1qEYWsVj5ELF0<
sm_86H_90EJUesJD2dkdQe_I1;++sm_SmSSPSQfR1qEYWsVj5ELF0){
sm_2FrwNv3T6KyA5tr3JAlci1->x+=sm_G1oJK9oZfgNLq5TaAydCL1[
sm_SmSSPSQfR1qEYWsVj5ELF0].x;sm_2FrwNv3T6KyA5tr3JAlci1->
sm_ET9_5EAP116KvP5KVqsrD2+=sm_G1oJK9oZfgNLq5TaAydCL1[sm_SmSSPSQfR1qEYWsVj5ELF0
].sm_ET9_5EAP116KvP5KVqsrD2;sm_2FrwNv3T6KyA5tr3JAlci1->
sm_SheEjf_3lOXDmgzkmhMGG2+=sm_G1oJK9oZfgNLq5TaAydCL1[sm_SmSSPSQfR1qEYWsVj5ELF0
].sm_SheEjf_3lOXDmgzkmhMGG2;}sm_2FrwNv3T6KyA5tr3JAlci1->x/=(double)(
sm_86H_90EJUesJD2dkdQe_I1);sm_2FrwNv3T6KyA5tr3JAlci1->
sm_ET9_5EAP116KvP5KVqsrD2/=(double)(sm_86H_90EJUesJD2dkdQe_I1);
sm_2FrwNv3T6KyA5tr3JAlci1->sm_SheEjf_3lOXDmgzkmhMGG2/=(double)(
sm_86H_90EJUesJD2dkdQe_I1);for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_86H_90EJUesJD2dkdQe_I1;++
sm_SmSSPSQfR1qEYWsVj5ELF0){sm_jOpV5RZtLJap8M8Anjn_I0 sm_42IchtFzt_HeWbSIRXuJj2
;sm_42IchtFzt_HeWbSIRXuJj2 .x=sm_G1oJK9oZfgNLq5TaAydCL1[
sm_SmSSPSQfR1qEYWsVj5ELF0].x-sm_2FrwNv3T6KyA5tr3JAlci1->x;
sm_42IchtFzt_HeWbSIRXuJj2 .sm_ET9_5EAP116KvP5KVqsrD2=sm_G1oJK9oZfgNLq5TaAydCL1
[sm_SmSSPSQfR1qEYWsVj5ELF0].sm_ET9_5EAP116KvP5KVqsrD2-
sm_2FrwNv3T6KyA5tr3JAlci1->sm_ET9_5EAP116KvP5KVqsrD2;sm_42IchtFzt_HeWbSIRXuJj2
.sm_SheEjf_3lOXDmgzkmhMGG2=sm_G1oJK9oZfgNLq5TaAydCL1[sm_SmSSPSQfR1qEYWsVj5ELF0
].sm_SheEjf_3lOXDmgzkmhMGG2-sm_2FrwNv3T6KyA5tr3JAlci1->
sm_SheEjf_3lOXDmgzkmhMGG2;sm_KmlKeslps074Jt17jAHXH0[0][0]+=
sm_42IchtFzt_HeWbSIRXuJj2 .x*sm_42IchtFzt_HeWbSIRXuJj2 .x;
sm_KmlKeslps074Jt17jAHXH0[1][1]+=sm_42IchtFzt_HeWbSIRXuJj2 .
sm_ET9_5EAP116KvP5KVqsrD2*sm_42IchtFzt_HeWbSIRXuJj2 .sm_ET9_5EAP116KvP5KVqsrD2
;sm_KmlKeslps074Jt17jAHXH0[2][2]+=sm_42IchtFzt_HeWbSIRXuJj2 .
sm_SheEjf_3lOXDmgzkmhMGG2*sm_42IchtFzt_HeWbSIRXuJj2 .sm_SheEjf_3lOXDmgzkmhMGG2
;sm_KmlKeslps074Jt17jAHXH0[1][2]+=sm_42IchtFzt_HeWbSIRXuJj2 .
sm_ET9_5EAP116KvP5KVqsrD2*sm_42IchtFzt_HeWbSIRXuJj2 .sm_SheEjf_3lOXDmgzkmhMGG2
;sm_KmlKeslps074Jt17jAHXH0[2][0]+=sm_42IchtFzt_HeWbSIRXuJj2 .
sm_SheEjf_3lOXDmgzkmhMGG2*sm_42IchtFzt_HeWbSIRXuJj2 .x;
sm_KmlKeslps074Jt17jAHXH0[0][1]+=sm_42IchtFzt_HeWbSIRXuJj2 .x*
sm_42IchtFzt_HeWbSIRXuJj2 .sm_ET9_5EAP116KvP5KVqsrD2;}
sm_KmlKeslps074Jt17jAHXH0[2][1]=sm_KmlKeslps074Jt17jAHXH0[1][2];
sm_KmlKeslps074Jt17jAHXH0[0][2]=sm_KmlKeslps074Jt17jAHXH0[2][0];
sm_KmlKeslps074Jt17jAHXH0[1][0]=sm_KmlKeslps074Jt17jAHXH0[0][1];{double
sm_egnMj4vJWzNz4Ml1cgHew2,sm_CbseT2gBZa71SnPDJMCbi_=pmf_get_real_max();
sm_cZGCTtml6n_loFBtlmtcF2= -1;for(sm_NnCmJnsXc51VOXM7s0_HH0=0;
sm_NnCmJnsXc51VOXM7s0_HH0<3;++sm_NnCmJnsXc51VOXM7s0_HH0){
sm_MJ6HaMWdyRxHm3p_EZiD41=sm_NnCmJnsXc51VOXM7s0_HH0==2?0:(
sm_NnCmJnsXc51VOXM7s0_HH0+1);sm_ljExW6hRw43Vg4SLQUAvT1=3-(
sm_NnCmJnsXc51VOXM7s0_HH0+sm_MJ6HaMWdyRxHm3p_EZiD41);sm_egnMj4vJWzNz4Ml1cgHew2
=sm_oa7jOQ9GsdCyoEVwnJU_l0(sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41
][sm_MJ6HaMWdyRxHm3p_EZiD41],sm_KmlKeslps074Jt17jAHXH0[
sm_ljExW6hRw43Vg4SLQUAvT1][sm_ljExW6hRw43Vg4SLQUAvT1],
sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][sm_ljExW6hRw43Vg4SLQUAvT1
]);if(sm_egnMj4vJWzNz4Ml1cgHew2<sm_CbseT2gBZa71SnPDJMCbi_){
sm_CbseT2gBZa71SnPDJMCbi_=sm_egnMj4vJWzNz4Ml1cgHew2;sm_cZGCTtml6n_loFBtlmtcF2=
sm_NnCmJnsXc51VOXM7s0_HH0;}}if(sm_cZGCTtml6n_loFBtlmtcF2<0)return false;
sm_NnCmJnsXc51VOXM7s0_HH0=sm_cZGCTtml6n_loFBtlmtcF2;sm_MJ6HaMWdyRxHm3p_EZiD41=
sm_NnCmJnsXc51VOXM7s0_HH0==2?0:(sm_NnCmJnsXc51VOXM7s0_HH0+1);
sm_ljExW6hRw43Vg4SLQUAvT1=3-(sm_NnCmJnsXc51VOXM7s0_HH0+
sm_MJ6HaMWdyRxHm3p_EZiD41);if(sm_KmlKeslps074Jt17jAHXH0[
sm_MJ6HaMWdyRxHm3p_EZiD41][sm_MJ6HaMWdyRxHm3p_EZiD41]<
sm_KmlKeslps074Jt17jAHXH0[sm_ljExW6hRw43Vg4SLQUAvT1][sm_ljExW6hRw43Vg4SLQUAvT1
]){int sm_F6LtXE3E_wqYUyZN8tV5a1=sm_MJ6HaMWdyRxHm3p_EZiD41;
sm_MJ6HaMWdyRxHm3p_EZiD41=sm_ljExW6hRw43Vg4SLQUAvT1;sm_ljExW6hRw43Vg4SLQUAvT1=
sm_F6LtXE3E_wqYUyZN8tV5a1;}}if(sm_KmlKeslps074Jt17jAHXH0[
sm_MJ6HaMWdyRxHm3p_EZiD41][sm_MJ6HaMWdyRxHm3p_EZiD41]==0.0)return false;{const
double sm_ojAHyVHgbHhAjmJFnG_l31=sm_KmlKeslps074Jt17jAHXH0[
sm_MJ6HaMWdyRxHm3p_EZiD41][sm_ljExW6hRw43Vg4SLQUAvT1]/
sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][sm_MJ6HaMWdyRxHm3p_EZiD41
];const double sm_m8FpSik4c5_zOvF6ZJsxL0=sm_KmlKeslps074Jt17jAHXH0[
sm_ljExW6hRw43Vg4SLQUAvT1][sm_ljExW6hRw43Vg4SLQUAvT1]-
sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][sm_ljExW6hRw43Vg4SLQUAvT1
]*sm_ojAHyVHgbHhAjmJFnG_l31;double sm_lGrwWW0ERg3PEZB3txbfw2=0.0;if(
sm_m8FpSik4c5_zOvF6ZJsxL0==0.0)return false;sm__C4osuKafjRC35il8VstV_[
sm_ljExW6hRw43Vg4SLQUAvT1]= -(sm_KmlKeslps074Jt17jAHXH0[
sm_ljExW6hRw43Vg4SLQUAvT1][sm_NnCmJnsXc51VOXM7s0_HH0]-
sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][sm_NnCmJnsXc51VOXM7s0_HH0
]*sm_ojAHyVHgbHhAjmJFnG_l31)/sm_m8FpSik4c5_zOvF6ZJsxL0;
sm__C4osuKafjRC35il8VstV_[sm_MJ6HaMWdyRxHm3p_EZiD41]=(-
sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][sm_NnCmJnsXc51VOXM7s0_HH0
]-sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][
sm_ljExW6hRw43Vg4SLQUAvT1]*sm__C4osuKafjRC35il8VstV_[sm_ljExW6hRw43Vg4SLQUAvT1
])/sm_KmlKeslps074Jt17jAHXH0[sm_MJ6HaMWdyRxHm3p_EZiD41][
sm_MJ6HaMWdyRxHm3p_EZiD41];sm__C4osuKafjRC35il8VstV_[sm_NnCmJnsXc51VOXM7s0_HH0
]= +1.0;sm_lGrwWW0ERg3PEZB3txbfw2=sqrt(sm__C4osuKafjRC35il8VstV_[0]*
sm__C4osuKafjRC35il8VstV_[0]+sm__C4osuKafjRC35il8VstV_[1]*
sm__C4osuKafjRC35il8VstV_[1]+sm__C4osuKafjRC35il8VstV_[2]*
sm__C4osuKafjRC35il8VstV_[2]);sm__C4osuKafjRC35il8VstV_[0]/=
sm_lGrwWW0ERg3PEZB3txbfw2;sm__C4osuKafjRC35il8VstV_[1]/=
sm_lGrwWW0ERg3PEZB3txbfw2;sm__C4osuKafjRC35il8VstV_[2]/=
sm_lGrwWW0ERg3PEZB3txbfw2;}return true;}
