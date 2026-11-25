/* IL2CPP: HomeMonitor$$RenderDebug
void HomeMonitor__RenderDebug (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$RenderDebug
   void HomeMonitor__RenderDebug (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__RenderDebug_2445d38(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4b87b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c4308);
    bRam0000000004f4b87b = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x34994e0d,0);
  if ((lVar1 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar1,0), lVar2 != 0))
  {
    uVar3 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar2,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_30 = TimeProvider__get_UtcNow_24f95ec(0);
      if (*(int *)(*(long *)PTR_DAT_049b44e8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5050);
      }
      uVar4 = System_DateTimeOffset__ToString_30e3768
                        (auStack_30,*(undefined8 *)PTR_DAT_049c4308,uVar4,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (lVar1,0xce1592a9,uVar4,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

