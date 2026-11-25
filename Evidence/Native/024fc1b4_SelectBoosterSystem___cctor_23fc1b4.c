/* IL2CPP: SelectBoosterSystem$$.cctor
void SelectBoosterSystem___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBoosterSystem$$.cctor
   void SelectBoosterSystem___cctor (const MethodInfo* method); */

void SelectBoosterSystem___cctor_23fc1b4(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000004f4b681 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2370);
    bRam0000000004f4b681 = 1;
  }
  puVar1 = PTR_DAT_049c2370;
  if (cRam0000000004f4a55e == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55e = '\x01';
  }
  uVar3 = NEON_fmov(0x3fc00000,4);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
  fVar5 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x20);
  puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  *puVar2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar3 >> 0x20),
                     (float)uVar4 * (float)uVar3);
  *(float *)(puVar2 + 1) = fVar5 * 1.5;
  return;
}

