/* IL2CPP: Block$$ApplyJumpMotion
LitMotion_MotionHandle_o Block__ApplyJumpMotion (Block_o* __this, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o toPosition, UnityEngine_Quaternion_o fromRotation, UnityEngine_Quaternion_o toRotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Block$$ApplyJumpMotion
   LitMotion_MotionHandle_o Block__ApplyJumpMotion (Block_o* __this, UnityEngine_Vector3_o
   fromPosition, UnityEngine_Vector3_o toPosition, UnityEngine_Quaternion_o fromRotation,
   UnityEngine_Quaternion_o toRotation, const MethodInfo* method); */

void Block__ApplyJumpMotion_23dbc6c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined1 auStack_90 [16];
  
  puVar3 = PTR_DAT_049c1360;
  puVar2 = PTR_DAT_049c1358;
  if ((bRam0000000004f4b5b5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1368);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1370);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1378);
    FUN_021f03f8(PTR_DAT_049c1360);
    bRam0000000004f4b5b5 = 1;
  }
  *(undefined4 *)(param_7 + 0xcc) = uStack0000000000000008;
  *(undefined4 *)(param_7 + 0xd0) = uStack000000000000000c;
  fVar1 = _UNK_013aa8f4;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  *(undefined4 *)(param_7 + 0xac) = param_1;
  *(undefined4 *)(param_7 + 0xb0) = param_2;
  *(undefined4 *)(param_7 + 0xb4) = param_3;
  *(undefined4 *)(param_7 + 0xb8) = param_4;
  *(undefined4 *)(param_7 + 0xbc) = param_5;
  *(undefined4 *)(param_7 + 0xc0) = param_6;
  *(undefined4 *)(param_7 + 0xc4) = uStack0000000000000000;
  *(undefined4 *)(param_7 + 200) = uStack0000000000000004;
  *(undefined4 *)(param_7 + 0xd4) = uStack0000000000000010;
  *(undefined4 *)(param_7 + 0xd8) = uStack0000000000000014;
  *(undefined4 *)(param_7 + 0xdc) = uStack0000000000000018;
  *(undefined4 *)(param_7 + 0xe0) = uStack000000000000001c;
  auStack_90 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,*(float *)(param_7 + 0xf8) * fVar1,0);
  auVar10 = FUN_024f4e50(auStack_90,3,*(undefined8 *)puVar2);
  lVar5 = *(long *)puVar3;
  auStack_90 = auVar10;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_049c1370;
  puVar2 = PTR_DAT_049b6110;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1368);
    System_Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_27af730
              (lVar8,uVar9,*(undefined8 *)PTR_DAT_049c1378,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_021f190c(plVar6,lVar8);
  }
  auVar10 = FUN_024f4ff0(auStack_90,param_7,lVar8,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__AddTo_24d83f4(auVar10._0_8_,auVar10._8_8_ & 0xffffffff,param_7,0);
  return;
}

