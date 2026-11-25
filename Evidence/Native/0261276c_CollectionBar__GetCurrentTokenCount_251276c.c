/* IL2CPP: CollectionBar$$GetCurrentTokenCount
int32_t CollectionBar__GetCurrentTokenCount (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$GetCurrentTokenCount
   int32_t CollectionBar__GetCurrentTokenCount (CollectionBar_o* __this, const MethodInfo* method);
    */

int CollectionBar__GetCurrentTokenCount_251276c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bdfb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9280);
    FUN_021f03f8(PTR_DAT_049c9288);
    FUN_021f03f8(PTR_DAT_049c9290);
    FUN_021f03f8(PTR_DAT_049c92a0);
    bRam0000000004f4bdfb = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  iVar6 = CollectionBar__GetTotalTokenCount_25124bc(param_1);
  puVar5 = PTR_DAT_049c9290;
  puVar4 = PTR_DAT_049c9288;
  puVar3 = PTR_DAT_049c9280;
  auVar2._8_8_ = auStack_50._8_8_;
  auVar2._0_8_ = auStack_50._0_8_;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8), auStack_50 = auVar2, lVar7 != 0)) {
    auStack_50 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar7,*(undefined8 *)PTR_DAT_049c92a0);
    iVar9 = 0;
    iVar1 = iVar6;
    while( true ) {
      uVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_50,*(undefined8 *)puVar4);
      if ((uVar8 & 1) == 0) break;
      lVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_50,*(undefined8 *)puVar5);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar9 = *(int *)(lVar7 + 0x20) + iVar9;
      if (iVar6 < iVar9) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_50,*(undefined8 *)puVar3);
        return iVar1;
      }
      iVar1 = iVar1 - *(int *)(lVar7 + 0x20);
    }
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_50,*(undefined8 *)puVar3);
    lVar7 = CollectionBar__GetLastProgressData_25126d8(param_1);
    if (lVar7 != 0) {
      return *(int *)(lVar7 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

