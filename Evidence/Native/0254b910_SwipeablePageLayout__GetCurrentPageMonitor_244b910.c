/* IL2CPP: SwipeablePageLayout$$GetCurrentPageMonitor
PageMonitorBase_o* SwipeablePageLayout__GetCurrentPageMonitor (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$GetCurrentPageMonitor
   PageMonitorBase_o* SwipeablePageLayout__GetCurrentPageMonitor (SwipeablePageLayout_o* __this,
   const MethodInfo* method); */

undefined8 SwipeablePageLayout__GetCurrentPageMonitor_244b910(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_18;
  
  if ((bRam0000000004f4b8a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c0);
    FUN_021f03f8(PTR_DAT_049c45c8);
    bRam0000000004f4b8a6 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (-1 < iVar1) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (iVar1 < *(int *)(lVar2 + 0x18)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar2,iVar1,&uStack_18,*(undefined8 *)PTR_DAT_049c45c8);
      return uStack_18;
    }
  }
  return 0;
}

