/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MotoMINI_Model/Yaskawa Motomini/World/Solver Configuration'.
 */

#include "ne_std.h"
#include "pm_default_allocator.h"
#include "ne_dae.h"
#include "ne_solverparameters.h"
#include "sm_ssci_NeDaePrivateData.h"

NeDae *sm_ssci_constructDae(NeDaePrivateData *smData);
void MotoMINI_Model_a0f7e8cf_1_NeDaePrivateData_create(NeDaePrivateData *smData);
void MotoMINI_Model_a0f7e8cf_1_dae(
  NeDae **dae,
  const NeModelParameters *modelParams,
  const NeSolverParameters *solverParams)
{
  PmAllocator *alloc = pm_default_allocator();
  NeDaePrivateData *smData =
    (NeDaePrivateData *) alloc->mCallocFcn(alloc, sizeof(NeDaePrivateData), 1);
  (void) modelParams;
  (void) solverParams;
  MotoMINI_Model_a0f7e8cf_1_NeDaePrivateData_create(smData);
  *dae = sm_ssci_constructDae(smData);
}
