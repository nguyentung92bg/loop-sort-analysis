/* IL2CPP: GarageSale$$.ctor
void GarageSale___ctor (GarageSale_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GarageSale$$.ctor
   void GarageSale___ctor (GarageSale_o* __this, const MethodInfo* method); */

undefined1  [16] GarageSale___ctor_251821c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be2c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be2c = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x238);
                    /* try { // try from 02618274 to 0271827b has its CatchHandler @ 026185b4 */
  uVar4 = *(undefined8 *)(lVar2 + 0x250);
  uVar3 = *(undefined8 *)(lVar2 + 0x248);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x240);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x38,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
                    /* try { // try from 02618284 to 0271828b has its CatchHandler @ 026185b0 */
  return auVar6;
}

