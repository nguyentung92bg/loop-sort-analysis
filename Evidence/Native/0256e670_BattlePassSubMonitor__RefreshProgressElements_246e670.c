/* IL2CPP: BattlePassSubMonitor$$RefreshProgressElements
void BattlePassSubMonitor__RefreshProgressElements (BattlePassSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$RefreshProgressElements
   void BattlePassSubMonitor__RefreshProgressElements (BattlePassSubMonitor_o* __this, const
   MethodInfo* method); */

void BattlePassSubMonitor__RefreshProgressElements_246e670(undefined8 param_1)

{
  long lVar1;
  long lStack_18;
  
  if ((bRam0000000004f4b992 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4b40);
    bRam0000000004f4b992 = 1;
  }
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar1,&lStack_18,*(undefined8 *)PTR_DAT_049c4b40);
    if (lStack_18 != 0) {
      UnityEngine_UI_LoopScrollRectBase__RefreshCells_2ebd514(lStack_18,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

