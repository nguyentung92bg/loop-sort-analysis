/* IL2CPP: SwipeablePageLayout$$AddListener
void SwipeablePageLayout__AddListener (SwipeablePageLayout_o* __this, System_Action_PageMonitorBase__o* listener, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$AddListener
   void SwipeablePageLayout__AddListener (SwipeablePageLayout_o* __this,
   System_Action_PageMonitorBase__o* listener, const MethodInfo* method); */

void SwipeablePageLayout__AddListener_244acf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f4b8a4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4550);
    bRam0000000004f4b8a4 = 1;
  }
  plVar4 = (long *)(param_1 + 0x40);
  lVar2 = System_Delegate__Combine_3145640(*plVar4,param_2,0);
  puVar1 = PTR_DAT_049c4550;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_049c4550;
    lVar3 = thunk_FUN_0222c938(lVar2,uVar5);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *plVar4 = lVar3;
      lVar3 = thunk_FUN_0222c938(lVar2,uVar5);
      if (lVar3 != 0) goto thunk_FUN_021f190c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(lVar2,uVar5);
  }
  *plVar4 = 0;
thunk_FUN_021f190c:
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                 ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

