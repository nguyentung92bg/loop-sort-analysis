/* IL2CPP: WeeklyMissionsSubMonitor$$OnInfoClicked
void WeeklyMissionsSubMonitor__OnInfoClicked (WeeklyMissionsSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$OnInfoClicked
   void WeeklyMissionsSubMonitor__OnInfoClicked (WeeklyMissionsSubMonitor_o* __this, const
   MethodInfo* method); */

void WeeklyMissionsSubMonitor__OnInfoClicked_248dc98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4ba5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5680);
    bRam0000000004f4ba5b = 1;
  }
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa8),0),
     puVar1 = PTR_DAT_049b5680, lVar2 != 0)) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
    lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Threading_CancellationTokenSource___ctor_3165668(lVar2,0);
    plVar5 = (long *)(param_1 + 0xb0);
    *plVar5 = lVar2;
    thunk_FUN_021f190c(plVar5,lVar2);
    if (*plVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4(*plVar5,0);
      puVar1 = PTR_DAT_049c2bc8;
      if ((bRam0000000004f4b72f & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c2bc8,0x95f4723c,uVar3,0);
        bRam0000000004f4b72f = 1;
      }
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
      uStack_78 = uVar4;
      thunk_FUN_021f190c(&uStack_78,uVar4);
      uStack_70 = 0x3e80000095f4723c;
      uStack_68 = uVar3;
      thunk_FUN_021f190c(&uStack_68,0);
      uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
      FUN_0235c17c((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
      FUN_0235acf0((ulong)&uStack_90 | 8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

