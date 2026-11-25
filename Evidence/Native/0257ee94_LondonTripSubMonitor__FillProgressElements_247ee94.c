/* IL2CPP: LondonTripSubMonitor$$FillProgressElements
void LondonTripSubMonitor__FillProgressElements (LondonTripSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSubMonitor$$FillProgressElements
   void LondonTripSubMonitor__FillProgressElements (LondonTripSubMonitor_o* __this, const
   MethodInfo* method); */

void LondonTripSubMonitor__FillProgressElements_247ee94(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iStack_44;
  
  if ((bRam0000000004f4b9f3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c59e8);
    FUN_021f03f8(PTR_DAT_049c5858);
    FUN_021f03f8(PTR_DAT_049c5870);
    FUN_021f03f8(PTR_DAT_049c59f0);
    bRam0000000004f4b9f3 = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbcdc2f95,0);
  puVar1 = PTR_DAT_049c59e8;
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 200), lVar8 == 0)) {
LAB_0257eff8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                    (lVar8,*(undefined8 *)PTR_DAT_049c59e8);
  puVar2 = PTR_DAT_049c59f0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0257eff8;
      iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(param_1 + 0x40) + 0x30,0);
      if (iVar4 <= iVar3) {
        if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x70) == 0)) goto LAB_0257eff8;
        if (*(int *)(*(long *)(param_1 + 0x70) + 0x18) <= *(int *)(*(long *)(param_1 + 0x88) + 0x20)
           ) break;
        if (lVar5 == 0) goto LAB_0257eff8;
        uVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
        iStack_44 = iVar3 + 1;
        uVar7 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar8,&iStack_44,*(undefined8 *)puVar2);
        LondonTripSubMonitor__CreateProgressElement_247f194(param_1,uVar6,uVar7);
      }
      iVar3 = iVar3 + 1;
      iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (lVar8,*(undefined8 *)puVar1);
    } while (iVar3 < iVar4);
  }
  LondonTripSubMonitor__UpdateProgressView_247f400(param_1,0);
  return;
}

