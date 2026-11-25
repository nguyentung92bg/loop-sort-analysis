/* IL2CPP: SelectBoosterSystem$$TrySelect
bool SelectBoosterSystem__TrySelect (SelectBoosterSystem_o* __this, Carrier_o* carrier, UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem$$TrySelect
   bool SelectBoosterSystem__TrySelect (SelectBoosterSystem_o* __this, Carrier_o* carrier,
   UnityEngine_RaycastHit_o hitInfo, const MethodInfo* method); */

undefined8
SelectBoosterSystem__TrySelect_23fa70c
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f4b676 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23b0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c2210);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2370);
    bRam0000000004f4b676 = 1;
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uVar8 = SelectBoosterSystem__CanSelect_23fac3c(param_4,param_5);
  if ((uVar8 & 1) != 0) {
    if ((param_5 == 0) || (*(long *)(param_5 + 0x1e0) == 0)) {
LAB_024faa5c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_5 + 0x1e0),&uStack_e8,*(undefined8 *)PTR_DAT_049c14f0);
    puVar7 = PTR_DAT_049c2370;
    puVar6 = PTR_DAT_049c14e8;
    puVar5 = PTR_DAT_049c14e0;
    puVar4 = PTR_DAT_049b8758;
    uVar3 = _UNK_013aa4f4;
    puStack_c8 = puStack_e0;
    uStack_d0 = uStack_e8;
    uStack_c0 = uStack_d8;
    uStack_e8 = 0;
    lVar12 = 0;
    fVar18 = 3.4028235e+38;
    puStack_e0 = &uStack_d0;
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_d0,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
      lVar13 = *(long *)puVar6;
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_a8,uVar11,uVar1);
      lVar10 = lStack_a8;
      if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = UnityEngine_Component__get_transform_3c18724(lStack_a8,0);
      fVar14 = (float)UnityEngine_RaycastHit__get_point_3c89ecc(param_6,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar16 = param_2;
      fVar17 = param_3;
      fVar15 = (float)UnityEngine_Transform__get_position_3c2d540(lVar9,0);
      if (cRam0000000004f4a234 == '\0') {
        FUN_021f03f8(puVar4);
        cRam0000000004f4a234 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar16 = param_2 - fVar16;
      param_3 = param_3 - fVar17;
      param_2 = (float)NEON_fminnm(fVar18,uVar3);
      fVar14 = SQRT(param_3 * param_3 + (fVar14 - fVar15) * (fVar14 - fVar15) + fVar16 * fVar16);
      if (fVar14 <= param_2) {
        lVar12 = lVar10;
        fVar18 = fVar14;
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar12,0,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_4 + 0x70) == 0) goto LAB_024faa5c;
      uVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_4 + 0x70),param_5,&lStack_b0,
                         *(undefined8 *)PTR_DAT_049c23b0);
      if ((uVar8 & 1) != 0) {
        if (lStack_b0 == 0) goto LAB_024faa5c;
        uVar8 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                          (lStack_b0,lVar12,*(undefined8 *)PTR_DAT_049c2210);
        if ((uVar8 & 1) != 0) {
          SelectBoosterSystem__Select_23faf3c(param_4,param_5,lVar12);
          return 1;
        }
      }
    }
  }
  return 0;
}

