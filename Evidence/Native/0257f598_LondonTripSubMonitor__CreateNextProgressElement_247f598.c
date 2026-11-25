/* IL2CPP: LondonTripSubMonitor$$CreateNextProgressElement
void LondonTripSubMonitor__CreateNextProgressElement (LondonTripSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSubMonitor$$CreateNextProgressElement
   void LondonTripSubMonitor__CreateNextProgressElement (LondonTripSubMonitor_o* __this, const
   MethodInfo* method); */

void LondonTripSubMonitor__CreateNextProgressElement_247f598(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iStack_24;
  
  if ((bRam0000000004f4b9f5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c59e8);
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c59f0);
    bRam0000000004f4b9f5 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar1 = CloudPrefsInt__get_Value_24e99c0(*(long *)(param_1 + 0x40) + 0x30,0);
    if (((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x48) != 0)) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 200), lVar5 != 0)) {
      iVar1 = *(int *)(*(long *)(param_1 + 0x70) + 0x18) + iVar1;
      iVar2 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (lVar5,*(undefined8 *)PTR_DAT_049c59e8);
      if (iVar2 < iVar1) {
        return;
      }
      lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                        (param_1,0xbcdc2f95,0);
      if ((*(long *)(param_1 + 0x48) != 0) && (lVar5 != 0)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 200);
        uVar3 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
        if (lVar6 != 0) {
          iStack_24 = iVar1;
          uVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar6,&iStack_24,*(undefined8 *)PTR_DAT_049c59f0);
          LondonTripSubMonitor__CreateProgressElement_247f194(param_1,uVar3,uVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

