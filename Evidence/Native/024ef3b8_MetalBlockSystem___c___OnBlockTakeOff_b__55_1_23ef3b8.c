/* IL2CPP: MetalBlockSystem.<>c$$<OnBlockTakeOff>b__55_1
void MetalBlockSystem___c___OnBlockTakeOff_b__55_1 (MetalBlockSystem___c_o* __this, float y, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem.<>c$$<OnBlockTakeOff>b__55_1
   void MetalBlockSystem___c___OnBlockTakeOff_b__55_1 (MetalBlockSystem___c_o* __this, float y,
   UnityEngine_Transform_o* t, const MethodInfo* method); */

void MetalBlockSystem___c___OnBlockTakeOff_b__55_1_23ef3b8
               (undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_2c = 0x3f800000;
  uStack_24 = 0x3f800000;
  uStack_28 = param_1;
  if ((bRam0000000004f58a11 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a11 = 1;
  }
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_3,0);
    }
    if (pcRam0000000004f58a78 == (code *)0x0) {
      pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
    }
    (*pcRam0000000004f58a78)(lVar1,&uStack_2c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

