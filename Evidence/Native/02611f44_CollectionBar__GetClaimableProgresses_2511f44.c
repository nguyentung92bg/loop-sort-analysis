/* IL2CPP: CollectionBar$$GetClaimableProgresses
System_Collections_Generic_List_CollectionBarSheet_Row__o* CollectionBar__GetClaimableProgresses (CollectionBar_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBar$$GetClaimableProgresses
   System_Collections_Generic_List_CollectionBarSheet_Row__o* CollectionBar__GetClaimableProgresses
   (CollectionBar_o* __this, const MethodInfo* method); */

long CollectionBar__GetClaimableProgresses_2511f44(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  int iStack_54;
  
  puVar4 = PTR_DAT_049c2d38;
  puVar3 = PTR_DAT_049c2d30;
  if ((bRam0000000004f4bdfd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9280);
    FUN_021f03f8(PTR_DAT_049c9288);
    FUN_021f03f8(PTR_DAT_049c9290);
    FUN_021f03f8(PTR_DAT_049c9298);
    FUN_021f03f8(PTR_DAT_049c2d38);
    FUN_021f03f8(PTR_DAT_049c2d30);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c92a0);
    bRam0000000004f4bdfd = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar10,*(undefined8 *)puVar4);
  iVar8 = CollectionBar__GetCurrentProgress_25124d8(param_1);
  puVar7 = PTR_DAT_049c9298;
  puVar6 = PTR_DAT_049c9290;
  puVar5 = PTR_DAT_049c9288;
  puVar4 = PTR_DAT_049c9280;
  puVar3 = PTR_DAT_049c2cf0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0xd8);
    if (lVar11 != 0) {
      auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar11,*(undefined8 *)PTR_DAT_049c92a0);
      puStack_78 = auStack_70;
      uStack_80 = 0;
      while( true ) {
        uVar12 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_70,*(undefined8 *)puVar5);
        if ((uVar12 & 1) == 0) {
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_70,*(undefined8 *)puVar4);
          return lVar10;
        }
        lVar11 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                           (auStack_70,*(undefined8 *)puVar6);
        if (lVar11 == 0) break;
        uStack_98 = *(undefined8 *)(lVar11 + 0x38);
        uStack_a0 = *(undefined8 *)(lVar11 + 0x30);
        uStack_88 = *(undefined8 *)(lVar11 + 0x48);
        uStack_90 = *(undefined8 *)(lVar11 + 0x40);
        uVar12 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_a0,0);
        if ((uVar12 & 1) == 0) {
          plVar14 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
          uVar1 = *(undefined4 *)(plVar14[1] + 0xfc);
          uVar13 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar14 + 0x80));
          func_0x04608620(&iStack_54,uVar13,uVar1);
          if (iStack_54 <= iVar8) {
            plVar14 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
            uVar1 = *(undefined4 *)(plVar14[1] + 0xfc);
            uVar13 = thunk_FUN_0224e54c(lVar11,*(undefined8 *)(*plVar14 + 0x80));
            func_0x04608620(&iStack_54,uVar13,uVar1);
            if ((iStack_54 != iVar8) ||
               (iVar2 = *(int *)(lVar11 + 0x20),
               iVar9 = CollectionBar__GetCurrentTokenCount_251276c(param_1), iVar2 <= iVar9)) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              FUN_02333498(lVar10,lVar11,*(undefined8 *)puVar7);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

