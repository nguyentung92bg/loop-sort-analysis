/* IL2CPP: FakeAdMonitor$$OnCloseClicked
void FakeAdMonitor__OnCloseClicked (FakeAdMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FakeAdMonitor$$OnCloseClicked
   void FakeAdMonitor__OnCloseClicked (FakeAdMonitor_o* __this, const MethodInfo* method); */

void FakeAdMonitor__OnCloseClicked_243e95c(long param_1)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
    lVar1 = *(long *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      auStack_14[0] = 0;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),auStack_14,*(undefined8 *)(lVar1 + 0x28));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

