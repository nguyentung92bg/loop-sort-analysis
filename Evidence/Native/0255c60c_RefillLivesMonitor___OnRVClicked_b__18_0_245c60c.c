/* IL2CPP: RefillLivesMonitor$$<OnRVClicked>b__18_0
void RefillLivesMonitor___OnRVClicked_b__18_0 (RefillLivesMonitor_o* __this, bool rewarded, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: RefillLivesMonitor$$<OnRVClicked>b__18_0
   void RefillLivesMonitor___OnRVClicked_b__18_0 (RefillLivesMonitor_o* __this, bool rewarded, const
   MethodInfo* method); */

long RefillLivesMonitor___OnRVClicked_b__18_0_245c60c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [7];
  
  if ((param_2 & 1) == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    HapticModule__PlaySuccess_25354f4(*(long *)(param_1 + 0xa8),0);
    if (*(long *)(param_1 + 0x98) != 0) {
      LifeModule__GainLife_2545fd0(*(long *)(param_1 + 0x98),0);
      lVar2 = *(long *)(param_1 + 200);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
      puVar1 = PTR_DAT_049cbfc0;
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 != 0) {
        if ((bRam0000000004f4c1ad & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049cbfc0,param_1,0,0);
          bRam0000000004f4c1ad = 1;
        }
        alStack_60[4] = 0;
        alStack_60[1] = 0;
        alStack_60[0] = 0;
        alStack_60[3] = 0;
        alStack_60[2] = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
        alStack_60[2] = lVar2;
        thunk_FUN_021f190c(alStack_60 + 2,lVar2);
        alStack_60[0] = param_1;
        thunk_FUN_021f190c(alStack_60,param_1);
        alStack_60[1] = 0;
        thunk_FUN_021f190c(alStack_60 + 1,0);
        uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                  ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

