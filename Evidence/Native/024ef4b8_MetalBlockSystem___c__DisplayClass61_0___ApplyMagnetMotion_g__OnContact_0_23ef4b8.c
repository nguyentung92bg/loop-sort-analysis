/* IL2CPP: MetalBlockSystem.<>c__DisplayClass61_0$$<ApplyMagnetMotion>g__OnContact|0
void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__OnContact_0 (MetalBlockSystem___c__DisplayClass61_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem.<>c__DisplayClass61_0$$<ApplyMagnetMotion>g__OnContact|0
   void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__OnContact_0
   (MetalBlockSystem___c__DisplayClass61_0_o* __this, const MethodInfo* method); */

void MetalBlockSystem___c__DisplayClass61_0___ApplyMagnetMotion_g__OnContact_0_23ef4b8(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* try { // try from 024ef4c0 to 025ef4f7 has its CatchHandler @ 024ef54c */
  if ((bRam0000000004f4b63f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c1f48);
    bRam0000000004f4b63f = 1;
  }
  fVar3 = *(float *)(param_1 + 0x1c);
  if (*(float *)(param_1 + 0x1c) <= _UNK_013aa4b8) {
    fVar3 = _UNK_013aa4b8;
  }
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  *(int *)(param_1 + 0x18) = iVar1;
  *(float *)(param_1 + 0x1c) = fVar3;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 024ef530 to 025ef533 has its CatchHandler @ 024ef548 */
    if (iVar1 == *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
                    /* try { // try from 024ef534 to 025ef537 has its CatchHandler @ 024ef544 */
                    /* try { // try from 024ef538 to 025ef53b has its CatchHandler @ 024ef53c */
                    /* catch() { ... } // from try @ 024ef538 with catch @ 024ef53c */
      *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
                    /* catch() { ... } // from try @ 024ef478 with catch @ 024ef540 */
                    /* catch() { ... } // from try @ 024ef534 with catch @ 024ef544 */
                    /* catch() { ... } // from try @ 024ef530 with catch @ 024ef548 */
      *(undefined4 *)(param_1 + 0x28) = 0x3e3851ec;
                    /* catch() { ... } // from try @ 024ef4c0 with catch @ 024ef54c */
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar2 != 0)) {
        AudioModule__GetPlayer_2530858(&uStack_60,lVar2,0);
        uStack_38 = uStack_58;
        uStack_40 = uStack_60;
        uStack_28 = uStack_48;
        uStack_30 = uStack_50;
        if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 024ef594 to 025ef5bb has its CatchHandler @ 024f009c */
        AudioPlayer__WithPitch_2531198(&uStack_80,_UNK_013aa4f4,&uStack_40,0);
        uStack_38 = uStack_78;
        uStack_40 = uStack_80;
        uStack_28 = uStack_68;
        uStack_30 = uStack_70;
        if (((*(long *)(param_1 + 0x30) != 0) &&
            (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
                    /* try { // try from 024ef5c4 to 025ef5cf has its CatchHandler @ 024f0048 */
          AudioPlayer__Play_2530c98(&uStack_40,*(undefined8 *)(lVar2 + 0x98),0);
          if ((*(long *)(param_1 + 0x30) != 0) &&
             (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x50), lVar2 != 0)) {
            HapticModule__PlayHeavy_253537c(lVar2,0);
            return;
          }
        }
      }
    }
    else {
                    /* try { // try from 024ef5f4 to 025ef63b has its CatchHandler @ 024f00a4 */
      fVar3 = *(float *)(param_1 + 0x28);
      if (*(float *)(param_1 + 0x28) <= _UNK_013aa978) {
        fVar3 = _UNK_013aa978;
      }
      *(float *)(param_1 + 0x28) = fVar3;
      fVar3 = (float)UnityEngine_Time__get_time_3c295c8(0);
      if (fVar3 - *(float *)(param_1 + 0x38) < _UNK_013aa950) {
        return;
      }
      uVar4 = UnityEngine_Time__get_time_3c295c8(0);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 024ef63c to 025ef687 has its CatchHandler @ 024ef33c */
        fVar5 = (float)*(int *)(param_1 + 0x18) / (float)*(int *)(*(long *)(param_1 + 0x20) + 0x18);
        fVar3 = 1.0;
        if (fVar5 <= 1.0) {
          fVar3 = fVar5;
        }
        fVar6 = _UNK_013aa3e4;
        if (0.0 <= fVar5) {
          fVar6 = fVar3 * _UNK_013aa7e8 + _UNK_013aa3e4;
        }
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar2 != 0)) {
                    /* try { // try from 024ef688 to 025ef6d3 has its CatchHandler @ 024f00a8 */
          AudioModule__GetPlayer_2530858(&uStack_60,lVar2,0);
          uStack_38 = uStack_58;
          uStack_40 = uStack_60;
          uStack_28 = uStack_48;
          uStack_30 = uStack_50;
          if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
            FUN_021f0574();
          }
          AudioPlayer__WithPitch_2531198(&uStack_80,fVar6,&uStack_40,0);
          uStack_38 = uStack_78;
          uStack_40 = uStack_80;
          uStack_28 = uStack_68;
          uStack_30 = uStack_70;
          if (((*(long *)(param_1 + 0x30) != 0) &&
              (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar2 != 0)) &&
             (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
            AudioPlayer__Play_2530c98(&uStack_40,*(undefined8 *)(lVar2 + 0x98),0);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x50), lVar2 != 0)) {
                    /* try { // try from 024ef704 to 025ef75f has its CatchHandler @ 024f0054 */
              HapticModule__PlayLight_25352c0(lVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

