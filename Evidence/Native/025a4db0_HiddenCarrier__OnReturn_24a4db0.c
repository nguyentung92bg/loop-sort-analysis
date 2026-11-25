/* IL2CPP: HiddenCarrier$$OnReturn
void HiddenCarrier__OnReturn (HiddenCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenCarrier$$OnReturn
   void HiddenCarrier__OnReturn (HiddenCarrier_o* __this, const MethodInfo* method); */

void HiddenCarrier__OnReturn_24a4db0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 025a4db8 to 026a4de7 has its CatchHandler @ 025a4e9c */
  if ((bRam0000000004f4bb04 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c66b8);
    bRam0000000004f4bb04 = 1;
  }
  GameBehaviourBase__OnReturn_24f6ea8(param_1,0);
                    /* try { // try from 025a4de8 to 026a4e73 has its CatchHandler @ 025a4c30 */
  *(undefined1 *)(param_1 + 0x118) = 0;
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa8),0), lVar3 != 0
     )) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar3,1,0);
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa0),0),
       puVar2 = PTR_DAT_049c66b8, lVar3 != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(lVar3,1,0);
      lVar3 = *(long *)(param_1 + 0xb0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if ((bRam0000000004f55a73 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a251f8,uVar1,0);
          bRam0000000004f55a73 = 1;
        }
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
          }
          if (pcRam0000000004f55e50 == (code *)0x0) {
            pcRam0000000004f55e50 = (code *)FUN_021f03bc(&UNK_013cae0f);
          }
                    /* WARNING: Could not recover jumptable at 0x03cae3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004f55e50)(lVar4,uVar1);
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

