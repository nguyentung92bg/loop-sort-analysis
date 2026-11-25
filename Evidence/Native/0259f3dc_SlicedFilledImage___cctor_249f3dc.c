/* IL2CPP: SlicedFilledImage$$.cctor
void SlicedFilledImage___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$.cctor
   void SlicedFilledImage___cctor (const MethodInfo* method); */

void SlicedFilledImage___cctor_249f3dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_049c64e8;
  puVar4 = PTR_DAT_049c64e0;
  puVar3 = PTR_DAT_049c6480;
  puVar2 = PTR_DAT_049bc298;
  puVar1 = PTR_DAT_049b8a28;
  if ((bRam0000000004f4badf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c64e8);
    FUN_021f03f8(PTR_DAT_049c64e0);
    FUN_021f03f8(PTR_DAT_049c6480);
    FUN_021f03f8(PTR_DAT_049bc298);
    FUN_021f03f8(PTR_DAT_049b8a28);
    bRam0000000004f4badf = 1;
  }
  uVar6 = FUN_021f04e4(*(undefined8 *)puVar1,4);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar6;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
  uVar6 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_021f190c(puVar7,uVar6);
  uVar6 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  thunk_FUN_021f190c(puVar7,uVar6);
  uVar6 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *puVar7 = uVar6;
  thunk_FUN_021f190c(puVar7,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  *puVar7 = uVar6;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

