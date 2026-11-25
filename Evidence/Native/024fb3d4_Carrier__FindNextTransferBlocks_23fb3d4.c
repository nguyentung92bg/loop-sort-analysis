/* IL2CPP: Carrier$$FindNextTransferBlocks
void Carrier__FindNextTransferBlocks (Carrier_o* __this, System_Collections_Generic_ICollection_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$FindNextTransferBlocks
   void Carrier__FindNextTransferBlocks (Carrier_o* __this,
   System_Collections_Generic_ICollection_Block__o* blocks, const MethodInfo* method); */

void Carrier__FindNextTransferBlocks_23fb3d4(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b6de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c23c8);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1a48);
    bRam0000000004f4b6de = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uVar7 = Carrier__GetNextColorType_24095f4(param_1);
  puVar3 = PTR_DAT_049c1a48;
  puVar2 = PTR_DAT_049c1410;
  lVar11 = *(long *)(param_1 + 0x1e0);
  if (lVar11 != 0) {
    iVar13 = *(int *)(lVar11 + 0x18) + -1;
    if (iVar13 < 0) {
      return;
    }
    bVar1 = false;
    plVar15 = (long *)PTR_DAT_049c23c8;
    puVar16 = (undefined8 *)PTR_DAT_049c1558;
    iVar6 = *(int *)(lVar11 + 0x18);
    do {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar11,iVar13,&lStack_68,*puVar16);
      lVar11 = lStack_68;
      if (lStack_68 == 0) break;
      uVar8 = ColorType__op_Equality_24f9db0(*(undefined8 *)(lStack_68 + 0xe4),uVar7,0);
      if ((uVar8 & 1) == 0) {
        if (*(long *)(param_1 + 0x1e0) == 0) break;
        lVar14 = *(long *)(param_1 + 0x1d8);
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_1 + 0x1e0),iVar6,&lStack_68,*puVar16);
        lVar9 = lStack_68;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if ((lVar9 == 0) || (lVar14 == 0)) break;
        uVar8 = FUN_024f5708(lVar14,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          return;
        }
        uVar7 = *(undefined8 *)(lVar11 + 0xe4);
LAB_024fb650:
        bVar1 = true;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x1e0);
        if (lVar9 == 0) break;
        if (iVar13 < *(int *)(lVar9 + 0x18) + -1) {
          lVar9 = *(long *)(param_1 + 0x1d8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar9 == 0) break;
          uVar8 = FUN_024f5708(lVar9,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar3);
          lVar9 = *(long *)(param_1 + 0x1e0);
          if ((uVar8 & 1) != 0) {
            if (lVar9 == 0) break;
            lVar14 = *(long *)(param_1 + 0x1d8);
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar9,iVar6,&lStack_68,*puVar16);
            lVar9 = lStack_68;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if ((lVar9 == 0) || (lVar14 == 0)) break;
            uVar8 = FUN_024f5708(lVar14,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
              return;
            }
            lVar9 = *(long *)(param_1 + 0x1e0);
            puVar16 = (undefined8 *)PTR_DAT_049c1558;
          }
          plVar15 = (long *)PTR_DAT_049c23c8;
          if (lVar9 == 0) break;
        }
        if (iVar13 < *(int *)(lVar9 + 0x18) + -1) {
          lVar14 = *(long *)(param_1 + 0x1d8);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar9,iVar6,&lStack_68,*puVar16);
          lVar9 = lStack_68;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if ((lVar9 == 0) || (lVar14 == 0)) break;
          uVar4 = FUN_024f5708(lVar14,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar3);
          plVar15 = (long *)PTR_DAT_049c23c8;
          if (bVar1 || (uVar4 & 1) != 0) goto LAB_024fb650;
        }
        else if (bVar1) goto LAB_024fb650;
        uVar8 = Block__CanBeginTransferExit_23dd008(lVar11,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        bVar1 = false;
      }
      if (param_2 == (long *)0x0) break;
      lVar9 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar15) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_024fb6a8;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(param_2,*plVar15,2);
LAB_024fb6a8:
      (*(code *)*puVar10)(param_2,lVar11,puVar10[1]);
      lVar9 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar15) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_024fb704;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(param_2,*plVar15,0);
LAB_024fb704:
      iVar5 = (*(code *)*puVar10)(param_2,puVar10[1]);
      iVar6 = *(int *)(param_1 + 0x1b8);
      if (iVar6 < 1) {
        iVar6 = Carrier__GetCompleteBlockCount_24095bc(param_1);
      }
      if (iVar6 <= iVar5) {
        return;
      }
      if (*(long *)(param_1 + 0x168) == 0) break;
      iVar6 = *(int *)(*(long *)(param_1 + 0x168) + 0x154);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = iVar13 / iVar6;
      }
      if ((iVar13 == iVar5 * iVar6) &&
         (uVar8 = Block__TryGetFeature_23dc908(lVar11,0x20,&uStack_78,0), (uVar8 & 1) != 0)) {
        return;
      }
      if (iVar13 + -1 < 0) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x1e0);
      iVar6 = iVar13;
      iVar13 = iVar13 + -1;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

