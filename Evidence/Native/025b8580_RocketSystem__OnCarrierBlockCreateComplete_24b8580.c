/* IL2CPP: RocketSystem$$OnCarrierBlockCreateComplete
void RocketSystem__OnCarrierBlockCreateComplete (RocketSystem_o* __this, CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$OnCarrierBlockCreateComplete
   void RocketSystem__OnCarrierBlockCreateComplete (RocketSystem_o* __this,
   CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method); */

ulong RocketSystem__OnCarrierBlockCreateComplete_24b8580(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [5];
  
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = CoreStreak__IsUnlocked_2512e64(*(long *)(param_1 + 0x68),0);
  puVar1 = PTR_DAT_049c6da0;
  if ((uVar2 & 1) != 0) {
    if ((bRam0000000004f4bbab & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c6da0);
      bRam0000000004f4bbab = 1;
    }
    alStack_40[1] = 0;
    alStack_40[0] = 0;
    alStack_40[3] = 0;
    alStack_40[2] = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
    alStack_40[0] = param_1;
    thunk_FUN_021f190c(alStack_40,param_1);
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
    return 0;
  }
  return uVar2;
}

