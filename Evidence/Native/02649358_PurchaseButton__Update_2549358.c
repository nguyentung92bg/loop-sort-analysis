/* IL2CPP: PurchaseButton$$Update
void PurchaseButton__Update (PurchaseButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: PurchaseButton$$Update
   void PurchaseButton__Update (PurchaseButton_o* __this, const MethodInfo* method); */

void PurchaseButton__Update_2549358(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_049ca890;
                    /* try { // try from 02649374 to 0274937b has its CatchHandler @ 02649390 */
  if ((bRam0000000004f4c024 & 1) == 0) {
                    /* try { // try from 02649380 to 02749383 has its CatchHandler @ 026493c8 */
                    /* try { // try from 02649384 to 02749387 has its CatchHandler @ 026493b4 */
    FUN_021f03f8(PTR_DAT_049ca890);
                    /* try { // try from 02649388 to 0274938b has its CatchHandler @ 026493c0 */
                    /* try { // try from 0264938c to 0274938f has its CatchHandler @ 02649394 */
    bRam0000000004f4c024 = 1;
  }
                    /* catch() { ... } // from try @ 02649374 with catch @ 02649390
                       try { // try from 02649390 to 027493ff has its CatchHandler @ 02648ef8 */
                    /* catch() { ... } // from try @ 0264938c with catch @ 02649394 */
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
                    /* catch() { ... } // from try @ 02649344 with catch @ 02649398 */
                    /* catch() { ... } // from try @ 026492ec with catch @ 0264939c */
                    /* catch() { ... } // from try @ 026491c8 with catch @ 026493a0 */
  auVar6 = ZEXT816(0);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                    /* catch() { ... } // from try @ 026492d4 with catch @ 026493a4 */
    iVar2 = PurchasingModule__GetStatus_2549498();
    auVar6._8_8_ = auStack_30._8_8_;
    auVar6._0_8_ = auStack_30._0_8_;
                    /* catch() { ... } // from try @ 026491b0 with catch @ 026493a8 */
                    /* catch() { ... } // from try @ 026491f0 with catch @ 026493ac */
    if (*(long *)(param_1 + 0x28) != 0) {
                    /* catch() { ... } // from try @ 02649214 with catch @ 026493b0 */
                    /* catch() { ... } // from try @ 026491d8 with catch @ 026493b4
                       catch() { ... } // from try @ 02649384 with catch @ 026493b4 */
                    /* catch() { ... } // from try @ 02649190 with catch @ 026493b8 */
                    /* catch() { ... } // from try @ 02649304 with catch @ 026493bc */
      lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0);
      auVar6._8_8_ = auStack_30._8_8_;
      auVar6._0_8_ = auStack_30._0_8_;
                    /* catch() { ... } // from try @ 0264934c with catch @ 026493c0
                       catch() { ... } // from try @ 02649388 with catch @ 026493c0 */
      if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 02649158 with catch @ 026493c4 */
                    /* catch() { ... } // from try @ 02649380 with catch @ 026493c8 */
                    /* catch() { ... } // from try @ 02649284 with catch @ 026493cc */
                    /* catch() { ... } // from try @ 02649264 with catch @ 026493d0 */
        UnityEngine_GameObject__SetActive_3c1ce34(lVar3,iVar2 != 1,0);
                    /* catch() { ... } // from try @ 0264915c with catch @ 026493d4 */
                    /* catch() { ... } // from try @ 02649120 with catch @ 026493d8 */
                    /* catch() { ... } // from try @ 02649110 with catch @ 026493dc */
        uVar4 = UniTimer__get_IsRunning_3f0efa0(param_1 + 0x30,0);
                    /* catch() { ... } // from try @ 02649104 with catch @ 026493e0 */
        if ((uVar4 & 1) != 0) {
                    /* try { // try from 02649484 to 02749487 has its CatchHandler @ 02649490 */
                    /* try { // try from 02649488 to 02749493 has its CatchHandler @ 02648ef8 */
                    /* catch() { ... } // from try @ 02649484 with catch @ 02649490 */
          return;
        }
                    /* catch() { ... } // from try @ 02649140 with catch @ 026493e4 */
                    /* catch() { ... } // from try @ 02649100 with catch @ 026493e8
                       catch() { ... } // from try @ 02649130 with catch @ 026493e8 */
        auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa810,0);
                    /* try { // try from 02649400 to 02749417 has its CatchHandler @ 02649480 */
        auVar6 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
        *(undefined1 (*) [16])(param_1 + 0x30) = auVar6;
        auVar6 = auStack_30;
        if (*(long *)(param_1 + 0x28) != 0) {
                    /* try { // try from 02649418 to 0274946f has its CatchHandler @ 02648ef8 */
          lVar3 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x28),0);
          auVar6 = auStack_30;
          if (cRam0000000004f4a55a == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55a = '\x01';
            auVar6 = auStack_30;
          }
          if (lVar3 != 0) {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x48);
                    /* try { // try from 02649470 to 0274947f has its CatchHandler @ 02649480 */
            auStack_30 = auVar6;
                    /* catch() { ... } // from try @ 02649400 with catch @ 02649480
                       catch() { ... } // from try @ 02649470 with catch @ 02649480 */
            UnityEngine_Transform__Rotate_3c2e480
                      ((float)uVar5 * -45.0,(float)((ulong)uVar5 >> 0x20) * -45.0,
                       *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x50) * -45.0,lVar3,
                       1,0);
            return;
          }
        }
      }
    }
  }
  auStack_30 = auVar6;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

