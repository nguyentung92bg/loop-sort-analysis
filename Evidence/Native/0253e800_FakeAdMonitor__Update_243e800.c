/* IL2CPP: FakeAdMonitor$$Update
void FakeAdMonitor__Update (FakeAdMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FakeAdMonitor$$Update
   void FakeAdMonitor__Update (FakeAdMonitor_o* __this, const MethodInfo* method); */

void FakeAdMonitor__Update_243e800(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  int iStack_28;
  undefined1 auStack_24 [4];
  
  iStack_28 = 0;
  fVar4 = (float)UniTimer__get_RemainingTime_3f0f0ac(param_1 + 0x98,0);
  if (cRam0000000004f4b79c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4b79c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iStack_28 = -0x80000000;
  if ((float)(int)fVar4 != INFINITY) {
    iStack_28 = (int)fVar4;
  }
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(param_1,0xce1592a9,0);
  uVar2 = System_Int32__ToString_30fbaa0(&iStack_28,0);
  if (lVar1 != 0) {
    StatefulUI_Runtime_References_TextReference__SetText_334627c(lVar1,uVar2,0);
    lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                      (param_1,0x85f8a9cf,0);
    fVar4 = (float)UniTimer__get_Progress_3f0f11c(param_1 + 0x98,0);
    if (lVar1 != 0) {
      UnityEngine_UI_Image__set_fillAmount_3cfbca8(1.0 - fVar4,lVar1,0);
      uVar3 = UniTimer__get_IsExpired_3f0efb8(param_1 + 0x98,0);
      if ((uVar3 & 1) != 0) {
        lVar1 = *(long *)(param_1 + 0xa8);
        if (lVar1 != 0) {
          auStack_24[0] = 1;
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),auStack_24,*(undefined8 *)(lVar1 + 0x28));
        }
        lVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
        if (lVar1 == 0) goto LAB_0253e958;
        UnityEngine_GameObject__SetActive_3c1ce34(lVar1,0,0);
      }
      return;
    }
  }
LAB_0253e958:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

