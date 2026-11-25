/* IL2CPP: HomeMonitor$$HandleHomeViewItem
void HomeMonitor__HandleHomeViewItem (HomeMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, LiveOpsData_Data_o data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$HandleHomeViewItem
   void HomeMonitor__HandleHomeViewItem (HomeMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, LiveOpsData_Data_o data, const MethodInfo*
   method); */

void HomeMonitor__HandleHomeViewItem_2446dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_049c4378;
  if ((bRam0000000004f4b86f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c4380);
    FUN_021f03f8(PTR_DAT_049c4378);
    bRam0000000004f4b86f = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar3 + 0x10),param_1);
    func_0x04608650(lVar3 + 0x18,param_3,0x48);
    thunk_FUN_021f190c(lVar3 + 0x18,0);
    *(undefined8 *)(lVar3 + 0x60) = param_2;
    thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x60),param_2);
    puVar2 = PTR_DAT_049c4380;
    puVar1 = PTR_DAT_049b4308;
    if (*(int *)(lVar3 + 0x5c) == 0) {
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x128);
    uVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
    System_Action___ctor_306b98c(uVar4,lVar3,*(undefined8 *)puVar2,0);
    plVar5 = (long *)System_Delegate__Combine_3145640(uVar6,uVar4,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    else {
      lVar3 = *(long *)puVar1;
      if ((*plVar5 != lVar3) || (*(long **)(param_1 + 0x128) = plVar5, *plVar5 != lVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0a20(plVar5);
      }
    }
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << (param_1 + 0x128U >> 0xc & 0x3f),
                   (param_1 + 0x128U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

