/* IL2CPP: LosePopupVariant$$OnActivated
void LosePopupVariant__OnActivated (LosePopupVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LosePopupVariant$$OnActivated
   void LosePopupVariant__OnActivated (LosePopupVariant_o* __this, const MethodInfo* method); */

void LosePopupVariant__OnActivated_2491ac8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  int iStack_34;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4ba74 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c4230);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4ba74 = 1;
  }
  puVar3 = PTR_DAT_049b5310;
  puVar2 = PTR_DAT_049b4540;
  uStack_28 = 0;
  iStack_34 = 0;
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_02591c94;
  FUN_0235c744(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18),&iStack_24,
               *(undefined8 *)PTR_DAT_049c4230);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  if (iStack_24 == 1) {
    uVar7 = 0x2d6d469f;
LAB_02591b94:
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar7,0);
  }
  else if (iStack_24 == 2) {
    uVar7 = 0xcc73327c;
    goto LAB_02591b94;
  }
  lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,1);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574(lVar6);
    lVar6 = *(long *)puVar3;
  }
  iStack_34 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x60,0);
  iStack_34 = iStack_34 + 1;
  uVar5 = System_Int32__ToString_30fbaa0(&iStack_34,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    thunk_FUN_021f190c();
    StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
              (param_1,0x61f37587,lVar4,0);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar4 != 0)) {
      uVar7 = 3;
      if (iStack_24 == 1) {
        uVar7 = 4;
      }
      uVar1 = 5;
      if (iStack_24 != 2) {
        uVar1 = uVar7;
      }
      uStack_28 = ConstantSheetBase_object___GetInt_281c070
                            (lVar4,uVar1,*(undefined8 *)PTR_DAT_049c4228);
      uVar5 = System_Int32__ToString_30fbaa0(&uStack_28,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x78d4e5eb,uVar5,0)
      ;
      return;
    }
  }
LAB_02591c94:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

