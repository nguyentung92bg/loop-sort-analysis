/* IL2CPP: CollectionBarSubMonitor$$OnInfoContinueClicked
void CollectionBarSubMonitor__OnInfoContinueClicked (CollectionBarSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSubMonitor$$OnInfoContinueClicked
   void CollectionBarSubMonitor__OnInfoContinueClicked (CollectionBarSubMonitor_o* __this, const
   MethodInfo* method); */

void CollectionBarSubMonitor__OnInfoContinueClicked_247223c(long param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0257223c to 0267224b has its CatchHandler @ 025723e0 */
  if (*(long *)(param_1 + 0x68) != 0) {
    System_Threading_CancellationTokenSource__Cancel_31658dc(*(long *)(param_1 + 0x68),0);
                    /* try { // try from 02572254 to 0267225f has its CatchHandler @ 025723dc */
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x60),0),
       lVar1 != 0)) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,0,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

