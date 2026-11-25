/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierRemoveBlock
void BlockCarrierMeshSystem__OnCarrierRemoveBlock (BlockCarrierMeshSystem_o* __this, CarrierRemoveBlockMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$OnCarrierRemoveBlock
   void BlockCarrierMeshSystem__OnCarrierRemoveBlock (BlockCarrierMeshSystem_o* __this,
   CarrierRemoveBlockMessage_o m, const MethodInfo* method); */

void BlockCarrierMeshSystem__OnCarrierRemoveBlock_23e00fc(long param_1,long param_2,long param_3)

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
  uint uVar12;
  long lVar14;
  long lVar15;
  byte bVar11;
  uint uVar13;
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
  
  if ((param_3 == 0) || (*(long *)(param_3 + 0x138) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Renderer__set_enabled_3bdcab0(*(long *)(param_3 + 0x138),1,0);
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
    FUN_021f03f8(PTR_DAT_049c1570);
    bRam0000000004f4b5cd = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  auVar29 = ZEXT816(0);
  if (param_2 != 0) {
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
          if (iVar3 + -1 < iVar27) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar25,iVar3 + -1,&lStack_90,*(undefined8 *)puVar7);
            lStack_c0 = lStack_90;
            iVar27 = *(int *)(lVar25 + 0x18);
          }
          else {
            lStack_c0 = 0;
          }
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
          if (*(long *)(lVar9 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Renderer__GetSharedMaterials_3bddd80(*(long *)(lVar9 + 0x138),uStack_78,0);
          UnityEngine_Renderer__SetSharedMaterials_3bddc98(lVar14,uStack_78,0);
          if (cRam0000000004f4a191 == '\0') {
            FUN_021f03f8(PTR_DAT_049bc158);
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
          UnityEngine_MeshFilter__set_sharedMesh_3befb8c
                    (lVar8,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),0);
          if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (*(char *)(*(long *)(param_1 + 0x88) + 0x10) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar16 = UnityEngine_Object__op_Inequality_3c1b96c(lVar19,0,0);
            if ((uVar16 & 1) == 0) {
              uVar12 = 0;
            }
            else {
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar12 = Block__IsCompatibleWith_23dcb80(lVar19,lVar9);
            }
            if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
              FUN_021f0574();
            }
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
                lVar19 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
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

