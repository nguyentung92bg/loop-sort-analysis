/* IL2CPP: ReviveMultiplePageVariant$$OnActivated
void ReviveMultiplePageVariant__OnActivated (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$OnActivated
   void ReviveMultiplePageVariant__OnActivated (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

void ReviveMultiplePageVariant__OnActivated_24924c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_28;
  
  if ((bRam0000000004f4ba7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c3d40);
    FUN_021f03f8(PTR_DAT_049c5f88);
    FUN_021f03f8(PTR_DAT_049c5f90);
    FUN_021f03f8(PTR_DAT_049c5f98);
    bRam0000000004f4ba7d = 1;
  }
  puVar1 = PTR_DAT_049c5f88;
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x18);
    FUN_0235c744(uVar3,&lStack_28,*(undefined8 *)PTR_DAT_049c3d40);
    lVar4 = lStack_28;
    FUN_0235c744(uVar3,&lStack_28,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(lVar4 + 0x118);
      puVar2 = PTR_DAT_049c5f90;
      puVar1 = PTR_DAT_049c2f50;
      if (lStack_28 != 0) {
        uVar3 = ReviveSystem__GetRevive_24e0f1c(lStack_28,0);
        *(undefined8 *)(param_1 + 0xd0) = uVar3;
        thunk_FUN_021f190c();
        ReviveMultiplePageVariant__SetReasonState_2492608(param_1);
        ReviveMultiplePageVariant__SetRevivePriceTexts_24926b8(param_1);
        ReviveMultiplePageVariant__UpdateContinueResultView_24927d4(param_1);
        lVar4 = *(long *)(param_1 + 0x80);
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar3,param_1,*(undefined8 *)puVar2,0);
        if (lVar4 != 0) {
          PurchasingModule__AddPurchaseListener_254a360
                    (lVar4,*(undefined8 *)PTR_DAT_049c5f98,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

