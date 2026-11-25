/* IL2CPP: RewardedVideoButton$$Update
void RewardedVideoButton__Update (RewardedVideoButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RewardedVideoButton$$Update
   void RewardedVideoButton__Update (RewardedVideoButton_o* __this, const MethodInfo* method); */

void RewardedVideoButton__Update_254b258(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_049ca9f8;
  if ((bRam0000000004f4c044 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca9f8);
    bRam0000000004f4c044 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  auVar6 = ZEXT816(0);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    uVar2 = AdsModule__IsRewardedVideoAvailable_253d89c(**(long **)(*(long *)puVar1 + 0xb8),0);
    auVar6._8_8_ = auStack_30._8_8_;
    auVar6._0_8_ = auStack_30._0_8_;
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar3 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x28),0);
      auVar6._8_8_ = auStack_30._8_8_;
      auVar6._0_8_ = auStack_30._0_8_;
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive_3c1ce34(lVar3,(uVar2 ^ 0xffffffff) & 1,0);
        uVar4 = UniTimer__get_IsRunning_3f0efa0(param_1 + 0x30,0);
        if ((uVar4 & 1) != 0) {
          return;
        }
        auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(_UNK_013aa810,0);
        auVar6 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
        *(undefined1 (*) [16])(param_1 + 0x30) = auVar6;
        auVar6 = auStack_30;
        if (*(long *)(param_1 + 0x28) != 0) {
          lVar3 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x28),0);
          auVar6 = auStack_30;
          if (cRam0000000004f4a55a == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55a = '\x01';
            auVar6 = auStack_30;
          }
          if (lVar3 != 0) {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x48);
            auStack_30 = auVar6;
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

