/* IL2CPP: Grid$$PopulateCellWithElement
void Grid__PopulateCellWithElement (Grid_o* __this, CellBase_o* cell, GridSheet_Cell_o layoutCell, System_Nullable_CellElementType__o allowedType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02607bd4) */
/* IL2CPP: Grid$$PopulateCellWithElement
   void Grid__PopulateCellWithElement (Grid_o* __this, CellBase_o* cell, GridSheet_Cell_o
   layoutCell, System_Nullable_CellElementType__o allowedType, const MethodInfo* method); */

void Grid__PopulateCellWithElement_25078fc
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  ulong uStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  long *plStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049c8e88;
  uStack_48 = param_4;
  if ((bRam0000000004f4bd97 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8e90);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c8e98);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c8ea0);
    FUN_021f03f8(PTR_DAT_049c8e88);
    FUN_021f03f8(PTR_DAT_049c8ea8);
    bRam0000000004f4bd97 = 1;
  }
  auStack_60._8_8_ = 0;
  plStack_50 = (long *)0x0;
  auStack_60._0_8_ = 0;
  lVar5 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_64 = 0;
  uStack_70 = 0;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02229718();
  }
  pcVar6 = (char *)thunk_FUN_0224e54c(&uStack_48,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar6 != '\0') {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (&uStack_48,&uStack_80,*(undefined8 *)PTR_DAT_049c8ea8);
    Grid__InitializeCellElement_2507c30(param_1,param_2,param_3,uStack_80 & 0xffffffff);
    return;
  }
  if ((*(long *)(param_1 + 0xb0) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plStack_50 = (long *)GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_2896e60
                                 (lVar5,*(undefined8 *)PTR_DAT_049c8e90);
  puVar3 = PTR_DAT_049c8ea0;
  puVar2 = PTR_DAT_049c8e98;
  puVar1 = PTR_DAT_049b4360;
  pplStack_78 = &plStack_50;
  uStack_80 = 0;
  do {
    plVar4 = plStack_50;
    if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plStack_50;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02607a9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)puVar1,0);
LAB_02607a9c:
    uVar8 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    plVar4 = plStack_50;
    if ((uVar8 & 1) == 0) {
      if (plStack_50 == (long *)0x0) {
        return;
      }
      lVar5 = *plStack_50;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_02607b84;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *plStack_50;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02607b00;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)puVar2,0);
LAB_02607b00:
    auVar10 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    auStack_60 = auVar10;
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (auStack_60,&uStack_64,&uStack_70,*(undefined8 *)puVar3);
    Grid__InitializeCellElement_2507c30(param_1,param_2,param_3,uStack_64);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02607ba0;
    }
  }
LAB_02607b84:
  puVar7 = (undefined8 *)FUN_02229a4c(plStack_50,*(long *)PTR_DAT_049b3cc8,0);
LAB_02607ba0:
  (*(code *)*puVar7)(plVar4,puVar7[1]);
  return;
}

