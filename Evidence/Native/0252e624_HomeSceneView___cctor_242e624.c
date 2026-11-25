/* IL2CPP: HomeSceneView$$.cctor
void HomeSceneView___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$.cctor
   void HomeSceneView___cctor (const MethodInfo* method); */

void HomeSceneView___cctor_242e624(void)

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
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar7 = PTR_DAT_049c3790;
  puVar6 = PTR_DAT_049c3788;
  puVar5 = PTR_DAT_049c3780;
  puVar4 = PTR_DAT_049c3778;
  puVar3 = PTR_DAT_049c3770;
  puVar2 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7c6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3798);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c37a0);
    FUN_021f03f8(PTR_DAT_049c37a8);
    FUN_021f03f8(PTR_DAT_049c37b0);
    FUN_021f03f8(PTR_DAT_049c3790);
    FUN_021f03f8(PTR_DAT_049c3770);
    FUN_021f03f8(PTR_DAT_049c3778);
    FUN_021f03f8(PTR_DAT_049c3780);
    FUN_021f03f8(PTR_DAT_049c3788);
    bRam0000000004f4b7c6 = 1;
  }
  puVar11 = PTR_DAT_049c37b0;
  puVar10 = PTR_DAT_049c37a8;
  puVar9 = PTR_DAT_049c37a0;
  puVar8 = PTR_DAT_049c3798;
  uVar12 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar3,0);
  uVar14 = *(undefined8 *)puVar4;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar12;
  uVar12 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar14,0);
  uVar14 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar12;
  uVar12 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar14,0);
  uVar14 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar12;
  uVar12 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar14,0);
  lVar15 = *(long *)puVar7;
  iVar1 = *(int *)(lVar15 + 0xe4);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc) = uVar12;
  if (iVar1 == 0) {
    FUN_021f0574(lVar15);
    lVar15 = *(long *)puVar7;
  }
  uVar16 = **(undefined8 **)(lVar15 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
            (uVar14,uVar16,*(undefined8 *)puVar9,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar13 = uVar14;
  thunk_FUN_021f190c(puVar13,uVar14);
  uVar16 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
            (uVar14,uVar16,*(undefined8 *)puVar10,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
  *puVar13 = uVar14;
  thunk_FUN_021f190c(puVar13,uVar14);
  uVar16 = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  uVar14 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
            (uVar14,uVar16,*(undefined8 *)puVar11,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar13 = uVar14;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar13 >> 0xc & 0x3f),
                 ((ulong)puVar13 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

