/* IL2CPP: PlayingMonitor$$OnDebugClicked
void PlayingMonitor__OnDebugClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnDebugClicked
   void PlayingMonitor__OnDebugClicked (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__OnDebugClicked_2451400(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x34994e0d,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    uVar3 = AnalyticsModule__GetDebuggerAuthorization_253fbd4(*(long *)(param_1 + 0xb8),0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((lVar2 != 0) && (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar4 != 0)
       ) {
      uVar1 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar4,0);
      lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0);
      if (lVar2 != 0) {
        uVar1 = (uVar1 ^ 0xffffffff) & 1;
        if ((bRam0000000004f581f8 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a251b8,uVar1,0);
          bRam0000000004f581f8 = 1;
        }
        if (lVar2 != 0) {
          lVar4 = *(long *)(lVar2 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
          }
          if (pcRam0000000004f582c8 == (code *)0x0) {
            pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
          }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f582c8)(lVar4,uVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

