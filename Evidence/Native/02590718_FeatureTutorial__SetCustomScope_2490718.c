/* IL2CPP: FeatureTutorial$$SetCustomScope
void FeatureTutorial__SetCustomScope (FeatureTutorial_o* __this, VContainer_Unity_LifetimeScope_o* scope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FeatureTutorial$$SetCustomScope
   void FeatureTutorial__SetCustomScope (FeatureTutorial_o* __this,
   VContainer_Unity_LifetimeScope_o* scope, const MethodInfo* method); */

void FeatureTutorial__SetCustomScope_2490718(long param_1,long param_2)

{
  undefined4 uStack_24;
  
  if ((bRam0000000004f4ba66 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5eb0);
    bRam0000000004f4ba66 = 1;
  }
  if (param_2 != 0) {
    FUN_0235c744(*(undefined8 *)(param_2 + 0x50),&uStack_24,*(undefined8 *)PTR_DAT_049c5eb0);
    *(undefined4 *)(param_1 + 0xc0) = uStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

