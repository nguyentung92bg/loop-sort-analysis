/* IL2CPP: PurchasingModule$$StartPurchase
void PurchasingModule__StartPurchase (PurchasingModule_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$StartPurchase
   void PurchasingModule__StartPurchase (PurchasingModule_o* __this, PurchaseRequest_o request,
   const MethodInfo* method); */

void PurchasingModule__StartPurchase_2549988(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [72];
  long lStack_38;
  
                    /* try { // try from 02649990 to 02749997 has its CatchHandler @ 02649a14 */
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 026499a8 to 027499e7 has its CatchHandler @ 02649a20 */
  if ((bRam0000000004f4c027 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca8b8);
    FUN_021f03f8(PTR_DAT_049ca8a0);
    bRam0000000004f4c027 = 1;
  }
  func_0x04608620(auStack_c8,param_2,0x48);
  AnalyticsPurchaseEvent__CreateFrom_2540ca4(&uStack_148,auStack_c8);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 02649a04 to 02749a0b has its CatchHandler @ 02649a24 */
                    /* try { // try from 02649a0c to 02749a13 has its CatchHandler @ 02649a20 */
    uStack_178 = uStack_140;
    uStack_180 = uStack_148;
    uStack_168 = uStack_130;
    uStack_170 = uStack_138;
                    /* catch() { ... } // from try @ 02649990 with catch @ 02649a14 */
    uStack_158 = uStack_120;
    uStack_160 = uStack_128;
                    /* catch() { ... } // from try @ 0264993c with catch @ 02649a18 */
    uStack_150 = uStack_118;
                    /* catch() { ... } // from try @ 0264991c with catch @ 02649a1c */
    AnalyticsModule__StartPurchase_253f200(*(long *)(param_1 + 0x20),&uStack_180);
                    /* catch() { ... } // from try @ 026499a8 with catch @ 02649a20
                       catch() { ... } // from try @ 02649a0c with catch @ 02649a20 */
    plVar6 = *(long **)(param_1 + 0x40);
                    /* catch() { ... } // from try @ 02649944 with catch @ 02649a24
                       catch() { ... } // from try @ 02649a04 with catch @ 02649a24 */
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
                    /* try { // try from 02649a30 to 02749a3b has its CatchHandler @ 02649b44 */
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 02649a4c to 02749a4f has its CatchHandler @ 02649b50 */
                    /* try { // try from 02649a50 to 02749a57 has its CatchHandler @ 02649b38 */
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049ca8b8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02649a7c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
                    /* try { // try from 02649a5c to 02749a67 has its CatchHandler @ 02649b3c */
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049ca8b8,0);
                    /* try { // try from 02649a6c to 02749a77 has its CatchHandler @ 02649b40 */
LAB_02649a7c:
                    /* try { // try from 02649a7c to 02749a87 has its CatchHandler @ 02649b50 */
      (*(code *)*puVar2)(plVar6,0,puVar2[1]);
                    /* try { // try from 02649a8c to 02749a8f has its CatchHandler @ 02649b4c */
      plVar6 = *(long **)(param_1 + 0x10);
      if (plVar6 != (long *)0x0) {
                    /* try { // try from 02649a98 to 02749aa3 has its CatchHandler @ 02649b2c */
                    /* try { // try from 02649aa8 to 02749acb has its CatchHandler @ 02649b34 */
        lVar7 = *(long *)PTR_DAT_049ca8a0;
        func_0x04608620(auStack_110,param_2,0x48);
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
                    /* try { // try from 02649acc to 02749afb has its CatchHandler @ 02649880 */
            if (*(long *)(piVar5 + -2) == lVar7) {
                    /* try { // try from 02649afc to 02749b0b has its CatchHandler @ 02649b28 */
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_02649b04;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02229a4c(plVar6,lVar7,1);
LAB_02649b04:
        pcVar8 = (code *)*puVar2;
        func_0x04608620(auStack_80,auStack_110,0x48);
                    /* try { // try from 02649b20 to 02749b23 has its CatchHandler @ 02649b48 */
                    /* try { // try from 02649b24 to 02749b27 has its CatchHandler @ 02649b30 */
        (*pcVar8)(plVar6,auStack_80,puVar2[1]);
                    /* catch() { ... } // from try @ 02649afc with catch @ 02649b28
                       try { // try from 02649b28 to 02749b67 has its CatchHandler @ 02649880 */
                    /* catch() { ... } // from try @ 02649a98 with catch @ 02649b2c */
                    /* catch() { ... } // from try @ 02649b24 with catch @ 02649b30 */
                    /* catch() { ... } // from try @ 02649aa8 with catch @ 02649b34 */
        if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* catch() { ... } // from try @ 02649a50 with catch @ 02649b38 */
                    /* catch() { ... } // from try @ 02649a5c with catch @ 02649b3c */
                    /* catch() { ... } // from try @ 02649a6c with catch @ 02649b40 */
                    /* catch() { ... } // from try @ 02649a30 with catch @ 02649b44 */
                    /* catch() { ... } // from try @ 02649b20 with catch @ 02649b48 */
          return;
        }
        goto LAB_02649b60;
      }
    }
  }
                    /* catch() { ... } // from try @ 02649a8c with catch @ 02649b4c */
                    /* catch() { ... } // from try @ 02649910 with catch @ 02649b50
                       catch() { ... } // from try @ 02649a4c with catch @ 02649b50
                       catch() { ... } // from try @ 02649a7c with catch @ 02649b50 */
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02649b60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

