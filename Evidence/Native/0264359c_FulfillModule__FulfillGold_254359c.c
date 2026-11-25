/* IL2CPP: FulfillModule$$FulfillGold
void FulfillModule__FulfillGold (FulfillModule_o* __this, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillGold
   void FulfillModule__FulfillGold (FulfillModule_o* __this, double quantity, const MethodInfo*
   method); */

void FulfillModule__FulfillGold_254359c(double param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_e8 [80];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049c2ce8;
                    /* catch() { ... } // from try @ 02643430 with catch @ 026435a0
                       catch() { ... } // from try @ 026434d0 with catch @ 026435a0 */
                    /* try { // try from 026435a8 to 027435ab has its CatchHandler @ 026435b0 */
                    /* catch() { ... } // from try @ 026434ec with catch @ 026435b0
                       catch() { ... } // from try @ 02643588 with catch @ 026435b0
                       catch() { ... } // from try @ 026435a8 with catch @ 026435b0 */
  if ((bRam0000000004f4bfed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ce8);
    bRam0000000004f4bfed = 1;
  }
  uStack_98 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar3 = *(long *)(param_2 + 0x10);
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar1 = 0x80000000;
  if (param_1 != INFINITY) {
    uVar1 = (int)param_1;
  }
  uStack_34 = *(undefined4 *)(param_2 + 0x60);
  uStack_80 = 1;
  lStack_70 = (ulong)uVar1 << 0x20;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_98,&uStack_34,*(undefined8 *)puVar2);
  uStack_90 = *(undefined8 *)(param_2 + 0x58);
  uStack_7c = (undefined4)uStack_98;
  uStack_78 = (undefined4)((ulong)uStack_98 >> 0x20);
  thunk_FUN_021f190c(&uStack_90);
  if (lVar3 != 0) {
    func_0x04608620(auStack_e8,&uStack_90,0x50);
    EconomyModule__Add_25332a4(lVar3,auStack_e8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

