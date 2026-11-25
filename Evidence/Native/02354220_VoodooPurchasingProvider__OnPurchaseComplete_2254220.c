/* IL2CPP: VoodooPurchasingProvider$$OnPurchaseComplete
bool VoodooPurchasingProvider__OnPurchaseComplete (VoodooPurchasingProvider_o* __this, Voodoo_Sauce_IAP_ProductReceivedInfo_o* productReceivedInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$OnPurchaseComplete
   bool VoodooPurchasingProvider__OnPurchaseComplete (VoodooPurchasingProvider_o* __this,
   Voodoo_Sauce_IAP_ProductReceivedInfo_o* productReceivedInfo, const MethodInfo* method); */

void VoodooPurchasingProvider__OnPurchaseComplete_2254220(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 auStack_2e8 [2];
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [104];
  undefined1 auStack_268 [80];
  undefined1 auStack_218 [72];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [2];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [104];
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1;
  if ((bRam0000000004f49bab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6198);
    FUN_021f03f8(PTR_DAT_049b5370);
    FUN_021f03f8(PTR_DAT_049b60c8);
    lVar2 = FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f49bab = 1;
  }
  uStack_d0 = 0;
  auStack_170[0] = 0;
  uStack_2d8 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (param_2 == 0) {
                    /* try { // try from 02354578 to 0245458b has its CatchHandler @ 023545c4 */
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_049b60c8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PurchaseRequest__FromJson_254ac40(auStack_c0,uVar6,0);
    func_0x04608620(&uStack_110,auStack_c0,0x48);
    uVar3 = System_String__IsNullOrEmpty_2f7c924(uStack_110,0);
    if ((uVar3 & 1) != 0) {
      uStack_110 = *(undefined8 *)(param_2 + 0x18);
      thunk_FUN_021f190c(&uStack_110);
    }
    func_0x04608620(auStack_218,&uStack_110,0x48);
    uVar6 = VoodooPurchasingProvider__CreatePayouts_2253554(param_1,auStack_218);
    plVar7 = *(long **)(param_1 + 0x30);
    func_0x04608620(&uStack_160,&uStack_110,0x48);
    uStack_118 = 0;
    thunk_FUN_021f190c(&uStack_160,0);
    uStack_118 = uVar6;
    lVar2 = thunk_FUN_021f190c(&uStack_118,uVar6);
    if (plVar7 == (long *)0x0) {
                    /* try { // try from 0235458c to 024545d7 has its CatchHandler @ 02354408 */
      if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      lVar8 = *(long *)PTR_DAT_049b6198;
      func_0x04608620(auStack_268,&uStack_160,0x50);
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_023543ec;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar7,lVar8,0);
LAB_023543ec:
      pcVar9 = (code *)*puVar4;
      func_0x04608620(auStack_c0,auStack_268,0x50);
                    /* try { // try from 02354408 to 02454457 has its CatchHandler @ 02354408
                       catch() { ... } // from try @ 02354408 with catch @ 02354408
                       catch() { ... } // from try @ 0235458c with catch @ 02354408 */
      (*pcVar9)(plVar7,auStack_c0,puVar4[1]);
      plVar7 = *(long **)(param_1 + 0x38);
      auStack_170[0] = 0;
      uStack_1c8 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1d0 = 1;
      func_0x04608620(&uStack_1c0,&uStack_110,0x48);
      thunk_FUN_021f190c(&uStack_1c0,0);
                    /* try { // try from 02354458 to 0245448b has its CatchHandler @ 023545c4 */
      uVar3 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x38),0);
      puVar4 = (undefined8 *)PTR_DAT_049b61a0;
      if ((uVar3 & 1) == 0) {
        puVar4 = (undefined8 *)(param_2 + 0x38);
      }
      uStack_178 = *puVar4;
      thunk_FUN_021f190c(&uStack_178);
      auStack_2e8[0] = uVar6;
      thunk_FUN_021f190c(auStack_2e8,uVar6);
      auStack_170[0] = auStack_2e8[0];
                    /* try { // try from 023544a0 to 024544b3 has its CatchHandler @ 023545c0 */
      lVar2 = thunk_FUN_021f190c(auStack_170,0);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        lVar8 = *(long *)PTR_DAT_049b5370;
        func_0x04608620(auStack_2d0,&uStack_1d0,0x68);
                    /* try { // try from 023544c8 to 024544cb has its CatchHandler @ 023545a8 */
        lVar2 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02354518;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plVar7,lVar8,0);
LAB_02354518:
        pcVar9 = (code *)*puVar4;
        func_0x04608620(auStack_c0,auStack_2d0,0x68);
        (*pcVar9)(plVar7,auStack_c0,puVar4[1]);
        lVar2 = 1;
        if (*(long *)(lVar1 + 0x28) == lStack_58) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}

