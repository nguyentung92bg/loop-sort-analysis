/* IL2CPP: Grid$$GetColumn
System_Collections_Generic_List_CellBase__o* Grid__GetColumn (Grid_o* __this, int32_t column, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$GetColumn
   System_Collections_Generic_List_CellBase__o* Grid__GetColumn (Grid_o* __this, int32_t column,
   const MethodInfo* method); */

long Grid__GetColumn_2506fac(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lStack_60;
  uint uStack_54;
  
  if ((bRam0000000004f4bd92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8e68);
    FUN_021f03f8(PTR_DAT_049c8e70);
    FUN_021f03f8(PTR_DAT_049c8d98);
    FUN_021f03f8(PTR_DAT_049c8e28);
    FUN_021f03f8(PTR_DAT_049c8e30);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bd92 = 1;
  }
  lStack_60 = 0;
  if (*(long *)(param_1 + 0xf8) == 0) {
LAB_0260714c:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_54 = param_2;
  uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                    (*(long *)(param_1 + 0xf8),&uStack_54,&lStack_60,*(undefined8 *)PTR_DAT_049c8e68
                    );
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c8e30);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar4,*(undefined8 *)PTR_DAT_049c8e28);
    puVar2 = PTR_DAT_049c8d98;
    puVar1 = PTR_DAT_049b3b98;
    if (0 < *(int *)(param_1 + 0xc4)) {
      lVar7 = 0;
      uVar3 = (ulong)param_2;
      do {
        uVar5 = Grid__GetCellAt_2505768(param_1,uVar3);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar1);
        }
        uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if (lVar4 == 0) goto LAB_0260714c;
          FUN_02333498(lVar4,uVar5,*(undefined8 *)puVar2);
        }
        lVar7 = lVar7 + 1;
        uVar3 = uVar3 + 0x100000000;
      } while (lVar7 < *(int *)(param_1 + 0xc4));
    }
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_0260714c;
    uStack_54 = param_2;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0xf8),&uStack_54,lVar4,*(undefined8 *)PTR_DAT_049c8e70);
    lStack_60 = lVar4;
  }
  return lStack_60;
}

