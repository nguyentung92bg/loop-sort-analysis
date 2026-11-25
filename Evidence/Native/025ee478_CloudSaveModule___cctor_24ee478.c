/* IL2CPP: CloudSaveModule$$.cctor
void CloudSaveModule___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$.cctor
   void CloudSaveModule___cctor (const MethodInfo* method); */

void CloudSaveModule___cctor_24ee478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_DAT_049c8090;
  puVar1 = PTR_DAT_049c8018;
  if ((bRam0000000004f4bce9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049c8090);
    bRam0000000004f4bce9 = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = *(undefined8 *)puVar2;
  uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

