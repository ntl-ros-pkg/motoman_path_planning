#include "pm_std.h"
#include "string.h"
#include "pm_std.h"
#include "pm_std.h"
struct sm_a5WBTUK9nYEG74z9YTnWu0{size_t sm_nfKN_BFd7V9ZFbcREUSXw2;unsigned char
*sm_JtYGiPy3uX25Hx7FtsA8F_;};typedef struct sm_a5WBTUK9nYEG74z9YTnWu0
sm_D6EnykkDVqMH_aYk_1DVt_;void sm_core_SmBoundedSet_create(
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61,size_t
sm_rE7h3o57m_fs92j7fKeEL2);void sm_core_SmBoundedSet_copy(
sm_D6EnykkDVqMH_aYk_1DVt_*sm_qZ_cQkm1rd_H40WuqsAhi1,const
sm_D6EnykkDVqMH_aYk_1DVt_*orig);void sm_core_SmBoundedSet_assign(
sm_D6EnykkDVqMH_aYk_1DVt_*dst,const sm_D6EnykkDVqMH_aYk_1DVt_*src);void
sm_core_SmBoundedSet_destroy(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61);size_t sm_core_SmBoundedSet_bound(const
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61);size_t
sm_core_SmBoundedSet_size(const sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61);boolean_T sm_core_SmBoundedSet_isMember(const
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61,size_t
sm_PMoj19AtRoOJbEKuPG4PB0);void sm_core_SmBoundedSet_clear(
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61);void
sm_core_SmBoundedSet_insert(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,size_t sm_PMoj19AtRoOJbEKuPG4PB0);void
sm_core_SmBoundedSet_remove(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,size_t sm_PMoj19AtRoOJbEKuPG4PB0);void
sm_core_SmBoundedSet_complement(const sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,sm_D6EnykkDVqMH_aYk_1DVt_*sm_DBUZKd4kan0N_IFiFzPyH0)
;void sm_core_SmBoundedSet_intersection(const sm_D6EnykkDVqMH_aYk_1DVt_*a,
const sm_D6EnykkDVqMH_aYk_1DVt_*b,sm_D6EnykkDVqMH_aYk_1DVt_*
sm_ojAHyVHgbHhAjmJFnG_l31);void sm_core_SmBoundedSet_union(const
sm_D6EnykkDVqMH_aYk_1DVt_*a,const sm_D6EnykkDVqMH_aYk_1DVt_*b,
sm_D6EnykkDVqMH_aYk_1DVt_*sm_ojAHyVHgbHhAjmJFnG_l31);void
sm_core_SmBoundedSet_difference(const sm_D6EnykkDVqMH_aYk_1DVt_*a,const
sm_D6EnykkDVqMH_aYk_1DVt_*b,sm_D6EnykkDVqMH_aYk_1DVt_*
sm_ojAHyVHgbHhAjmJFnG_l31);void sm_core_SmBoundedSet_create(
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61,size_t
sm_rE7h3o57m_fs92j7fKeEL2){size_t sm_SmSSPSQfR1qEYWsVj5ELF0;
sm_x_PcPj5qzQOXR2HkPeDt61->sm_nfKN_BFd7V9ZFbcREUSXw2=sm_rE7h3o57m_fs92j7fKeEL2
;sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_=pmf_malloc(
sm_rE7h3o57m_fs92j7fKeEL2*sizeof(unsigned char));;for(
sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<
sm_rE7h3o57m_fs92j7fKeEL2;++sm_SmSSPSQfR1qEYWsVj5ELF0)
sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0
]=0;}void sm_core_SmBoundedSet_copy(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_qZ_cQkm1rd_H40WuqsAhi1,const sm_D6EnykkDVqMH_aYk_1DVt_*orig){const size_t n
=orig->sm_nfKN_BFd7V9ZFbcREUSXw2;sm_qZ_cQkm1rd_H40WuqsAhi1->
sm_nfKN_BFd7V9ZFbcREUSXw2=n;sm_qZ_cQkm1rd_H40WuqsAhi1->
sm_JtYGiPy3uX25Hx7FtsA8F_=pmf_malloc(n*sizeof(unsigned char));;memcpy(
sm_qZ_cQkm1rd_H40WuqsAhi1->sm_JtYGiPy3uX25Hx7FtsA8F_,orig->
sm_JtYGiPy3uX25Hx7FtsA8F_,n*sizeof(unsigned char));}void
sm_core_SmBoundedSet_assign(sm_D6EnykkDVqMH_aYk_1DVt_*dst,const
sm_D6EnykkDVqMH_aYk_1DVt_*src){if(dst!=src){const size_t n=src->
sm_nfKN_BFd7V9ZFbcREUSXw2;;memcpy(dst->sm_JtYGiPy3uX25Hx7FtsA8F_,src->
sm_JtYGiPy3uX25Hx7FtsA8F_,n*sizeof(unsigned char));}}void
sm_core_SmBoundedSet_destroy(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61){pmf_free(sm_x_PcPj5qzQOXR2HkPeDt61->
sm_JtYGiPy3uX25Hx7FtsA8F_);sm_x_PcPj5qzQOXR2HkPeDt61->
sm_nfKN_BFd7V9ZFbcREUSXw2=0;}size_t sm_core_SmBoundedSet_bound(const
sm_D6EnykkDVqMH_aYk_1DVt_*sm_x_PcPj5qzQOXR2HkPeDt61){return
sm_x_PcPj5qzQOXR2HkPeDt61->sm_nfKN_BFd7V9ZFbcREUSXw2;}size_t
sm_core_SmBoundedSet_size(const sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61){size_t size=0;const unsigned char*
sm_UGxitLBTA3i7XvHRREsj32=sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_
,*sm_jcOSsrULtHDGKqSRz3gAT0=sm_UGxitLBTA3i7XvHRREsj32+
sm_x_PcPj5qzQOXR2HkPeDt61->sm_nfKN_BFd7V9ZFbcREUSXw2;for(;
sm_UGxitLBTA3i7XvHRREsj32<sm_jcOSsrULtHDGKqSRz3gAT0;++
sm_UGxitLBTA3i7XvHRREsj32)if(*sm_UGxitLBTA3i7XvHRREsj32!=0)++size;return size;
}boolean_T sm_core_SmBoundedSet_isMember(const sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,size_t sm_PMoj19AtRoOJbEKuPG4PB0){;return
sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_PMoj19AtRoOJbEKuPG4PB0
]!=0;}void sm_core_SmBoundedSet_clear(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61){unsigned char*sm_UGxitLBTA3i7XvHRREsj32=
sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_,*
sm_jcOSsrULtHDGKqSRz3gAT0=sm_UGxitLBTA3i7XvHRREsj32+sm_x_PcPj5qzQOXR2HkPeDt61
->sm_nfKN_BFd7V9ZFbcREUSXw2;while(sm_UGxitLBTA3i7XvHRREsj32<
sm_jcOSsrULtHDGKqSRz3gAT0)*sm_UGxitLBTA3i7XvHRREsj32++=0;}void
sm_core_SmBoundedSet_insert(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,size_t sm_PMoj19AtRoOJbEKuPG4PB0){;
sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_PMoj19AtRoOJbEKuPG4PB0
]=1;}void sm_core_SmBoundedSet_remove(sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,size_t sm_PMoj19AtRoOJbEKuPG4PB0){;
sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_PMoj19AtRoOJbEKuPG4PB0
]=0;}void sm_core_SmBoundedSet_complement(const sm_D6EnykkDVqMH_aYk_1DVt_*
sm_x_PcPj5qzQOXR2HkPeDt61,sm_D6EnykkDVqMH_aYk_1DVt_*sm_DBUZKd4kan0N_IFiFzPyH0)
{const size_t n=sm_x_PcPj5qzQOXR2HkPeDt61->sm_nfKN_BFd7V9ZFbcREUSXw2;size_t
sm_SmSSPSQfR1qEYWsVj5ELF0;;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<n;++sm_SmSSPSQfR1qEYWsVj5ELF0)
sm_DBUZKd4kan0N_IFiFzPyH0->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0
]=(sm_x_PcPj5qzQOXR2HkPeDt61->sm_JtYGiPy3uX25Hx7FtsA8F_[
sm_SmSSPSQfR1qEYWsVj5ELF0]==0?1:0);}void sm_core_SmBoundedSet_intersection(
const sm_D6EnykkDVqMH_aYk_1DVt_*a,const sm_D6EnykkDVqMH_aYk_1DVt_*b,
sm_D6EnykkDVqMH_aYk_1DVt_*sm_ojAHyVHgbHhAjmJFnG_l31){const size_t n=
sm_ojAHyVHgbHhAjmJFnG_l31->sm_nfKN_BFd7V9ZFbcREUSXw2;size_t
sm_SmSSPSQfR1qEYWsVj5ELF0;;;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<n;++sm_SmSSPSQfR1qEYWsVj5ELF0)
sm_ojAHyVHgbHhAjmJFnG_l31->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0
]=(a->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0]!=0&&b->
sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0]!=0)?1:0;}void
sm_core_SmBoundedSet_union(const sm_D6EnykkDVqMH_aYk_1DVt_*a,const
sm_D6EnykkDVqMH_aYk_1DVt_*b,sm_D6EnykkDVqMH_aYk_1DVt_*
sm_ojAHyVHgbHhAjmJFnG_l31){const size_t n=sm_ojAHyVHgbHhAjmJFnG_l31->
sm_nfKN_BFd7V9ZFbcREUSXw2;size_t sm_SmSSPSQfR1qEYWsVj5ELF0;;;for(
sm_SmSSPSQfR1qEYWsVj5ELF0=0;sm_SmSSPSQfR1qEYWsVj5ELF0<n;++
sm_SmSSPSQfR1qEYWsVj5ELF0)sm_ojAHyVHgbHhAjmJFnG_l31->sm_JtYGiPy3uX25Hx7FtsA8F_
[sm_SmSSPSQfR1qEYWsVj5ELF0]=(a->sm_JtYGiPy3uX25Hx7FtsA8F_[
sm_SmSSPSQfR1qEYWsVj5ELF0]!=0||b->sm_JtYGiPy3uX25Hx7FtsA8F_[
sm_SmSSPSQfR1qEYWsVj5ELF0]!=0)?1:0;}void sm_core_SmBoundedSet_difference(const
sm_D6EnykkDVqMH_aYk_1DVt_*a,const sm_D6EnykkDVqMH_aYk_1DVt_*b,
sm_D6EnykkDVqMH_aYk_1DVt_*sm_ojAHyVHgbHhAjmJFnG_l31){const size_t n=
sm_ojAHyVHgbHhAjmJFnG_l31->sm_nfKN_BFd7V9ZFbcREUSXw2;size_t
sm_SmSSPSQfR1qEYWsVj5ELF0;;;for(sm_SmSSPSQfR1qEYWsVj5ELF0=0;
sm_SmSSPSQfR1qEYWsVj5ELF0<n;++sm_SmSSPSQfR1qEYWsVj5ELF0)
sm_ojAHyVHgbHhAjmJFnG_l31->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0
]=(a->sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0]!=0&&b->
sm_JtYGiPy3uX25Hx7FtsA8F_[sm_SmSSPSQfR1qEYWsVj5ELF0]==0)?1:0;}
