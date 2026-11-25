/* IL2CPP: Block$$ApplyMoveToSlotMotion
Cysharp_Threading_Tasks_UniTask_o Block__ApplyMoveToSlotMotion (Block_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$ApplyMoveToSlotMotion
   Cysharp_Threading_Tasks_UniTask_o Block__ApplyMoveToSlotMotion (Block_o* __this,
   UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method); */

undefined1  [16]
Block__ApplyMoveToSlotMotion_23dbe84
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined2 uStack_38;
  undefined6 uStack_36;
  
  uVar8 = param_2;
  uVar9 = param_3;
  Block__CancelMoveMotion_23dbb54();
  lVar2 = UnityEngine_Component__get_transform_3c18724(param_4,0);
  if (lVar2 != 0) {
    uVar7 = UnityEngine_Transform__get_localPosition_3c2c388(lVar2,0);
    lVar2 = UnityEngine_Component__get_transform_3c18724(param_4,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__get_localRotation_3c2d92c(lVar2,0);
      auVar10 = Block__ApplyJumpMotion_23dbc6c(uVar7,uVar8,uVar9,param_1,param_2,param_3,param_4);
      uVar4 = auVar10._0_8_;
      uVar6 = *(undefined8 *)(param_4 + 0x98);
      *(undefined8 *)(param_4 + 0xa0) = uVar4;
      *(int *)(param_4 + 0xa8) = auVar10._8_4_;
      uVar5 = auVar10._8_8_ & 0xffffffff;
      if ((bRam0000000004f4e5b1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049dfe08,uVar5,uVar6,0);
        FUN_021f03f8(PTR_DAT_049b5138);
        bRam0000000004f4e5b1 = 1;
      }
      uVar3 = FUN_024f7208(uVar4,uVar5,0);
      puVar1 = PTR_DAT_049b5138;
      if ((uVar3 & 1) == 0) {
        lVar2 = *(long *)PTR_DAT_049b5138;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          FUN_021f0574();
          lVar2 = *(long *)puVar1;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
        uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
        uStack_38 = (undefined2)uVar6;
        uStack_36 = (undefined6)((ulong)uVar6 >> 0x10);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_049dfe08 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar4 = LitMotion_UniTaskMotionTaskSource__Create_2e92ddc
                          (uVar4,uVar5,1,1,uVar6,&stack0xffffffffffffffdc);
        uStack_38 = 0;
        uStack_36 = 0;
        thunk_FUN_021f190c(&stack0xffffffffffffffc0,uVar4);
      }
      auVar10._8_2_ = uStack_38;
      auVar10._0_8_ = uVar4;
      auVar10._10_6_ = uStack_36;
      return auVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

