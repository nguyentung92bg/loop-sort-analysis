/* IL2CPP: LavaQuestSubMonitor$$OnInfoClicked
void LavaQuestSubMonitor__OnInfoClicked (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$OnInfoClicked
   void LavaQuestSubMonitor__OnInfoClicked (LavaQuestSubMonitor_o* __this, const MethodInfo*
   method); */

void LavaQuestSubMonitor__OnInfoClicked_247b484(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000004f4b9e9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049b4540);
    bRam0000000004f4b9e9 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x60),0),
     puVar1 = PTR_DAT_049b5680, lVar2 != 0)) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,1,0);
    lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Threading_CancellationTokenSource___ctor_3165668(lVar2,0);
    plVar5 = (long *)(param_1 + 0x90);
    *plVar5 = lVar2;
    thunk_FUN_021f190c(plVar5,lVar2);
    if (*plVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4(*plVar5,0);
      UIMotionExtensions__ApplyOrderedOpen_2412d28(0x3e800000,uVar4,0x95f4723c,uVar3,0);
      puVar1 = PTR_DAT_049b4540;
      if (*(long *)(param_1 + 0x48) != 0) {
        LavaQuest__GetNewGame_251acdc(&uStack_58,*(long *)(param_1 + 0x48),0);
        uVar4 = *(undefined8 *)(param_1 + 0x60);
        uStack_38 = uStack_50;
        uStack_40 = uStack_58;
        uStack_30 = uStack_48;
        lVar2 = FUN_021f04e4(*(undefined8 *)puVar1,1);
        uVar3 = System_Int32__ToString_30fbaa0((long)&uStack_30 + 4,0);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) != 0) {
            *(undefined8 *)(lVar2 + 0x20) = uVar3;
            thunk_FUN_021f190c();
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetFormattedText_33515dc
                      (uVar4,0x72c5b6c8,lVar2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

