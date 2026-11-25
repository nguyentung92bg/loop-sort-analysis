/* IL2CPP: SlicedFilledImage$$UnTrackImage
void SlicedFilledImage__UnTrackImage (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$UnTrackImage
   void SlicedFilledImage__UnTrackImage (SlicedFilledImage_o* __this, const MethodInfo* method); */

void SlicedFilledImage__UnTrackImage_249db54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c6480;
  if ((bRam0000000004f4badd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c64a0);
    FUN_021f03f8(PTR_DAT_049c6480);
    bRam0000000004f4badd = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
              (lVar2,param_1,*(undefined8 *)PTR_DAT_049c64a0);
    *(undefined1 *)(param_1 + 0xfc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

