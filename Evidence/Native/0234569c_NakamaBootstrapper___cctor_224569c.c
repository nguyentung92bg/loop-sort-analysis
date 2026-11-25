/* IL2CPP: NakamaBootstrapper$$.cctor
void NakamaBootstrapper___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$.cctor
   void NakamaBootstrapper___cctor (const MethodInfo* method); */

void NakamaBootstrapper___cctor_224569c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_049b56f8;
  puVar1 = PTR_DAT_049b54a0;
  if ((bRam0000000004f49b44 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b56f8);
    bRam0000000004f49b44 = 1;
  }
  puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar3 = *(undefined8 *)puVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

