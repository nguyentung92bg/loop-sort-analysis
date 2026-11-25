/* IL2CPP: LoadingEffect$$Update
void LoadingEffect__Update (LoadingEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LoadingEffect$$Update
   void LoadingEffect__Update (LoadingEffect_o* __this, const MethodInfo* method); */

void LoadingEffect__Update_25721e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [16];
  
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uVar1 = UniTimer__get_IsRunning_3f0efa0(param_1 + 0x28,0);
  if ((uVar1 & 1) == 0) {
    auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa810,0);
    auVar4 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined1 (*) [16])(param_1 + 0x28) = auVar4;
    if (cRam0000000004f4a55a == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55a = '\x01';
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x48);
    UnityEngine_Transform__Rotate_3c2e480
              ((float)uVar3 * -45.0,(float)((ulong)uVar3 >> 0x20) * -45.0,
               *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x50) * -45.0,lVar2,1,0);
  }
  return;
}

