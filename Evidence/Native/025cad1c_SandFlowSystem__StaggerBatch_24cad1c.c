/* IL2CPP: SandFlowSystem$$StaggerBatch
void SandFlowSystem__StaggerBatch (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$StaggerBatch
   void SandFlowSystem__StaggerBatch (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__StaggerBatch_24cad1c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uStack_94;
  long lStack_88;
  
  puVar2 = PTR_DAT_049c7130;
  if ((bRam0000000004f4bbef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2508);
    FUN_021f03f8(PTR_DAT_049c1df0);
    FUN_021f03f8(PTR_DAT_049c72c8);
    FUN_021f03f8(PTR_DAT_049c72d0);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c7130);
    bRam0000000004f4bbef = 1;
  }
  lVar9 = *(long *)(param_1 + 0x120);
  uStack_94 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar9 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAll_28d0344
              (lVar9,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
               *(undefined8 *)PTR_DAT_049c72c8);
    lVar9 = *(long *)(param_1 + 0x120);
    if (lVar9 != 0) {
      if (1 < *(int *)(lVar9 + 0x18)) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar2;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                  (lVar9,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                   *(undefined8 *)PTR_DAT_049c72d0);
        lVar9 = *(long *)(param_1 + 0x120);
        if (lVar9 == 0) goto LAB_025cafe0;
      }
      puVar3 = PTR_DAT_049c2508;
      puVar2 = PTR_DAT_049c1558;
      iVar8 = 0;
      while( true ) {
        if (*(int *)(lVar9 + 0x18) <= iVar8) {
          lVar5 = *(long *)PTR_DAT_049c1df0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
          if ((uVar6 & 1) == 0) {
            *(undefined4 *)(lVar9 + 0x18) = 0;
          }
          else {
            iVar8 = *(int *)(lVar9 + 0x18);
            *(undefined4 *)(lVar9 + 0x18) = 0;
            if (0 < iVar8) {
              System_Array__Clear_31229cc(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
            }
          }
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar9,iVar8,&lStack_88,*(undefined8 *)puVar2);
        if (lStack_88 == 0) break;
        lVar9 = *(long *)(lStack_88 + 0x100);
        iVar10 = 1;
        do {
          iVar7 = iVar10;
          lVar5 = *(long *)(param_1 + 0x120);
          if (lVar5 == 0) goto LAB_025cafe0;
          iVar1 = iVar8 + iVar7;
          if (*(int *)(lVar5 + 0x18) <= iVar1) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar5,iVar1,&lStack_88,*(undefined8 *)puVar2);
          if (lStack_88 == 0) goto LAB_025cafe0;
          iVar10 = iVar7 + 1;
        } while (*(long *)(lStack_88 + 0x100) == lVar9);
        if (iVar7 - 2U < 0x7ffffffe) {
          iVar10 = 0;
          do {
            if (*(long *)(param_1 + 0x120) == 0) goto LAB_025cafe0;
            lVar9 = *(long *)(param_1 + 0xf0);
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_1 + 0x120),iVar8 + iVar10,&lStack_88,*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_025cafe0;
            uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                              (lVar9,lStack_88,&uStack_94,*(undefined8 *)puVar3);
            uVar4 = uStack_94;
            if ((uVar6 & 1) != 0) {
              lVar9 = *(long *)(param_1 + 0xb0);
              if (lVar9 == 0) goto LAB_025cafe0;
              if (*(uint *)(lVar9 + 0x18) <= uStack_94) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar5 = lVar9 + 0x20 + (long)(int)uStack_94 * 0x90;
              fVar13 = (float)*(undefined8 *)(lVar5 + 0x18) * 0.5;
              fVar14 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) * 0.5;
              *(ulong *)(lVar5 + 0x18) = CONCAT44(fVar14,fVar13);
              *(float *)(lVar5 + 0xc) =
                   *(float *)(lVar5 + 0xc) + ((float)iVar10 * fVar14) / (float)(iVar7 + -1);
              if ((*(long *)(param_1 + 0x160) == 0) || (*(long *)(param_1 + 0x168) == 0))
              goto LAB_025cafe0;
              fVar11 = *(float *)(*(long *)(param_1 + 0x160) + 0xbc);
              fVar14 = 1.0;
              if (fVar11 <= 1.0) {
                fVar14 = fVar11;
              }
              fVar12 = 0.0;
              if (0.0 <= fVar11) {
                fVar12 = fVar14;
              }
              fVar14 = (float)SandFlowRenderer__FarthestReformGap_24c0a60
                                        (*(long *)(param_1 + 0x168),uStack_94);
              fVar12 = fVar12 * fVar13;
              if (fVar12 <= fVar14) {
                fVar12 = fVar14;
              }
              *(float *)(lVar9 + 0x20 + (long)(int)uVar4 * 0x90 + 0x6c) = fVar12;
            }
          } while ((1 < iVar7) && (iVar10 = iVar10 + 1, iVar10 < iVar7));
        }
        lVar9 = *(long *)(param_1 + 0x120);
        iVar8 = iVar1;
        if (lVar9 == 0) break;
      }
    }
  }
LAB_025cafe0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

