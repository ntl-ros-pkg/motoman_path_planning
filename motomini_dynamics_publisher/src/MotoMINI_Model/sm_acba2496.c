#include "pm_std.h"
#include "math.h"
#include "string.h"
#include "pm_std.h"
#include "pm_std.h"
void pm_math_lin_alg_vectorAdd(uint32_T n,const double*
sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_AnS7Y4euB5dEkvfZmgB7x_);void pm_math_lin_alg_vectorSubtract(uint32_T n,
const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,
double*sm_t4xP2dw1g2qcI2WS3WOWv2);void pm_math_lin_alg_vectorScale(uint32_T n,
double sm_hCXUd_x6pbKZfXtyKXEw82,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double
*sm_A0Gw49pVZ44sTgTR2FoSa0);void pm_math_lin_alg_vectorNegate(uint32_T n,const
double*sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_FjEGK4Yh1T1DadpMtzyNA2);void
pm_math_lin_alg_matrixAssignStrided(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,uint32_T sm_K6hhrEhA_gu92sixyASz9_,uint32_T
sm_TMxMXv8G8wvxO_2ArARuB2,const double*sm_cO3HQ5aG_1XgD1aeQvO8f2,double*
sm_BOXZTEAmCrs_EsW1Z7QvC0);void pm_math_lin_alg_matrixTransposeAdd(uint32_T n,
const double*sm__lerGssn0Ru_r3kSOzEmI_,double*sm_cO3HQ5aG_1XgD1aeQvO8f2);void
pm_math_lin_alg_matrixTransposeSubtract(uint32_T n,const double*
sm__lerGssn0Ru_r3kSOzEmI_,double*sm_BOXZTEAmCrs_EsW1Z7QvC0);void
pm_math_lin_alg_matrixMultiply(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double*sm_CH6pya__frGySt3NjsQiR2);void
pm_math_lin_alg_matrixMultiplyStrided(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,uint32_T
sm_oRtU12lxPI9p86iLr20Wu1,uint32_T sm_Lje4oCI77ASLCC9n82IsE2,uint32_T
sm_D2vRJwh0s8uz3B1o7tRAi0,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
sm_8ksqc0VFHLjSHzNxXK8mN0,double*sm_CH6pya__frGySt3NjsQiR2);void
pm_math_lin_alg_scaleColumns(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,
const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,
double*sm_OafkXLmtGNgUqnqTklvAg0);void pm_math_lin_alg_scaleRows(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void
pm_math_lin_alg_inverseScaleColumns(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_OafkXLmtGNgUqnqTklvAg0);void
pm_math_lin_alg_inverseScaleRows(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n
,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82
,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void pm_math_lin_alg_zeroMajor(uint32_T
sm_DV7YBJJlUNSKUIDO6d5hs2,uint32_T sm_FaviyjjzftiMthrDLL7b_1,const int32_T*
sm_1OA72Ccil1N0vbkmvAJe61,double*sm__lerGssn0Ru_r3kSOzEmI_);void
pm_math_lin_alg_matrixVectorMultiply(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_gyGYov8P2mGIOhM9NpVPE1);void pm_math_lin_alg_matrixVectorMultiplyStrided(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T
sm_gG1tYC_1A6mUTedK5sOsQ0,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
x,double*sm_gyGYov8P2mGIOhM9NpVPE1);void
pm_math_lin_alg_matrixTransposeVectorMultiply(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_zyXK_Uxc8J0BqXOhyd0xg0);void
pm_math_lin_alg_addMatrixVectorProduct(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2);void pm_math_lin_alg_addMatrixVectorProductStrided(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T
sm_gG1tYC_1A6mUTedK5sOsQ0,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
x,double*sm_ET9_5EAP116KvP5KVqsrD2);void
pm_math_lin_alg_subtractMatrixVectorProduct(uint32_T sm_gN74BbsU5wqNjkJbC9b672
,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2);void
pm_math_lin_alg_subtractMatrixVectorProductStrided(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T sm_gG1tYC_1A6mUTedK5sOsQ0,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2);double pm_math_lin_alg_computeQuadraticTerm(
uint32_T n,const double*sm_0Ku4r8_UTD6dwsQGuIlz31,const double*
sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1);void
pm_math_lin_alg_qrFactor(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,real_T*
sm__lerGssn0Ru_r3kSOzEmI_,real_T*sm_VTF2UfH8BZtl6UY_DYsxe1,int32_T*
sm_faz4xAO7ZxLl721PFFQIb0,real_T*sm_9vzhxzKknmyaJetRZA1K51);uint32_T
pm_math_lin_alg_getRankWithTol(const real_T*sm_2kRUucGwF8yJYVACAVBqN2,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,real_T sm_IkYq7838pFkQD4JuAdSut_);
boolean_T pm_math_lin_alg_qrSolveTall(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const real_T*sm_2kRUucGwF8yJYVACAVBqN2,const real_T*
sm_VTF2UfH8BZtl6UY_DYsxe1,int32_T*sm_faz4xAO7ZxLl721PFFQIb0,real_T
sm_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*sm_Xv9d_slQCAr3irmgYeei12);int32_T
pm_math_lin_alg_qrSolveWide(const uint32_T sm_gN74BbsU5wqNjkJbC9b672,const
uint32_T n,const real_T*sm_2kRUucGwF8yJYVACAVBqN2,const real_T*
sm_VTF2UfH8BZtl6UY_DYsxe1,const int32_T*sm_faz4xAO7ZxLl721PFFQIb0,const real_T
*b,real_T sm_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*x);real_T
pm_math_lin_alg_conditionReciprocal(const real_T*sm_H_x9C_RWhh5ee8MQ_IvEz_,
uint32_T n,boolean_T sm__7OyLfBGo_60hGnDytO361,real_T*
sm_9vzhxzKknmyaJetRZA1K51);boolean_T pm_math_lin_alg_choleskyFactor(real_T*
sm__lerGssn0Ru_r3kSOzEmI_,uint32_T n);void pm_math_lin_alg_choleskySolve(const
real_T*sm_gzASVCMt38HYDpND3My9f_,const real_T*b,uint32_T n,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51);void pm_math_lin_alg_svd(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm__lerGssn0Ru_r3kSOzEmI_,
boolean_T sm_pYeaw9ht8_MRr3T6BNXOB1,real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T*
sm_ks8rkpJYX5jHaEJjD6Z6h1,real_T*sm_UlTac2Z5H9S91rOURuT4m0,real_T*
sm_9vzhxzKknmyaJetRZA1K51);uint32_T pm_math_lin_alg_svdReqdWorkSize(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,boolean_T sm_pYeaw9ht8_MRr3T6BNXOB1);void
pm_math_lin_alg_svdSolve(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
real_T*sm__lerGssn0Ru_r3kSOzEmI_,const real_T*b,real_T
sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*sm_9vzhxzKknmyaJetRZA1K51);uint32_T
pm_math_lin_alg_svdSolveReqdWorkSize(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n);uint32_T pm_math_lin_alg_svdSolveFromFactorization(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,
const real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*sm_UlTac2Z5H9S91rOURuT4m0,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51);uint32_T
pm_math_lin_alg_svdSolveFromFactorizationReqdWorkSize(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n);uint32_T pm_math_lin_alg_svdSolveAdaptive
(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm__lerGssn0Ru_r3kSOzEmI_,const real_T*b,real_T sm_AZMMoVNU_IeEDJKiLcG2D0,
real_T sm_Rh_GtlCU7J8H97cD19CC42,real_T sm_AfqiaL7OA2tOLr5kkjLhp_,real_T*x,
real_T*sm_9vzhxzKknmyaJetRZA1K51);uint32_T
pm_math_lin_alg_svdSolveAdaptiveReqdWorkSize(uint32_T sm_gN74BbsU5wqNjkJbC9b672
,uint32_T n);uint32_T pm_math_lin_alg_svdComputeRank(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,
real_T sm_FFiFFl4qNXAaa0hIGGTsF1);void pm_math_lin_alg_geSolve2x2(const real_T
sm__lerGssn0Ru_r3kSOzEmI_[4],const real_T b[2],real_T x[2]);void vectorAdd(
uint32_T n,const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double*
sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_AnS7Y4euB5dEkvfZmgB7x_);void
vectorAddDynamicSize(uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T n,const double
*sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_AnS7Y4euB5dEkvfZmgB7x_);void vectorSubtract(uint32_T n,const double*
sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_t4xP2dw1g2qcI2WS3WOWv2);void vectorSubtractDynamicSize(uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T n,const double*sm_MJ6HaMWdyRxHm3p_EZiD41,
const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_t4xP2dw1g2qcI2WS3WOWv2);void
vectorScale(uint32_T n,double sm_hCXUd_x6pbKZfXtyKXEw82,const double*
sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_A0Gw49pVZ44sTgTR2FoSa0);void vectorNegate(
uint32_T n,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_FjEGK4Yh1T1DadpMtzyNA2);void submatrixAssign(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T sm_Jqn4Ono7Vy_o_nUE5UJrs_,
uint32_T sm_K6hhrEhA_gu92sixyASz9_,uint32_T sm_VfCL5itVbJ_MjeB8ykexf2,uint32_T
sm_TMxMXv8G8wvxO_2ArARuB2,const double*sm_cO3HQ5aG_1XgD1aeQvO8f2,double*
sm_BOXZTEAmCrs_EsW1Z7QvC0);void submatrixAssignDynamicSize(uint32_T
sm_Fay7johiHhFcxQ9f4b1l42,uint32_T sm_Zp_FDS3IlaW5a6TNAQRg_1,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T sm_Jqn4Ono7Vy_o_nUE5UJrs_,
uint32_T sm_K6hhrEhA_gu92sixyASz9_,uint32_T sm_VfCL5itVbJ_MjeB8ykexf2,uint32_T
sm_TMxMXv8G8wvxO_2ArARuB2,const double*sm_cO3HQ5aG_1XgD1aeQvO8f2,double*
sm_BOXZTEAmCrs_EsW1Z7QvC0);void matrixTransposeAdd(uint32_T n,const double*
sm__lerGssn0Ru_r3kSOzEmI_,double*sm_cO3HQ5aG_1XgD1aeQvO8f2);void
matrixTransposeSubtract(uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
double*sm_BOXZTEAmCrs_EsW1Z7QvC0);void shiftColumns(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T sm_FydyRMXW9M9hzTCiU6Zd1_,const
double*sm__lerGssn0Ru_r3kSOzEmI_,double*sm_cO3HQ5aG_1XgD1aeQvO8f2);void
shiftColumnsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,
uint32_T sm_FydyRMXW9M9hzTCiU6Zd1_,const double*sm__lerGssn0Ru_r3kSOzEmI_,
double*sm_cO3HQ5aG_1XgD1aeQvO8f2);void scaleColumns(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void
scaleColumnsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0);void inverseScaleColumns(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void
inverseScaleColumnsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0);void scaleRows(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void
scaleRowsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0);void inverseScaleRows(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0);void
inverseScaleRowsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0);void zeroMajor(uint32_T sm_DV7YBJJlUNSKUIDO6d5hs2,
uint32_T sm_FaviyjjzftiMthrDLL7b_1,const int32_T*sm_1OA72Ccil1N0vbkmvAJe61,
double*sm__lerGssn0Ru_r3kSOzEmI_);void matrixMultiply(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double
*sm_CH6pya__frGySt3NjsQiR2);void matrixMultiplyDynamicSize(uint32_T
sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_sUvbcMozWfirKhTNNvm342,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double*sm_CH6pya__frGySt3NjsQiR2);void
matrixMultiplyStrided(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,uint32_T sm_oRtU12lxPI9p86iLr20Wu1,
uint32_T sm_Lje4oCI77ASLCC9n82IsE2,uint32_T sm_D2vRJwh0s8uz3B1o7tRAi0,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double
*sm_CH6pya__frGySt3NjsQiR2);void matrixMultiplyStridedDynamicSize(uint32_T
sm_sUvbcMozWfirKhTNNvm342,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_ydvfyixRWL_FLjLPJhg8E2,uint32_T sm_FKciiYSqFLLoPJDkK7oJT2,uint32_T
sm_b6ztNbSInDaRt31NXN4uh0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,uint32_T sm_oRtU12lxPI9p86iLr20Wu1,
uint32_T sm_Lje4oCI77ASLCC9n82IsE2,uint32_T sm_D2vRJwh0s8uz3B1o7tRAi0,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double
*sm_CH6pya__frGySt3NjsQiR2);void matrixVectorMultiply(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_gyGYov8P2mGIOhM9NpVPE1);void
matrixVectorMultiplyDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_gyGYov8P2mGIOhM9NpVPE1);void matrixTransposeVectorMultiply(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_zyXK_Uxc8J0BqXOhyd0xg0);void
matrixTransposeVectorMultiplyDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_zyXK_Uxc8J0BqXOhyd0xg0);void addMatrixVectorProduct(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_ET9_5EAP116KvP5KVqsrD2);void
addMatrixVectorProductDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2);void subtractMatrixVectorProduct(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_ET9_5EAP116KvP5KVqsrD2);void
subtractMatrixVectorProductDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2);double computeQuadraticTerm(uint32_T n,const double
*sm_0Ku4r8_UTD6dwsQGuIlz31,const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double
*sm_ljExW6hRw43Vg4SLQUAvT1);void geSolve2x2(const real_T
sm__lerGssn0Ru_r3kSOzEmI_[4],const real_T b[2],real_T x[2]);int32_T
factorSymmetricPosDef(real_T*sm__lerGssn0Ru_r3kSOzEmI_,uint32_T n,real_T*
sm_9vzhxzKknmyaJetRZA1K51);void solveSymmetricPosDef(const real_T*
sm__lerGssn0Ru_r3kSOzEmI_,const real_T*b,uint32_T n,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,real_T*x,real_T*sm_9vzhxzKknmyaJetRZA1K51);void
factorAndSolveSymmetric(real_T*sm__lerGssn0Ru_r3kSOzEmI_,uint32_T n,double*
sm_c9xWOtG_j7CJH_7S0Nm28_,int32_T*sm_kJ9syFBdQZFKg1_MtLtf00,const real_T*b,
real_T*x,real_T*sm_9vzhxzKknmyaJetRZA1K51);void factorAndSolveWide(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,real_T*sm__lerGssn0Ru_r3kSOzEmI_,real_T*
sm_VTF2UfH8BZtl6UY_DYsxe1,real_T*sm_9vzhxzKknmyaJetRZA1K51,int32_T*
sm_faz4xAO7ZxLl721PFFQIb0,const real_T*b,real_T sm_dP1Ztx7BuYQ1rmxh9DNmV1,
real_T*x);void svd(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm__lerGssn0Ru_r3kSOzEmI_,boolean_T sm_pYeaw9ht8_MRr3T6BNXOB1,real_T*
sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,real_T*
sm_UlTac2Z5H9S91rOURuT4m0,real_T*sm_9vzhxzKknmyaJetRZA1K51);void svdDynamicSize
(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm__lerGssn0Ru_r3kSOzEmI_,boolean_T sm_pYeaw9ht8_MRr3T6BNXOB1,real_T*
sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,real_T*
sm_UlTac2Z5H9S91rOURuT4m0,real_T*sm_9vzhxzKknmyaJetRZA1K51);uint32_T
svdComputeRank(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T sm_FFiFFl4qNXAaa0hIGGTsF1);void svdSolve(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm__lerGssn0Ru_r3kSOzEmI_,const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,
real_T*x,real_T*sm_9vzhxzKknmyaJetRZA1K51);void svdSolveDynamicSize(uint32_T
sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm__lerGssn0Ru_r3kSOzEmI_,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51);uint32_T svdSolveFromFactorization(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,
const real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*sm_UlTac2Z5H9S91rOURuT4m0,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51);uint32_T svdSolveFromFactorizationDynamicSize(
uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,
const real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*sm_UlTac2Z5H9S91rOURuT4m0,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51);void vectorAdd(uint32_T n,const double*
sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_AnS7Y4euB5dEkvfZmgB7x_){pm_math_lin_alg_vectorAdd(n,
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_ljExW6hRw43Vg4SLQUAvT1,sm_AnS7Y4euB5dEkvfZmgB7x_)
;}void vectorAddDynamicSize(uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T n,
const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,
double*sm_AnS7Y4euB5dEkvfZmgB7x_){pm_math_lin_alg_vectorAdd(n,
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_ljExW6hRw43Vg4SLQUAvT1,sm_AnS7Y4euB5dEkvfZmgB7x_)
;}void vectorSubtract(uint32_T n,const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const
double*sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_t4xP2dw1g2qcI2WS3WOWv2){
pm_math_lin_alg_vectorSubtract(n,sm_MJ6HaMWdyRxHm3p_EZiD41,
sm_ljExW6hRw43Vg4SLQUAvT1,sm_t4xP2dw1g2qcI2WS3WOWv2);}void
vectorSubtractDynamicSize(uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T n,const
double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double
*sm_t4xP2dw1g2qcI2WS3WOWv2){pm_math_lin_alg_vectorSubtract(n,
sm_MJ6HaMWdyRxHm3p_EZiD41,sm_ljExW6hRw43Vg4SLQUAvT1,sm_t4xP2dw1g2qcI2WS3WOWv2)
;}void vectorScale(uint32_T n,double sm_hCXUd_x6pbKZfXtyKXEw82,const double*
sm_ljExW6hRw43Vg4SLQUAvT1,double*sm_A0Gw49pVZ44sTgTR2FoSa0){
pm_math_lin_alg_vectorScale(n,sm_hCXUd_x6pbKZfXtyKXEw82,
sm_ljExW6hRw43Vg4SLQUAvT1,sm_A0Gw49pVZ44sTgTR2FoSa0);}void vectorNegate(
uint32_T n,const double*sm_ljExW6hRw43Vg4SLQUAvT1,double*
sm_FjEGK4Yh1T1DadpMtzyNA2){pm_math_lin_alg_vectorNegate(n,
sm_ljExW6hRw43Vg4SLQUAvT1,sm_FjEGK4Yh1T1DadpMtzyNA2);}void submatrixAssign(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T
sm_Jqn4Ono7Vy_o_nUE5UJrs_,uint32_T sm_K6hhrEhA_gu92sixyASz9_,uint32_T
sm_VfCL5itVbJ_MjeB8ykexf2,uint32_T sm_TMxMXv8G8wvxO_2ArARuB2,const double*
sm_cO3HQ5aG_1XgD1aeQvO8f2,double*sm_BOXZTEAmCrs_EsW1Z7QvC0){
pm_math_lin_alg_matrixAssignStrided(sm_gN74BbsU5wqNjkJbC9b672,n,
sm_K6hhrEhA_gu92sixyASz9_,sm_TMxMXv8G8wvxO_2ArARuB2,sm_cO3HQ5aG_1XgD1aeQvO8f2+
sm_Jqn4Ono7Vy_o_nUE5UJrs_,sm_BOXZTEAmCrs_EsW1Z7QvC0+sm_VfCL5itVbJ_MjeB8ykexf2)
;}void submatrixAssignDynamicSize(uint32_T sm_Fay7johiHhFcxQ9f4b1l42,uint32_T
sm_Zp_FDS3IlaW5a6TNAQRg_1,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,
uint32_T sm_Jqn4Ono7Vy_o_nUE5UJrs_,uint32_T sm_K6hhrEhA_gu92sixyASz9_,uint32_T
sm_VfCL5itVbJ_MjeB8ykexf2,uint32_T sm_TMxMXv8G8wvxO_2ArARuB2,const double*
sm_cO3HQ5aG_1XgD1aeQvO8f2,double*sm_BOXZTEAmCrs_EsW1Z7QvC0){
pm_math_lin_alg_matrixAssignStrided(sm_gN74BbsU5wqNjkJbC9b672,n,
sm_K6hhrEhA_gu92sixyASz9_,sm_TMxMXv8G8wvxO_2ArARuB2,sm_cO3HQ5aG_1XgD1aeQvO8f2+
sm_Jqn4Ono7Vy_o_nUE5UJrs_,sm_BOXZTEAmCrs_EsW1Z7QvC0+sm_VfCL5itVbJ_MjeB8ykexf2)
;}void matrixTransposeAdd(uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
double*sm_cO3HQ5aG_1XgD1aeQvO8f2){pm_math_lin_alg_matrixTransposeAdd(n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_cO3HQ5aG_1XgD1aeQvO8f2);}void
matrixTransposeSubtract(uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
double*sm_BOXZTEAmCrs_EsW1Z7QvC0){pm_math_lin_alg_matrixTransposeSubtract(n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_BOXZTEAmCrs_EsW1Z7QvC0);}void shiftColumns(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T
sm_FydyRMXW9M9hzTCiU6Zd1_,const double*sm__lerGssn0Ru_r3kSOzEmI_,double*
sm_cO3HQ5aG_1XgD1aeQvO8f2){memcpy(sm_cO3HQ5aG_1XgD1aeQvO8f2,
sm__lerGssn0Ru_r3kSOzEmI_+sm_gN74BbsU5wqNjkJbC9b672*(n-
sm_FydyRMXW9M9hzTCiU6Zd1_),sm_gN74BbsU5wqNjkJbC9b672*sm_FydyRMXW9M9hzTCiU6Zd1_
*sizeof(double));}void shiftColumnsDynamicSize(uint32_T
sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,uint32_T sm_FydyRMXW9M9hzTCiU6Zd1_,const
double*sm__lerGssn0Ru_r3kSOzEmI_,double*sm_cO3HQ5aG_1XgD1aeQvO8f2){memcpy(
sm_cO3HQ5aG_1XgD1aeQvO8f2,sm__lerGssn0Ru_r3kSOzEmI_+sm_gN74BbsU5wqNjkJbC9b672*
(n-sm_FydyRMXW9M9hzTCiU6Zd1_),sm_gN74BbsU5wqNjkJbC9b672*
sm_FydyRMXW9M9hzTCiU6Zd1_*sizeof(double));}void scaleColumns(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0){
pm_math_lin_alg_scaleColumns(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0)
;}void scaleColumnsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_scaleColumns(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void inverseScaleColumns
(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*
sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*
sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_inverseScaleColumns(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void
inverseScaleColumnsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_inverseScaleColumns(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void scaleRows(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*sm_Qv4f3RDdS3UGiYP5nAnWY0){
pm_math_lin_alg_scaleRows(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0)
;}void scaleRowsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_scaleRows(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void inverseScaleRows(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*
sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double*
sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_inverseScaleRows(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void
inverseScaleRowsDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_hCXUd_x6pbKZfXtyKXEw82,double
*sm_Qv4f3RDdS3UGiYP5nAnWY0){pm_math_lin_alg_inverseScaleRows(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_hCXUd_x6pbKZfXtyKXEw82,sm_Qv4f3RDdS3UGiYP5nAnWY0);}void zeroMajor(uint32_T
sm_DV7YBJJlUNSKUIDO6d5hs2,uint32_T sm_FaviyjjzftiMthrDLL7b_1,const int32_T*
sm_1OA72Ccil1N0vbkmvAJe61,double*sm__lerGssn0Ru_r3kSOzEmI_){
pm_math_lin_alg_zeroMajor(sm_DV7YBJJlUNSKUIDO6d5hs2,sm_FaviyjjzftiMthrDLL7b_1,
sm_1OA72Ccil1N0vbkmvAJe61,sm__lerGssn0Ru_r3kSOzEmI_);}void matrixMultiply(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T
n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
sm_8ksqc0VFHLjSHzNxXK8mN0,double*sm_CH6pya__frGySt3NjsQiR2){
pm_math_lin_alg_matrixMultiply(sm_gN74BbsU5wqNjkJbC9b672,
sm_PIqWtbzrbQqv_KS_31HnE2,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_8ksqc0VFHLjSHzNxXK8mN0,sm_CH6pya__frGySt3NjsQiR2);}void
matrixMultiplyDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_sUvbcMozWfirKhTNNvm342,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double
*sm_CH6pya__frGySt3NjsQiR2){pm_math_lin_alg_matrixMultiply(
sm_gN74BbsU5wqNjkJbC9b672,sm_PIqWtbzrbQqv_KS_31HnE2,n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_8ksqc0VFHLjSHzNxXK8mN0,sm_CH6pya__frGySt3NjsQiR2)
;}void matrixMultiplyStrided(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,uint32_T sm_oRtU12lxPI9p86iLr20Wu1,
uint32_T sm_Lje4oCI77ASLCC9n82IsE2,uint32_T sm_D2vRJwh0s8uz3B1o7tRAi0,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*sm_8ksqc0VFHLjSHzNxXK8mN0,double
*sm_CH6pya__frGySt3NjsQiR2){pm_math_lin_alg_matrixMultiplyStrided(
sm_gN74BbsU5wqNjkJbC9b672,sm_PIqWtbzrbQqv_KS_31HnE2,n,
sm_oRtU12lxPI9p86iLr20Wu1,sm_Lje4oCI77ASLCC9n82IsE2,sm_D2vRJwh0s8uz3B1o7tRAi0,
sm__lerGssn0Ru_r3kSOzEmI_,sm_8ksqc0VFHLjSHzNxXK8mN0,sm_CH6pya__frGySt3NjsQiR2)
;}void matrixMultiplyStridedDynamicSize(uint32_T sm_sUvbcMozWfirKhTNNvm342,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_ydvfyixRWL_FLjLPJhg8E2,uint32_T
sm_FKciiYSqFLLoPJDkK7oJT2,uint32_T sm_b6ztNbSInDaRt31NXN4uh0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,uint32_T n,
uint32_T sm_oRtU12lxPI9p86iLr20Wu1,uint32_T sm_Lje4oCI77ASLCC9n82IsE2,uint32_T
sm_D2vRJwh0s8uz3B1o7tRAi0,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*
sm_8ksqc0VFHLjSHzNxXK8mN0,double*sm_CH6pya__frGySt3NjsQiR2){
pm_math_lin_alg_matrixMultiplyStrided(sm_gN74BbsU5wqNjkJbC9b672,
sm_PIqWtbzrbQqv_KS_31HnE2,n,sm_oRtU12lxPI9p86iLr20Wu1,
sm_Lje4oCI77ASLCC9n82IsE2,sm_D2vRJwh0s8uz3B1o7tRAi0,sm__lerGssn0Ru_r3kSOzEmI_,
sm_8ksqc0VFHLjSHzNxXK8mN0,sm_CH6pya__frGySt3NjsQiR2);}void matrixVectorMultiply
(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*
sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*sm_gyGYov8P2mGIOhM9NpVPE1){
pm_math_lin_alg_matrixVectorMultiply(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,x,sm_gyGYov8P2mGIOhM9NpVPE1);}void
matrixVectorMultiplyDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_gyGYov8P2mGIOhM9NpVPE1){pm_math_lin_alg_matrixVectorMultiply(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,x,
sm_gyGYov8P2mGIOhM9NpVPE1);}void matrixTransposeVectorMultiply(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_zyXK_Uxc8J0BqXOhyd0xg0){
pm_math_lin_alg_matrixTransposeVectorMultiply(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,x,sm_zyXK_Uxc8J0BqXOhyd0xg0);}void
matrixTransposeVectorMultiplyDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_zyXK_Uxc8J0BqXOhyd0xg0){pm_math_lin_alg_matrixTransposeVectorMultiply(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,x,
sm_zyXK_Uxc8J0BqXOhyd0xg0);}void addMatrixVectorProduct(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_ET9_5EAP116KvP5KVqsrD2){
pm_math_lin_alg_addMatrixVectorProduct(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,x,sm_ET9_5EAP116KvP5KVqsrD2);}void
addMatrixVectorProductDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2){pm_math_lin_alg_addMatrixVectorProduct(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,x,
sm_ET9_5EAP116KvP5KVqsrD2);}void subtractMatrixVectorProduct(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const double*sm__lerGssn0Ru_r3kSOzEmI_,
const double*x,double*sm_ET9_5EAP116KvP5KVqsrD2){
pm_math_lin_alg_subtractMatrixVectorProduct(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,x,sm_ET9_5EAP116KvP5KVqsrD2);}void
subtractMatrixVectorProductDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
n,const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*x,double*
sm_ET9_5EAP116KvP5KVqsrD2){pm_math_lin_alg_subtractMatrixVectorProduct(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,x,
sm_ET9_5EAP116KvP5KVqsrD2);}double computeQuadraticTerm(uint32_T n,const double
*sm_0Ku4r8_UTD6dwsQGuIlz31,const double*sm_MJ6HaMWdyRxHm3p_EZiD41,const double
*sm_ljExW6hRw43Vg4SLQUAvT1){return pm_math_lin_alg_computeQuadraticTerm(n,
sm_0Ku4r8_UTD6dwsQGuIlz31,sm_MJ6HaMWdyRxHm3p_EZiD41,sm_ljExW6hRw43Vg4SLQUAvT1)
;}void geSolve2x2(const real_T sm__lerGssn0Ru_r3kSOzEmI_[4],const real_T b[2],
real_T x[2]){pm_math_lin_alg_geSolve2x2(sm__lerGssn0Ru_r3kSOzEmI_,b,x);}const
double sm_bxROe6FotWdDmaaFduARn1=1.0e-15;int32_T factorSymmetricPosDef(real_T*
sm__lerGssn0Ru_r3kSOzEmI_,uint32_T n,real_T*sm_9vzhxzKknmyaJetRZA1K51){int32_T
sm_Qz8LrkkuYhWcGpSZDUx291=0;if(n<=1){sm_Qz8LrkkuYhWcGpSZDUx291=(n==1&&*
sm__lerGssn0Ru_r3kSOzEmI_<=0.0)?1:0;}else{sm_Qz8LrkkuYhWcGpSZDUx291=
pm_math_lin_alg_choleskyFactor(sm__lerGssn0Ru_r3kSOzEmI_,n)?1:0;if(
sm_Qz8LrkkuYhWcGpSZDUx291==0){real_T sm_upNcMrQsKYD5uBygWq2j31=
pm_math_lin_alg_conditionReciprocal(sm__lerGssn0Ru_r3kSOzEmI_,n,true,
sm_9vzhxzKknmyaJetRZA1K51);sm_upNcMrQsKYD5uBygWq2j31*=
sm_upNcMrQsKYD5uBygWq2j31;sm_Qz8LrkkuYhWcGpSZDUx291=(sm_upNcMrQsKYD5uBygWq2j31
>sm_bxROe6FotWdDmaaFduARn1)?0:1;}}return sm_Qz8LrkkuYhWcGpSZDUx291;}void
solveSymmetricPosDef(const double*sm__lerGssn0Ru_r3kSOzEmI_,const double*b,
uint32_T n,uint32_T sm_PIqWtbzrbQqv_KS_31HnE2,double*x,double*
sm_9vzhxzKknmyaJetRZA1K51){;if(sm_PIqWtbzrbQqv_KS_31HnE2==1){if(n<=1){if(n==1)
*x= *b/ *sm__lerGssn0Ru_r3kSOzEmI_;}else pm_math_lin_alg_choleskySolve(
sm__lerGssn0Ru_r3kSOzEmI_,b,n,x,sm_9vzhxzKknmyaJetRZA1K51);}else{uint32_T
pm_wOc1JAYSv_gXX9xk1sd2n0=0;if(n<=1){if(n==1)for(pm_wOc1JAYSv_gXX9xk1sd2n0=0;
pm_wOc1JAYSv_gXX9xk1sd2n0<sm_PIqWtbzrbQqv_KS_31HnE2;++
pm_wOc1JAYSv_gXX9xk1sd2n0)*x++= *b++/ *sm__lerGssn0Ru_r3kSOzEmI_;}else{for(
pm_wOc1JAYSv_gXX9xk1sd2n0=0;pm_wOc1JAYSv_gXX9xk1sd2n0<
sm_PIqWtbzrbQqv_KS_31HnE2;++pm_wOc1JAYSv_gXX9xk1sd2n0)
pm_math_lin_alg_choleskySolve(sm__lerGssn0Ru_r3kSOzEmI_,b+
pm_wOc1JAYSv_gXX9xk1sd2n0*n,n,x+pm_wOc1JAYSv_gXX9xk1sd2n0*n,
sm_9vzhxzKknmyaJetRZA1K51);}}}void factorAndSolveSymmetric(real_T*
sm__lerGssn0Ru_r3kSOzEmI_,uint32_T n,double*sm_c9xWOtG_j7CJH_7S0Nm28_,int32_T*
sm_kJ9syFBdQZFKg1_MtLtf00,const real_T*b,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51){if(n==0)return;if(n==1){*x=(*
sm__lerGssn0Ru_r3kSOzEmI_==0.0)?0.0:(*b/ *sm__lerGssn0Ru_r3kSOzEmI_);}else{
real_T*sm_w27seuxhGAYvaT_Vy_oN61=sm_9vzhxzKknmyaJetRZA1K51+n;memcpy(
sm_w27seuxhGAYvaT_Vy_oN61,sm__lerGssn0Ru_r3kSOzEmI_,n*n*sizeof(real_T));if(!
pm_math_lin_alg_choleskyFactor(sm__lerGssn0Ru_r3kSOzEmI_,n)){real_T
sm_upNcMrQsKYD5uBygWq2j31=pm_math_lin_alg_conditionReciprocal(
sm__lerGssn0Ru_r3kSOzEmI_,n,true,sm_9vzhxzKknmyaJetRZA1K51);
sm_upNcMrQsKYD5uBygWq2j31*=sm_upNcMrQsKYD5uBygWq2j31;if(
sm_upNcMrQsKYD5uBygWq2j31>1.0e-14){pm_math_lin_alg_choleskySolve(
sm__lerGssn0Ru_r3kSOzEmI_,b,n,x,sm_9vzhxzKknmyaJetRZA1K51);return;}}memcpy(
sm__lerGssn0Ru_r3kSOzEmI_,sm_w27seuxhGAYvaT_Vy_oN61,n*n*sizeof(real_T));memset
(sm_kJ9syFBdQZFKg1_MtLtf00,0,n*sizeof(int32_T));pm_math_lin_alg_qrFactor(n,n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_c9xWOtG_j7CJH_7S0Nm28_,sm_kJ9syFBdQZFKg1_MtLtf00,
sm_9vzhxzKknmyaJetRZA1K51);memcpy(x,b,n*sizeof(real_T));{const real_T
sm_J3XDJQkNLHKgxabxfiiXJ2=1.0e-12;const boolean_T sm_LM4QrhMTKlY9rwNF3VnPP_=
pm_math_lin_alg_qrSolveTall(n,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_c9xWOtG_j7CJH_7S0Nm28_,sm_kJ9syFBdQZFKg1_MtLtf00,sm_J3XDJQkNLHKgxabxfiiXJ2,
x);}}}void factorAndSolveWide(uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,
real_T*sm__lerGssn0Ru_r3kSOzEmI_,real_T*sm_VTF2UfH8BZtl6UY_DYsxe1,real_T*
sm_9vzhxzKknmyaJetRZA1K51,int32_T*sm_faz4xAO7ZxLl721PFFQIb0,const real_T*b,
real_T sm_dP1Ztx7BuYQ1rmxh9DNmV1,real_T*x){memset(sm_faz4xAO7ZxLl721PFFQIb0,0,
sm_gN74BbsU5wqNjkJbC9b672*sizeof(int32_T));pm_math_lin_alg_qrFactor(n,
sm_gN74BbsU5wqNjkJbC9b672,sm__lerGssn0Ru_r3kSOzEmI_,sm_VTF2UfH8BZtl6UY_DYsxe1,
sm_faz4xAO7ZxLl721PFFQIb0,sm_9vzhxzKknmyaJetRZA1K51);{const uint32_T
sm_J7wvUCOubReyruqv_pmIZ1=pm_math_lin_alg_qrSolveWide(
sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_VTF2UfH8BZtl6UY_DYsxe1,sm_faz4xAO7ZxLl721PFFQIb0,b,
sm_dP1Ztx7BuYQ1rmxh9DNmV1,x);}}void svd(uint32_T sm_gN74BbsU5wqNjkJbC9b672,
uint32_T n,const real_T*sm__lerGssn0Ru_r3kSOzEmI_,boolean_T
sm_pYeaw9ht8_MRr3T6BNXOB1,real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T*
sm_ks8rkpJYX5jHaEJjD6Z6h1,real_T*sm_UlTac2Z5H9S91rOURuT4m0,real_T*
sm_9vzhxzKknmyaJetRZA1K51){pm_math_lin_alg_svd(sm_gN74BbsU5wqNjkJbC9b672,n,
sm__lerGssn0Ru_r3kSOzEmI_,sm_pYeaw9ht8_MRr3T6BNXOB1,sm_K0gZ8TBTw_LtEwnLW5cJB1,
sm_ks8rkpJYX5jHaEJjD6Z6h1,sm_UlTac2Z5H9S91rOURuT4m0,sm_9vzhxzKknmyaJetRZA1K51)
;}void svdDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T
sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const
real_T*sm__lerGssn0Ru_r3kSOzEmI_,boolean_T sm_pYeaw9ht8_MRr3T6BNXOB1,real_T*
sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,real_T*
sm_UlTac2Z5H9S91rOURuT4m0,real_T*sm_9vzhxzKknmyaJetRZA1K51){
pm_math_lin_alg_svd(sm_gN74BbsU5wqNjkJbC9b672,n,sm__lerGssn0Ru_r3kSOzEmI_,
sm_pYeaw9ht8_MRr3T6BNXOB1,sm_K0gZ8TBTw_LtEwnLW5cJB1,sm_ks8rkpJYX5jHaEJjD6Z6h1,
sm_UlTac2Z5H9S91rOURuT4m0,sm_9vzhxzKknmyaJetRZA1K51);}uint32_T svdComputeRank(
uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*
sm_K0gZ8TBTw_LtEwnLW5cJB1,real_T sm_FFiFFl4qNXAaa0hIGGTsF1){return
pm_math_lin_alg_svdComputeRank(sm_gN74BbsU5wqNjkJbC9b672,n,
sm_K0gZ8TBTw_LtEwnLW5cJB1,sm_FFiFFl4qNXAaa0hIGGTsF1);}void svdSolve(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm__lerGssn0Ru_r3kSOzEmI_,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51){pm_math_lin_alg_svdSolve(sm_gN74BbsU5wqNjkJbC9b672,
n,sm__lerGssn0Ru_r3kSOzEmI_,b,sm_FFiFFl4qNXAaa0hIGGTsF1,x,
sm_9vzhxzKknmyaJetRZA1K51);}void svdSolveDynamicSize(uint32_T
sm_SzmEZ_tsIZbC0CNG_D0et_,uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm__lerGssn0Ru_r3kSOzEmI_,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51){pm_math_lin_alg_svdSolve(sm_gN74BbsU5wqNjkJbC9b672,
n,sm__lerGssn0Ru_r3kSOzEmI_,b,sm_FFiFFl4qNXAaa0hIGGTsF1,x,
sm_9vzhxzKknmyaJetRZA1K51);}uint32_T svdSolveFromFactorization(uint32_T
sm_gN74BbsU5wqNjkJbC9b672,uint32_T n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,
const real_T*sm_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*sm_UlTac2Z5H9S91rOURuT4m0,
const real_T*b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*
sm_9vzhxzKknmyaJetRZA1K51){return pm_math_lin_alg_svdSolveFromFactorization(
sm_gN74BbsU5wqNjkJbC9b672,n,sm_K0gZ8TBTw_LtEwnLW5cJB1,
sm_ks8rkpJYX5jHaEJjD6Z6h1,sm_UlTac2Z5H9S91rOURuT4m0,b,
sm_FFiFFl4qNXAaa0hIGGTsF1,x,sm_9vzhxzKknmyaJetRZA1K51);}uint32_T
svdSolveFromFactorizationDynamicSize(uint32_T sm_SzmEZ_tsIZbC0CNG_D0et_,
uint32_T sm_2MwvuLyK54RghRNiRAiTJ0,uint32_T sm_gN74BbsU5wqNjkJbC9b672,uint32_T
n,const real_T*sm_K0gZ8TBTw_LtEwnLW5cJB1,const real_T*
sm_ks8rkpJYX5jHaEJjD6Z6h1,const real_T*sm_UlTac2Z5H9S91rOURuT4m0,const real_T*
b,real_T sm_FFiFFl4qNXAaa0hIGGTsF1,real_T*x,real_T*sm_9vzhxzKknmyaJetRZA1K51){
return pm_math_lin_alg_svdSolveFromFactorization(sm_gN74BbsU5wqNjkJbC9b672,n,
sm_K0gZ8TBTw_LtEwnLW5cJB1,sm_ks8rkpJYX5jHaEJjD6Z6h1,sm_UlTac2Z5H9S91rOURuT4m0,
b,sm_FFiFFl4qNXAaa0hIGGTsF1,x,sm_9vzhxzKknmyaJetRZA1K51);}
