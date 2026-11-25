/* IL2CPP: Grid$$.cctor
void Grid___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$.cctor
   void Grid___cctor (const MethodInfo* method); */

void Grid___cctor_2507e50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_049c8ec8;
  puVar1 = PTR_DAT_049c8e78;
  if ((bRam0000000004f4bd9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ec8);
    FUN_021f03f8(PTR_DAT_049c8e78);
    bRam0000000004f4bd9a = 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(uVar3,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar3;
  uVar4 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar4 >> 0xc & 0x3f),(uVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

