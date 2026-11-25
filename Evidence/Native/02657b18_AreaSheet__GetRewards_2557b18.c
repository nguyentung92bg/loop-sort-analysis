/* IL2CPP: AreaSheet$$GetRewards
System_Collections_Generic_List_ValueTuple_AreaSheet_Row__AreaSheet_Elem___o* AreaSheet__GetRewards (AreaSheet_o* __this, int32_t fromLevel, int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet$$GetRewards
   System_Collections_Generic_List_ValueTuple_AreaSheet_Row__AreaSheet_Elem___o*
   AreaSheet__GetRewards (AreaSheet_o* __this, int32_t fromLevel, int32_t toLevel, const MethodInfo*
   method); */

undefined8 AreaSheet__GetRewards_2557b18(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR_DAT_049cb308;
  if ((bRam0000000004f4c0bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb2d0);
    FUN_021f03f8(PTR_DAT_049cb310);
    FUN_021f03f8(PTR_DAT_049cb318);
    FUN_021f03f8(PTR_DAT_049cb320);
    FUN_021f03f8(PTR_DAT_049cb328);
    FUN_021f03f8(PTR_DAT_049cb330);
    FUN_021f03f8(PTR_DAT_049cb338);
    FUN_021f03f8(PTR_DAT_049cb340);
    FUN_021f03f8(PTR_DAT_049cb348);
    FUN_021f03f8(PTR_DAT_049cb350);
    FUN_021f03f8(PTR_DAT_049cb308);
    FUN_021f03f8(PTR_DAT_049cb300);
    bRam0000000004f4c0bb = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar7,0);
  puVar1 = PTR_DAT_049cb300;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(lVar7 + 0x10) = param_2;
  *(undefined4 *)(lVar7 + 0x14) = param_3;
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar1;
  }
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  lVar12 = puVar10[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar13 = *puVar10;
    lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb328);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
              (lVar12,uVar13,*(undefined8 *)PTR_DAT_049cb340,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar9 = lVar12;
    thunk_FUN_021f190c(plVar9,lVar12);
    lVar8 = *(long *)puVar1;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar1;
  }
  puVar6 = PTR_DAT_049cb350;
  puVar5 = PTR_DAT_049cb330;
  puVar4 = PTR_DAT_049cb320;
  puVar3 = PTR_DAT_049cb318;
  puVar2 = PTR_DAT_049cb310;
  puVar10 = *(undefined8 **)(lVar8 + 0xb8);
  lVar14 = puVar10[3];
  if (lVar14 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar13 = *puVar10;
    lVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb338);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
              (lVar14,uVar13,*(undefined8 *)PTR_DAT_049cb348,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar9 = lVar14;
    thunk_FUN_021f190c(plVar9,lVar14);
  }
  uVar11 = System_Linq_Enumerable__SelectMany___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25e1088
                     (uVar11,lVar12,lVar14,*(undefined8 *)puVar2);
  uVar13 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
            (uVar13,lVar7,*(undefined8 *)puVar6,0);
  lVar7 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                    (uVar11,uVar13,*(undefined8 *)puVar4);
  lVar8 = *(long *)puVar3;
  if (*(long *)(lVar8 + 0x38) == 0) {
    FUN_02229774(lVar8);
  }
  if (lVar7 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x38) + 8) + 0x135) & 1) == 0) {
      FUN_02229718();
    }
    uVar11 = thunk_FUN_0222ca34();
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd248
              (uVar11,lVar7,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x10));
    return uVar11;
  }
  uVar11 = thunk_FUN_02256840(PTR_DAT_049bf4e8);
  uVar11 = System_Linq_Error__ArgumentNull_3357380(uVar11,0);
                    /* WARNING: Subroutine does not return */
  FUN_021f0564(uVar11,lVar8);
}

