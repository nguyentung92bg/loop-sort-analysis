/* IL2CPP: EconomyMonitor.<>c__DisplayClass17_0$$<ApplyGoldParticleMotion>b__1
void EconomyMonitor___c__DisplayClass17_0___ApplyGoldParticleMotion_b__1 (EconomyMonitor___c__DisplayClass17_0_o* __this, int32_t __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyMonitor.<>c__DisplayClass17_0$$<ApplyGoldParticleMotion>b__1
   void EconomyMonitor___c__DisplayClass17_0___ApplyGoldParticleMotion_b__1
   (EconomyMonitor___c__DisplayClass17_0_o* __this, int32_t __, const MethodInfo* method); */

void EconomyMonitor___c__DisplayClass17_0___ApplyGoldParticleMotion_b__1_243dae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b830 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    bRam0000000004f4b830 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xa0), lVar1 != 0)) {
    HapticModule__PlayLight_25352c0(lVar1,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar1 != 0)) {
      AudioModule__GetPlayer_2530858(&uStack_60,lVar1,0);
      uStack_38 = uStack_58;
      uStack_40 = uStack_60;
      uStack_28 = uStack_48;
      uStack_30 = uStack_50;
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar1 != 0)) &&
         (lVar1 = *(long *)(lVar1 + 0x10), lVar1 != 0)) {
        uVar2 = *(undefined8 *)(lVar1 + 0x48);
        if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
          FUN_021f0574();
        }
        AudioPlayer__Play_2530c98(&uStack_40,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

