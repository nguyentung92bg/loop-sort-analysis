/* IL2CPP: FulfillRewardMonitor$$Discard
void FulfillRewardMonitor__Discard (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$Discard
   void FulfillRewardMonitor__Discard (FulfillRewardMonitor_o* __this, const MethodInfo* method); */

void FulfillRewardMonitor__Discard_24402c4(long param_1)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  
  if ((bRam0000000004f4b844 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4058);
    FUN_021f03f8(PTR_DAT_049c4060);
    bRam0000000004f4b844 = 1;
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    iVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                      (*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_049c4058);
    if (iVar8 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar10 = Monitors__IsActive_object__2688ab4
                         (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4060);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02540368;
        Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
      }
      if ((bRam0000000004f4b843 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c4050);
        FUN_021f03f8(PTR_DAT_049c4058);
        bRam0000000004f4b843 = 1;
      }
      if (*(long *)(param_1 + 0x100) != 0) {
        iVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Count_282b138
                          (*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_049c4058);
        if (iVar8 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x100) != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                    (*(long *)(param_1 + 0x100),*(undefined8 *)PTR_DAT_049c4050);
          lVar9 = *(long *)(param_1 + 0xc0);
          if (lVar9 != 0) {
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
            *(undefined1 *)(lVar9 + 0x48) = 0;
            if ((*(long *)(lVar9 + 0x78) != 0) &&
               (lVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                                   (*(long *)(lVar9 + 0x78),*(undefined8 *)PTR_DAT_049ca098),
               puVar7 = PTR_DAT_049ca0b0, puVar6 = PTR_DAT_049ca0a8, puVar5 = PTR_DAT_049ca0a0,
               puVar4 = PTR_DAT_049ca090, puVar3 = PTR_DAT_049ca088, lVar11 != 0)) {
              System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
                        (lVar11,&uStack_60,*(undefined8 *)PTR_DAT_049ca0b8);
              while (uVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                                        (&uStack_60,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
                lVar14 = *(long *)puVar7;
                lVar12 = *(long *)(lVar14 + 0x20);
                uVar2 = *(ushort *)(lVar12 + 0x135);
                lVar11 = lVar12;
                if ((uVar2 & 1) == 0) {
                  lVar11 = FUN_02229718();
                  lVar12 = *(long *)(lVar14 + 0x20);
                  uVar2 = *(ushort *)(lVar12 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
                if ((uVar2 & 1) == 0) {
                  lVar12 = FUN_02229718();
                }
                uVar13 = thunk_FUN_0224e54c(&uStack_60,
                                            *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(alStack_48,uVar13,uVar1);
                if (alStack_48[0] != 0) {
                  Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
                            (alStack_48[0],0);
                }
              }
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
                        (&uStack_60,*(undefined8 *)puVar5);
              if (*(long *)(lVar9 + 0x78) != 0) {
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                          (*(long *)(lVar9 + 0x78),*(undefined8 *)puVar3);
                if (*(long *)(lVar9 + 0x80) != 0) {
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                            (*(long *)(lVar9 + 0x80),*(undefined8 *)puVar4);
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

