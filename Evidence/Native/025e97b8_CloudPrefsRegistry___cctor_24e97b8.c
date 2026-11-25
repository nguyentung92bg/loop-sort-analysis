/* IL2CPP: CloudPrefsRegistry$$.cctor
void CloudPrefsRegistry___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsRegistry$$.cctor
   void CloudPrefsRegistry___cctor (const MethodInfo* method); */

void CloudPrefsRegistry___cctor_24e97b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_049c7f70;
  puVar4 = PTR_DAT_049c7f68;
  puVar3 = PTR_DAT_049c7f20;
  puVar2 = PTR_DAT_049b6598;
  puVar1 = PTR_DAT_049b6590;
  if ((bRam0000000004f4bcae & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049b6590);
    FUN_021f03f8(PTR_DAT_049b6598);
    FUN_021f03f8(PTR_DAT_049c7f70);
    FUN_021f03f8(PTR_DAT_049c7f68);
    bRam0000000004f4bcae = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar5);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar6;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar6,*(undefined8 *)puVar1);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar7 = uVar6;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

