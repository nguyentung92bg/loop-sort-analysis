/* IL2CPP: BattlePassSubMonitor$$ProvideData
void BattlePassSubMonitor__ProvideData (BattlePassSubMonitor_o* __this, UnityEngine_Transform_o* t, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$ProvideData
   void BattlePassSubMonitor__ProvideData (BattlePassSubMonitor_o* __this, UnityEngine_Transform_o*
   t, int32_t idx, const MethodInfo* method); */

void BattlePassSubMonitor__ProvideData_246df68(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b990 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3b08);
    FUN_021f03f8(PTR_DAT_049c54e0);
    bRam0000000004f4b990 = 1;
  }
  if (param_2 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_2,&uStack_38,*(undefined8 *)PTR_DAT_049c3b08);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar1 != 0)) {
      uStack_24 = param_3;
      uVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar1,&uStack_24,*(undefined8 *)PTR_DAT_049c54e0);
      BattlePassSubMonitor__CreateProgressElement_246e020(param_1,uStack_38,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

