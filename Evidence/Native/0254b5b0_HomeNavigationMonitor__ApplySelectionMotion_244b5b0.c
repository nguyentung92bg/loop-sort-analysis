/* IL2CPP: HomeNavigationMonitor$$ApplySelectionMotion
void HomeNavigationMonitor__ApplySelectionMotion (HomeNavigationMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$ApplySelectionMotion
   void HomeNavigationMonitor__ApplySelectionMotion (HomeNavigationMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void HomeNavigationMonitor__ApplySelectionMotion_244b5b0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auStack_40 [16];
  
  puVar3 = PTR_DAT_049c45b0;
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b88e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    FUN_021f03f8(PTR_DAT_049c45b8);
    FUN_021f03f8(PTR_DAT_049c45b0);
    bRam0000000004f4b88e = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_024f75b8(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),1,0);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0xd117e814,0);
  if ((lVar6 != 0) &&
     (plVar7 = (long *)UnityEngine_Component__get_transform_3c18724(lVar6,0), lVar4 != 0)) {
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_049bc0c8;
      plVar1 = plVar7;
      if (*plVar7 != lVar6) {
        plVar1 = (long *)0x0;
      }
      *(long **)(lVar4 + 0x10) = plVar1;
      if (*plVar7 != lVar6) {
        plVar7 = (long *)0x0;
      }
    }
    thunk_FUN_021f190c(lVar4 + 0x10,plVar7);
    if (param_2 != 0) {
      plVar7 = (long *)UnityEngine_Component__get_transform_3c18724(param_2,0);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
      else {
        lVar6 = *(long *)PTR_DAT_049bc0c8;
        plVar1 = plVar7;
        if (*plVar7 != lVar6) {
          plVar1 = (long *)0x0;
        }
        *(long **)(lVar4 + 0x18) = plVar1;
        if (*plVar7 != lVar6) {
          plVar7 = (long *)0x0;
        }
      }
      thunk_FUN_021f190c(lVar4 + 0x18,plVar7);
      auStack_40 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3f000000,0);
      auVar9 = FUN_024f4e50(auStack_40,0x1a,*(undefined8 *)PTR_DAT_049c1358);
      auStack_40 = auVar9;
      uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar8,lVar4,*(undefined8 *)PTR_DAT_049c45b8,0);
      auVar10 = FUN_024f6d0c(auStack_40,uVar8,*(undefined8 *)PTR_DAT_049c20a8);
      *(undefined1 (*) [12])(param_1 + 0xa8) = auVar10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

