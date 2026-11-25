/* IL2CPP: NoAdsOffer$$CanShowInHome
bool NoAdsOffer__CanShowInHome (NoAdsOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NoAdsOffer$$CanShowInHome
   bool NoAdsOffer__CanShowInHome (NoAdsOffer_o* __this, const MethodInfo* method); */

bool NoAdsOffer__CanShowInHome_2522e68(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02622e68 to 02722e6b has its CatchHandler @ 02622e88 */
                    /* try { // try from 02622e6c to 02722e6f has its CatchHandler @ 02622e84 */
                    /* try { // try from 02622e70 to 02722ebb has its CatchHandler @ 02622c04 */
                    /* catch() { ... } // from try @ 02622d84 with catch @ 02622e74 */
                    /* catch() { ... } // from try @ 02622dac with catch @ 02622e78 */
                    /* catch() { ... } // from try @ 02622dbc with catch @ 02622e7c */
                    /* catch() { ... } // from try @ 02622de0 with catch @ 02622e80 */
                    /* catch() { ... } // from try @ 02622e6c with catch @ 02622e84 */
  if ((bRam0000000004f4be81 & 1) == 0) {
                    /* catch() { ... } // from try @ 02622e68 with catch @ 02622e88 */
                    /* catch() { ... } // from try @ 02622e10 with catch @ 02622e8c */
                    /* catch() { ... } // from try @ 02622d88 with catch @ 02622e90 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 02622e24 with catch @ 02622e94 */
                    /* catch() { ... } // from try @ 02622e00 with catch @ 02622e98 */
    bRam0000000004f4be81 = 1;
  }
                    /* catch() { ... } // from try @ 02622cf4 with catch @ 02622e9c */
  lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02622d14 with catch @ 02622ea0 */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar4 + 0xb8);
                    /* try { // try from 02622ebc to 02722ebf has its CatchHandler @ 02622ed8 */
  uStack_38 = *(undefined8 *)(lVar4 + 0x198);
  uStack_40 = *(undefined8 *)(lVar4 + 400);
  uStack_28 = *(undefined8 *)(lVar4 + 0x1a8);
  uStack_30 = *(undefined8 *)(lVar4 + 0x1a0);
                    /* try { // try from 02622ec0 to 02722edb has its CatchHandler @ 02622c04 */
  uVar5 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_40,0);
  if ((uVar5 & 1) == 0) {
    lVar4 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 02622ebc with catch @ 02622ed8 */
                    /* try { // try from 02622edc to 02722ee3 has its CatchHandler @ 02622eec */
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
                    /* try { // try from 02622ee4 to 02722eef has its CatchHandler @ 02622c04 */
      lVar4 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar4 + 0xb8);
                    /* catch() { ... } // from try @ 02622edc with catch @ 02622eec */
    uStack_58 = *(undefined8 *)(lVar4 + 0x3f0);
    uStack_60 = *(undefined8 *)(lVar4 + 1000);
    uStack_48 = *(undefined8 *)(lVar4 + 0x400);
    uStack_50 = *(undefined8 *)(lVar4 + 0x3f8);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_60,0);
    bVar2 = 0 < iVar3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

