/* IL2CPP: BattlePassSubMonitor$$Render
void BattlePassSubMonitor__Render (BattlePassSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$Render
   void BattlePassSubMonitor__Render (BattlePassSubMonitor_o* __this, const MethodInfo* method); */

void BattlePassSubMonitor__Render_246dc20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b98e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b98e = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  SubMonitorBase__Render_248253c(param_1,0);
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x88), lVar3 != 0)) {
    uStack_40 = 10;
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar3,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
    puVar2 = PTR_DAT_049b5fc8;
    puVar1 = PTR_DAT_049b5050;
    if (lVar3 != 0) {
      uStack_68 = *(undefined8 *)(lVar3 + 0x40);
      uStack_70 = *(undefined8 *)(lVar3 + 0x38);
      uStack_58 = *(undefined8 *)(lVar3 + 0x50);
      uStack_60 = *(undefined8 *)(lVar3 + 0x48);
      uStack_48 = *(undefined8 *)(lVar3 + 0x60);
      uStack_50 = *(undefined8 *)(lVar3 + 0x58);
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049b5fa8);
      uStack_80 = CONCAT44(uStack_3c,uStack_40);
      uStack_78 = uStack_38;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar2 = PTR_DAT_049b6110;
      auVar7 = TimeProvider__get_UtcNow_24f95ec(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar1 = PTR_DAT_049b3b98;
      uVar4 = System_DateTimeOffset__Subtract_30e2d84(&uStack_80,auVar7._0_8_,auVar7._8_8_,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar2);
      }
      uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar4,0)
      ;
      uVar6 = *(undefined8 *)(param_1 + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x88),0),
           lVar3 == 0)) goto LAB_0256de2c;
        uVar5 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar3,0);
        if ((uVar5 & 1) != 0) {
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                    (*(undefined8 *)(param_1 + 0x88),0xce1592a9,uVar4,0);
        }
      }
      return;
    }
  }
LAB_0256de2c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

