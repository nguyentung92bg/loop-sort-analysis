/* IL2CPP: CollectionBar$$GetCurrentProgress
int32_t CollectionBar__GetCurrentProgress (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$GetCurrentProgress
   int32_t CollectionBar__GetCurrentProgress (CollectionBar_o* __this, const MethodInfo* method); */

undefined4 CollectionBar__GetCurrentProgress_25124d8(long param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [16];
  undefined4 uStack_44;
  
  if ((bRam0000000004f4bdf9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9280);
    FUN_021f03f8(PTR_DAT_049c9288);
    FUN_021f03f8(PTR_DAT_049c9290);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c92a0);
    bRam0000000004f4bdf9 = 1;
  }
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  iVar7 = CollectionBar__GetTotalTokenCount_25124bc(param_1);
  puVar6 = PTR_DAT_049c9290;
  puVar5 = PTR_DAT_049c9288;
  puVar4 = PTR_DAT_049c9280;
  puVar3 = PTR_DAT_049c2cf0;
  auVar2._8_8_ = auStack_58._8_8_;
  auVar2._0_8_ = auStack_58._0_8_;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8), auStack_58 = auVar2, lVar8 != 0)) {
    auStack_58 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar8,*(undefined8 *)PTR_DAT_049c92a0);
    puStack_60 = auStack_58;
    iVar12 = 0;
    uStack_68 = 0;
    while( true ) {
      uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_58,*(undefined8 *)puVar5);
      if ((uVar9 & 1) == 0) break;
      lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_58,*(undefined8 *)puVar6);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar12 = *(int *)(lVar8 + 0x20) + iVar12;
      if (iVar7 < iVar12) {
        plVar11 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
        uVar1 = *(undefined4 *)(plVar11[1] + 0xfc);
        uVar10 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar11 + 0x80));
        func_0x04608620(&uStack_44,uVar10,uVar1);
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_58,*(undefined8 *)puVar4);
        return uStack_44;
      }
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_58,*(undefined8 *)puVar4);
    lVar8 = CollectionBar__GetLastProgressData_25126d8(param_1);
    if (lVar8 != 0) {
      plVar11 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar11[1] + 0xfc);
      uVar10 = thunk_FUN_0224e54c(lVar8,*(undefined8 *)(*plVar11 + 0x80));
      func_0x04608620(&uStack_68,uVar10,uVar1);
      return (undefined4)uStack_68;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

