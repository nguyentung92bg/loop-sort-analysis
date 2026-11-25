/* IL2CPP: VoodooPurchasingProvider$$OnPurchaseFailure
void VoodooPurchasingProvider__OnPurchaseFailure (VoodooPurchasingProvider_o* __this, int32_t reason, Voodoo_Sauce_IAP_ProductReceivedInfo_o* productReceivedInfo, System_String_o* description, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$OnPurchaseFailure
   void VoodooPurchasingProvider__OnPurchaseFailure (VoodooPurchasingProvider_o* __this, int32_t
   reason, Voodoo_Sauce_IAP_ProductReceivedInfo_o* productReceivedInfo, System_String_o*
   description, const MethodInfo* method); */

void VoodooPurchasingProvider__OnPurchaseFailure_225476c
               (long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auStack_1e8 [104];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long alStack_128 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f49bac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5370);
    FUN_021f03f8(PTR_DAT_049b60c8);
    FUN_021f03f8(PTR_DAT_049b61a8);
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f49bac = 1;
  }
  uStack_d0 = 0;
  alStack_128[1] = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  alStack_128[0] = 0;
  uStack_130 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 0x60);
  }
  if (*(int *)(*(long *)PTR_DAT_049b60c8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b61a8;
  PurchaseRequest__FromJson_254ac40(&uStack_c0,uVar11,0);
  func_0x04608620(&uStack_110,&uStack_c0,0x48);
  uVar4 = System_String__IsNullOrEmpty_2f7c924(uStack_110,0);
  if ((uVar4 & 1) != 0) {
    if (param_3 == 0) {
      uStack_110 = 0;
    }
    else {
      uStack_110 = *(undefined8 *)(param_3 + 0x18);
    }
    thunk_FUN_021f190c(&uStack_110);
  }
  puVar2 = PTR_DAT_049b61a0;
  alStack_128[1] = 0;
  uStack_c0 = *(undefined8 *)puVar3;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  alStack_128[0] = 0;
  uStack_130 = 0;
  uStack_180 = 2;
  plVar10 = *(long **)(param_1 + 0x38);
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = param_2;
  uStack_178 = System_Enum__ToString_3135e00(&uStack_c0,0);
  thunk_FUN_021f190c((ulong)&uStack_180 | 8,uStack_178);
  func_0x04608620(&uStack_170,&uStack_110,0x48);
  thunk_FUN_021f190c(&uStack_170,0);
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x38);
  }
  alStack_128[0] = *(long *)puVar2;
  if (lVar6 != 0) {
    alStack_128[0] = lVar6;
  }
  thunk_FUN_021f190c(alStack_128);
  if (plVar10 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar8 = *(long *)PTR_DAT_049b5370;
    func_0x04608620(auStack_1e8,&uStack_180,0x68);
    lVar6 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0235498c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,lVar8,0);
LAB_0235498c:
    pcVar9 = (code *)*puVar5;
    func_0x04608620(&uStack_c0,auStack_1e8,0x68);
    (*pcVar9)(plVar10,&uStack_c0,puVar5[1]);
    if (*(long *)(lVar1 + 0x28) == lStack_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

