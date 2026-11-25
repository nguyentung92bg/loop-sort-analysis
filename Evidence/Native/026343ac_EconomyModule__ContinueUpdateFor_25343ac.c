/* IL2CPP: EconomyModule$$ContinueUpdateFor
void EconomyModule__ContinueUpdateFor (EconomyModule_o* __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$ContinueUpdateFor
   void EconomyModule__ContinueUpdateFor (EconomyModule_o* __this, int32_t item, const MethodInfo*
   method); */

void EconomyModule__ContinueUpdateFor_25343ac(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bf3d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca0c0);
    FUN_021f03f8(PTR_DAT_049ca0c8);
    FUN_021f03f8(PTR_DAT_049ca0d0);
    bRam0000000004f4bf3d = 1;
  }
  lStack_30 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uStack_24 = param_2;
    uVar1 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x78),&uStack_24,&lStack_30,
                       *(undefined8 *)PTR_DAT_049ca0d0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (lStack_30 != 0) {
      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac(lStack_30,0);
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      uStack_24 = param_2;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                (*(long *)(param_1 + 0x78),&uStack_24,*(undefined8 *)PTR_DAT_049ca0c8);
      if (*(long *)(param_1 + 0x80) != 0) {
        uStack_24 = param_2;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x80),&uStack_24,*(undefined8 *)PTR_DAT_049ca0c0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

