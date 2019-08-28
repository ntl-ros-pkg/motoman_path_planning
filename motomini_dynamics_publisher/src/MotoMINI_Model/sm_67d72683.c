#include "pm_std.h"
struct sm_j_FWBKmbnmV3od4rfZskI1{size_t sm_iQHdtVCXMx80N476XkQRS0;size_t
sm_2fDLfFBw9acpeKhEeIdte2;int*sm_bSRXX7qJUaN0DIHWaaYhc2;};typedef struct
sm_j_FWBKmbnmV3od4rfZskI1 sm_TQdu2_64syNDZrv6nUEbg2;void
sm_core_SmIntVector_create(sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_
,size_t n,int pm_rtvAiaZQgzgWqstgEIdKX1);void sm_core_SmIntVector_copy(
sm_TQdu2_64syNDZrv6nUEbg2*sm_qZ_cQkm1rd_H40WuqsAhi1,const
sm_TQdu2_64syNDZrv6nUEbg2*orig);void sm_core_SmIntVector_destroy(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_);int
sm_core_SmIntVector_isEmpty(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_);size_t sm_core_SmIntVector_size(const
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_);size_t
sm_core_SmIntVector_capacity(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_);int sm_core_SmIntVector_value(const
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_,size_t
sm_dYWQAHvQodwoJxkVJbvZO2);void sm_core_SmIntVector_setValue(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_,size_t
sm_dYWQAHvQodwoJxkVJbvZO2,int sm_RGllRMvIRPGkpbvuetJlO2);const int*
sm_core_SmIntVector_values(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_);int*sm_core_SmIntVector_nonConstValues(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_);void
sm_core_SmIntVector_reserve(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n);void sm_core_SmIntVector_clear(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_);void
sm_core_SmIntVector_pushBack(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,int pm_rtvAiaZQgzgWqstgEIdKX1);void
sm_core_SmIntVector_popBack(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_);
#include "string.h"
#include "pm_std.h"
#include "pm_std.h"
void sm_core_SmIntVector_create(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n,int pm_rtvAiaZQgzgWqstgEIdKX1){size_t
sm_SmSSPSQfR1qEYWsVj5ELF0;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
=n;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2=n;
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2=pmf_malloc(n*sizeof(int))
;;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<n;++
sm_SmSSPSQfR1qEYWsVj5ELF0)sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2
[sm_SmSSPSQfR1qEYWsVj5ELF0]=pm_rtvAiaZQgzgWqstgEIdKX1;}void
sm_core_SmIntVector_copy(sm_TQdu2_64syNDZrv6nUEbg2*sm_qZ_cQkm1rd_H40WuqsAhi1,
const sm_TQdu2_64syNDZrv6nUEbg2*orig){const size_t n=orig->
sm_iQHdtVCXMx80N476XkQRS0;sm_qZ_cQkm1rd_H40WuqsAhi1->sm_iQHdtVCXMx80N476XkQRS0
=n;sm_qZ_cQkm1rd_H40WuqsAhi1->sm_2fDLfFBw9acpeKhEeIdte2=n;
sm_qZ_cQkm1rd_H40WuqsAhi1->sm_bSRXX7qJUaN0DIHWaaYhc2=pmf_malloc(n*sizeof(int))
;;memcpy(sm_qZ_cQkm1rd_H40WuqsAhi1->sm_bSRXX7qJUaN0DIHWaaYhc2,orig->
sm_bSRXX7qJUaN0DIHWaaYhc2,n*sizeof(int));}void sm_core_SmIntVector_destroy(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_){sm_9JsNfMLIQx0SlNuEaL4I2_
->sm_iQHdtVCXMx80N476XkQRS0=0;sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_2fDLfFBw9acpeKhEeIdte2=0;pmf_free(sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2);}int sm_core_SmIntVector_isEmpty(const
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0==0;}size_t
sm_core_SmIntVector_size(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_iQHdtVCXMx80N476XkQRS0;}size_t sm_core_SmIntVector_capacity(const
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2;}int
sm_core_SmIntVector_value(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t sm_dYWQAHvQodwoJxkVJbvZO2){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2[sm_dYWQAHvQodwoJxkVJbvZO2
];}void sm_core_SmIntVector_setValue(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t sm_dYWQAHvQodwoJxkVJbvZO2,int
sm_RGllRMvIRPGkpbvuetJlO2){sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2[sm_dYWQAHvQodwoJxkVJbvZO2]=sm_RGllRMvIRPGkpbvuetJlO2
;}const int*sm_core_SmIntVector_values(const sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_){return sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2;}int*sm_core_SmIntVector_nonConstValues(
sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_){return
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2;}void
sm_core_SmIntVector_reserve(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,size_t n){if(sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_2fDLfFBw9acpeKhEeIdte2<n){int*sm_pC15UDRXyW7bMZ_ommFGq1=pmf_malloc(n*sizeof
(int));;memcpy(sm_pC15UDRXyW7bMZ_ommFGq1,sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2,sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
*sizeof(int));pmf_free(sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2);
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2=sm_pC15UDRXyW7bMZ_ommFGq1
;sm_9JsNfMLIQx0SlNuEaL4I2_->sm_2fDLfFBw9acpeKhEeIdte2=n;}}void
sm_core_SmIntVector_clear(sm_TQdu2_64syNDZrv6nUEbg2*sm_9JsNfMLIQx0SlNuEaL4I2_)
{sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0=0;}void
sm_core_SmIntVector_pushBack(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_,int pm_rtvAiaZQgzgWqstgEIdKX1){const size_t
sm_OuiWx6HGnS_XnTkIy_oa__=sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0
+1;if(sm_OuiWx6HGnS_XnTkIy_oa__>sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_2fDLfFBw9acpeKhEeIdte2){int*sm_pC15UDRXyW7bMZ_ommFGq1=NULL;size_t
sm_QhRlilDnbvFG8lrXcVo4h1=1;while((sm_QhRlilDnbvFG8lrXcVo4h1<
sm_OuiWx6HGnS_XnTkIy_oa__)&&sm_QhRlilDnbvFG8lrXcVo4h1)
sm_QhRlilDnbvFG8lrXcVo4h1<<=1;;sm_pC15UDRXyW7bMZ_ommFGq1=pmf_malloc(
sm_QhRlilDnbvFG8lrXcVo4h1*sizeof(int));;memcpy(sm_pC15UDRXyW7bMZ_ommFGq1,
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2,sm_9JsNfMLIQx0SlNuEaL4I2_
->sm_iQHdtVCXMx80N476XkQRS0*sizeof(int));pmf_free(sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2);sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_bSRXX7qJUaN0DIHWaaYhc2=sm_pC15UDRXyW7bMZ_ommFGq1;sm_9JsNfMLIQx0SlNuEaL4I2_
->sm_2fDLfFBw9acpeKhEeIdte2=sm_QhRlilDnbvFG8lrXcVo4h1;}
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_bSRXX7qJUaN0DIHWaaYhc2[sm_9JsNfMLIQx0SlNuEaL4I2_
->sm_iQHdtVCXMx80N476XkQRS0]=pm_rtvAiaZQgzgWqstgEIdKX1;++
sm_9JsNfMLIQx0SlNuEaL4I2_->sm_iQHdtVCXMx80N476XkQRS0;}void
sm_core_SmIntVector_popBack(sm_TQdu2_64syNDZrv6nUEbg2*
sm_9JsNfMLIQx0SlNuEaL4I2_){;--sm_9JsNfMLIQx0SlNuEaL4I2_->
sm_iQHdtVCXMx80N476XkQRS0;}
