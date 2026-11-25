/* IL2CPP: AreasMonitor$$PlayComplete
void AreasMonitor__PlayComplete (AreasMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor$$PlayComplete
   void AreasMonitor__PlayComplete (AreasMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, float scale, const MethodInfo* method); */

void AreasMonitor__PlayComplete_24377ac(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b802 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b802 = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_64[0] = 0;
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar2 = PTR_DAT_049c1680;
  puVar1 = PTR_DAT_049bbf90;
  puVar5 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
    puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  }
  auStack_60 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar6,uVar7,uVar8,puVar5[3],puVar5[4],puVar5[5],_UNK_013aa8fc,0);
  auVar9 = FUN_024f4e50(auStack_60,0x1a,*(undefined8 *)puVar2);
  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                    (param_3,0xa35119b7,0);
  puVar1 = PTR_DAT_049c1670;
  if (lVar3 != 0) {
    uVar4 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0);
    LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
              (auVar9._0_8_,auVar9._8_8_,uVar4,*(undefined8 *)puVar1);
    if (param_3 != 0) {
      uVar4 = UnityEngine_Component__get_transform_3c18724(param_3,0);
      auStack_64[0] = AreasMonitor__PlayPop_2437934(param_1,param_2,uVar4);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_64,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

