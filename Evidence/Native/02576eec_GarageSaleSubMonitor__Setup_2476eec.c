/* IL2CPP: GarageSaleSubMonitor$$Setup
void GarageSaleSubMonitor__Setup (GarageSaleSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSaleSubMonitor$$Setup
   void GarageSaleSubMonitor__Setup (GarageSaleSubMonitor_o* __this, const MethodInfo* method); */

void GarageSaleSubMonitor__Setup_2476eec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int aiStack_44 [3];
  
                    /* try { // try from 02576ef8 to 02676f1f has its CatchHandler @ 0257733c */
  SubMonitorBase__Setup_2481334(param_1,0);
  GarageSaleSubMonitor__FillProductIds_2476f10(param_1);
  if ((bRam0000000004f4b9ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c57b0);
    FUN_021f03f8(PTR_DAT_049c57b8);
    bRam0000000004f4b9ce = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbcdc2f95,0);
  puVar1 = PTR_DAT_049c57b0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0xc0), lVar8 != 0)) {
    iVar3 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar8,*(undefined8 *)PTR_DAT_049c57b0);
    puVar2 = PTR_DAT_049c57b8;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_025772c0;
        iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(param_1 + 0x40) + 0x30,0);
        if (iVar4 <= iVar3) {
          if (lVar5 == 0) goto LAB_025772c0;
          uVar6 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar5,0);
          aiStack_44[0] = iVar3 + 1;
          uVar7 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                            (lVar8,aiStack_44,*(undefined8 *)puVar2);
          GarageSaleSubMonitor__CreateProgressElement_247745c(param_1,uVar6,uVar7);
        }
        iVar3 = iVar3 + 1;
        iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                          (lVar8,*(undefined8 *)puVar1);
      } while (iVar3 < iVar4);
    }
    GarageSaleSubMonitor__UpdateProgressView_24776c8(param_1,0);
    return;
  }
LAB_025772c0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

