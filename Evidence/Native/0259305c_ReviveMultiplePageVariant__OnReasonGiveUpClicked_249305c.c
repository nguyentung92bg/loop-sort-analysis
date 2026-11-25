/* IL2CPP: ReviveMultiplePageVariant$$OnReasonGiveUpClicked
void ReviveMultiplePageVariant__OnReasonGiveUpClicked (ReviveMultiplePageVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$OnReasonGiveUpClicked
   void ReviveMultiplePageVariant__OnReasonGiveUpClicked (ReviveMultiplePageVariant_o* __this, const
   MethodInfo* method); */

void ReviveMultiplePageVariant__OnReasonGiveUpClicked_249305c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_24;
  
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x99f4e89d,0);
  puVar1 = PTR_DAT_049b4540;
  if ((bRam0000000004f4ba87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4ba87 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uStack_24 = 0;
  lVar2 = FUN_021f04e4(*(undefined8 *)puVar1,1);
  if (*(long *)(param_1 + 0xd0) != 0) {
    uStack_24 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x1c);
    uVar3 = System_Int32__ToString_30fbaa0(&uStack_24,0);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_025927d0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_021f190c();
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                (uVar4,0x8bf4b3bd,lVar2,0);
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      lVar2 = FUN_021f04e4(*(undefined8 *)puVar1,1);
      if (*(long *)(param_1 + 0xd0) != 0) {
        uStack_24 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x1c);
        uVar3 = System_Int32__ToString_30fbaa0(&uStack_24,0);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) != 0) {
            *(undefined8 *)(lVar2 + 0x20) = uVar3;
            thunk_FUN_021f190c();
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                      (uVar4,0x8bf4b3bd,lVar2,0);
            return;
          }
          goto LAB_025927d0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

