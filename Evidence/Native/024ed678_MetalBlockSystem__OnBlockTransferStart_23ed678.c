/* IL2CPP: MetalBlockSystem$$OnBlockTransferStart
void MetalBlockSystem__OnBlockTransferStart (MetalBlockSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$OnBlockTransferStart
   void MetalBlockSystem__OnBlockTransferStart (MetalBlockSystem_o* __this,
   BlockTransferStartMessage_o m, const MethodInfo* method); */

void MetalBlockSystem__OnBlockTransferStart_23ed678
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  if ((bRam0000000004f4b630 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1f60);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1f68);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b630 = 1;
  }
  puVar5 = PTR_DAT_049c1f60;
  puVar4 = PTR_DAT_049c1558;
  uStack_a0 = 0;
  uStack_98 = 0;
  if ((*(long *)(param_4 + 0x38) != 0) && (param_6 != 0)) {
    if (0 < *(int *)(param_6 + 0x18)) {
      iVar2 = *(int *)(*(long *)(param_4 + 0x38) + 0x154);
      iVar11 = 0;
      iVar14 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_6,iVar11,&lStack_88,*(undefined8 *)puVar4);
        lVar8 = lStack_88;
        if (lStack_88 == 0) goto LAB_024ed97c;
        uVar13 = *(undefined8 *)(lStack_88 + 0x118);
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar13,0,0);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = Block__TryGetFeature_23dc908(lVar8,0x1f,&uStack_a0), (uVar6 & 1) != 0)) {
          iVar3 = *(int *)(param_6 + 0x18);
          iVar10 = iVar2;
          if (iVar3 - iVar11 <= iVar2) {
            iVar10 = iVar3 - iVar11;
          }
          if (cRam0000000004f4a233 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a233 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          fVar18 = *pfVar9;
          fVar17 = pfVar9[1];
          fVar16 = pfVar9[2];
          if (0 < iVar10) {
            iVar12 = 0;
            iVar1 = iVar2;
            if (iVar3 + iVar14 <= iVar2) {
              iVar1 = iVar3 + iVar14;
            }
            do {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (param_6,iVar11 + iVar12,&lStack_88,*(undefined8 *)puVar4);
              if ((lStack_88 == 0) ||
                 (lVar7 = UnityEngine_Component__get_transform_3c18724(lStack_88,0), lVar7 == 0))
              goto LAB_024ed97c;
              fVar15 = (float)UnityEngine_Transform__get_position_3c2d540(lVar7,0);
              fVar18 = fVar18 + fVar15;
              fVar17 = fVar17 + param_2;
              iVar12 = iVar12 + 1;
              fVar16 = fVar16 + param_3;
            } while (iVar1 != iVar12);
          }
          if (*(int *)(*(long *)PTR_DAT_049c1f68 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar15 = (float)iVar10;
          param_2 = fVar17 / fVar15;
          param_3 = fVar16 / fVar15;
          uVar13 = MetalBlockSystem__FindNearestGroupBlock_23ed980
                             (fVar18 / fVar15,param_2,param_3,param_5);
          if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
            FUN_021f0574(*(long *)PTR_DAT_049b3b98);
          }
          uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar13,0,0);
          if ((uVar6 & 1) == 0) {
            lVar8 = MetalBlockSystem__CreatePile_23edbbc(fVar15 / (float)iVar2,param_4,uVar13,lVar8)
            ;
            if (lVar8 == 0) goto LAB_024ed97c;
            *(int *)(lVar8 + 0x18) = iVar10;
            if (0 < iVar10) {
              iVar10 = 0;
              iVar12 = iVar2;
              if (iVar3 + iVar14 <= iVar2) {
                iVar12 = iVar3 + iVar14;
              }
              do {
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (param_6,iVar11 + iVar10,&lStack_88,*(undefined8 *)puVar4);
                lVar7 = lStack_88;
                if ((lStack_88 == 0) || (*(long *)(lStack_88 + 0x138) == 0)) goto LAB_024ed97c;
                UnityEngine_Renderer__set_enabled_3bdcab0(*(long *)(lStack_88 + 0x138),0,0);
                if (*(long *)(param_4 + 0x80) == 0) goto LAB_024ed97c;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (*(long *)(param_4 + 0x80),lVar7,lVar8,*(undefined8 *)puVar5);
                iVar10 = iVar10 + 1;
              } while (iVar12 != iVar10);
            }
          }
        }
        iVar11 = iVar11 + iVar2;
        iVar14 = iVar14 - iVar2;
      } while (iVar11 < *(int *)(param_6 + 0x18));
    }
    return;
  }
LAB_024ed97c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

