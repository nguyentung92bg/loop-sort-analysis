/* IL2CPP: PurchasingModule$$StartPurchase
void PurchasingModule__StartPurchase (PurchasingModule_o* __this, System_String_o* productId, System_String_o* placement, int32_t productType, System_Collections_Generic_List_FulfillPayout__o* payouts, System_String_o* reskin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$StartPurchase
   void PurchasingModule__StartPurchase (PurchasingModule_o* __this, System_String_o* productId,
   System_String_o* placement, int32_t productType,
   System_Collections_Generic_List_FulfillPayout__o* payouts, System_String_o* reskin, const
   MethodInfo* method); */

void PurchasingModule__StartPurchase_2549728
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_1a8 [72];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 auStack_118 [4];
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02649758 to 02749763 has its CatchHandler @ 026497a0 */
                    /* try { // try from 02649770 to 0274977f has its CatchHandler @ 0264979c */
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
                    /* try { // try from 02649784 to 02749787 has its CatchHandler @ 026497c8 */
  uStack_98 = 0;
  uStack_a0 = 0;
                    /* try { // try from 02649788 to 0274978b has its CatchHandler @ 026497c4 */
  uStack_a8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 0264978c to 0274978f has its CatchHandler @ 026497bc */
  uStack_b8 = 0;
  uStack_c0 = 0;
                    /* try { // try from 02649790 to 02749793 has its CatchHandler @ 026497d0 */
  PurchasingModule__GetProductMetadata_2549880(auStack_118);
                    /* try { // try from 02649794 to 02749797 has its CatchHandler @ 026497b0 */
                    /* try { // try from 02649798 to 0274979b has its CatchHandler @ 026497b4 */
                    /* catch() { ... } // from try @ 02649770 with catch @ 0264979c
                       try { // try from 0264979c to 027497e7 has its CatchHandler @ 026494a0 */
                    /* catch() { ... } // from try @ 02649758 with catch @ 026497a0 */
                    /* catch() { ... } // from try @ 02649560 with catch @ 026497a4 */
                    /* catch() { ... } // from try @ 02649568 with catch @ 026497a8 */
                    /* catch() { ... } // from try @ 0264953c with catch @ 026497ac */
  uStack_158 = uStack_f8;
  uStack_160 = uStack_100;
  uStack_148 = uStack_e8;
  uStack_150 = uStack_f0;
                    /* catch() { ... } // from try @ 02649794 with catch @ 026497b0 */
                    /* catch() { ... } // from try @ 02649530 with catch @ 026497b4
                       catch() { ... } // from try @ 02649798 with catch @ 026497b4 */
                    /* catch() { ... } // from try @ 02649588 with catch @ 026497b8
                       catch() { ... } // from try @ 026496cc with catch @ 026497b8 */
  uStack_80 = 0;
  uStack_138 = uStack_d8;
  uStack_140 = uStack_e0;
                    /* catch() { ... } // from try @ 0264978c with catch @ 026497bc */
  uStack_128 = uStack_c8;
  uStack_130 = uStack_d0;
                    /* catch() { ... } // from try @ 02649694 with catch @ 026497c0 */
                    /* catch() { ... } // from try @ 02649788 with catch @ 026497c4 */
  uStack_b8 = 0;
                    /* catch() { ... } // from try @ 02649784 with catch @ 026497c8 */
  uStack_a8 = 0;
  uStack_b0 = 0;
                    /* catch() { ... } // from try @ 026495e0 with catch @ 026497cc */
  uStack_98 = 0;
  uStack_a0 = 0;
                    /* catch() { ... } // from try @ 02649674 with catch @ 026497d0
                       catch() { ... } // from try @ 02649790 with catch @ 026497d0 */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c0 = param_2;
  thunk_FUN_021f190c(&uStack_c0,param_2);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,param_4);
  uStack_b0 = param_3;
                    /* try { // try from 026497e8 to 027497ff has its CatchHandler @ 02649860 */
  thunk_FUN_021f190c(&uStack_b0,param_3);
  uStack_a8 = uStack_108;
  thunk_FUN_021f190c(&uStack_a8,uStack_108);
                    /* try { // try from 02649800 to 0274984f has its CatchHandler @ 026494a0 */
  uStack_a0 = CONCAT44(uStack_a0._4_4_,auStack_118[0]);
  uStack_90 = uStack_158;
  uStack_98 = uStack_160;
  uStack_88 = param_5;
  thunk_FUN_021f190c(&uStack_88,param_5);
  uStack_80 = param_6;
  thunk_FUN_021f190c(&uStack_80,param_6);
  func_0x04608620(auStack_1a8,&uStack_c0,0x48);
  PurchasingModule__StartPurchase_2549988(param_1,auStack_1a8);
                    /* try { // try from 02649850 to 0274985f has its CatchHandler @ 02649860 */
  if (*(long *)(lVar1 + 0x28) == lStack_78) {
                    /* catch() { ... } // from try @ 026497e8 with catch @ 02649860
                       catch() { ... } // from try @ 02649850 with catch @ 02649860 */
                    /* try { // try from 02649864 to 02749867 has its CatchHandler @ 02649870 */
                    /* try { // try from 02649868 to 02749873 has its CatchHandler @ 026494a0 */
                    /* catch() { ... } // from try @ 02649864 with catch @ 02649870 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

