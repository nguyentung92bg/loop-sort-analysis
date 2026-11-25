/* IL2CPP: SettingsPageMonitor$$OnActivated
void SettingsPageMonitor__OnActivated (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$OnActivated
   void SettingsPageMonitor__OnActivated (SettingsPageMonitor_o* __this, const MethodInfo* method);
    */

undefined8 SettingsPageMonitor__OnActivated_245d5f4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [10];
  
  MonitorBase__OnActivated_256c9f4(param_1,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    uVar2 = SettingsModule__IsSoundActive_2539c7c(*(long *)(param_1 + 0x98),0);
    if (lVar3 != 0) {
      ToggleElement__Initialize_241ecb0(lVar3,uVar2 & 1,0);
      if (*(long *)(param_1 + 0x98) != 0) {
        lVar3 = *(long *)(param_1 + 0xc0);
        uVar2 = SettingsModule__IsMusicActive_2539cd4(*(long *)(param_1 + 0x98),0);
        if (lVar3 != 0) {
          ToggleElement__Initialize_241ecb0(lVar3,uVar2 & 1,0);
          if (*(long *)(param_1 + 0x98) != 0) {
            lVar3 = *(long *)(param_1 + 200);
            uVar2 = SettingsModule__IsHapticActive_2539d2c(*(long *)(param_1 + 0x98),0);
            if (lVar3 != 0) {
              ToggleElement__Initialize_241ecb0(lVar3,uVar2 & 1,0);
              if (*(long *)(param_1 + 0x98) != 0) {
                lVar3 = *(long *)(param_1 + 0xd0);
                uVar2 = SettingsModule__IsNotificationActive_2539d84(*(long *)(param_1 + 0x98),0);
                if (lVar3 != 0) {
                  ToggleElement__Initialize_241ecb0(lVar3,uVar2 & 1,0);
                  if (*(long *)(param_1 + 0x98) != 0) {
                    lVar3 = *(long *)(param_1 + 0xd8);
                    uVar2 = SettingsModule__IsColorBlindActive_2539ddc(*(long *)(param_1 + 0x98),0);
                    if (lVar3 != 0) {
                      ToggleElement__Initialize_241ecb0(lVar3,uVar2 & 1,0);
                      puVar1 = PTR_DAT_049c4e60;
                      if ((bRam0000000004f4b92a & 1) == 0) {
                        FUN_021f03f8(PTR_DAT_049c4e60);
                        bRam0000000004f4b92a = 1;
                      }
                      uStack_78 = 0;
                      uStack_80 = 0;
                      alStack_70[1] = 0;
                      alStack_70[0] = 0;
                      alStack_70[3] = 0;
                      alStack_70[2] = 0;
                      alStack_70[5] = 0;
                      alStack_70[4] = 0;
                      alStack_70[7] = 0;
                      alStack_70[6] = 0;
                      alStack_70[9] = 0;
                      alStack_70[8] = 0;
                      thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
                      alStack_70[0] = param_1;
                      thunk_FUN_021f190c(alStack_70,param_1);
                      uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
                      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                                ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

