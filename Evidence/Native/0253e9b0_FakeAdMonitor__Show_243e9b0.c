/* IL2CPP: FakeAdMonitor$$Show
void FakeAdMonitor__Show (FakeAdMonitor_o* __this, float time, System_Action_bool__o* watch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FakeAdMonitor$$Show
   void FakeAdMonitor__Show (FakeAdMonitor_o* __this, float time, System_Action_bool__o* watch,
   const MethodInfo* method); */

void FakeAdMonitor__Show_243e9b0(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_30 [16];
  
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,1,0);
    auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(param_1,0);
    auVar2 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
    *(undefined8 *)(param_2 + 0xa8) = param_3;
    *(undefined1 (*) [16])(param_2 + 0x98) = auVar2;
    thunk_FUN_021f190c((undefined8 *)(param_2 + 0xa8),param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

