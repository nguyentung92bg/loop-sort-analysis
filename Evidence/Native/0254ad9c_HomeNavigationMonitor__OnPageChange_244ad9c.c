/* IL2CPP: HomeNavigationMonitor$$OnPageChange
void HomeNavigationMonitor__OnPageChange (HomeNavigationMonitor_o* __this, PageMonitorBase_o* pageMonitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$OnPageChange
   void HomeNavigationMonitor__OnPageChange (HomeNavigationMonitor_o* __this, PageMonitorBase_o*
   pageMonitor, const MethodInfo* method); */

void HomeNavigationMonitor__OnPageChange_244ad9c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b88d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4598);
    bRam0000000004f4b88d = 1;
  }
  if (param_2 != 0) {
    uVar1 = System_Object__GetType_3142aac(param_2,0);
    if (*(long *)(param_1 + 0x98) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                (*(long *)(param_1 + 0x98),uVar1,&uStack_24,*(undefined8 *)PTR_DAT_049c4598);
      uVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                        (param_1,uStack_24,0);
      HomeNavigationMonitor__ApplySelectedMotion_244ae64(param_1,uVar1);
      puVar2 = (undefined8 *)(param_1 + 0xa0);
      HomeNavigationMonitor__ApplyDeselectedMotion_244b20c(param_1,*puVar2);
      HomeNavigationMonitor__ApplySelectionMotion_244b5b0(param_1,uVar1);
      *puVar2 = uVar1;
      thunk_FUN_021f190c(puVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

