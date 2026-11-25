/* IL2CPP: HomeSceneFxRunner.Motes$$.cctor
void HomeSceneFxRunner_Motes___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Motes$$.cctor
   void HomeSceneFxRunner_Motes___cctor (const MethodInfo* method); */

void HomeSceneFxRunner_Motes___cctor_24238d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR_DAT_049c32a8;
  puVar5 = PTR_DAT_049c32a0;
  puVar4 = PTR_DAT_049c3298;
  puVar3 = PTR_DAT_049c3290;
  puVar2 = PTR_DAT_049c3058;
  puVar1 = PTR_DAT_049be640;
  if ((bRam0000000004f4b78b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3058);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c32a0);
    FUN_021f03f8(PTR_DAT_049c3298);
    FUN_021f03f8(PTR_DAT_049c3290);
    FUN_021f03f8(PTR_DAT_049c32a8);
    bRam0000000004f4b78b = 1;
  }
  uVar7 = FUN_021f04e4(*(undefined8 *)puVar1,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar7,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = FUN_021f04e4(*(undefined8 *)puVar1,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar7,*(undefined8 *)puVar4,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_021f190c(puVar8,uVar7);
  uVar7 = FUN_021f04e4(*(undefined8 *)puVar1,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar7,*(undefined8 *)puVar5,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_021f190c(puVar8,uVar7);
  uVar7 = FUN_021f04e4(*(undefined8 *)puVar1,5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar7,*(undefined8 *)puVar6,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar8 = uVar7;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar8 >> 0xc & 0x3f),
                 ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

