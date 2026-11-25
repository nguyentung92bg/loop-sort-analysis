/* IL2CPP: PurchaseButton$$.ctor
void PurchaseButton___ctor (PurchaseButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseButton$$.ctor
   void PurchaseButton___ctor (PurchaseButton_o* __this, const MethodInfo* method); */

undefined1  [16] PurchaseButton___ctor_2549538(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0264953c to 02749543 has its CatchHandler @ 026497ac */
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

