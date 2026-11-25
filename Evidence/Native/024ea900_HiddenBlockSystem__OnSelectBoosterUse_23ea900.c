/* IL2CPP: HiddenBlockSystem$$OnSelectBoosterUse
void HiddenBlockSystem__OnSelectBoosterUse (HiddenBlockSystem_o* __this, SelectBoosterUseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024ea478) */
/* WARNING: Removing unreachable block (ram,0x024ea48c) */
/* WARNING: Removing unreachable block (ram,0x024ea490) */
/* WARNING: Removing unreachable block (ram,0x024ea4ac) */
/* WARNING: Removing unreachable block (ram,0x024ea4d4) */
/* IL2CPP: HiddenBlockSystem$$OnSelectBoosterUse
   void HiddenBlockSystem__OnSelectBoosterUse (HiddenBlockSystem_o* __this,
   SelectBoosterUseMessage_o m, const MethodInfo* method); */

void HiddenBlockSystem__OnSelectBoosterUse_23ea900(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  
  puVar9 = PTR_DAT_049c1cf0;
  if ((bRam0000000004f4b618 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1cf8);
    FUN_021f03f8(PTR_DAT_049c1d00);
    FUN_021f03f8(PTR_DAT_049c1cf0);
    FUN_021f03f8(PTR_DAT_049c1d08);
    FUN_021f03f8(PTR_DAT_049c1d10);
    FUN_021f03f8(PTR_DAT_049c1d18);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1d20);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1d28);
    FUN_021f03f8(PTR_DAT_049c1d30);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1d38);
    bRam0000000004f4b618 = 1;
  }
  puVar6 = PTR_DAT_049c1cf8;
  lStack_70 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
            (&lStack_70,*(undefined8 *)puVar6);
  puVar12 = PTR_DAT_049c1d30;
  puVar11 = PTR_DAT_049c1d28;
  puVar10 = PTR_DAT_049c1d08;
  puVar8 = PTR_DAT_049c14e8;
  puVar7 = PTR_DAT_049c14e0;
  puVar6 = PTR_DAT_049c14d8;
  if (param_3 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_3,&uStack_b8,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_80 = uStack_a8;
    puStack_88 = puStack_b0;
    uStack_90 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_90;
    while (uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_90,*(undefined8 *)puVar7), (uVar13 & 1) != 0) {
      lVar20 = *(long *)puVar8;
      lVar14 = *(long *)(lVar20 + 0x20);
      uVar4 = *(ushort *)(lVar14 + 0x135);
      lVar15 = lVar14;
      if ((uVar4 & 1) == 0) {
        lVar15 = FUN_02229718();
        lVar14 = *(long *)(lVar20 + 0x20);
        uVar4 = *(ushort *)(lVar14 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
      if ((uVar4 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar16 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar16,uVar1);
      lVar15 = lStack_68;
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = Block__TryGetFeature_23dc908(lStack_68,1,&uStack_a0);
      if ((uVar13 & 1) != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (lVar15,&lStack_68,*(undefined8 *)puVar10);
        lVar15 = lStack_68;
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(char *)(lStack_68 + 0xb8) == '\0') {
          HiddenBlock__Reveal_23e9bf8(lStack_68);
          HiddenBlock__Open_23e9c18(lVar15);
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(lStack_70,lVar15,*(undefined8 *)puVar12);
        }
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)puVar6);
    lVar15 = lStack_70;
    if (lStack_70 != 0) {
      iVar2 = *(int *)(lStack_70 + 0x18);
      if (iVar2 == 0) {
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
                  (lVar15,*(undefined8 *)PTR_DAT_049c1d00);
        return;
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x78) + 0x154);
        if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
                  (lVar15,*(undefined8 *)PTR_DAT_049c1d00);
        plVar19 = *(long **)(param_1 + 0x58);
        if (plVar19 != (long *)0x0) {
          iVar5 = 0;
          if (iVar3 != 0) {
            iVar5 = iVar2 / iVar3;
          }
          lVar15 = *plVar19;
          uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar13 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar11) {
                puVar17 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_024ea594;
              }
              uVar13 = uVar13 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar13 != 0);
          }
          puVar17 = (undefined8 *)FUN_02229a4c(plVar19,*(long *)puVar11,0);
LAB_024ea594:
          (*(code *)*puVar17)(plVar19,iVar5,puVar17[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

