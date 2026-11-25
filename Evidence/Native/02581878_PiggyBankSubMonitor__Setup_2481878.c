/* IL2CPP: PiggyBankSubMonitor$$Setup
void PiggyBankSubMonitor__Setup (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBankSubMonitor$$Setup
   void PiggyBankSubMonitor__Setup (PiggyBankSubMonitor_o* __this, const MethodInfo* method); */

void PiggyBankSubMonitor__Setup_2481878(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_049c5a80;
  puVar3 = PTR_DAT_049c5a78;
  puVar2 = PTR_DAT_049c2f50;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4ba06 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f50);
    FUN_021f03f8(PTR_DAT_049c2ee0);
    FUN_021f03f8(PTR_DAT_049c5a78);
    FUN_021f03f8(PTR_DAT_049c5a80);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c5a88);
    bRam0000000004f4ba06 = 1;
  }
  SubMonitorBase__Setup_2481334(param_1);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x46a57cf7,uVar5,0);
  lVar6 = *(long *)(param_1 + 0x50);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  if (lVar6 != 0) {
    PurchasingModule__AddPurchaseListener_254a360(lVar6,*(undefined8 *)PTR_DAT_049c5a88,uVar5,0);
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (param_1,0x93f54842,0);
    if (lVar6 != 0) {
      UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                (lVar6,&uStack_38,*(undefined8 *)PTR_DAT_049c2ee0);
      *(undefined8 *)(param_1 + 0x80) = uStack_38;
      thunk_FUN_021f190c();
      PiggyBankSubMonitor__UpdatePrice_24819e8(param_1);
      PiggyBankSubMonitor__UpdateView_2481aac(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

