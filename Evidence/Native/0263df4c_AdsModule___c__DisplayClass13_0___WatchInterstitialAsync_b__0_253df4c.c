/* IL2CPP: AdsModule.<>c__DisplayClass13_0$$<WatchInterstitialAsync>b__0
void AdsModule___c__DisplayClass13_0___WatchInterstitialAsync_b__0 (AdsModule___c__DisplayClass13_0_o* __this, bool result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule.<>c__DisplayClass13_0$$<WatchInterstitialAsync>b__0
   void AdsModule___c__DisplayClass13_0___WatchInterstitialAsync_b__0
   (AdsModule___c__DisplayClass13_0_o* __this, bool result, const MethodInfo* method); */

undefined8
AdsModule___c__DisplayClass13_0___WatchInterstitialAsync_b__0_253df4c(long param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049ca440;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if ((bRam0000000004f4bf96 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049ca440,param_2 & 1,uVar3,0);
      bRam0000000004f4bf96 = 1;
    }
    lStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
    lStack_48 = lVar2;
    thunk_FUN_021f190c(&lStack_48,lVar2);
    uStack_50 = CONCAT71(uStack_50._1_7_,param_2) & 0xffffffffffffff01;
    uStack_40 = uVar3;
    thunk_FUN_021f190c(&uStack_40,uVar3);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

