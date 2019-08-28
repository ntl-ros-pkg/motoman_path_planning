#include "pm_std.h"
struct sm_hvK3bw18B3rv2Y2cObOXU2{size_t sm_iQHdtVCXMx80N476XkQRS0;size_t
sm_2fDLfFBw9acpeKhEeIdte2;real_T*sm_bSRXX7qJUaN0DIHWaaYhc2;};typedef struct
sm_hvK3bw18B3rv2Y2cObOXU2 sm_of0j3onauKvWjmSSvpIo_0;void
sm_core_SmRealVector_create(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n,real_T pm_rtvAiaZQgzgWqstgEIdKX1);void
sm_core_SmRealVector_copy(sm_of0j3onauKvWjmSSvpIo_0*sm_qZ_cQkm1rd_H40WuqsAhi1,
const sm_of0j3onauKvWjmSSvpIo_0*orig);void sm_core_SmRealVector_destroy(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_);int
sm_core_SmRealVector_isEmpty(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_);size_t sm_core_SmRealVector_size(const
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_);size_t
sm_core_SmRealVector_capacity(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_);real_T sm_core_SmRealVector_value(const
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_,size_t
sm_dYWQAHvQodwoJxkVJbvZO2);void sm_core_SmRealVector_setValue(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_,size_t
sm_dYWQAHvQodwoJxkVJbvZO2,real_T sm_RGllRMvIRPGkpbvuetJlO2);const real_T*
sm_core_SmRealVector_values(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_);real_T*sm_core_SmRealVector_nonConstValues(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_);void
sm_core_SmRealVector_reserve(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n);void sm_core_SmRealVector_clear(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_);void
sm_core_SmRealVector_pushBack(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,real_T pm_rtvAiaZQgzgWqstgEIdKX1);void
sm_core_SmRealVector_popBack(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_);
#include "string.h"
#include "pm_std.h"
#include "pm_std.h"
void sm_core_SmRealVector_create(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n,real_T pm_rtvAiaZQgzgWqstgEIdKX1){size_t
sm_SmSSPSQfR1qEYWsVj5ELF0;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
=n;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2=n;
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2=pmf_malloc(n*sizeof(
real_T));;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<n;++
sm_SmSSPSQfR1qEYWsVj5ELF0)sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2
[sm_SmSSPSQfR1qEYWsVj5ELF0]=pm_rtvAiaZQgzgWqstgEIdKX1;}void
sm_core_SmRealVector_copy(sm_of0j3onauKvWjmSSvpIo_0*sm_qZ_cQkm1rd_H40WuqsAhi1,
const sm_of0j3onauKvWjmSSvpIo_0*orig){const size_t n=orig->
sm_iQHdtVCXMx80N476XkQRS0;sm_qZ_cQkm1rd_H40WuqsAhi1->sm_iQHdtVCXMx80N476XkQRS0
=n;sm_qZ_cQkm1rd_H40WuqsAhi1->sm_2fDLfFBw9acpeKhEeIdte2=n;
sm_qZ_cQkm1rd_H40WuqsAhi1->sm_bSRXX7qJUaN0DIHWaaYhc2=pmf_malloc(n*sizeof(
real_T));;memcpy(sm_qZ_cQkm1rd_H40WuqsAhi1->sm_bSRXX7qJUaN0DIHWaaYhc2,orig->
sm_bSRXX7qJUaN0DIHWaaYhc2,n*sizeof(real_T));}void sm_core_SmRealVector_destroy
(sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_){
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0=0;
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2=0;pmf_free(
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2);}int
sm_core_SmRealVector_isEmpty(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_iQHdtVCXMx80N476XkQRS0==0;}size_t sm_core_SmRealVector_size(const
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0;}size_t
sm_core_SmRealVector_capacity(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_2fDLfFBw9acpeKhEeIdte2;}real_T sm_core_SmRealVector_value(const
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_,size_t
sm_dYWQAHvQodwoJxkVJbvZO2){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2[sm_dYWQAHvQodwoJxkVJbvZO2];}void
sm_core_SmRealVector_setValue(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t sm_dYWQAHvQodwoJxkVJbvZO2,real_T
sm_RGllRMvIRPGkpbvuetJlO2){sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2[sm_dYWQAHvQodwoJxkVJbvZO2]=sm_RGllRMvIRPGkpbvuetJlO2
;}const real_T*sm_core_SmRealVector_values(const sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2;}real_T*sm_core_SmRealVector_nonConstValues(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2;}void
sm_core_SmRealVector_reserve(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n){if(sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_2fDLfFBw9acpeKhEeIdte2<n){real_T*sm_pC15UDRXyW7bMZ_ommFGq1=pmf_malloc(n*
sizeof(real_T));;memcpy(sm_pC15UDRXyW7bMZ_ommFGq1,sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2,sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
*sizeof(real_T));pmf_free(sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2
);sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2=
sm_pC15UDRXyW7bMZ_ommFGq1;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2
=n;}}void sm_core_SmRealVector_clear(sm_of0j3onauKvWjmSSvpIo_0*
sm_9JsNfMLIQx0SlNuEaL4I2_){sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_iQHdtVCXMx80N476XkQRS0=0;}void sm_core_SmRealVector_pushBack(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_,real_T
pm_rtvAiaZQgzgWqstgEIdKX1){const size_t sm_OuiWx6HGnS_XnTkIy_oa__=
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0+1;if(
sm_OuiWx6HGnS_XnTkIy_oa__>sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2
){real_T*sm_pC15UDRXyW7bMZ_ommFGq1=NULL;size_t sm_QhRlilDnbvFG8lrXcVo4h1=1;
while((sm_QhRlilDnbvFG8lrXcVo4h1<sm_OuiWx6HGnS_XnTkIy_oa__)&&
sm_QhRlilDnbvFG8lrXcVo4h1)sm_QhRlilDnbvFG8lrXcVo4h1<<=1;;
sm_pC15UDRXyW7bMZ_ommFGq1=pmf_malloc(sm_QhRlilDnbvFG8lrXcVo4h1*sizeof(real_T))
;;memcpy(sm_pC15UDRXyW7bMZ_ommFGq1,sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2,sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
*sizeof(real_T));pmf_free(sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2
);sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2=
sm_pC15UDRXyW7bMZ_ommFGq1;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2
=sm_QhRlilDnbvFG8lrXcVo4h1;}sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2[sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
]=pm_rtvAiaZQgzgWqstgEIdKX1;++sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_iQHdtVCXMx80N476XkQRS0;}void sm_core_SmRealVector_popBack(
sm_of0j3onauKvWjmSSvpIo_0*sm_9JsNfMLIQx0SlNuEaL4I2_){;--
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0;}
