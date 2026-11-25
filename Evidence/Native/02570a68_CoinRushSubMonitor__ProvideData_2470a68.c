/* IL2CPP: CoinRushSubMonitor$$ProvideData
void CoinRushSubMonitor__ProvideData (CoinRushSubMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSubMonitor$$ProvideData
   void CoinRushSubMonitor__ProvideData (CoinRushSubMonitor_o* __this, UnityEngine_Transform_o* t,
   int32_t idx, const MethodInfo* method); */

void CoinRushSubMonitor__ProvideData_2470a68(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b9a3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c55a0);
    bRam0000000004f4b9a3 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0xd0), lVar1 != 0)) {
    iStack_34 = param_3 + 1;
    lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar1,&iStack_34,*(undefined8 *)PTR_DAT_049c55a0);
    if (lVar1 != 0) {
      if (param_2 == 0) goto LAB_02570b24;
      UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                (param_2,&uStack_28,*(undefined8 *)PTR_DAT_049c3b08);
      CoinRushSubMonitor__CreateMilestoneElement_2470b28(param_1,uStack_28,lVar1);
    }
    return;
  }
LAB_02570b24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

