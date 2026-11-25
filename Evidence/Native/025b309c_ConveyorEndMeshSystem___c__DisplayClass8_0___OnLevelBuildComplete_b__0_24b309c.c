/* IL2CPP: ConveyorEndMeshSystem.<>c__DisplayClass8_0$$<OnLevelBuildComplete>b__0
void ConveyorEndMeshSystem___c__DisplayClass8_0___OnLevelBuildComplete_b__0 (ConveyorEndMeshSystem___c__DisplayClass8_0_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorEndMeshSystem.<>c__DisplayClass8_0$$<OnLevelBuildComplete>b__0
   void ConveyorEndMeshSystem___c__DisplayClass8_0___OnLevelBuildComplete_b__0
   (ConveyorEndMeshSystem___c__DisplayClass8_0_o* __this, Block_o* block, const MethodInfo* method);
    */

void ConveyorEndMeshSystem___c__DisplayClass8_0___OnLevelBuildComplete_b__0_24b309c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_5 != 0) && (*(long *)(param_5 + 0x140) != 0)) {
    UnityEngine_Rigidbody__get_position_3c8aa08(*(long *)(param_5 + 0x140),0);
    if (*(long *)(param_4 + 0x28) != 0) {
      UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x28) != 0) {
        uVar5 = UnityEngine_Transform__get_forward_3c2db78(*(long *)(param_4 + 0x28),0);
        if (*(long *)(param_4 + 0x10) != 0) {
          uVar8 = param_2;
          uVar9 = param_3;
          uVar6 = UnityEngine_Transform__get_forward_3c2db78(*(long *)(param_4 + 0x10),0);
                    /* catch() { ... } // from try @ 025b3048 with catch @ 025b3138
                       catch() { ... } // from try @ 025b3084 with catch @ 025b3138 */
                    /* try { // try from 025b313c to 026b313f has its CatchHandler @ 025b3148 */
          if (cRam0000000004f4a55e == '\0') {
                    /* try { // try from 025b3140 to 026b314b has its CatchHandler @ 025b3000 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b313c with catch @ 025b3148
                        */
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          puVar1 = PTR_DAT_049bbf90;
          uVar5 = FUN_025bb780(uVar5,param_2,param_3,uVar6,uVar8,uVar9,0);
          if (cRam0000000004f4a55e == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          UnityEngine_Quaternion__AngleAxis_3c0a0a8
                    (uVar5,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                     *(undefined4 *)(lVar3 + 0x20),0);
          fVar7 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
          if (*(long *)(param_5 + 0x140) != 0) {
            UnityEngine_Rigidbody__set_position_3c8aae4
                      (fVar7 + *(float *)(param_4 + 0x18),*(long *)(param_5 + 0x140),0);
            if (*(long *)(param_5 + 0x140) != 0) {
              uVar2 = UnityEngine_Rigidbody__get_isKinematic_3c8a708(*(long *)(param_5 + 0x140),0);
              if ((uVar2 & 1) != 0) {
                return;
              }
              if (*(long *)(param_4 + 0x10) != 0) {
                lVar3 = *(long *)(param_5 + 0x140);
                UnityEngine_Transform__get_forward_3c2db78(*(long *)(param_4 + 0x10),0);
                if (*(long *)(param_5 + 0x140) != 0) {
                    /* try { // try from 025b3278 to 026b3307 has its CatchHandler @ 025b3278
                       catch() { ... } // from try @ 025b3278 with catch @ 025b3278
                       catch() { ... } // from try @ 025b3394 with catch @ 025b3278
                       catch() { ... } // from try @ 025b33e0 with catch @ 025b3278
                       catch() { ... } // from try @ 025b342c with catch @ 025b3278 */
                  UnityEngine_Rigidbody__get_linearVelocity_3c8a078(*(long *)(param_5 + 0x140),0);
                  if (cRam0000000004f4a55d == '\0') {
                    FUN_021f03f8(PTR_DAT_049b8758);
                    cRam0000000004f4a55d = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar3 != 0) {
                    if ((bRam0000000004f5a0bc & 1) == 0) {
                      FUN_021f03f8(PTR_DAT_04a28848,0);
                      bRam0000000004f5a0bc = 1;
                    }
                    if (lVar3 != 0) {
                      lVar4 = *(long *)(lVar3 + 0x10);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c
                                  (lVar3,0);
                      }
                      if (pcRam0000000004f5a0d8 == (code *)0x0) {
                        pcRam0000000004f5a0d8 = (code *)FUN_021f03bc(&UNK_013d176a);
                      }
                      (*pcRam0000000004f5a0d8)(lVar4,&stack0xffffffffffffffd4);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

