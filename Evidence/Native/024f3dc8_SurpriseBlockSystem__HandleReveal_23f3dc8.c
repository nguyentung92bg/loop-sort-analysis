/* IL2CPP: SurpriseBlockSystem$$HandleReveal
void SurpriseBlockSystem__HandleReveal (SurpriseBlockSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f419c) */
/* IL2CPP: SurpriseBlockSystem$$HandleReveal
   void SurpriseBlockSystem__HandleReveal (SurpriseBlockSystem_o* __this, Carrier_o* carrier,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void SurpriseBlockSystem__HandleReveal_23f3dc8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,long param_7)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  
  puVar2 = PTR_DAT_049c14d0;
  if ((bRam0000000004f4b656 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1df8);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c14f8);
    FUN_021f03f8(PTR_DAT_049c1d58);
    bRam0000000004f4b656 = 1;
  }
  puVar3 = PTR_DAT_049c14c8;
  auStack_a8._0_8_ = 0;
  auStack_a8._8_8_ = 0;
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_a8 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_b0,*(undefined8 *)puVar3);
  puStack_e8 = auStack_a8;
  lStack_f0 = 0;
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (param_7,&uStack_108,*(undefined8 *)PTR_DAT_049c14f0);
  puVar8 = PTR_DAT_049c1df8;
  puVar7 = PTR_DAT_049c1d58;
  puVar6 = PTR_DAT_049c1c80;
  puVar5 = PTR_DAT_049c14e8;
  puVar4 = PTR_DAT_049c14e0;
  puVar3 = PTR_DAT_049c14d8;
  puVar2 = PTR_DAT_049b5480;
  uStack_c8 = puStack_100;
  uStack_d0 = uStack_108;
  uStack_c0 = uStack_f8;
  puStack_100 = &uStack_d0;
  uStack_108 = 0;
  while( true ) {
    uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_d0,*(undefined8 *)puVar4);
    uVar21 = (undefined4)param_4;
    fVar19 = (float)param_3;
    fVar17 = (float)param_2;
    if ((uVar9 & 1) == 0) break;
    lVar13 = *(long *)puVar5;
    lVar10 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ushort *)(lVar10 + 0x135);
    lVar11 = lVar10;
    if ((uVar1 & 1) == 0) {
      lVar11 = FUN_02229718();
      lVar10 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar10 + 0x135);
    }
    uVar21 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&uStack_d0,
                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_98,uVar12,uVar21);
    lVar11 = lStack_98;
    if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = Block__TryGetFeature_23dc908(lStack_98,0x20,&uStack_e0);
    if ((uVar9 & 1) != 0) {
      param_2 = 0;
      param_3 = 0;
      param_4 = 0;
      GameBehaviourBase__InjectColorType_24f4d78(0,lVar11,*(undefined8 *)(lVar11 + 0xe4),0);
      Block__RemoveFeature_23dc51c(lVar11,0x20);
      Block__EnableTransferExit_23dcf0c(lVar11,param_5);
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(lStack_b0,lVar11,*(undefined8 *)puVar6);
    }
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_d0,*(undefined8 *)puVar3);
  if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lStack_b0 + 0x18) != 0) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Carrier__EnableTransferEnter_24089a4(param_6,param_5,0);
    lVar11 = lStack_b0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar15 = (float)Extensions__GetCenterPoint_object__25ef5a0(lVar11,*(undefined8 *)puVar8);
    if (*(long *)(param_5 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar12 = *(undefined8 *)(param_5 + 0x58);
    uVar14 = *(undefined8 *)(*(long *)(param_5 + 0x50) + 0x50);
    fVar18 = fVar17;
    fVar20 = fVar19;
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar22 = *(float *)(lVar11 + 0x18);
    fVar23 = *(float *)(lVar11 + 0x1c);
    fVar24 = *(float *)(lVar11 + 0x20);
    lVar11 = UnityEngine_Component__get_transform_3c18724(param_6,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar16 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar11,0);
    PrefabModuleExtensions__Rent_object__269ee8c
              (fVar15 + fVar22,fVar17 + fVar23,fVar19 + fVar24,uVar16,fVar18,fVar20,uVar21,uVar12,
               uVar14,*(undefined8 *)puVar7);
  }
  lVar11 = lStack_f0;
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (puStack_e8,*(undefined8 *)PTR_DAT_049c14f8);
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar11);
}

