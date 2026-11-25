/* IL2CPP: HiddenBlockSystem$$HandleComplete
void HiddenBlockSystem__HandleComplete (HiddenBlockSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024ea518) */
/* WARNING: Removing unreachable block (ram,0x024ea524) */
/* WARNING: Removing unreachable block (ram,0x024ea528) */
/* IL2CPP: HiddenBlockSystem$$HandleComplete
   void HiddenBlockSystem__HandleComplete (HiddenBlockSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void HiddenBlockSystem__HandleComplete_23ea8e8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
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
  
  puVar8 = PTR_DAT_049c1cf0;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = *(long *)(param_5 + 0x1e0);
                    /* try { // try from 024ea8f0 to 025ea9d3 has its CatchHandler @ 024ea8f0
                       catch() { ... } // from try @ 024ea8f0 with catch @ 024ea8f0
                       catch() { ... } // from try @ 024eaa40 with catch @ 024ea8f0
                       catch() { ... } // from try @ 024eaa94 with catch @ 024ea8f0
                       catch() { ... } // from try @ 024eaac8 with catch @ 024ea8f0
                       catch() { ... } // from try @ 024eab00 with catch @ 024ea8f0
                       catch() { ... } // from try @ 024eab2c with catch @ 024ea8f0 */
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
  puVar5 = PTR_DAT_049c1cf8;
  lStack_70 = 0;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
            (&lStack_70,*(undefined8 *)puVar5);
  puVar11 = PTR_DAT_049c1d30;
  puVar10 = PTR_DAT_049c1d28;
  puVar9 = PTR_DAT_049c1d08;
  puVar7 = PTR_DAT_049c14e8;
  puVar6 = PTR_DAT_049c14e0;
  puVar5 = PTR_DAT_049c14d8;
  if (lVar16 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lVar16,&uStack_b8,*(undefined8 *)PTR_DAT_049c14f0);
    uStack_80 = uStack_a8;
    puStack_88 = puStack_b0;
    uStack_90 = uStack_b8;
    uStack_b8 = 0;
    puStack_b0 = &uStack_90;
    while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_90,*(undefined8 *)puVar6), (uVar12 & 1) != 0) {
      lVar19 = *(long *)puVar7;
      lVar13 = *(long *)(lVar19 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar16 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_02229718();
        lVar13 = *(long *)(lVar19 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar20 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar14,uVar20);
      lVar16 = lStack_68;
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = Block__TryGetFeature_23dc908(lStack_68,1,&uStack_a0);
      if ((uVar12 & 1) != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (lVar16,&lStack_68,*(undefined8 *)puVar9);
        lVar16 = lStack_68;
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(char *)(lStack_68 + 0xb8) == '\0') {
          HiddenBlock__Reveal_23e9bf8(lStack_68);
          HiddenBlock__Open_23e9c18(lVar16);
          if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(lStack_70,lVar16,*(undefined8 *)puVar11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)puVar5);
    lVar16 = lStack_70;
    if (lStack_70 != 0) {
      iVar1 = *(int *)(lStack_70 + 0x18);
      if (iVar1 == 0) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Release_28045e4
                  (lVar16,*(undefined8 *)PTR_DAT_049c1d00);
        return;
      }
      if (*(long *)(param_4 + 0x78) != 0) {
        iVar2 = *(int *)(*(long *)(param_4 + 0x78) + 0x154);
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar20 = Extensions__GetCenterPoint_object__25ef5a0(lVar16,*(undefined8 *)PTR_DAT_049c1d20);
        if (*(long *)(param_4 + 0x80) != 0) {
          uStack_b8 = CONCAT44(param_2,uVar20);
          puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,param_3);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_4 + 0x80),param_5,&uStack_b8,*(undefined8 *)PTR_DAT_049c1d18);
          if (*(long *)(param_4 + 0x88) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                      (*(long *)(param_4 + 0x88),param_5,lStack_70,*(undefined8 *)PTR_DAT_049c1d10);
            plVar18 = *(long **)(param_4 + 0x58);
            if (plVar18 != (long *)0x0) {
              iVar4 = 0;
              if (iVar2 != 0) {
                iVar4 = iVar1 / iVar2;
              }
              lVar16 = *plVar18;
              uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar12 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar10) {
                    puVar15 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_024ea594;
                  }
                  uVar12 = uVar12 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar12 != 0);
              }
              puVar15 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)puVar10,0);
LAB_024ea594:
              (*(code *)*puVar15)(plVar18,iVar4,puVar15[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

