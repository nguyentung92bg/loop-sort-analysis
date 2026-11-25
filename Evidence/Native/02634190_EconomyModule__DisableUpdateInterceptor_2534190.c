/* IL2CPP: EconomyModule$$DisableUpdateInterceptor
void EconomyModule__DisableUpdateInterceptor (EconomyModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$DisableUpdateInterceptor
   void EconomyModule__DisableUpdateInterceptor (EconomyModule_o* __this, const MethodInfo* method);
    */

void EconomyModule__DisableUpdateInterceptor_2534190(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4bf3c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca088);
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
  *(undefined1 *)(param_1 + 0x48) = 0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar8 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Values_282b2a4
                        (*(long *)(param_1 + 0x78),*(undefined8 *)PTR_DAT_049ca098),
     puVar7 = PTR_DAT_049ca0b0, puVar6 = PTR_DAT_049ca0a8, puVar5 = PTR_DAT_049ca0a0,
     puVar4 = PTR_DAT_049ca090, puVar3 = PTR_DAT_049ca088, lVar8 != 0)) {
    System_Collections_Generic_Dictionary_ValueCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_29facc8
              (lVar8,&uStack_60,*(undefined8 *)PTR_DAT_049ca0b8);
    while (uVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_2851a64
                             (&uStack_60,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
      lVar12 = *(long *)puVar7;
      lVar10 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar8 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar10 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                  *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_48,uVar11,uVar1);
      if (lStack_48 != 0) {
        Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac(lStack_48,0);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_2851a60
              (&uStack_60,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0x78) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                (*(long *)(param_1 + 0x78),*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x80) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear_282c0fc
                  (*(long *)(param_1 + 0x80),*(undefined8 *)puVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

