/* IL2CPP: CarpetCarrierGroupV2$$Initialize
void CarpetCarrierGroupV2__Initialize (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarpetCarrierGroupV2$$Initialize
   void CarpetCarrierGroupV2__Initialize (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
    */

void CarpetCarrierGroupV2__Initialize_2405848
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  puVar4 = PTR_DAT_049c27c8;
  if ((bRam0000000004f4b6b3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2620);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2648);
    FUN_021f03f8(PTR_DAT_049c2680);
    FUN_021f03f8(PTR_DAT_049c27d0);
    FUN_021f03f8(PTR_DAT_049c27c8);
    bRam0000000004f4b6b3 = 1;
  }
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Object___ctor_3142338(lVar10,0);
  puVar9 = PTR_DAT_049c27d0;
  puVar8 = PTR_DAT_049c2680;
  puVar7 = PTR_DAT_049c2648;
  puVar6 = PTR_DAT_049c2638;
  puVar5 = PTR_DAT_049c2630;
  puVar3 = PTR_DAT_049c2628;
  puVar4 = PTR_DAT_049c2620;
  if (*(long *)(param_4 + 0xe8) == 0) goto LAB_02505c5c;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_4 + 0xe8),&lStack_d8,*(undefined8 *)PTR_DAT_049c2640);
  uStack_b0 = uStack_c8;
  plStack_b8 = plStack_d0;
  lStack_c0 = lStack_d8;
  lStack_d8 = 0;
  plStack_d0 = &lStack_c0;
  while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&lStack_c0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
    lVar15 = *(long *)puVar6;
    lVar12 = *(long *)(lVar15 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
    lVar13 = lVar12;
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
      lVar12 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar14 = thunk_FUN_0224e54c(&lStack_c0,
                                *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_a8,uVar14,uVar1);
    lVar13 = lStack_a8;
    uVar14 = UnityEngine_Component__get_gameObject_3c187f4(param_4,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar14,uVar14);
    }
    Carrier__DisableInteraction_2403394(lVar13);
    uVar14 = UnityEngine_Component__get_gameObject_3c187f4(param_4,0);
    Carrier__DisableTransferEnter_2408aa4(lVar13,uVar14);
    Carrier__DisableTransferExit_2408b08(lVar13,uVar14);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&lStack_c0,*(undefined8 *)puVar3);
  if (((*(long *)(param_4 + 0xe8) == 0) ||
      (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                 (*(long *)(param_4 + 0xe8),0,&lStack_d8,*(undefined8 *)puVar8), lStack_d8 == 0)) ||
     (lVar13 = *(long *)(lStack_d8 + 0x110), lVar13 == 0)) goto LAB_02505c5c;
  fVar16 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar13,0);
  if (cRam0000000004f4a55a == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55a = '\x01';
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  fVar21 = *(float *)(lVar12 + 0x48);
  fVar22 = *(float *)(lVar12 + 0x4c);
  fVar20 = *(float *)(lVar12 + 0x50);
  if (cRam0000000004f4a5db == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a5db = '\x01';
  }
  puVar3 = PTR_DAT_049b8758;
  fVar19 = fVar21 * fVar21 + fVar22 * fVar22;
  fVar23 = fVar20 * fVar20 + fVar19;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar17 = SQRT((param_3 * param_3 + fVar16 * fVar16 + param_2 * param_2) * fVar23);
  fVar23 = _UNK_013aa374;
  if (fVar17 < _UNK_013aa374) {
LAB_02505bb4:
    fVar16 = (float)UnityEngine_Transform__get_right_3c2da80(lVar13,0);
  }
  else {
    fVar19 = -1.0;
    fVar17 = (param_3 * fVar20 + fVar16 * fVar21 + param_2 * fVar22) / fVar17;
    fVar16 = 1.0;
    if (fVar17 <= 1.0) {
      fVar16 = fVar17;
    }
    fVar20 = -1.0;
    if (-1.0 <= fVar17) {
      fVar20 = fVar16;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    dVar18 = (double)FUN_046086c0((double)fVar20);
    fVar23 = 90.0;
    if ((float)dVar18 * _UNK_013aa654 < 90.0) goto LAB_02505bb4;
    fVar16 = (float)UnityEngine_Transform__get_right_3c2da80(lVar13,0);
    fVar16 = -fVar16;
    fVar23 = -fVar23;
    fVar19 = -fVar19;
  }
  if (lVar10 != 0) {
    *(float *)(lVar10 + 0x10) = fVar16;
    *(float *)(lVar10 + 0x14) = fVar23;
    uVar14 = *(undefined8 *)puVar4;
    *(float *)(lVar10 + 0x18) = fVar19;
    lVar13 = *(long *)(param_4 + 0xe8);
    uVar14 = thunk_FUN_0222ca34(uVar14);
    System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
              (uVar14,lVar10,*(undefined8 *)puVar9,0);
    if (lVar13 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                (lVar13,uVar14,*(undefined8 *)puVar7);
      CarpetCarrierGroupV2__CreateModel_2405cc8(param_4);
      return;
    }
  }
LAB_02505c5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

