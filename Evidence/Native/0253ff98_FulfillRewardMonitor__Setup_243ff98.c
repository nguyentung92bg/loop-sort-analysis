/* IL2CPP: FulfillRewardMonitor$$Setup
void FulfillRewardMonitor__Setup (FulfillRewardMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$Setup
   void FulfillRewardMonitor__Setup (FulfillRewardMonitor_o* __this, const MethodInfo* method); */

void FulfillRewardMonitor__Setup_243ff98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2d48;
  if ((bRam0000000004f4b840 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4028);
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049c4030);
    FUN_021f03f8(PTR_DAT_049c3a60);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b840 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (param_1,&uStack_28,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xd0) = uStack_28;
  thunk_FUN_021f190c();
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x13d626de,0)
  ;
  puVar3 = PTR_DAT_049c4030;
  puVar2 = PTR_DAT_049c4028;
  puVar1 = PTR_DAT_049b8d80;
  if (lVar4 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar4,&uStack_28,*(undefined8 *)PTR_DAT_049c3a60);
    *(undefined8 *)(param_1 + 0xd8) = uStack_28;
    thunk_FUN_021f190c();
    UnityEngine_Component__GetComponentInChildren___Il2CppFullySharedGenericType__25c1e0c
              (param_1,1,&uStack_28,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0xe0) = uStack_28;
    thunk_FUN_021f190c();
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
              (param_1,0x39cfe44a,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

