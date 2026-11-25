/* IL2CPP: Block.<>c$$<ApplyJumpMotion>b__8_0
void Block___c___ApplyJumpMotion_b__8_0 (Block___c_o* __this, float t, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Block.<>c$$<ApplyJumpMotion>b__8_0
   void Block___c___ApplyJumpMotion_b__8_0 (Block___c_o* __this, float t, Block_o* block, const
   MethodInfo* method); */

void Block___c___ApplyJumpMotion_b__8_0_23dd25c(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  LitMotion_EaseUtility__OutQuint_2e8b5cc(0);
  UnityEngine_Quaternion__Lerp_3c09d14(*(undefined4 *)(param_3 + 0xc4),0);
  lVar1 = UnityEngine_Component__get_transform_3c18724(param_3,0);
  if (lVar1 != 0) {
    FUN_046086e0(param_1 * _UNK_013aa860);
    if ((bRam0000000004f58a18 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a26ad0,0);
      bRam0000000004f58a18 = 1;
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
      }
      if (pcRam0000000004f58aa8 == (code *)0x0) {
        pcRam0000000004f58aa8 = (code *)FUN_021f03bc(&UNK_013b1ace);
      }
      (*pcRam0000000004f58aa8)(lVar2,&stack0xffffffffffffffd4,&stack0xffffffffffffffc4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

