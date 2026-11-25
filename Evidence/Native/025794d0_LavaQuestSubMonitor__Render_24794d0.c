/* IL2CPP: LavaQuestSubMonitor$$Render
void LavaQuestSubMonitor__Render (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$Render
   void LavaQuestSubMonitor__Render (LavaQuestSubMonitor_o* __this, const MethodInfo* method); */

void LavaQuestSubMonitor__Render_24794d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b9da & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9da = 1;
  }
  SubMonitorBase__Render_248253c(param_1,0);
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x80),0), lVar2 != 0
     )) {
    uVar3 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    puVar1 = PTR_DAT_049b5310;
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(lVar2 + 0xb8);
      uStack_68 = *(undefined8 *)(lVar2 + 0x678);
      uStack_70 = *(undefined8 *)(lVar2 + 0x670);
      uStack_58 = *(undefined8 *)(lVar2 + 0x688);
      uStack_60 = *(undefined8 *)(lVar2 + 0x680);
      uStack_48 = *(undefined8 *)(lVar2 + 0x698);
      uStack_50 = *(undefined8 *)(lVar2 + 0x690);
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar6 = TimeProvider__get_UtcNow_24f95ec(0);
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_DateTimeOffset__op_Subtraction_30e4594
                        (uStack_40,uStack_38,auVar6._0_8_,auVar6._8_8_,0);
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b6110);
      }
      uVar4 = Extensions__ToReadableString_24e7038(uVar4,2,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar5,0xce1592a9,uVar4,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

