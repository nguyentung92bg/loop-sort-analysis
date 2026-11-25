/* IL2CPP: WinMonitor$$SetResults
void WinMonitor__SetResults (WinMonitor_o* __this, WinMonitor_ResultArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinMonitor$$SetResults
   void WinMonitor__SetResults (WinMonitor_o* __this, WinMonitor_ResultArgs_o args, const
   MethodInfo* method); */

void WinMonitor__SetResults_24693b8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint auStack_38 [2];
  
  if ((bRam0000000004f4b975 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c53c0);
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c4b70);
    bRam0000000004f4b975 = 1;
  }
  *(long *)(param_1 + 0xa0) = param_3;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0xa0),0);
  puVar2 = PTR_DAT_049c53c0;
  puVar1 = PTR_DAT_049c4b70;
  if ((param_3 != 0) && (iVar3 = *(int *)(param_3 + 0x18), -1 < iVar3 + -1)) {
    do {
      iVar3 = iVar3 + -1;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (param_3,iVar3,auStack_38,*(undefined8 *)puVar1);
      if ((0x3c < auStack_38[0]) ||
         ((1L << ((ulong)auStack_38[0] & 0x3f) & 0x1004010000000002U) == 0)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
                  (param_3,iVar3,*(undefined8 *)puVar2);
      }
    } while (0 < iVar3);
  }
  return;
}

