/* IL2CPP: HighlightMonitor$$Awake
void HighlightMonitor__Awake (HighlightMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightMonitor$$Awake
   void HighlightMonitor__Awake (HighlightMonitor_o* __this, const MethodInfo* method); */

void HighlightMonitor__Awake_2443e40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(param_1,0xa59d7026,0);
  plVar3 = (long *)(param_1 + 0x98);
  *plVar3 = lVar1;
  thunk_FUN_021f190c(plVar3,lVar1);
  uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x6ab65f4c,0);
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  thunk_FUN_021f190c();
  uVar2 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0xbaf4b6a6,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa8),uVar2);
  if ((*plVar3 == 0) ||
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*plVar3,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f581f8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a251b8,0,0);
    bRam0000000004f581f8 = 1;
  }
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
    }
    if (pcRam0000000004f582c8 == (code *)0x0) {
      pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
    }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004f582c8)(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

