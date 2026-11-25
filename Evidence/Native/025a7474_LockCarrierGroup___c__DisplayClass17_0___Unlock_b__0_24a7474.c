/* IL2CPP: LockCarrierGroup.<>c__DisplayClass17_0$$<Unlock>b__0
void LockCarrierGroup___c__DisplayClass17_0___Unlock_b__0 (LockCarrierGroup___c__DisplayClass17_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LockCarrierGroup.<>c__DisplayClass17_0$$<Unlock>b__0
   void LockCarrierGroup___c__DisplayClass17_0___Unlock_b__0
   (LockCarrierGroup___c__DisplayClass17_0_o* __this, float t, const MethodInfo* method); */

void LockCarrierGroup___c__DisplayClass17_0___Unlock_b__0_24a7474(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(param_2 + 0x10);
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar6 = 0.0;
  if (0.0 <= param_1) {
    fVar6 = fVar3;
  }
  if (lVar2 != 0) {
    fVar3 = *(float *)(param_2 + 0x1c);
    fVar5 = *(float *)(param_2 + 0x28);
    fVar7 = param_1 * _UNK_013aa600;
    fVar4 = (float)FUN_046086e0(param_1 * _UNK_013aa860);
    UnityEngine_Transform__set_position_3c2d61c
              (*(float *)(param_2 + 0x18) +
               fVar6 * (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x18)),
               fVar7 * fVar4 + fVar3 + fVar6 * (fVar5 - fVar3),
               *(float *)(param_2 + 0x20) +
               fVar6 * (*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x20)),lVar2,0);
    UnityEngine_Quaternion__Lerp_3c09d14
              (*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
               *(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
               *(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
               *(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),0);
    if (*(long *)(param_2 + 0x10) != 0) {
      UnityEngine_Transform__set_rotation_3c2d86c(*(long *)(param_2 + 0x10),0);
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 != 0) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar2 != 0) {
          lVar1 = *(long *)(lVar2 + 0x10);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar1,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

