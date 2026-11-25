/* IL2CPP: SandFlowSystem$$.cctor
void SandFlowSystem___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$.cctor
   void SandFlowSystem___cctor (const MethodInfo* method); */

void SandFlowSystem___cctor_24d1960(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar6 = PTR_DAT_049c7528;
  puVar5 = PTR_DAT_049c7520;
  puVar4 = PTR_DAT_049c7518;
  puVar3 = PTR_DAT_049c7130;
  puVar2 = PTR_DAT_049c2040;
  if ((bRam0000000004f4bc0b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7530);
    FUN_021f03f8(PTR_DAT_049c7538);
    FUN_021f03f8(PTR_DAT_049c7540);
    FUN_021f03f8(PTR_DAT_049c7548);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c7550);
    FUN_021f03f8(PTR_DAT_049c7558);
    FUN_021f03f8(PTR_DAT_049c7560);
    FUN_021f03f8(PTR_DAT_049c7568);
    FUN_021f03f8(PTR_DAT_049c7528);
    FUN_021f03f8(PTR_DAT_049c7520);
    FUN_021f03f8(PTR_DAT_049c2040);
    FUN_021f03f8(PTR_DAT_049c7518);
    bRam0000000004f4bc0b = 1;
  }
  puVar12 = PTR_DAT_049c7560;
  puVar11 = PTR_DAT_049c7558;
  puVar10 = PTR_DAT_049c7550;
  puVar9 = PTR_DAT_049c7548;
  puVar8 = PTR_DAT_049c7540;
  puVar7 = PTR_DAT_049c7530;
  uVar14 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker_3bc0b2c
                     (*(undefined8 *)puVar4,1,0,0,0);
  uVar16 = *(undefined8 *)puVar2;
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar14;
  uVar13 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar16,0);
  uVar14 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar13;
  uVar13 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar14,0);
  lVar17 = *(long *)puVar6;
  iVar1 = *(int *)(lVar17 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar13;
  if (iVar1 == 0) {
    FUN_021f0574(lVar17);
    lVar17 = *(long *)puVar6;
  }
  uVar16 = **(undefined8 **)(lVar17 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar9);
  System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
            (uVar14,uVar16,*(undefined8 *)puVar10,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar15 = uVar14;
  thunk_FUN_021f190c(puVar15,uVar14);
  uVar16 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
            (uVar14,uVar16,*(undefined8 *)puVar11,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *puVar15 = uVar14;
  thunk_FUN_021f190c(puVar15,uVar14);
  uVar16 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
            (uVar14,uVar16,*(undefined8 *)puVar12,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  *puVar15 = uVar14;
  thunk_FUN_021f190c(puVar15,uVar14);
  uVar16 = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7538);
  System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
            (uVar14,uVar16,*(undefined8 *)PTR_DAT_049c7568,0);
  puVar15 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar15 = uVar14;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar15 >> 0xc & 0x3f),
                 ((ulong)puVar15 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

