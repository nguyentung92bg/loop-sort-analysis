/* IL2CPP: NotificationInstaller$$Install
void NotificationInstaller__Install (NotificationInstaller_o* __this, VContainer_IContainerBuilder_o* builder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationInstaller$$Install
   void NotificationInstaller__Install (NotificationInstaller_o* __this,
   VContainer_IContainerBuilder_o* builder, const MethodInfo* method); */

void NotificationInstaller__Install_254c494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_049caa50;
  puVar2 = PTR_DAT_049caa48;
  puVar1 = PTR_DAT_049c5a98;
  if ((bRam0000000004f4c050 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa48);
    FUN_021f03f8(PTR_DAT_049caa50);
    FUN_021f03f8(PTR_DAT_049c5a98);
    bRam0000000004f4c050 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  InstallerBase__Install_25090f4(param_1,param_2,0);
                    /* try { // try from 0264c520 to 0274c617 has its CatchHandler @ 0264c520
                       catch() { ... } // from try @ 0264c520 with catch @ 0264c520
                       catch() { ... } // from try @ 0264c684 with catch @ 0264c520
                       catch() { ... } // from try @ 0264c73c with catch @ 0264c520
                       catch() { ... } // from try @ 0264c79c with catch @ 0264c520
                       catch() { ... } // from try @ 0264c7ec with catch @ 0264c520
                       catch() { ... } // from try @ 0264c810 with catch @ 0264c520 */
  Unity_Notifications_NotificationCenterArgs__get_Default_3a03d58(auStack_80,0);
  uStack_58 = *(undefined8 *)puVar1;
  uStack_60 = auStack_80[0];
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8);
  uStack_50 = *(undefined8 *)puVar2;
  thunk_FUN_021f190c(&uStack_50);
  uStack_48 = *(undefined8 *)puVar3;
  thunk_FUN_021f190c(&uStack_48);
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  Unity_Notifications_NotificationCenter__Initialize_3a040d8(&uStack_a0,0);
  return;
}

