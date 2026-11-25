/* IL2CPP: EmailH$$.cctor
void EmailH___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailH$$.cctor
   void EmailH___cctor (const MethodInfo* method); */

void EmailH___cctor_2508898(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_049c8f20;
  puVar2 = PTR_DAT_049c3f70;
  puVar1 = PTR_DAT_049bac38;
  if ((bRam0000000004f4bdaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f70);
    FUN_021f03f8(PTR_DAT_049bac38);
    FUN_021f03f8(PTR_DAT_049c8f20);
    bRam0000000004f4bdaa = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Text_RegularExpressions_Regex___ctor_36f41a4(uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

