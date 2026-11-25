/* IL2CPP: BlockCarrierMeshSystem$$HandleGroupBlocks
void BlockCarrierMeshSystem__HandleGroupBlocks (BlockCarrierMeshSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$HandleGroupBlocks
   void BlockCarrierMeshSystem__HandleGroupBlocks (BlockCarrierMeshSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

void BlockCarrierMeshSystem__HandleGroupBlocks_23df8a8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  long lStack_c8;
  long lStack_c0;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
                    /* try { // try from 024df8b8 to 025df943 has its CatchHandler @ 024df1ec */
  if ((bRam0000000004f4b5cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1530);
    FUN_021f03f8(PTR_DAT_049c1538);
    FUN_021f03f8(PTR_DAT_049c1540);
    FUN_021f03f8(PTR_DAT_049c1548);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1560);
    FUN_021f03f8(PTR_DAT_049c1568);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 024df944 to 025df953 has its CatchHandler @ 024df954 */
    FUN_021f03f8(PTR_DAT_049c1570);
                    /* catch() { ... } // from try @ 024df8a0 with catch @ 024df954
                       catch() { ... } // from try @ 024df944 with catch @ 024df954 */
    bRam0000000004f4b5cd = 1;
  }
                    /* try { // try from 024df958 to 025df95b has its CatchHandler @ 024df964 */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
                    /* try { // try from 024df95c to 025df967 has its CatchHandler @ 024df1ec */
  lStack_80 = 0;
  uStack_78 = 0;
  auVar29 = ZEXT816(0);
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 024df688 with catch @ 024df964
                       catch() { ... } // from try @ 024df958 with catch @ 024df964 */
    bVar10 = Carrier__IsGroupBlockEnabled_2409f20(param_2,0);
    puVar7 = PTR_DAT_049c1558;
    auVar6._8_8_ = auStack_70._8_8_;
    auVar6._0_8_ = auStack_70._0_8_;
    auVar5._8_8_ = auStack_70._8_8_;
    auVar5._0_8_ = auStack_70._0_8_;
    auVar29._8_8_ = auStack_70._8_8_;
    auVar29._0_8_ = auStack_70._0_8_;
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar25 = *(long *)(param_2 + 0x1e0), auVar29 = auVar5, lVar25 != 0)) &&
       (lVar14 = *(long *)(param_2 + 0x120), auVar29 = auVar6, lVar14 != 0)) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x154);
      iVar21 = 0;
      iVar26 = 0;
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = *(int *)(lVar25 + 0x18) / iVar2;
      }
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 1;
      }
      while (auStack_70 = auVar29, iVar26 < *(int *)(lVar14 + 0x18)) {
                    /* try { // try from 024df9e4 to 025dfa93 has its CatchHandler @ 024df9e4
                       catch() { ... } // from try @ 024df9e4 with catch @ 024df9e4
                       catch() { ... } // from try @ 024dfb98 with catch @ 024df9e4
                       catch() { ... } // from try @ 024dfc3c with catch @ 024df9e4
                       catch() { ... } // from try @ 024dfc94 with catch @ 024df9e4
                       catch() { ... } // from try @ 024dfd20 with catch @ 024df9e4 */
        bVar28 = iVar26 < iVar4;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar14,iVar26,&lStack_90,*(undefined8 *)PTR_DAT_049c1568);
        lVar14 = lStack_90;
        auVar29 = auStack_70;
        if (*(long *)(param_2 + 0x128) == 0) goto LAB_024e00e0;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_2 + 0x128),iVar26,&lStack_90,*(undefined8 *)PTR_DAT_049c1560);
        lVar8 = lStack_90;
        auVar29 = auStack_70;
        if (lVar14 == 0) goto LAB_024e00e0;
        lVar15 = UnityEngine_Component__get_transform_3c18724(lVar14,0);
        iVar3 = iVar26 * iVar2;
        if (iVar3 < *(int *)(lVar25 + 0x18)) {
          if (iVar3 + -1 < 1) {
            lVar19 = 0;
          }
          else {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3 + -1,&lStack_90,*(undefined8 *)puVar7);
            lVar19 = lStack_90;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar25,iVar3,&lStack_90,*(undefined8 *)puVar7);
          lVar9 = lStack_90;
          iVar3 = iVar3 + iVar2;
          iVar27 = *(int *)(lVar25 + 0x18);
                    /* try { // try from 024dfa94 to 025dfaa3 has its CatchHandler @ 024dfc60 */
          if (iVar3 + -1 < iVar27) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3 + -1,&lStack_90,*(undefined8 *)puVar7);
                    /* try { // try from 024dfab0 to 025dfab7 has its CatchHandler @ 024dfc5c */
            lStack_c0 = lStack_90;
            iVar27 = *(int *)(lVar25 + 0x18);
          }
          else {
            lStack_c0 = 0;
          }
                    /* try { // try from 024dfac8 to 025dfacb has its CatchHandler @ 024dfc50 */
          if (iVar3 < iVar27) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3,&lStack_90,*(undefined8 *)puVar7);
            iVar27 = *(int *)(lVar25 + 0x18);
            lVar24 = lStack_90;
          }
          else {
            lVar24 = 0;
          }
          iVar3 = iVar3 + (iVar1 >> 1);
          if (iVar3 < iVar27) {
                    /* try { // try from 024dfb0c to 025dfb4f has its CatchHandler @ 024dfc64 */
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3,&lStack_90,*(undefined8 *)puVar7);
            lStack_c8 = lStack_90;
          }
          else {
            lStack_c8 = 0;
          }
          if (*(int *)(*(long *)PTR_DAT_049c1538 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auVar29 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                              (&uStack_78,*(undefined8 *)PTR_DAT_049c1530);
          puStack_88 = auStack_70;
          lStack_90 = 0;
          auStack_70 = auVar29;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 024dfb60 to 025dfb63 has its CatchHandler @ 024dfc48 */
          if (*(long *)(lVar9 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__GetSharedMaterials_3bddd80(*(long *)(lVar9 + 0x138),uStack_78,0);
                    /* try { // try from 024dfb74 to 025dfb7b has its CatchHandler @ 024dfc44 */
          UnityEngine_Renderer__SetSharedMaterials_3bddc98(lVar14,uStack_78,0);
          if (cRam0000000004f4a191 == '\0') {
                    /* try { // try from 024dfb8c to 025dfb97 has its CatchHandler @ 024dfc58 */
            FUN_021f03f8(PTR_DAT_049bc158);
                    /* try { // try from 024dfb98 to 025dfbe3 has its CatchHandler @ 024df9e4 */
            cRam0000000004f4a191 = '\x01';
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          puVar18 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
          UnityEngine_Transform__set_localRotation_3c2d9f0
                    (*puVar18,puVar18[1],puVar18[2],puVar18[3],lVar15,0);
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 024dfbe4 to 025dfbeb has its CatchHandler @ 024dfc3c */
          UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                    (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 024dfbf8 to 025dfc17 has its CatchHandler @ 024dfc40 */
          if (*(char *)(*(long *)(param_1 + 0x88) + 0x10) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar16 = UnityEngine_Object__op_Inequality_3c1b96c(lVar19,0,0);
            if ((uVar16 & 1) == 0) {
                    /* catch() { ... } // from try @ 024dfb74 with catch @ 024dfc44 */
              uVar12 = 0;
            }
            else {
                    /* try { // try from 024dfc2c to 025dfc2f has its CatchHandler @ 024dfc5c */
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
                    /* try { // try from 024dfc30 to 025dfc33 has its CatchHandler @ 024dfc54 */
                    /* try { // try from 024dfc34 to 025dfc37 has its CatchHandler @ 024dfc4c */
                    /* try { // try from 024dfc38 to 025dfc3b has its CatchHandler @ 024dfc64 */
              uVar12 = Block__IsCompatibleWith_23dcb80(lVar19,lVar9);
                    /* catch() { ... } // from try @ 024dfbe4 with catch @ 024dfc3c
                       try { // try from 024dfc3c to 025dfc7b has its CatchHandler @ 024df9e4 */
                    /* catch() { ... } // from try @ 024dfbf8 with catch @ 024dfc40 */
            }
                    /* catch() { ... } // from try @ 024dfb60 with catch @ 024dfc48 */
                    /* catch() { ... } // from try @ 024dfc34 with catch @ 024dfc4c */
                    /* catch() { ... } // from try @ 024dfac8 with catch @ 024dfc50 */
                    /* catch() { ... } // from try @ 024dfc30 with catch @ 024dfc54 */
                    /* catch() { ... } // from try @ 024dfb8c with catch @ 024dfc58 */
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024dfab0 with catch @ 024dfc5c
                       catch() { ... } // from try @ 024dfc2c with catch @ 024dfc5c */
              FUN_021f0574();
            }
                    /* catch() { ... } // from try @ 024dfa94 with catch @ 024dfc60 */
                    /* catch() { ... } // from try @ 024dfb0c with catch @ 024dfc64
                       catch() { ... } // from try @ 024dfc38 with catch @ 024dfc64 */
            uVar16 = UnityEngine_Object__op_Inequality_3c1b96c(lVar24,0,0);
            if ((uVar16 & 1) == 0) {
              uVar13 = 0;
              if ((uVar12 & 1) != 0) {
LAB_024dfcc4:
                if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                          (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0);
                if (cRam0000000004f4a55e == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a55e = '\x01';
                }
                    /* try { // try from 024dfd08 to 025dfd17 has its CatchHandler @ 024dfd18 */
                lVar19 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                    /* catch() { ... } // from try @ 024dfc7c with catch @ 024dfd18
                       catch() { ... } // from try @ 024dfd08 with catch @ 024dfd18 */
                    /* try { // try from 024dfd1c to 025dfd1f has its CatchHandler @ 024dfd28 */
                    /* try { // try from 024dfd20 to 025dfd2b has its CatchHandler @ 024df9e4 */
                    /* catch() { ... } // from try @ 024dfd1c with catch @ 024dfd28 */
                UnityEngine_Quaternion__AngleAxis_3c0a0a8
                          (0x43340000,*(undefined4 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x1c),
                           *(undefined4 *)(lVar19 + 0x20),0);
                UnityEngine_Transform__set_localRotation_3c2d9f0(lVar15,0);
              }
            }
            else {
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
                    /* try { // try from 024dfc7c to 025dfc93 has its CatchHandler @ 024dfd18 */
              uVar13 = Block__IsCompatibleWith_23dcb80(lVar24,lVar9);
              if ((uVar12 & uVar13 & 1) == 0) {
                if ((uVar12 & 1) != 0) goto LAB_024dfcc4;
                if ((uVar13 & 1) == 0) {
                  uVar13 = 0;
                  goto LAB_024dfd38;
                }
                if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                          (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0);
              }
              else {
                    /* try { // try from 024dfc94 to 025dfd07 has its CatchHandler @ 024df9e4 */
                if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                          (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),0);
              }
              uVar13 = 1;
            }
LAB_024dfd38:
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(lStack_c0,0,0);
            if ((uVar16 & 1) == 0) {
              uVar16 = Block__IsCompatibleWith_23dcb80(lVar9,lStack_c0);
              if ((uVar16 & 1) == 0) goto LAB_024dfd78;
            }
            else {
LAB_024dfd78:
              bVar28 = false;
            }
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                FUN_021f0574();
              }
              bVar11 = UnityEngine_Object__op_Equality_3c1eeb4(lStack_c8,0,0);
              bVar28 = (bool)(bVar28 & (bVar11 ^ 0xff));
            }
          }
          uVar22 = *(undefined8 *)(lVar9 + 0x118);
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar16 = UnityEngine_Object__op_Inequality_3c1b96c(uVar22,0,0);
          if ((uVar16 & 1) != 0) {
            UnityEngine_MeshFilter__set_sharedMesh_3befb8c(lVar8,*(undefined8 *)(lVar9 + 0x118),0);
            if (cRam0000000004f4a191 == '\0') {
              FUN_021f03f8(PTR_DAT_049bc158);
              cRam0000000004f4a191 = '\x01';
            }
            puVar18 = *(undefined4 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
            UnityEngine_Transform__set_localRotation_3c2d9f0
                      (*puVar18,puVar18[1],puVar18[2],puVar18[3],lVar15,0);
          }
          UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                    (auStack_70,*(undefined8 *)PTR_DAT_049c1570);
        }
        lVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar14,0);
        auVar29 = auStack_70;
        if (lVar14 == 0) goto LAB_024e00e0;
        UnityEngine_GameObject__SetActive_3c1ce34(lVar14,bVar10 & bVar28,0);
        auVar29 = auStack_70;
        if (0 < iVar2) {
          iVar27 = iVar2;
          iVar3 = iVar21;
          do {
            auVar29 = auStack_70;
            if (*(int *)(lVar25 + 0x18) <= iVar3) break;
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3,&lStack_90,*(undefined8 *)puVar7);
            auVar29 = auStack_70;
            if ((lStack_90 == 0) || (*(long *)(lStack_90 + 0x138) == 0)) goto LAB_024e00e0;
            UnityEngine_Renderer__set_enabled_3bdcab0
                      (*(long *)(lStack_90 + 0x138),bVar28 & bVar10 ^ 1,0);
            iVar27 = iVar27 + -1;
            iVar3 = iVar3 + 1;
            auVar29 = auStack_70;
          } while (iVar27 != 0);
        }
        lVar14 = *(long *)(param_2 + 0x120);
        iVar26 = iVar26 + 1;
        iVar21 = iVar21 + iVar2;
        if (lVar14 == 0) goto LAB_024e00e0;
      }
      plVar23 = *(long **)(param_1 + 0x68);
      lStack_80 = param_2;
      thunk_FUN_021f190c(&lStack_80,param_2);
      lVar25 = lStack_80;
      auVar29 = auStack_70;
      if (plVar23 != (long *)0x0) {
        lVar14 = *plVar23;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 == 0) goto LAB_024e0094;
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_024e007c;
      }
    }
  }
LAB_024e00e0:
  auStack_70 = auVar29;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar20 = piVar20 + 4;
    if (uVar16 == 0) break;
LAB_024e007c:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_049c1540) {
      puVar17 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_024e00b0;
    }
  }
LAB_024e0094:
  puVar17 = (undefined8 *)FUN_02229a4c(plVar23,*(long *)PTR_DAT_049c1540,0);
LAB_024e00b0:
  (*(code *)*puVar17)(plVar23,lVar25,puVar17[1]);
  return;
}

