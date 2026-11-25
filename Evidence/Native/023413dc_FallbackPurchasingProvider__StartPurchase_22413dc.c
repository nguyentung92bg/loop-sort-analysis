/* IL2CPP: FallbackPurchasingProvider$$StartPurchase
void FallbackPurchasingProvider__StartPurchase (FallbackPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FallbackPurchasingProvider$$StartPurchase
   void FallbackPurchasingProvider__StartPurchase (FallbackPurchasingProvider_o* __this,
   PurchaseRequest_o request, const MethodInfo* method); */

void FallbackPurchasingProvider__StartPurchase_22413dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_188 [104];
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [104];
  long lStack_48;
  
  puVar2 = PTR_DAT_049b5368;
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f49b13 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5370);
    FUN_021f03f8(PTR_DAT_049b5368);
    bRam0000000004f49b13 = 1;
  }
  uStack_118 = *(undefined8 *)puVar2;
  uStack_c0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  thunk_FUN_021f190c((ulong)&uStack_120 | 8);
  uStack_120 = CONCAT44(uStack_120._4_4_,1);
  func_0x04608620(&uStack_110,param_2,0x48);
  thunk_FUN_021f190c(&uStack_110,0);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    lVar8 = *(long *)PTR_DAT_049b5370;
    func_0x04608620(auStack_188,&uStack_120,0x68);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023414f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,lVar8,0);
LAB_023414f8:
    pcVar9 = (code *)*puVar3;
    func_0x04608620(auStack_b0,auStack_188,0x68);
    (*pcVar9)(plVar7,auStack_b0,puVar3[1]);
    if (*(long *)(lVar1 + 0x28) == lStack_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

