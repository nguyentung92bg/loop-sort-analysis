/* IL2CPP: UIMotionExtensions$$ApplyPunch
LitMotion_MotionHandle_o UIMotionExtensions__ApplyPunch (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UIMotionExtensions$$ApplyPunch
   LitMotion_MotionHandle_o UIMotionExtensions__ApplyPunch
   (StatefulUI_Runtime_Core_StatefulComponent_o* view, int32_t role, const MethodInfo* method); */

void UIMotionExtensions__ApplyPunch_24129f4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000004f4b72d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1f78);
    bRam0000000004f4b72d = 1;
  }
  lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (param_4,param_5,0);
  if ((lVar2 != 0) &&
     (lVar2 = UnityEngine_Component__get_transform_3c18724(lVar2,0), puVar1 = PTR_DAT_049c1f78,
     lVar2 != 0)) {
    uVar3 = UnityEngine_Transform__get_localScale_3c2dd20(lVar2,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
    auVar5 = LitMotion_LMotion_Punch__Create_2eaa764
                       (uVar3,param_2,param_3,(float)uVar4 * 0.05,
                        (float)((ulong)uVar4 >> 0x20) * 0.05,
                        *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14) *
                        _UNK_013aa698,_UNK_013aa838,0);
    auVar5 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                       (auVar5._0_8_,auVar5._8_8_,lVar2,*(undefined8 *)puVar1);
    LitMotion_MotionHandleExtensions__AddTo_2eace68
              (auVar5._0_8_,auVar5._8_8_ & 0xffffffff,param_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

