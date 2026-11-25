/* IL2CPP: HomeNavigationMonitor$$OnActivated
void HomeNavigationMonitor__OnActivated (HomeNavigationMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$OnActivated
   void HomeNavigationMonitor__OnActivated (HomeNavigationMonitor_o* __this, const MethodInfo*
   method); */

undefined8 HomeNavigationMonitor__OnActivated_2449c00(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [5];
  
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    SwipeablePageLayout__Activate_2449c2c();
    puVar1 = PTR_DAT_049c4530;
    if ((bRam0000000004f4b88c & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c4530);
      bRam0000000004f4b88c = 1;
    }
    alStack_40[2] = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    alStack_40[1] = 0;
    alStack_40[0] = 0;
    thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
    alStack_40[0] = param_1;
    thunk_FUN_021f190c(alStack_40,param_1);
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

