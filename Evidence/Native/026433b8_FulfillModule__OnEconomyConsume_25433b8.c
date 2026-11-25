/* IL2CPP: FulfillModule$$OnEconomyConsume
void FulfillModule__OnEconomyConsume (FulfillModule_o* __this, EconomyConsumeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$OnEconomyConsume
   void FulfillModule__OnEconomyConsume (FulfillModule_o* __this, EconomyConsumeMessage_o m, const
   MethodInfo* method); */

void FulfillModule__OnEconomyConsume_25433b8(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  
  if ((bRam0000000004f4bfea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5e10);
                    /* try { // try from 026433e0 to 027433ef has its CatchHandler @ 026433fc */
    bRam0000000004f4bfea = 1;
  }
  if (*(int *)(param_1 + 100) < 1) {
                    /* try { // try from 026433f4 to 027433f7 has its CatchHandler @ 02643414 */
                    /* try { // try from 026433f8 to 027433fb has its CatchHandler @ 02643410 */
                    /* catch() { ... } // from try @ 026433e0 with catch @ 026433fc
                       try { // try from 026433fc to 0274342f has its CatchHandler @ 02642fb4 */
                    /* catch() { ... } // from try @ 02643384 with catch @ 02643400 */
                    /* catch() { ... } // from try @ 02643338 with catch @ 02643404 */
                    /* catch() { ... } // from try @ 0264332c with catch @ 02643408 */
                    /* catch() { ... } // from try @ 02643348 with catch @ 0264340c */
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar12 = Monitors__Get_object__26889d0
                           (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c5e10), lVar12 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 026433f8 with catch @ 02643410 */
                    /* catch() { ... } // from try @ 026433f4 with catch @ 02643414 */
                    /* catch() { ... } // from try @ 02643378 with catch @ 02643418 */
    if ((*(char *)(lVar12 + 0xe9) == '\0') &&
       (uVar13 = FulfillRewardMonitor__HasPending_24401c4(lVar12,*(undefined4 *)(param_2 + 0x10),0),
       (uVar13 & 1) != 0)) {
      if ((bRam0000000004f4b844 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c4058,0);
        FUN_021f03f8(PTR_DAT_049c4060);
        bRam0000000004f4b844 = 1;
      }
      if (*(long *)(lVar12 + 0x100) != 0) {
        iVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                          (*(long *)(lVar12 + 0x100),*(undefined8 *)PTR_DAT_049c4058);
        if (iVar8 == 0) {
          return;
        }
        if (*(long *)(lVar12 + 0x30) != 0) {
          uVar13 = Monitors__IsActive_object__2688ab4
                             (*(long *)(lVar12 + 0x30),*(undefined8 *)PTR_DAT_049c4060);
          if ((uVar13 & 1) != 0) {
            if (*(long *)(lVar12 + 0x30) == 0) goto LAB_02540368;
            Monitors__Deactivate_256e214(*(long *)(lVar12 + 0x30),lVar12,0,0);
          }
          if ((bRam0000000004f4b843 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049c4050);
            FUN_021f03f8(PTR_DAT_049c4058);
            bRam0000000004f4b843 = 1;
          }
          if (*(long *)(lVar12 + 0x100) != 0) {
            iVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                              (*(long *)(lVar12 + 0x100),*(undefined8 *)PTR_DAT_049c4058);
            if (iVar8 == 0) {
              return;
            }
            if (*(long *)(lVar12 + 0x100) != 0) {
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                        (*(long *)(lVar12 + 0x100),*(undefined8 *)PTR_DAT_049c4050);
              lVar12 = *(long *)(lVar12 + 0xc0);
              if (lVar12 != 0) {
                if ((bRam0000000004f4bf3c & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_049ca088,0);
                  FUN_021f03f8(PTR_DAT_049ca090);
                  FUN_021f03f8(PTR_DAT_049ca098);
                  FUN_021f03f8(PTR_DAT_049ca0a0);
                  FUN_021f03f8(PTR_DAT_049ca0a8);
                  FUN_021f03f8(PTR_DAT_049ca0b0);
                  FUN_021f03f8(PTR_DAT_049ca0b8);
                  bRam0000000004f4bf3c = 1;
                }
                uStack_60 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                *(undefined1 *)(lVar12 + 0x48) = 0;
                if ((*(long *)(lVar12 + 0x78) != 0) &&
                   (lVar9 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                                      (*(long *)(lVar12 + 0x78),*(undefined8 *)PTR_DAT_049ca098),
                   puVar7 = PTR_DAT_049ca0b0, puVar6 = PTR_DAT_049ca0a8, puVar5 = PTR_DAT_049ca0a0,
                   puVar4 = PTR_DAT_049ca090, puVar3 = PTR_DAT_049ca088, lVar9 != 0)) {
                  System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
                            (lVar9,&uStack_60,*(undefined8 *)PTR_DAT_049ca0b8);
                  while (uVar13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                                            (&uStack_60,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
                    lVar14 = *(long *)puVar7;
                    lVar10 = *(long *)(lVar14 + 0x20);
                    uVar2 = *(ushort *)(lVar10 + 0x135);
                    lVar9 = lVar10;
                    if ((uVar2 & 1) == 0) {
                      lVar9 = FUN_02229718();
                      lVar10 = *(long *)(lVar14 + 0x20);
                      uVar2 = *(ushort *)(lVar10 + 0x135);
                    }
                    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
                    if ((uVar2 & 1) == 0) {
                      lVar10 = FUN_02229718();
                    }
                    uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                                *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) +
                                                         0x80) + 0x60);
                    func_0x04608620(alStack_48,uVar11,uVar1);
                    if (alStack_48[0] != 0) {
                      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
                                (alStack_48[0],0);
                    }
                  }
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                            (&uStack_60,*(undefined8 *)puVar5);
                  if (*(long *)(lVar12 + 0x78) != 0) {
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                              (*(long *)(lVar12 + 0x78),*(undefined8 *)puVar3);
                    if (*(long *)(lVar12 + 0x80) != 0) {
                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                                (*(long *)(lVar12 + 0x80),*(undefined8 *)puVar4);
                      return;
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
LAB_02540368:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

