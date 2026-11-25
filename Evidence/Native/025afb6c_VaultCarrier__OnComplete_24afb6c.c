/* IL2CPP: VaultCarrier$$OnComplete
void VaultCarrier__OnComplete (VaultCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VaultCarrier$$OnComplete
   void VaultCarrier__OnComplete (VaultCarrier_o* __this, const MethodInfo* method); */

void VaultCarrier__OnComplete_24afb6c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bb53 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6a20);
    bRam0000000004f4bb53 = 1;
  }
  if (*(int *)(param_1 + 0xc0) < 1) {
    return;
  }
  VaultCarrier__ApplyDamage_24afc18(param_1);
  puVar2 = PTR_DAT_049c6a20;
                    /* try { // try from 025afbac to 026afc0f has its CatchHandler @ 025afbac
                       catch() { ... } // from try @ 025afbac with catch @ 025afbac
                       catch() { ... } // from try @ 025afcc0 with catch @ 025afbac
                       catch() { ... } // from try @ 025afce4 with catch @ 025afbac
                       catch() { ... } // from try @ 025afcfc with catch @ 025afbac
                       catch() { ... } // from try @ 025afd4c with catch @ 025afbac
                       catch() { ... } // from try @ 025afddc with catch @ 025afbac */
  if (*(int *)(param_1 + 0xc0) < 1) {
    if ((bRam0000000004f4bb55 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c1b50);
      FUN_021f03f8(PTR_DAT_049c6a20);
      bRam0000000004f4bb55 = 1;
    }
    lVar4 = *(long *)(param_1 + 0xb8);
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
    if (lVar4 != 0) {
      Carrier__EnableInteraction_2404130(lVar4,uVar3,0);
      lVar4 = *(long *)(param_1 + 0xb8);
      uVar3 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
      if (lVar4 != 0) {
        Carrier__EnableTransfer_23fe4dc(lVar4,uVar3,0);
        if ((*(long *)(param_1 + 0xa0) != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xa0),0),
           puVar2 = PTR_DAT_049c6a20, lVar4 != 0)) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar4,0,0);
          lVar4 = *(long *)(param_1 + 0xa8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar4 != 0) {
            UnityEngine_Animator__SetTrigger_3bae338
                      (lVar4,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
            if (*(long *)(param_1 + 0xb0) != 0) {
              AudioModule__GetPlayer_2530858(&uStack_60,*(long *)(param_1 + 0xb0),0);
              uStack_38 = uStack_58;
              uStack_40 = uStack_60;
              uStack_28 = uStack_48;
              uStack_30 = uStack_50;
              if ((*(long *)(param_1 + 0xb0) != 0) &&
                 (lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + 0x10), lVar4 != 0)) {
                uVar3 = *(undefined8 *)(lVar4 + 0xd0);
                if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                AudioPlayer__Play_2530c98(&uStack_40,uVar3,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  if (*(int *)(*(long *)PTR_DAT_049c6a20 + 0xe4) == 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

