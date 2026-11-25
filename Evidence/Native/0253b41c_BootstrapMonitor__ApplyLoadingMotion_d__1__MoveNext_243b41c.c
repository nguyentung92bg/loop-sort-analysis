/* IL2CPP: BootstrapMonitor.<ApplyLoadingMotion>d__1$$MoveNext
void BootstrapMonitor__ApplyLoadingMotion_d__1__MoveNext (BootstrapMonitor__ApplyLoadingMotion_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BootstrapMonitor.<ApplyLoadingMotion>d__1$$MoveNext
   void BootstrapMonitor__ApplyLoadingMotion_d__1__MoveNext
   (BootstrapMonitor__ApplyLoadingMotion_d__1_o __this, const MethodInfo* method); */

void BootstrapMonitor__ApplyLoadingMotion_d__1__MoveNext_243b41c(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  
  if ((bRam0000000004f4b81a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3d20);
    FUN_021f03f8(PTR_DAT_049c2d60);
    FUN_021f03f8(PTR_DAT_049c3d28);
    bRam0000000004f4b81a = 1;
  }
  auStack_40._8_4_ = 0;
  auStack_50._8_8_ = 0;
  auStack_40._0_8_ = 0;
  auStack_50._0_8_ = 0;
  if (*param_1 == 0) {
    auStack_40 = *(undefined1 (*) [12])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_40 = *(undefined1 (*) [12])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      *param_1 = -1;
      auStack_50 = ZEXT816(0);
      goto LAB_0253b63c;
    }
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (*(long *)(param_1 + 6),0x85f8a9cf,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar4,0);
    piVar6 = param_1 + 8;
    *(undefined8 *)piVar6 = uVar2;
    thunk_FUN_021f190c(piVar6);
    iVar8 = UnityEngine_Random__Range_3c11c54(_UNK_013aa810,0x3f000000,0);
    param_1[10] = iVar8;
    param_1[0xb] = 0x3f800000;
    auVar10 = LitMotion_LMotion__Create_2eaa148(0,0x3f800000,iVar8,0x3f800000,_UNK_013aa62c,0);
    auVar10 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                        (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)piVar6,
                         *(undefined8 *)PTR_DAT_049c2d60);
    auStack_40 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                           (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,0);
    uVar5 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_40,0);
    puVar1 = PTR_DAT_049c3d20;
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      uVar2 = *(undefined8 *)puVar1;
      *(undefined1 (*) [12])(param_1 + 0xc) = auStack_40;
      FUN_0235c25c(param_1 + 2,auStack_40,param_1,uVar2);
      return;
    }
  }
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_40,0);
  iVar8 = param_1[10];
  iVar9 = param_1[0xb];
  if (cRam0000000004f4a194 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a194 = '\x01';
  }
  auStack_50 = LitMotion_LMotion__Create_2eaa148
                         (iVar8,iVar9,
                          *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 8),
                          *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0xc),
                          _UNK_013aa838,0);
  auVar10 = FUN_024f6e90(_UNK_013aa810,auStack_50,0,1,*(undefined8 *)PTR_DAT_049c3d28);
  auVar10 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchorMax___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266657c
                      (auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(param_1 + 8),
                       *(undefined8 *)PTR_DAT_049c2d60);
  auVar11 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                      (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,0);
  auStack_40 = auVar11;
  uVar5 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_40,0);
  puVar1 = PTR_DAT_049c3d20;
  if ((uVar5 & 1) == 0) {
    *param_1 = 1;
    uVar2 = *(undefined8 *)puVar1;
    *(undefined1 (*) [12])(param_1 + 0xc) = auStack_40;
    FUN_0235c25c(param_1 + 2,auStack_40,param_1,uVar2);
    return;
  }
LAB_0253b63c:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_40,0);
  *param_1 = -2;
  piVar6 = param_1 + 8;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_021f190c(piVar6,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0253b74c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049b56d0,2);
LAB_0253b74c:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  return;
}

