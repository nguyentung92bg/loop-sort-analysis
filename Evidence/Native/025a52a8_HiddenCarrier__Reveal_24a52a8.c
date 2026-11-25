/* IL2CPP: HiddenCarrier$$Reveal
void HiddenCarrier__Reveal (HiddenCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenCarrier$$Reveal
   void HiddenCarrier__Reveal (HiddenCarrier_o* __this, const MethodInfo* method); */

void HiddenCarrier__Reveal_24a52a8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f4bb07 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c66b8);
    bRam0000000004f4bb07 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x118) = 1;
  uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar4 != 0) {
    Carrier__EnableInteraction_2404130(lVar4,uVar3,0);
    lVar4 = *(long *)(param_1 + 0x110);
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar4 != 0) {
      Carrier__EnableTransfer_23fe4dc(lVar4,uVar3,0);
      if ((*(long *)(param_1 + 0xa8) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa8),0),
         puVar2 = PTR_DAT_049c66b8, lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
        lVar4 = *(long *)(param_1 + 0xb0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar4 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4);
          if ((bRam0000000004f55a73 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a251f8,uVar1,0);
            bRam0000000004f55a73 = 1;
          }
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
            }
            if (pcRam0000000004f55e50 == (code *)0x0) {
              pcRam0000000004f55e50 = (code *)FUN_021f03bc(&UNK_013cae0f);
            }
                    /* WARNING: Could not recover jumptable at 0x03cae3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f55e50)(lVar5,uVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

