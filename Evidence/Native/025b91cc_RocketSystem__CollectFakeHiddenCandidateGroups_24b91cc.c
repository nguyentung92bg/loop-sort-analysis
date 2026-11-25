/* IL2CPP: RocketSystem$$CollectFakeHiddenCandidateGroups
void RocketSystem__CollectFakeHiddenCandidateGroups (RocketSystem_o* __this, System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$CollectFakeHiddenCandidateGroups
   void RocketSystem__CollectFakeHiddenCandidateGroups (RocketSystem_o* __this,
   System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method); */

void RocketSystem__CollectFakeHiddenCandidateGroups_24b91cc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bbac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c2580);
    FUN_021f03f8(PTR_DAT_049c2590);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c69e8);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c25c8);
    FUN_021f03f8(PTR_DAT_049c1548);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1568);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4bbac = 1;
  }
  puVar3 = PTR_DAT_049c22d8;
  puVar9 = (undefined8 *)PTR_DAT_049c1568;
  uStack_90 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x38) + 0x154);
    if (iVar1 < 1) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x90);
    if (lVar10 != 0) {
      lStack_70 = 0;
      lStack_68 = 0;
      lStack_78 = (ulong)*(uint *)(lVar10 + 0x30) << 0x20;
      thunk_FUN_021f190c(&lStack_70,0);
      lStack_68 = *(long *)(lVar10 + 0x28);
      thunk_FUN_021f190c(&lStack_68);
      lStack_88 = lStack_70;
      uStack_90 = lStack_78;
      lStack_80 = lStack_68;
      while( true ) {
        do {
          iVar8 = (int)uStack_90 + -1;
          uStack_90 = CONCAT44(uStack_90._4_4_,iVar8);
          if (iVar8 < 0) {
            uStack_90._4_4_ = uStack_90._4_4_ - 1;
            if ((int)uStack_90._4_4_ < 0) {
              return;
            }
            lVar10 = *(long *)(lStack_80 + (ulong)uStack_90._4_4_ * 8 + 0x20);
            lStack_88 = *(long *)(lVar10 + 0x18);
            uStack_90._0_4_ = iVar8;
            thunk_FUN_021f190c((ulong)&uStack_90 | 8);
            iVar8 = *(int *)(lVar10 + 0x30) + -1;
            uStack_90 = CONCAT44(uStack_90._4_4_,iVar8);
          }
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_025b9578;
          plVar5 = (long *)FUN_024f6008(*(long *)(param_1 + 0x98),
                                        *(undefined8 *)(lStack_88 + (long)iVar8 * 8 + 0x20),
                                        *(undefined8 *)puVar3);
          lVar10 = *plVar5;
          if (lVar10 == 0) goto LAB_025b9578;
          uVar6 = Carrier__CanInteract_2408994(lVar10,0);
        } while ((((uVar6 & 1) == 0) || (*(char *)(lVar10 + 0x1b1) != '\0')) ||
                (uVar6 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                                   (lVar10,&uStack_98,*(undefined8 *)PTR_DAT_049c69e8),
                (uVar6 & 1) != 0));
        lVar11 = *(long *)(lVar10 + 0x1e0);
        if ((lVar11 == 0) || (*(long *)(lVar10 + 0x120) == 0)) break;
        iVar12 = *(int *)(*(long *)(lVar10 + 0x120) + 0x18);
        iVar8 = 0;
        if (iVar1 != 0) {
          iVar8 = *(int *)(lVar11 + 0x18) / iVar1;
        }
        if (iVar12 <= iVar8) {
          iVar8 = iVar12;
        }
        if (0 < iVar8) {
          iVar12 = 0;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = (*(int *)(lVar11 + 0x18) + -1) / iVar1;
          }
          do {
            if (iVar12 != iVar2) {
              if (((*(long *)(lVar10 + 0x120) == 0) ||
                  (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                             (*(long *)(lVar10 + 0x120),iVar12,&lStack_78,*puVar9), lStack_78 == 0))
                 || (lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lStack_78,0), lVar7 == 0)
                 ) goto LAB_025b9578;
              uVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar7,0);
              if ((uVar6 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                iVar13 = iVar12 * iVar1;
                lVar7 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_280447c
                                  (*(undefined8 *)PTR_DAT_049c2580);
                iVar14 = iVar1;
                if (iVar13 < iVar13 + iVar1) {
                  do {
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                              (lVar11,iVar13,&lStack_78,*(undefined8 *)PTR_DAT_049c1558);
                    lVar4 = lStack_78;
                    if (lStack_78 == 0) goto LAB_025b9578;
                    uVar6 = Block__HasAnyFeature_23dc720(lStack_78,0);
                    if ((uVar6 & 1) != 0) goto LAB_025b94dc;
                    if (lVar7 == 0) goto LAB_025b9578;
                    FUN_02333498(lVar7,lVar4,*(undefined8 *)PTR_DAT_049c1c80);
                    iVar14 = iVar14 + -1;
                    iVar13 = iVar13 + 1;
                  } while (iVar14 != 0);
                }
                else {
LAB_025b94dc:
                  if (lVar7 == 0) goto LAB_025b9578;
                }
                if (*(int *)(lVar7 + 0x18) == iVar1) {
                  if (param_2 == 0) goto LAB_025b9578;
                  FUN_02333498(param_2,lVar7,*(undefined8 *)PTR_DAT_049c25c8);
                  puVar9 = (undefined8 *)PTR_DAT_049c1568;
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
                            (lVar7,*(undefined8 *)PTR_DAT_049c2590);
                  puVar9 = (undefined8 *)PTR_DAT_049c1568;
                }
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != iVar8);
        }
      }
    }
  }
LAB_025b9578:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

