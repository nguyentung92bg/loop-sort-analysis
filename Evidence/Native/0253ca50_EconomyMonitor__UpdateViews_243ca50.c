/* IL2CPP: EconomyMonitor$$UpdateViews
void EconomyMonitor__UpdateViews (EconomyMonitor_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor$$UpdateViews
   void EconomyMonitor__UpdateViews (EconomyMonitor_o* __this, int32_t item, const MethodInfo*
   method); */

void EconomyMonitor__UpdateViews_243ca50(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4b829 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e68);
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c3e88);
    bRam0000000004f4b829 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 200) != 0) &&
     (uStack_38 = param_2,
     System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
               (*(long *)(param_1 + 200),&uStack_38,&lStack_68,*(undefined8 *)PTR_DAT_049c3e68),
     puVar5 = PTR_DAT_049c3e80, puVar4 = PTR_DAT_049c3e78, puVar3 = PTR_DAT_049c3e70, lStack_68 != 0
     )) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_68,&uStack_58,*(undefined8 *)PTR_DAT_049c3e88);
    lStack_68 = 0;
    puStack_60 = &uStack_58;
    while (uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_58,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar8 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar7 = *(long *)(lVar10 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar9 = thunk_FUN_0224e54c(&uStack_58,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_38,uVar9,uVar1);
      EconomyMonitor__UpdateView_243c9f8(param_1,param_2,CONCAT44(uStack_34,uStack_38));
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_58,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

