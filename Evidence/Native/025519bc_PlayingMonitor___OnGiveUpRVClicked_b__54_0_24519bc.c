/* IL2CPP: PlayingMonitor$$<OnGiveUpRVClicked>b__54_0
void PlayingMonitor___OnGiveUpRVClicked_b__54_0 (PlayingMonitor_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$<OnGiveUpRVClicked>b__54_0
   void PlayingMonitor___OnGiveUpRVClicked_b__54_0 (PlayingMonitor_o* __this, bool watched, const
   MethodInfo* method); */

void PlayingMonitor___OnGiveUpRVClicked_b__54_0_24519bc(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  ulong auStack_38 [2];
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined3 uStack_23;
  
  if ((bRam0000000004f4b8db & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48a0);
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c48b0);
    bRam0000000004f4b8db = 1;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049c48b0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02551a68;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049c48b0,0);
LAB_02551a68:
    uStack_28 = 1;
    uStack_27 = 0;
    uStack_23 = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    (*(code *)*puVar1)(plVar5,auStack_38,puVar1[1]);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      auStack_38[0] = auStack_38[0] & 0xffffffffffffff00;
      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
                (*(long *)(param_1 + 0x1a0),auStack_38,*(undefined8 *)PTR_DAT_049c48a0);
      if (*(long *)(param_1 + 0x98) != 0) {
        GameMachine__RequestStateChange_object__261a650
                  (*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_049c4650);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

