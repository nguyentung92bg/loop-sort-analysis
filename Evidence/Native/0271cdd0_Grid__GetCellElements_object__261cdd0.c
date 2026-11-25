/* IL2CPP: Grid$$GetCellElements<object>
void Grid__GetCellElements_object_ (Grid_o* __this, System_Collections_Generic_List_T__o* list, const MethodInfo_261CDD0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0271d0c0) */
/* WARNING: Removing unreachable block (ram,0x0271d148) */
/* IL2CPP: Grid$$GetCellElements<object>
   void Grid__GetCellElements_object_ (Grid_o* __this, System_Collections_Generic_List_T__o* list,
   const MethodInfo_261CDD0* method); */

void Grid__GetCellElements_object__261cdd0(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d80);
    FUN_021f03f8(PTR_DAT_049cd710);
    FUN_021f03f8(PTR_DAT_049c8d88);
    FUN_021f03f8(PTR_DAT_049cd718);
    FUN_021f03f8(PTR_DAT_049cd720);
    FUN_021f03f8(PTR_DAT_049c8d90);
    FUN_021f03f8(PTR_DAT_049cd728);
    FUN_021f03f8(PTR_DAT_049c8db8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_02229774(param_3);
    }
  }
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  if (param_2 != 0) {
    lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
    if ((uVar10 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
      }
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0xe8),&lStack_b8,*(undefined8 *)PTR_DAT_049c8db8);
      puVar9 = PTR_DAT_049cd728;
      puVar8 = PTR_DAT_049cd720;
      puVar7 = PTR_DAT_049cd718;
      puVar6 = PTR_DAT_049cd710;
      puVar5 = PTR_DAT_049c8d90;
      puVar4 = PTR_DAT_049c8d88;
      plStack_78 = plStack_b0;
      lStack_80 = lStack_b8;
      uStack_70 = uStack_a8;
      while( true ) {
        uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&lStack_80,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_80,*(undefined8 *)PTR_DAT_049c8d80);
          return;
        }
        lVar14 = *(long *)puVar5;
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
        lVar13 = lVar11;
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar3 = *(ushort *)(lVar11 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&lStack_80,
                                    *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_b8,uVar12,uVar2);
        if (lStack_b8 == 0) break;
        if (*(long *)(lStack_b8 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(lStack_b8 + 0xa0),&lStack_b8,*(undefined8 *)puVar9);
        lStack_a0 = lStack_b8;
        lStack_b8 = 0;
        plStack_98 = plStack_b0;
        uStack_90 = uStack_a8;
        plStack_b0 = &lStack_a0;
        while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&lStack_a0,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
          lVar14 = *(long *)puVar8;
          lVar11 = *(long *)(lVar14 + 0x20);
          uVar3 = *(ushort *)(lVar11 + 0x135);
          lVar13 = lVar11;
          if ((uVar3 & 1) == 0) {
            lVar13 = FUN_02229718();
            lVar11 = *(long *)(lVar14 + 0x20);
            uVar3 = *(ushort *)(lVar11 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          uVar12 = thunk_FUN_0224e54c(&lStack_a0,
                                      *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&uStack_68,uVar12,uVar2);
          uVar12 = uStack_68;
          lVar13 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02229718(lVar13);
          }
          lVar13 = thunk_FUN_0222c938(uVar12,lVar13);
          if (lVar13 != 0) {
            FUN_02333498(param_2,lVar13,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x18));
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_a0,*(undefined8 *)puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

