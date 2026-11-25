/* IL2CPP: RockCarrier$$OnLevelAnimationStart
void RockCarrier__OnLevelAnimationStart (RockCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RockCarrier$$OnLevelAnimationStart
   void RockCarrier__OnLevelAnimationStart (RockCarrier_o* __this, const MethodInfo* method); */

void RockCarrier__OnLevelAnimationStart_24abfcc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f4bb34 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4bb34 = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  lVar2 = *(long *)(param_4 + 0xa8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar4 = UnityEngine_Transform__get_position_3c2d540(lVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__AddY_3f0d30c(uVar4,param_2,param_3,0xc0000000,0);
  if ((bRam0000000004f58a09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26ad0,0);
    bRam0000000004f58a09 = 1;
  }
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
    }
    if (pcRam0000000004f58a38 == (code *)0x0) {
      pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
    }
    (*pcRam0000000004f58a38)(lVar3,&stack0xffffffffffffffd4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

