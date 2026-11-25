/* IL2CPP: NoInternetMonitor$$Render
void NoInternetMonitor__Render (NoInternetMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: NoInternetMonitor$$Render
   void NoInternetMonitor__Render (NoInternetMonitor_o* __this, const MethodInfo* method); */

ulong NoInternetMonitor__Render_244ed70(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong auStack_60 [7];
  
  MonitorBase__Render_256c914(param_1,0);
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = ConnectivityModule__get_IsOffline_2531494(*(long *)(param_1 + 0x98),0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return param_1;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0xa8) = 1;
  puVar1 = PTR_DAT_049cbfc0;
  if (lVar3 != 0) {
    if ((bRam0000000004f4c1ad & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049cbfc0,param_1,0,0);
      bRam0000000004f4c1ad = 1;
    }
    auStack_60[4] = 0;
    auStack_60[1] = 0;
    auStack_60[0] = 0;
    auStack_60[3] = 0;
    auStack_60[2] = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
    auStack_60[2] = lVar3;
    thunk_FUN_021f190c(auStack_60 + 2,lVar3);
    auStack_60[0] = param_1;
    thunk_FUN_021f190c(auStack_60,param_1);
    auStack_60[1] = 0;
    thunk_FUN_021f190c(auStack_60 + 1,0);
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

