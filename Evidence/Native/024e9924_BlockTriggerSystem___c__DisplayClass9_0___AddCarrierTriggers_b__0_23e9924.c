/* IL2CPP: BlockTriggerSystem.<>c__DisplayClass9_0$$<AddCarrierTriggers>b__0
void BlockTriggerSystem___c__DisplayClass9_0___AddCarrierTriggers_b__0 (BlockTriggerSystem___c__DisplayClass9_0_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTriggerSystem.<>c__DisplayClass9_0$$<AddCarrierTriggers>b__0
   void BlockTriggerSystem___c__DisplayClass9_0___AddCarrierTriggers_b__0
   (BlockTriggerSystem___c__DisplayClass9_0_o* __this, Block_o* block, const MethodInfo* method); */

void BlockTriggerSystem___c__DisplayClass9_0___AddCarrierTriggers_b__0_23e9924
               (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4b612 & 1) == 0) {
                    /* try { // try from 024e994c to 025e9a2f has its CatchHandler @ 024e994c
                       catch() { ... } // from try @ 024e994c with catch @ 024e994c
                       catch() { ... } // from try @ 024e9e84 with catch @ 024e994c
                       catch() { ... } // from try @ 024e9ecc with catch @ 024e994c
                       catch() { ... } // from try @ 024e9ef0 with catch @ 024e994c */
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b612 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  lStack_38 = 0;
  if (param_2 == 0) goto LAB_024e9aac;
  plVar3 = *(long **)(param_2 + 0x100);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
    if (plVar3 != (long *)0x0) goto LAB_024e99bc;
LAB_024e99e0:
    plVar3 = (long *)0x0;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_024e99e0;
LAB_024e99bc:
    if (*plVar3 != *(long *)PTR_DAT_049c1c78) {
      plVar3 = (long *)0x0;
    }
  }
  uVar1 = UnityEngine_Object__op_Equality_3c1eeb4(plVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar2 == 0)) {
LAB_024e9aac:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar1 = SandFlowSystem__DrivesIntake_24ce56c(lVar2,param_2,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 024e9a30 to 025e9a33 has its CatchHandler @ 024e9c14 */
      auStack_30 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                             (&lStack_38,*(undefined8 *)PTR_DAT_049c14c8);
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(lStack_38,param_2,*(undefined8 *)PTR_DAT_049c1c80);
                    /* try { // try from 024e9a6c to 025e9a77 has its CatchHandler @ 024e9c20 */
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      BlockTransferSystem__HandleCarrierTrigger_23e7118
                (lVar2,*(undefined8 *)(param_1 + 0x10),lStack_38);
                    /* try { // try from 024e9a98 to 025e9a9f has its CatchHandler @ 024e9bfc */
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (auStack_30,*(undefined8 *)PTR_DAT_049c14f8);
    }
  }
  return;
}

