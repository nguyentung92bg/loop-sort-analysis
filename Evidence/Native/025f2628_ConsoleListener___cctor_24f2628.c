/* IL2CPP: ConsoleListener$$.cctor
void ConsoleListener___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleListener$$.cctor
   void ConsoleListener___cctor (const MethodInfo* method); */

void ConsoleListener___cctor_24f2628(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_049c8230;
  puVar2 = PTR_DAT_049c8228;
  puVar1 = PTR_DAT_049c52a0;
  if ((bRam0000000004f4bcfa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c52a0);
    FUN_021f03f8(PTR_DAT_049c8230);
    FUN_021f03f8(PTR_DAT_049c8228);
    bRam0000000004f4bcfa = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_LinkedList___Il2CppFullySharedGenericType____ctor_28c7edc
            (uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

