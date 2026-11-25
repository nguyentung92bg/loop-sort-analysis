/* IL2CPP: IceCarrier$$OnLevelAnimationStart
void IceCarrier__OnLevelAnimationStart (IceCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrier$$OnLevelAnimationStart
   void IceCarrier__OnLevelAnimationStart (IceCarrier_o* __this, const MethodInfo* method); */

void IceCarrier__OnLevelAnimationStart_24a5b88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f4bb12 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4bb12 = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar2 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0);
    uVar4 = *(undefined4 *)(param_1 + 0xc4);
    uVar5 = *(undefined4 *)(param_1 + 200);
    uVar6 = *(undefined4 *)(param_1 + 0xcc);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Extensions__AddY_3f0d30c(uVar4,uVar5,uVar6,0xc0400000,0);
    if (lVar2 != 0) {
      if ((bRam0000000004f58a0b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0b = 1;
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
        }
        if (pcRam0000000004f58a48 == (code *)0x0) {
          pcRam0000000004f58a48 = (code *)FUN_021f03bc(&UNK_013d4d13);
        }
        (*pcRam0000000004f58a48)(lVar3,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

