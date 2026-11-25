/* IL2CPP: RefillLivesMonitor$$Setup
void RefillLivesMonitor__Setup (RefillLivesMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RefillLivesMonitor$$Setup
   void RefillLivesMonitor__Setup (RefillLivesMonitor_o* __this, const MethodInfo* method); */

void RefillLivesMonitor__Setup_245bcfc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_049c4d10;
  puVar5 = PTR_DAT_049c4d08;
  puVar4 = PTR_DAT_049c4d00;
  puVar3 = PTR_DAT_049c4cf8;
  puVar2 = PTR_DAT_049c4cf0;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b916 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c4cf0);
    FUN_021f03f8(PTR_DAT_049c4cf8);
    FUN_021f03f8(PTR_DAT_049c4d00);
    FUN_021f03f8(PTR_DAT_049c4d08);
    FUN_021f03f8(PTR_DAT_049c4d18);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c4d10);
    bRam0000000004f4b916 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xc614fb00,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xf6f322b4,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x4c676fd6,uVar8,0);
  uStack_a0 = *(undefined8 *)puVar6;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  thunk_FUN_021f190c(&uStack_a0);
  uStack_90 = CONCAT44(uStack_90._4_4_,1);
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0xb8) + 0x30), lVar9 != 0)) {
    uVar7 = ConstantSheetBase_object___GetInt_281c070(lVar9,6,*(undefined8 *)PTR_DAT_049c4228);
    uStack_80 = CONCAT44(uVar7,(undefined4)uStack_80);
    func_0x04608620(param_1 + 0xe0,&uStack_a0,0x50);
    thunk_FUN_021f190c(param_1 + 0xe0,0);
    if (*(long *)(param_1 + 0xc0) != 0) {
      uVar8 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_049c4d18);
      *(undefined8 *)(param_1 + 0xd8) = uVar8;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0xd8),uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

