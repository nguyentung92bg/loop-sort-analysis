/* IL2CPP: RocketSystem$$FindHiddenBlockGroups
void RocketSystem__FindHiddenBlockGroups (RocketSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$FindHiddenBlockGroups
   void RocketSystem__FindHiddenBlockGroups (RocketSystem_o* __this, Carrier_o* carrier,
   System_Collections_Generic_List_List_Block___o* groups, const MethodInfo* method); */

void RocketSystem__FindHiddenBlockGroups_24b8fac(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bbaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2580);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c1ac0);
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c25c8);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4bbaa = 1;
  }
  puVar5 = PTR_DAT_049c1ac0;
  puVar4 = PTR_DAT_049c1710;
  puVar3 = PTR_DAT_049c1558;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x154);
    if (0 < iVar2) {
      if ((param_2 == 0) || (lVar9 = *(long *)(param_2 + 0x1e0), lVar9 == 0)) goto LAB_025b91c8;
      iVar8 = *(int *)(lVar9 + 0x18);
      if (0 < iVar8) {
        iVar10 = 0;
        do {
          iVar1 = iVar10 + iVar2;
          if (iVar1 <= iVar8) {
            iVar8 = iVar1;
          }
          if (iVar10 < iVar1) {
            lVar11 = 0;
            do {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar9,iVar10,&lStack_68,*(undefined8 *)puVar3);
              lVar6 = lStack_68;
              if (lStack_68 == 0) goto LAB_025b91c8;
              uVar7 = Block__TryGetFeature_23dc908(lStack_68,1,&uStack_80,0);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(param_1 + 0xa0) == 0) goto LAB_025b91c8;
                uVar7 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                  (*(long *)(param_1 + 0xa0),lVar6,*(undefined8 *)puVar4);
                if (((uVar7 & 1) == 0) &&
                   (uVar7 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                                      (lVar6,&lStack_70,*(undefined8 *)puVar5), (uVar7 & 1) != 0)) {
                  if (lStack_70 == 0) goto LAB_025b91c8;
                  if (*(char *)(lStack_70 + 0xb8) == '\0') {
                    if (lVar11 == 0) {
                      if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      lVar11 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_280447c
                                         (*(undefined8 *)PTR_DAT_049c2580);
                      if (lVar11 == 0) goto LAB_025b91c8;
                    }
                    FUN_02333498(lVar11,lVar6,*(undefined8 *)PTR_DAT_049c1c80);
                  }
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar8);
            if (lVar11 != 0) {
              if (param_3 == 0) goto LAB_025b91c8;
              FUN_02333498(param_3,lVar11,*(undefined8 *)PTR_DAT_049c25c8);
            }
          }
          iVar8 = *(int *)(lVar9 + 0x18);
          iVar10 = iVar1;
        } while (iVar1 < iVar8);
      }
    }
    return;
  }
LAB_025b91c8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

