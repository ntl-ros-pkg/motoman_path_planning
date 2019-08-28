#include "pm_std.h"
#include "math.h"
#include "string.h"
#include "stddef.h"
#include "pm_std.h"
void sm_core_math_validNormal(double*sm_iYSfpMOMY4AysbLk8SW6X_,const double*
sm_1rg5Osg1YqZjr7xO6cmlv0,const int sm_OxcgP1ypvBMlyQzEN_Uhj_);void
sm_core_math_castelEval(const size_t n,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,
const double*sm_ET9_5EAP116KvP5KVqsrD2,const double sm_MJ6HaMWdyRxHm3p_EZiD41,
double*sm_kDbFK62RTDL9nqq9jdcp40);int sm_core_math_indexOfLowerBound(const
size_t n,const double*sm_dgXQ2AREOgvpMArcKpRwK_,const double
sm_MJ6HaMWdyRxHm3p_EZiD41);double sm_core_math_findClosestPointOnBezier(const
size_t sm_NNBxjpq2ck5isunOL_3RU_,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,const
double*sm_QtLtg_blnamTiaOQywvkh0,const double*sm_53fUx6wwHtlDvV2YqGWL90,const
double*sm_C2EiOwdO93U1HKYMA3Guq0,const double*pm_KYlcoOk9rSSGYswizhYqZ2,double
*sm_VnUvVwAuE0jKVRHKn79nS_);double sm_core_math_findClosestPointOnSpline(const
size_t sm_NNBxjpq2ck5isunOL_3RU_,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,const
size_t sm_3ZjOyek6XuXbfopc7GGDI_,const unsigned char sm_Og2sxa3XqWhyn7T1ZWNmX2
,int sm_ZCnIaBXRP8OlAGYngalzk1,const double*sm_I_psHiHl8McOUtnQCxpRl_,const
double*sm_QtLtg_blnamTiaOQywvkh0,const double*sm_V0aTVXfXtSwEqQ69IMzeq2,const
double*sm_53fUx6wwHtlDvV2YqGWL90,const double*sm_C2EiOwdO93U1HKYMA3Guq0,const
double*sm_DKpmedERY7HGL2CCpyWxA0,double*sm__ITJ__bnj97yLKzZCBEPF1);double
sm_xGZOct1s9hvQvUX5Xnpa01(const double*a,const double*b,const size_t
sm_OxcgP1ypvBMlyQzEN_Uhj_){size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;double
sm_vJ2t11YvaJDgjI22nsSMc2=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){sm_vJ2t11YvaJDgjI22nsSMc2+=a[sm_SmSSPSQfR1qEYWsVj5ELF0]*b[
sm_SmSSPSQfR1qEYWsVj5ELF0];}return sm_vJ2t11YvaJDgjI22nsSMc2;}void
sm_ARJnBKNs_WN8ZCg7Ut__Z1(double*a,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_){
size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){a[sm_SmSSPSQfR1qEYWsVj5ELF0]=0.0;}}void sm_xU8WeijhGInMwUGMnJ9B51(double*a
,const double*b,const double sm_hCXUd_x6pbKZfXtyKXEw82,const size_t
sm_OxcgP1ypvBMlyQzEN_Uhj_){size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(
sm_SmSSPSQfR1qEYWsVj5ELF0;sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;
sm_SmSSPSQfR1qEYWsVj5ELF0++){a[sm_SmSSPSQfR1qEYWsVj5ELF0]=
sm_hCXUd_x6pbKZfXtyKXEw82*b[sm_SmSSPSQfR1qEYWsVj5ELF0];}}void
sm_BMCvxgHh4lxpPA99_Cppw_(double*a,const double*b,const double
sm_hCXUd_x6pbKZfXtyKXEw82,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_){size_t
sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){a[sm_SmSSPSQfR1qEYWsVj5ELF0]+=sm_hCXUd_x6pbKZfXtyKXEw82*b[
sm_SmSSPSQfR1qEYWsVj5ELF0];}}double sm_o68y6dNEA_SKx0VCUZvjd2(const double*a,
const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_){double sm_vB_NaGB5YPv1YtL_3p6Z20=0;
size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){sm_vB_NaGB5YPv1YtL_3p6Z20+=a[sm_SmSSPSQfR1qEYWsVj5ELF0]*a[
sm_SmSSPSQfR1qEYWsVj5ELF0];}sm_vB_NaGB5YPv1YtL_3p6Z20=sqrt(
sm_vB_NaGB5YPv1YtL_3p6Z20);return sm_vB_NaGB5YPv1YtL_3p6Z20;}double
sm_H1nTGpL8gsXpOZdYf4vws0(const double*a,const double*b,const size_t
sm_OxcgP1ypvBMlyQzEN_Uhj_){double sm_vB_NaGB5YPv1YtL_3p6Z20=0;size_t
sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){double sm_SKHbY6rGfe_c5uusXTSRI1=a[sm_SmSSPSQfR1qEYWsVj5ELF0]-b[
sm_SmSSPSQfR1qEYWsVj5ELF0];sm_vB_NaGB5YPv1YtL_3p6Z20+=
sm_SKHbY6rGfe_c5uusXTSRI1*sm_SKHbY6rGfe_c5uusXTSRI1;}sm_vB_NaGB5YPv1YtL_3p6Z20
=sqrt(sm_vB_NaGB5YPv1YtL_3p6Z20);return sm_vB_NaGB5YPv1YtL_3p6Z20;}void
sm_cD9y64q3jeQMrAS2yenrE2(double*a,const double*b,const double*
sm_ojAHyVHgbHhAjmJFnG_l31,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_){size_t
sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_SmSSPSQfR1qEYWsVj5ELF0
++){a[sm_SmSSPSQfR1qEYWsVj5ELF0]=b[sm_SmSSPSQfR1qEYWsVj5ELF0]-
sm_ojAHyVHgbHhAjmJFnG_l31[sm_SmSSPSQfR1qEYWsVj5ELF0];}}void
sm_j2lJXP7ms8PCfax_pTmWM1(double*sm_ojAHyVHgbHhAjmJFnG_l31,const double*a,
const double*b){sm_ojAHyVHgbHhAjmJFnG_l31[0]=a[1]*b[2]-a[2]*b[1];
sm_ojAHyVHgbHhAjmJFnG_l31[1]=a[2]*b[0]-a[0]*b[2];sm_ojAHyVHgbHhAjmJFnG_l31[2]=
a[0]*b[1]-a[1]*b[0];}void sm_DBSwduV47kZFEZbZaDo82_(double*
sm_K__VwF1fOaiI5mgPPJMb62,const size_t pm_WkDzWdo3HJglufgddrvj_1,const size_t
pm_Y_WQkyfqLWq4_EV8mXQjt_,const size_t sm_e5DPtPFhUdVDy4M4yaZD_0,const double*
sm_ZxltZcnt1eSoyJTnrOm7z2){size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;for(
sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<
pm_Y_WQkyfqLWq4_EV8mXQjt_;sm_SmSSPSQfR1qEYWsVj5ELF0++){
sm_K__VwF1fOaiI5mgPPJMb62[sm_SmSSPSQfR1qEYWsVj5ELF0*pm_WkDzWdo3HJglufgddrvj_1+
sm_e5DPtPFhUdVDy4M4yaZD_0]=sm_ZxltZcnt1eSoyJTnrOm7z2[sm_SmSSPSQfR1qEYWsVj5ELF0
];}}boolean_T sm_gYSZua5gDhMTCjdCepJpu1(const size_t n,const double*
sm_ET9_5EAP116KvP5KVqsrD2,const double sm_iXofo_596XkzzRcStLp2k_){const double
sm_KkdRotNk7Gcw4ZH7i8snT2=sm_ET9_5EAP116KvP5KVqsrD2[0];const double
sm_FHD94qwoFsyikhLtFLGAz_=sm_ET9_5EAP116KvP5KVqsrD2[n-1];const double
sm_gN74BbsU5wqNjkJbC9b672=sm_FHD94qwoFsyikhLtFLGAz_-sm_KkdRotNk7Gcw4ZH7i8snT2;
const double sm_36vBhVR7fBuF2XpIRcX3j1=sqrt(sm_gN74BbsU5wqNjkJbC9b672*
sm_gN74BbsU5wqNjkJbC9b672+1);size_t sm_PIqWtbzrbQqv_KS_31HnE2=1;for(
sm_PIqWtbzrbQqv_KS_31HnE2=1;sm_PIqWtbzrbQqv_KS_31HnE2<n;
sm_PIqWtbzrbQqv_KS_31HnE2++){const double sm_rPoRcVnQaBUJnOZ4_PMBc2=((double)
sm_PIqWtbzrbQqv_KS_31HnE2)/(n-1.0);const double sm_SgBKSTiPUx00fTy4lySHK0=fabs
(sm_ET9_5EAP116KvP5KVqsrD2[sm_PIqWtbzrbQqv_KS_31HnE2]-
sm_gN74BbsU5wqNjkJbC9b672*sm_rPoRcVnQaBUJnOZ4_PMBc2-sm_KkdRotNk7Gcw4ZH7i8snT2)
/sm_36vBhVR7fBuF2XpIRcX3j1;if(sm_SgBKSTiPUx00fTy4lySHK0>
sm_iXofo_596XkzzRcStLp2k_)return false;}return true;}double
sm_QoEu8C5UkXfzN_PWKcCz90(const size_t n,const double*
sm_ET9_5EAP116KvP5KVqsrD2,const double sm_MJ6HaMWdyRxHm3p_EZiD41){static double
sm_3odMoGeQV_Z0L4u_0eQ222[][11]={{1.0,2.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}
,{1.0,3.0,3.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0},{1.0,4.0,6.0,4.0,1.0,0.0,0.0,
0.0,0.0,0.0,0.0},{1.0,5.0,10.0,10.0,5.0,1.0,0.0,0.0,0.0,0.0,0.0},{1.0,6.0,15.0
,20.0,15.0,6.0,1.0,0.0,0.0,0.0,0.0},{1.0,7.0,21.0,35.0,35.0,21.0,7.0,1.0,0.0,
0.0,0.0},{1.0,8.0,28.0,56.0,70.0,56.0,28.0,8.0,1.0,0.0,0.0},{1.0,9.0,36.0,84.0
,126.0,126.0,84.0,36.0,9.0,1.0,0.0},{1.0,10.0,45.0,120.0,210.0,252.0,210.0,
120.0,45.0,10.0,1.0}};size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;size_t
sm__C5ziQdaxfW5aFpxg2zZJ0=(n-3);double sm_OPkBtz8qpfLV2OGZ9JjsG2=1.0-
sm_MJ6HaMWdyRxHm3p_EZiD41;double sm_DmFZpHyMc8iGgqVly7YCJ_=pow(
sm_OPkBtz8qpfLV2OGZ9JjsG2,(double)n-1);double sm_imwBcWXoJ4qQGBZx1Qchu1=
sm_MJ6HaMWdyRxHm3p_EZiD41;double sm_QC4jSezeaiVmtC21WlKrA2=
sm_DmFZpHyMc8iGgqVly7YCJ_*sm_ET9_5EAP116KvP5KVqsrD2[0];if(
sm_OPkBtz8qpfLV2OGZ9JjsG2!=0.0&&sm_MJ6HaMWdyRxHm3p_EZiD41!=0.0){for(
sm_SmSSPSQfR1qEYWsVj5ELF0=1;sm_SmSSPSQfR1qEYWsVj5ELF0<n-1;
sm_SmSSPSQfR1qEYWsVj5ELF0++){sm_DmFZpHyMc8iGgqVly7YCJ_/=
sm_OPkBtz8qpfLV2OGZ9JjsG2;sm_QC4jSezeaiVmtC21WlKrA2+=sm_3odMoGeQV_Z0L4u_0eQ222
[sm__C5ziQdaxfW5aFpxg2zZJ0][sm_SmSSPSQfR1qEYWsVj5ELF0]*
sm_DmFZpHyMc8iGgqVly7YCJ_*sm_imwBcWXoJ4qQGBZx1Qchu1*sm_ET9_5EAP116KvP5KVqsrD2[
sm_SmSSPSQfR1qEYWsVj5ELF0];sm_imwBcWXoJ4qQGBZx1Qchu1*=
sm_MJ6HaMWdyRxHm3p_EZiD41;}}sm_QC4jSezeaiVmtC21WlKrA2+=
sm_imwBcWXoJ4qQGBZx1Qchu1*sm_ET9_5EAP116KvP5KVqsrD2[n-1];return
sm_QC4jSezeaiVmtC21WlKrA2;}void sm_core_math_castelEval(const size_t n,const
size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,const double*sm_ET9_5EAP116KvP5KVqsrD2,const
double sm_MJ6HaMWdyRxHm3p_EZiD41,double*sm_kDbFK62RTDL9nqq9jdcp40){if(
sm_MJ6HaMWdyRxHm3p_EZiD41==0.0){memcpy(sm_kDbFK62RTDL9nqq9jdcp40,
sm_ET9_5EAP116KvP5KVqsrD2,sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));}else if(
sm_MJ6HaMWdyRxHm3p_EZiD41==1.0||n==1){memcpy(sm_kDbFK62RTDL9nqq9jdcp40,
sm_ET9_5EAP116KvP5KVqsrD2+(n-1)*sm_OxcgP1ypvBMlyQzEN_Uhj_,
sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));}else{double
sm_QC4jSezeaiVmtC21WlKrA2[99];size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0,
sm_OUB2pptsvtdGL_LyqpgOa0=0,sm_PIqWtbzrbQqv_KS_31HnE2=0;const double
sm_OPkBtz8qpfLV2OGZ9JjsG2=1.0-sm_MJ6HaMWdyRxHm3p_EZiD41;for(
sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<n-1;
sm_SmSSPSQfR1qEYWsVj5ELF0++){for(sm_OUB2pptsvtdGL_LyqpgOa0=0;
sm_OUB2pptsvtdGL_LyqpgOa0<sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_OUB2pptsvtdGL_LyqpgOa0
++){sm_QC4jSezeaiVmtC21WlKrA2[sm_SmSSPSQfR1qEYWsVj5ELF0*
sm_OxcgP1ypvBMlyQzEN_Uhj_+sm_OUB2pptsvtdGL_LyqpgOa0]=sm_OPkBtz8qpfLV2OGZ9JjsG2
*sm_ET9_5EAP116KvP5KVqsrD2[sm_SmSSPSQfR1qEYWsVj5ELF0*sm_OxcgP1ypvBMlyQzEN_Uhj_
+sm_OUB2pptsvtdGL_LyqpgOa0]+sm_MJ6HaMWdyRxHm3p_EZiD41*
sm_ET9_5EAP116KvP5KVqsrD2[(sm_SmSSPSQfR1qEYWsVj5ELF0+1)*
sm_OxcgP1ypvBMlyQzEN_Uhj_+sm_OUB2pptsvtdGL_LyqpgOa0];}}for(
sm_PIqWtbzrbQqv_KS_31HnE2=n-2;sm_PIqWtbzrbQqv_KS_31HnE2>0;
sm_PIqWtbzrbQqv_KS_31HnE2--){for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_PIqWtbzrbQqv_KS_31HnE2;sm_SmSSPSQfR1qEYWsVj5ELF0
++){for(sm_OUB2pptsvtdGL_LyqpgOa0=0;sm_OUB2pptsvtdGL_LyqpgOa0<
sm_OxcgP1ypvBMlyQzEN_Uhj_;sm_OUB2pptsvtdGL_LyqpgOa0++){
sm_QC4jSezeaiVmtC21WlKrA2[sm_SmSSPSQfR1qEYWsVj5ELF0*sm_OxcgP1ypvBMlyQzEN_Uhj_+
sm_OUB2pptsvtdGL_LyqpgOa0]=sm_OPkBtz8qpfLV2OGZ9JjsG2*sm_QC4jSezeaiVmtC21WlKrA2
[sm_SmSSPSQfR1qEYWsVj5ELF0*sm_OxcgP1ypvBMlyQzEN_Uhj_+sm_OUB2pptsvtdGL_LyqpgOa0
]+sm_MJ6HaMWdyRxHm3p_EZiD41*sm_QC4jSezeaiVmtC21WlKrA2[(
sm_SmSSPSQfR1qEYWsVj5ELF0+1)*sm_OxcgP1ypvBMlyQzEN_Uhj_+
sm_OUB2pptsvtdGL_LyqpgOa0];}}}memcpy(sm_kDbFK62RTDL9nqq9jdcp40,
sm_QC4jSezeaiVmtC21WlKrA2,sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));}}double
sm_O1jMPwvdW2yJaIT3VcIDJ1(const size_t n,double*sm_ET9_5EAP116KvP5KVqsrD2,
const double sm_iXofo_596XkzzRcStLp2k_){const size_t sm_fGEIhUh4Hc48OESNlsVDU0
=50;size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0;double sm_aoel664zPcTjzpXADn7l40=0.5;
double sm_H5SKBXtwn4GQs_kD4_H___=0.0,sm_QC4jSezeaiVmtC21WlKrA2=0.0,
sm_HyPSwuGUMGPCIBuJieXd_2=0.0;double sm_oBr0VobcvsoaKGeqAujWW1[10];;if(
sm_ET9_5EAP116KvP5KVqsrD2[0]*sm_ET9_5EAP116KvP5KVqsrD2[n-1]<0.0){
sm_aoel664zPcTjzpXADn7l40=sm_ET9_5EAP116KvP5KVqsrD2[0]/(
sm_ET9_5EAP116KvP5KVqsrD2[0]-sm_ET9_5EAP116KvP5KVqsrD2[n-1]);;}for(
sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<n-1;++
sm_SmSSPSQfR1qEYWsVj5ELF0)sm_oBr0VobcvsoaKGeqAujWW1[sm_SmSSPSQfR1qEYWsVj5ELF0]
=((double)n)*(sm_ET9_5EAP116KvP5KVqsrD2[sm_SmSSPSQfR1qEYWsVj5ELF0+1]-
sm_ET9_5EAP116KvP5KVqsrD2[sm_SmSSPSQfR1qEYWsVj5ELF0]);sm_core_math_castelEval(
n,1,sm_ET9_5EAP116KvP5KVqsrD2,sm_aoel664zPcTjzpXADn7l40,&
sm_QC4jSezeaiVmtC21WlKrA2);sm_core_math_castelEval(n-1,1,
sm_oBr0VobcvsoaKGeqAujWW1,sm_aoel664zPcTjzpXADn7l40,&sm_HyPSwuGUMGPCIBuJieXd_2
);if(fabs(sm_QC4jSezeaiVmtC21WlKrA2)>2.0*fabs(sm_HyPSwuGUMGPCIBuJieXd_2))
return-1.0;sm_H5SKBXtwn4GQs_kD4_H___=sm_QC4jSezeaiVmtC21WlKrA2/
sm_HyPSwuGUMGPCIBuJieXd_2;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_fGEIhUh4Hc48OESNlsVDU0;sm_SmSSPSQfR1qEYWsVj5ELF0
++){if(fabs(sm_H5SKBXtwn4GQs_kD4_H___)<=sm_iXofo_596XkzzRcStLp2k_){break;}
sm_aoel664zPcTjzpXADn7l40-=sm_H5SKBXtwn4GQs_kD4_H___;if(
sm_aoel664zPcTjzpXADn7l40<-1.0||sm_aoel664zPcTjzpXADn7l40>2.0)return-1.0;
sm_core_math_castelEval(n,1,sm_ET9_5EAP116KvP5KVqsrD2,
sm_aoel664zPcTjzpXADn7l40,&sm_QC4jSezeaiVmtC21WlKrA2);sm_core_math_castelEval(
n-1,1,sm_oBr0VobcvsoaKGeqAujWW1,sm_aoel664zPcTjzpXADn7l40,&
sm_HyPSwuGUMGPCIBuJieXd_2);if(fabs(sm_QC4jSezeaiVmtC21WlKrA2)>2.0*fabs(
sm_HyPSwuGUMGPCIBuJieXd_2))return-1.0;sm_H5SKBXtwn4GQs_kD4_H___=
sm_QC4jSezeaiVmtC21WlKrA2/sm_HyPSwuGUMGPCIBuJieXd_2;}return(
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_fGEIhUh4Hc48OESNlsVDU0)?sm_aoel664zPcTjzpXADn7l40
:-1.0;}void sm_0ECk6_ciA7l_AAOhbwKcp0(const size_t n,const size_t
sm_SmSSPSQfR1qEYWsVj5ELF0,const double sm_AyYEFKOpFqp_5feBdZZeA2,const double
sm_ipJeOIg3iw4HuJyElwMiH0,double*sm_kQM3TDtMcWdAbDgbuenLL0,double*
sm_vmprqWMlXBdR9Gj0BJlZK2){size_t sm_OUB2pptsvtdGL_LyqpgOa0;
sm_vmprqWMlXBdR9Gj0BJlZK2[(n-1)-(sm_SmSSPSQfR1qEYWsVj5ELF0-1)]=
sm_kQM3TDtMcWdAbDgbuenLL0[n-1];if(sm_SmSSPSQfR1qEYWsVj5ELF0==n){return;}for(
sm_OUB2pptsvtdGL_LyqpgOa0=n-1;sm_OUB2pptsvtdGL_LyqpgOa0>=
sm_SmSSPSQfR1qEYWsVj5ELF0;sm_OUB2pptsvtdGL_LyqpgOa0--){
sm_kQM3TDtMcWdAbDgbuenLL0[sm_OUB2pptsvtdGL_LyqpgOa0]=sm_ipJeOIg3iw4HuJyElwMiH0
*sm_kQM3TDtMcWdAbDgbuenLL0[sm_OUB2pptsvtdGL_LyqpgOa0-1]+
sm_AyYEFKOpFqp_5feBdZZeA2*sm_kQM3TDtMcWdAbDgbuenLL0[sm_OUB2pptsvtdGL_LyqpgOa0]
;}sm_0ECk6_ciA7l_AAOhbwKcp0(n,sm_SmSSPSQfR1qEYWsVj5ELF0+1,
sm_AyYEFKOpFqp_5feBdZZeA2,sm_ipJeOIg3iw4HuJyElwMiH0,sm_kQM3TDtMcWdAbDgbuenLL0,
sm_vmprqWMlXBdR9Gj0BJlZK2);}void sm_1gRJhkIXjt76igWcoVzdi0(const size_t n,
const double sm_AyYEFKOpFqp_5feBdZZeA2,double*sm_kQM3TDtMcWdAbDgbuenLL0,double
*sm_vmprqWMlXBdR9Gj0BJlZK2){sm_0ECk6_ciA7l_AAOhbwKcp0(n,1,
sm_AyYEFKOpFqp_5feBdZZeA2,1.0-sm_AyYEFKOpFqp_5feBdZZeA2,
sm_kQM3TDtMcWdAbDgbuenLL0,sm_vmprqWMlXBdR9Gj0BJlZK2);}size_t
sm_GnulHOMB24ChwWbOw20uO_(const size_t n,const double*
sm_ET9_5EAP116KvP5KVqsrD2){size_t sm_SmSSPSQfR1qEYWsVj5ELF0=0,
sm_OUB2pptsvtdGL_LyqpgOa0=1;size_t sm_nYNH6v3_un_OdaB2N3F5n_=0;while(
sm_OUB2pptsvtdGL_LyqpgOa0<n){if(sm_ET9_5EAP116KvP5KVqsrD2[
sm_OUB2pptsvtdGL_LyqpgOa0]==0){sm_OUB2pptsvtdGL_LyqpgOa0++;continue;}if(
sm_ET9_5EAP116KvP5KVqsrD2[sm_SmSSPSQfR1qEYWsVj5ELF0]*sm_ET9_5EAP116KvP5KVqsrD2
[sm_OUB2pptsvtdGL_LyqpgOa0]<0)sm_nYNH6v3_un_OdaB2N3F5n_++;
sm_SmSSPSQfR1qEYWsVj5ELF0=sm_OUB2pptsvtdGL_LyqpgOa0;sm_OUB2pptsvtdGL_LyqpgOa0
++;}return sm_nYNH6v3_un_OdaB2N3F5n_;}int sm_A7iZJ7CQklFaCknAHBh_z1(const
size_t n,unsigned int sm_hvCOR9IlQe9jEf92EKFIC2,double*
sm_ET9_5EAP116KvP5KVqsrD2,const double sm_oi7cjFzKBKCkmC4CFCSE_1,const double
sm_OPkBtz8qpfLV2OGZ9JjsG2,const double sm_iXofo_596XkzzRcStLp2k_,double*
sm_tdtenJbGk4vO2SxO_msm_0){size_t sm_nYNH6v3_un_OdaB2N3F5n_=0,
sm__CQ7dOXylGFM5mmEcxVkO1=0;sm_nYNH6v3_un_OdaB2N3F5n_=
sm_GnulHOMB24ChwWbOw20uO_(n,sm_ET9_5EAP116KvP5KVqsrD2);if(
sm_nYNH6v3_un_OdaB2N3F5n_==0)return 0;if(sm_nYNH6v3_un_OdaB2N3F5n_==1&&
sm_hvCOR9IlQe9jEf92EKFIC2>=4){const double sm_MJ6HaMWdyRxHm3p_EZiD41=
sm_O1jMPwvdW2yJaIT3VcIDJ1(n,sm_ET9_5EAP116KvP5KVqsrD2,
sm_iXofo_596XkzzRcStLp2k_);if(sm_MJ6HaMWdyRxHm3p_EZiD41>=0.0&&
sm_MJ6HaMWdyRxHm3p_EZiD41<=1.0){*sm_tdtenJbGk4vO2SxO_msm_0++=
sm_oi7cjFzKBKCkmC4CFCSE_1+sm_MJ6HaMWdyRxHm3p_EZiD41*(sm_OPkBtz8qpfLV2OGZ9JjsG2
-sm_oi7cjFzKBKCkmC4CFCSE_1);++sm__CQ7dOXylGFM5mmEcxVkO1;}else if(
sm_hvCOR9IlQe9jEf92EKFIC2>16){sm_nYNH6v3_un_OdaB2N3F5n_=0;}}if(
sm__CQ7dOXylGFM5mmEcxVkO1<sm_nYNH6v3_un_OdaB2N3F5n_){const double
sm_AyYEFKOpFqp_5feBdZZeA2=(sm_oi7cjFzKBKCkmC4CFCSE_1+sm_OPkBtz8qpfLV2OGZ9JjsG2
)/2.0;int sm_CoFX8RttnKucAtg6c58dF1=0;double sm_vmprqWMlXBdR9Gj0BJlZK2[11];;
sm_1gRJhkIXjt76igWcoVzdi0(n,0.5,sm_ET9_5EAP116KvP5KVqsrD2,
sm_vmprqWMlXBdR9Gj0BJlZK2);sm_CoFX8RttnKucAtg6c58dF1=sm_A7iZJ7CQklFaCknAHBh_z1
(n,sm_hvCOR9IlQe9jEf92EKFIC2+1,sm_ET9_5EAP116KvP5KVqsrD2,
sm_oi7cjFzKBKCkmC4CFCSE_1,sm_AyYEFKOpFqp_5feBdZZeA2,sm_iXofo_596XkzzRcStLp2k_,
sm_tdtenJbGk4vO2SxO_msm_0);sm__CQ7dOXylGFM5mmEcxVkO1=sm_CoFX8RttnKucAtg6c58dF1
;sm_tdtenJbGk4vO2SxO_msm_0+=sm_CoFX8RttnKucAtg6c58dF1;if(
sm__CQ7dOXylGFM5mmEcxVkO1<sm_nYNH6v3_un_OdaB2N3F5n_){sm_CoFX8RttnKucAtg6c58dF1
=sm_A7iZJ7CQklFaCknAHBh_z1(n,sm_hvCOR9IlQe9jEf92EKFIC2+1,
sm_vmprqWMlXBdR9Gj0BJlZK2,sm_AyYEFKOpFqp_5feBdZZeA2,sm_OPkBtz8qpfLV2OGZ9JjsG2,
sm_iXofo_596XkzzRcStLp2k_,sm_tdtenJbGk4vO2SxO_msm_0);sm__CQ7dOXylGFM5mmEcxVkO1
+=sm_CoFX8RttnKucAtg6c58dF1;sm_tdtenJbGk4vO2SxO_msm_0+=
sm_CoFX8RttnKucAtg6c58dF1;if(sm__CQ7dOXylGFM5mmEcxVkO1<
sm_nYNH6v3_un_OdaB2N3F5n_&&fabs(sm_vmprqWMlXBdR9Gj0BJlZK2[0])<
sm_iXofo_596XkzzRcStLp2k_&&fabs(sm_vmprqWMlXBdR9Gj0BJlZK2[1])>
sm_iXofo_596XkzzRcStLp2k_&&fabs(sm_ET9_5EAP116KvP5KVqsrD2[n-2])>
sm_iXofo_596XkzzRcStLp2k_){*sm_tdtenJbGk4vO2SxO_msm_0++=
sm_AyYEFKOpFqp_5feBdZZeA2;++sm__CQ7dOXylGFM5mmEcxVkO1;}}}return(int)
sm__CQ7dOXylGFM5mmEcxVkO1;}int sm_30BksxdWNBiVuqjx6Rx4w2(const double*
sm_I_psHiHl8McOUtnQCxpRl_,const double sm_MJ6HaMWdyRxHm3p_EZiD41,const int
sm_mR0nZwIE2RT6FKClV_S_q2,const int sm_fGEIhUh4Hc48OESNlsVDU0){int
sm_Fey9En78MUjM9FQFEy5pg1=sm_mR0nZwIE2RT6FKClV_S_q2+((
sm_fGEIhUh4Hc48OESNlsVDU0-sm_mR0nZwIE2RT6FKClV_S_q2)/2);if((
sm_I_psHiHl8McOUtnQCxpRl_[sm_Fey9En78MUjM9FQFEy5pg1]==
sm_MJ6HaMWdyRxHm3p_EZiD41)||(sm_Fey9En78MUjM9FQFEy5pg1==
sm_mR0nZwIE2RT6FKClV_S_q2)){return sm_Fey9En78MUjM9FQFEy5pg1;}else if(
sm_I_psHiHl8McOUtnQCxpRl_[sm_Fey9En78MUjM9FQFEy5pg1]<sm_MJ6HaMWdyRxHm3p_EZiD41
){return sm_30BksxdWNBiVuqjx6Rx4w2(sm_I_psHiHl8McOUtnQCxpRl_,
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_Fey9En78MUjM9FQFEy5pg1,sm_fGEIhUh4Hc48OESNlsVDU0)
;}else{return sm_30BksxdWNBiVuqjx6Rx4w2(sm_I_psHiHl8McOUtnQCxpRl_,
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_mR0nZwIE2RT6FKClV_S_q2,sm_Fey9En78MUjM9FQFEy5pg1)
;}}int sm_core_math_indexOfLowerBound(const size_t n,const double*
sm_dgXQ2AREOgvpMArcKpRwK_,const double sm_MJ6HaMWdyRxHm3p_EZiD41){const int
sm_gN74BbsU5wqNjkJbC9b672=(int)n;if(sm_MJ6HaMWdyRxHm3p_EZiD41>
sm_dgXQ2AREOgvpMArcKpRwK_[sm_gN74BbsU5wqNjkJbC9b672-1]){return
sm_gN74BbsU5wqNjkJbC9b672-1;}else if(sm_MJ6HaMWdyRxHm3p_EZiD41<
sm_dgXQ2AREOgvpMArcKpRwK_[0]){return-1;}else{return sm_30BksxdWNBiVuqjx6Rx4w2(
sm_dgXQ2AREOgvpMArcKpRwK_,sm_MJ6HaMWdyRxHm3p_EZiD41,0,
sm_gN74BbsU5wqNjkJbC9b672-1);}}double sm_WuDLs7IHn7W_b7LZEqEUi2(const size_t
sm_VVqZBoiCRZsf6_K2O_bre_,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,const double*
sm_vYHpHq0dioBUPbxw34qVB1,const int sm_3COchJ6ROdqVxr75NhIi12,const double*
sm_2HaH1SJv0TJ9RVf8O6QtE_,const double*sm_DKpmedERY7HGL2CCpyWxA0,double*
sm_VnUvVwAuE0jKVRHKn79nS_){double sm_JgrPpbwoiKrlaQ4ku8z0Q1[3];double
sm_pC8o9kORExbIIC79WDtJU1=sm_2HaH1SJv0TJ9RVf8O6QtE_[0];double
sm_SKHbY6rGfe_c5uusXTSRI1=0;int sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_core_math_castelEval(sm_VVqZBoiCRZsf6_K2O_bre_,sm_OxcgP1ypvBMlyQzEN_Uhj_,
sm_vYHpHq0dioBUPbxw34qVB1,sm_pC8o9kORExbIIC79WDtJU1,sm_JgrPpbwoiKrlaQ4ku8z0Q1)
;memcpy(sm_VnUvVwAuE0jKVRHKn79nS_,sm_JgrPpbwoiKrlaQ4ku8z0Q1,
sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));sm_SKHbY6rGfe_c5uusXTSRI1=
sm_H1nTGpL8gsXpOZdYf4vws0(sm_DKpmedERY7HGL2CCpyWxA0,sm_JgrPpbwoiKrlaQ4ku8z0Q1,
sm_OxcgP1ypvBMlyQzEN_Uhj_);for(sm_SmSSPSQfR1qEYWsVj5ELF0=1;
sm_SmSSPSQfR1qEYWsVj5ELF0<sm_3COchJ6ROdqVxr75NhIi12;sm_SmSSPSQfR1qEYWsVj5ELF0
++){double sm_pO2Cd7CBK1yVtazVFFTXZ1=0;sm_core_math_castelEval(
sm_VVqZBoiCRZsf6_K2O_bre_,sm_OxcgP1ypvBMlyQzEN_Uhj_,sm_vYHpHq0dioBUPbxw34qVB1,
sm_2HaH1SJv0TJ9RVf8O6QtE_[sm_SmSSPSQfR1qEYWsVj5ELF0],sm_JgrPpbwoiKrlaQ4ku8z0Q1
);sm_pO2Cd7CBK1yVtazVFFTXZ1=sm_H1nTGpL8gsXpOZdYf4vws0(
sm_DKpmedERY7HGL2CCpyWxA0,sm_JgrPpbwoiKrlaQ4ku8z0Q1,sm_OxcgP1ypvBMlyQzEN_Uhj_)
;if(sm_pO2Cd7CBK1yVtazVFFTXZ1<sm_SKHbY6rGfe_c5uusXTSRI1){
sm_pC8o9kORExbIIC79WDtJU1=sm_2HaH1SJv0TJ9RVf8O6QtE_[sm_SmSSPSQfR1qEYWsVj5ELF0]
;sm_SKHbY6rGfe_c5uusXTSRI1=sm_pO2Cd7CBK1yVtazVFFTXZ1;memcpy(
sm_VnUvVwAuE0jKVRHKn79nS_,sm_JgrPpbwoiKrlaQ4ku8z0Q1,sm_OxcgP1ypvBMlyQzEN_Uhj_*
sizeof(double));}}return sm_pC8o9kORExbIIC79WDtJU1;}double
sm_core_math_findClosestPointOnBezier(const size_t sm_NNBxjpq2ck5isunOL_3RU_,
const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,const double*sm_QtLtg_blnamTiaOQywvkh0,
const double*sm_53fUx6wwHtlDvV2YqGWL90,const double*sm_C2EiOwdO93U1HKYMA3Guq0,
const double*pm_KYlcoOk9rSSGYswizhYqZ2,double*sm_VnUvVwAuE0jKVRHKn79nS_){const
size_t sm_hCXUd_x6pbKZfXtyKXEw82=2*sm_NNBxjpq2ck5isunOL_3RU_;double
sm_tdtenJbGk4vO2SxO_msm_0[100];int sm__CQ7dOXylGFM5mmEcxVkO1=0;double
sm_4YQJ8RQ5rbN9O6uTeik9V1=0;double sm_odX3_8fbrcBELdJIsP__J_[20];size_t
sm_PIqWtbzrbQqv_KS_31HnE2=0;for(sm_PIqWtbzrbQqv_KS_31HnE2=0;
sm_PIqWtbzrbQqv_KS_31HnE2<sm_hCXUd_x6pbKZfXtyKXEw82;sm_PIqWtbzrbQqv_KS_31HnE2
++){sm_odX3_8fbrcBELdJIsP__J_[sm_PIqWtbzrbQqv_KS_31HnE2]=(
sm_53fUx6wwHtlDvV2YqGWL90[sm_PIqWtbzrbQqv_KS_31HnE2]-sm_xGZOct1s9hvQvUX5Xnpa01
(sm_C2EiOwdO93U1HKYMA3Guq0+sm_PIqWtbzrbQqv_KS_31HnE2*sm_OxcgP1ypvBMlyQzEN_Uhj_
,pm_KYlcoOk9rSSGYswizhYqZ2,sm_OxcgP1ypvBMlyQzEN_Uhj_));}
sm_tdtenJbGk4vO2SxO_msm_0[0]=0.0;sm_tdtenJbGk4vO2SxO_msm_0[1]=1.0;
sm__CQ7dOXylGFM5mmEcxVkO1=sm_A7iZJ7CQklFaCknAHBh_z1(sm_hCXUd_x6pbKZfXtyKXEw82,
0,sm_odX3_8fbrcBELdJIsP__J_,0.0,1.0,1e-14,sm_tdtenJbGk4vO2SxO_msm_0+2)+2;
sm_4YQJ8RQ5rbN9O6uTeik9V1=sm_WuDLs7IHn7W_b7LZEqEUi2(sm_NNBxjpq2ck5isunOL_3RU_+
1,sm_OxcgP1ypvBMlyQzEN_Uhj_,sm_QtLtg_blnamTiaOQywvkh0,
sm__CQ7dOXylGFM5mmEcxVkO1,sm_tdtenJbGk4vO2SxO_msm_0,pm_KYlcoOk9rSSGYswizhYqZ2,
sm_VnUvVwAuE0jKVRHKn79nS_);return sm_4YQJ8RQ5rbN9O6uTeik9V1;}double
sm_JDkngyjPQ7sPG0pYDlqR2_(double sm_MJ6HaMWdyRxHm3p_EZiD41,double
sm_RQcoeLKSi8oi_1zuvU_aa1,double sm_yHPrSIcEWDK9hl1llPimY0){return
sm_RQcoeLKSi8oi_1zuvU_aa1+sm_MJ6HaMWdyRxHm3p_EZiD41*(sm_yHPrSIcEWDK9hl1llPimY0
-sm_RQcoeLKSi8oi_1zuvU_aa1);}double sm_core_math_findClosestPointOnSpline(
const size_t sm_NNBxjpq2ck5isunOL_3RU_,const size_t sm_OxcgP1ypvBMlyQzEN_Uhj_,
const size_t sm_3ZjOyek6XuXbfopc7GGDI_,const unsigned char
sm_Og2sxa3XqWhyn7T1ZWNmX2,int sm_ZCnIaBXRP8OlAGYngalzk1,const double*
sm_I_psHiHl8McOUtnQCxpRl_,const double*sm_QtLtg_blnamTiaOQywvkh0,const double*
sm_V0aTVXfXtSwEqQ69IMzeq2,const double*sm_53fUx6wwHtlDvV2YqGWL90,const double*
sm_C2EiOwdO93U1HKYMA3Guq0,const double*sm_DKpmedERY7HGL2CCpyWxA0,double*
sm__ITJ__bnj97yLKzZCBEPF1){double sm_yS7VvSIKrGg9ddzBqHtUd_=1e-12;size_t
sm_MclcrkwaQHNHBcJmyUp7P_=0;while(sm_MclcrkwaQHNHBcJmyUp7P_<=
sm_3ZjOyek6XuXbfopc7GGDI_){const double*sm_truwpfgCXOs5tO3u96iS20=
sm_QtLtg_blnamTiaOQywvkh0+(sm_NNBxjpq2ck5isunOL_3RU_+1)*
sm_OxcgP1ypvBMlyQzEN_Uhj_*sm_ZCnIaBXRP8OlAGYngalzk1;const double*
sm_MDyikfIR1zHu7EQekkFSS2=sm_V0aTVXfXtSwEqQ69IMzeq2+sm_NNBxjpq2ck5isunOL_3RU_*
sm_OxcgP1ypvBMlyQzEN_Uhj_*sm_ZCnIaBXRP8OlAGYngalzk1;const double*
sm__P7V4o6GX_mGZfDTrHzZL2=sm_53fUx6wwHtlDvV2YqGWL90+2*
sm_NNBxjpq2ck5isunOL_3RU_*sm_ZCnIaBXRP8OlAGYngalzk1;const double*
sm_s3Tj7YxUw9WbZrQB3FLpW2=sm_C2EiOwdO93U1HKYMA3Guq0+2*
sm_NNBxjpq2ck5isunOL_3RU_*sm_OxcgP1ypvBMlyQzEN_Uhj_*sm_ZCnIaBXRP8OlAGYngalzk1;
double sm_L4kourKsn6flWrDZr5LRq0[3],sm_JE7u1GWR9b6PFfJMTZ5DN2[3],
sm_wiKmzplLvtopRXzrirqTa0;const double sm_lTwLaihrq_UjPeq7s8EbL2=
sm_core_math_findClosestPointOnBezier(sm_NNBxjpq2ck5isunOL_3RU_,
sm_OxcgP1ypvBMlyQzEN_Uhj_,sm_truwpfgCXOs5tO3u96iS20,sm__P7V4o6GX_mGZfDTrHzZL2,
sm_s3Tj7YxUw9WbZrQB3FLpW2,sm_DKpmedERY7HGL2CCpyWxA0,sm_L4kourKsn6flWrDZr5LRq0)
;sm_MclcrkwaQHNHBcJmyUp7P_++;if(sm_lTwLaihrq_UjPeq7s8EbL2!=0.0&&
sm_lTwLaihrq_UjPeq7s8EbL2!=1.0){memcpy(sm__ITJ__bnj97yLKzZCBEPF1,
sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));return
sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,sm_I_psHiHl8McOUtnQCxpRl_[
sm_ZCnIaBXRP8OlAGYngalzk1],sm_I_psHiHl8McOUtnQCxpRl_[sm_ZCnIaBXRP8OlAGYngalzk1
+1]);}sm_cD9y64q3jeQMrAS2yenrE2(sm_JE7u1GWR9b6PFfJMTZ5DN2,
sm_DKpmedERY7HGL2CCpyWxA0,sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_)
;sm_wiKmzplLvtopRXzrirqTa0=sm_H1nTGpL8gsXpOZdYf4vws0(sm_DKpmedERY7HGL2CCpyWxA0
,sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_);if(
sm_wiKmzplLvtopRXzrirqTa0<sm_yS7VvSIKrGg9ddzBqHtUd_){memcpy(
sm__ITJ__bnj97yLKzZCBEPF1,sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*
sizeof(double));return sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,
sm_I_psHiHl8McOUtnQCxpRl_[sm_ZCnIaBXRP8OlAGYngalzk1],sm_I_psHiHl8McOUtnQCxpRl_
[sm_ZCnIaBXRP8OlAGYngalzk1+1]);}else{double sm_1rg5Osg1YqZjr7xO6cmlv0[3];
double sm_gd6MvCcYnOaE4WNDSRT041;sm_core_math_castelEval(
sm_NNBxjpq2ck5isunOL_3RU_,sm_OxcgP1ypvBMlyQzEN_Uhj_,sm_MDyikfIR1zHu7EQekkFSS2,
sm_lTwLaihrq_UjPeq7s8EbL2,sm_1rg5Osg1YqZjr7xO6cmlv0);sm_gd6MvCcYnOaE4WNDSRT041
=sm_xGZOct1s9hvQvUX5Xnpa01(sm_JE7u1GWR9b6PFfJMTZ5DN2,sm_1rg5Osg1YqZjr7xO6cmlv0
,sm_OxcgP1ypvBMlyQzEN_Uhj_);if(fabs(sm_gd6MvCcYnOaE4WNDSRT041)<
sm_yS7VvSIKrGg9ddzBqHtUd_){memcpy(sm__ITJ__bnj97yLKzZCBEPF1,
sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));return
sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,sm_I_psHiHl8McOUtnQCxpRl_[
sm_ZCnIaBXRP8OlAGYngalzk1],sm_I_psHiHl8McOUtnQCxpRl_[sm_ZCnIaBXRP8OlAGYngalzk1
+1]);}else{if(sm_MclcrkwaQHNHBcJmyUp7P_>sm_3ZjOyek6XuXbfopc7GGDI_){memcpy(
sm__ITJ__bnj97yLKzZCBEPF1,sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*
sizeof(double));return sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,
sm_I_psHiHl8McOUtnQCxpRl_[sm_3ZjOyek6XuXbfopc7GGDI_-1],
sm_I_psHiHl8McOUtnQCxpRl_[sm_3ZjOyek6XuXbfopc7GGDI_]);}if(
sm_lTwLaihrq_UjPeq7s8EbL2==0.0){sm_ZCnIaBXRP8OlAGYngalzk1-=1;if(
sm_Og2sxa3XqWhyn7T1ZWNmX2){if(sm_ZCnIaBXRP8OlAGYngalzk1== -1)
sm_ZCnIaBXRP8OlAGYngalzk1=(int)sm_3ZjOyek6XuXbfopc7GGDI_-1;}else{if(
sm_ZCnIaBXRP8OlAGYngalzk1== -1){memcpy(sm__ITJ__bnj97yLKzZCBEPF1,
sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*sizeof(double));return
sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,sm_I_psHiHl8McOUtnQCxpRl_[
0],sm_I_psHiHl8McOUtnQCxpRl_[1]);}}}else{sm_ZCnIaBXRP8OlAGYngalzk1+=1;if(
sm_Og2sxa3XqWhyn7T1ZWNmX2){if(sm_ZCnIaBXRP8OlAGYngalzk1==(int)
sm_3ZjOyek6XuXbfopc7GGDI_)sm_ZCnIaBXRP8OlAGYngalzk1=0;}else{if(
sm_ZCnIaBXRP8OlAGYngalzk1==(int)sm_3ZjOyek6XuXbfopc7GGDI_){memcpy(
sm__ITJ__bnj97yLKzZCBEPF1,sm_L4kourKsn6flWrDZr5LRq0,sm_OxcgP1ypvBMlyQzEN_Uhj_*
sizeof(double));return sm_JDkngyjPQ7sPG0pYDlqR2_(sm_lTwLaihrq_UjPeq7s8EbL2,
sm_I_psHiHl8McOUtnQCxpRl_[sm_3ZjOyek6XuXbfopc7GGDI_-1],
sm_I_psHiHl8McOUtnQCxpRl_[sm_3ZjOyek6XuXbfopc7GGDI_]);}}}}}}return 0;}void
sm_core_math_validNormal(double*sm_iYSfpMOMY4AysbLk8SW6X_,const double*
sm_1rg5Osg1YqZjr7xO6cmlv0,const int sm_OxcgP1ypvBMlyQzEN_Uhj_){if(
sm_o68y6dNEA_SKx0VCUZvjd2(sm_iYSfpMOMY4AysbLk8SW6X_,sm_OxcgP1ypvBMlyQzEN_Uhj_)
<1e-14){if(sm_OxcgP1ypvBMlyQzEN_Uhj_==2){sm_iYSfpMOMY4AysbLk8SW6X_[0]= -
sm_1rg5Osg1YqZjr7xO6cmlv0[1];sm_iYSfpMOMY4AysbLk8SW6X_[1]=
sm_1rg5Osg1YqZjr7xO6cmlv0[0];}else{double sm_xqdtM4lkkjB0iPNEop6RN_[]={0.0,0.0
,0.0};int sm_ZWxU9MP1Jczw4_vLqemI41=01;if(fabs(sm_1rg5Osg1YqZjr7xO6cmlv0[0])>
fabs(sm_1rg5Osg1YqZjr7xO6cmlv0[1]))sm_ZWxU9MP1Jczw4_vLqemI41=1;if(fabs(
sm_1rg5Osg1YqZjr7xO6cmlv0[sm_ZWxU9MP1Jczw4_vLqemI41])>fabs(
sm_1rg5Osg1YqZjr7xO6cmlv0[2]))sm_ZWxU9MP1Jczw4_vLqemI41=2;
sm_xqdtM4lkkjB0iPNEop6RN_[sm_ZWxU9MP1Jczw4_vLqemI41]=1.0;
sm_j2lJXP7ms8PCfax_pTmWM1(sm_iYSfpMOMY4AysbLk8SW6X_,sm_1rg5Osg1YqZjr7xO6cmlv0,
sm_xqdtM4lkkjB0iPNEop6RN_);}}}
