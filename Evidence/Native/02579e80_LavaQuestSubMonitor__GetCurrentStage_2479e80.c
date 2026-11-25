/* IL2CPP: LavaQuestSubMonitor$$GetCurrentStage
StatefulUI_Runtime_Core_StatefulComponent_o* LavaQuestSubMonitor__GetCurrentStage (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$GetCurrentStage
   StatefulUI_Runtime_Core_StatefulComponent_o* LavaQuestSubMonitor__GetCurrentStage
   (LavaQuestSubMonitor_o* __this, LavaQuestGame_o game, const MethodInfo* method); */

undefined8 LavaQuestSubMonitor__GetCurrentStage_2479e80(long param_1,undefined4 *param_2)

{
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b9e1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4660);
    bRam0000000004f4b9e1 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_1 + 0x40),*param_2,&uStack_28,*(undefined8 *)PTR_DAT_049c4660);
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

