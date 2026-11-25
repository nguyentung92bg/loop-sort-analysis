/* IL2CPP: CarpetCarrierGroupV2.<ApplyRemoveDividerMotion>d__20$$MoveNext
void CarpetCarrierGroupV2__ApplyRemoveDividerMotion_d__20__MoveNext (CarpetCarrierGroupV2__ApplyRemoveDividerMotion_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2.<ApplyRemoveDividerMotion>d__20$$MoveNext
   void CarpetCarrierGroupV2__ApplyRemoveDividerMotion_d__20__MoveNext
   (CarpetCarrierGroupV2__ApplyRemoveDividerMotion_d__20_o __this, const MethodInfo* method); */

void CarpetCarrierGroupV2__ApplyRemoveDividerMotion_d__20__MoveNext_2407360(int *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  
  if ((bRam0000000004f4b6be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2830);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b6be = 1;
  }
  lVar6 = *(long *)(param_1 + 6);
  auStack_60._8_4_ = 0;
  auStack_70._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_70._0_8_ = 0;
  auVar10 = ZEXT816(0);
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [12])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar2 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 4),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = UnityEngine_Transform__GetChild_3c2f8bc(lVar2,0,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar1 = PTR_DAT_049bbf90;
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar7 = puVar5[3];
    uVar8 = puVar5[4];
    uVar9 = puVar5[5];
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
      puVar5 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    }
    auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar7,uVar8,uVar9,*puVar5,puVar5[1],puVar5[2],0x3e800000,0);
    auVar10 = FUN_024f4e50(auStack_70,0x19,*(undefined8 *)PTR_DAT_049c1680);
    auVar10 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar10._0_8_,auVar10._8_8_,uVar3,*(undefined8 *)PTR_DAT_049c1670);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar10 = Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,lVar6,0);
    auStack_60 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                           (auVar10._0_8_,auVar10._8_8_ & 0xffffffff,0);
    uVar4 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_60,0);
    puVar1 = PTR_DAT_049c2830;
    auVar10 = auStack_70;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      uVar3 = *(undefined8 *)puVar1;
      *(undefined1 (*) [12])(param_1 + 8) = auStack_60;
      FUN_0235c420(param_1 + 2,auStack_60,param_1,uVar3);
      return;
    }
  }
  auStack_70 = auVar10;
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_60,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar6 + 0x30) != 0) {
    PrefabModule__Return_2537164(*(long *)(lVar6 + 0x30),*(undefined8 *)(param_1 + 4),0);
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

