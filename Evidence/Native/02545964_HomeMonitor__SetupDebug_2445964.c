/* IL2CPP: HomeMonitor$$SetupDebug
void HomeMonitor__SetupDebug (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$SetupDebug
   void HomeMonitor__SetupDebug (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__SetupDebug_2445964(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_48;
  
  puVar2 = PTR_DAT_049c42d8;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b87a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c42e0);
    FUN_021f03f8(PTR_DAT_049c42d8);
    FUN_021f03f8(PTR_DAT_049c42e8);
    FUN_021f03f8(PTR_DAT_049c42f0);
    FUN_021f03f8(PTR_DAT_049c42f8);
    FUN_021f03f8(PTR_DAT_049c4300);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b87a = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x34994e0d,uVar5,0);
  uVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x34994e0d,0);
  lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                    (uVar5,0xf557c2ad,0);
  puVar3 = PTR_DAT_049c42e8;
  puVar2 = PTR_DAT_049c42e0;
  puVar1 = PTR_DAT_049b4308;
  if (lVar6 != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar6,&lStack_48,*(undefined8 *)PTR_DAT_049c42e0);
    lVar6 = lStack_48;
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
    System_Action___ctor_306b98c(uVar7,param_1,*(undefined8 *)puVar3,0);
    puVar4 = PTR_DAT_049c42f0;
    if (lVar6 != 0) {
      PointerHoldElement__AddStartListener_241d320(lVar6,uVar7,0);
      uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      System_Action___ctor_306b98c(uVar7,param_1,*(undefined8 *)puVar4,0);
      PointerHoldElement__AddUpdateListener_241d3b0(lVar6,uVar7,0);
      lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                        (uVar5,0xa79714e3,0);
      if (lVar6 != 0) {
        UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                  (lVar6,&lStack_48,*(undefined8 *)puVar2);
        lVar6 = lStack_48;
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        System_Action___ctor_306b98c(uVar7,param_1,*(undefined8 *)puVar3,0);
        puVar4 = PTR_DAT_049c42f8;
        if (lVar6 != 0) {
          PointerHoldElement__AddStartListener_241d320(lVar6,uVar7,0);
          uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
          System_Action___ctor_306b98c(uVar7,param_1,*(undefined8 *)puVar4,0);
          PointerHoldElement__AddUpdateListener_241d3b0(lVar6,uVar7,0);
          lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                            (uVar5,0x9061cb2b,0);
          if (lVar6 != 0) {
            UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
                      (lVar6,&lStack_48,*(undefined8 *)puVar2);
            uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
            System_Action___ctor_306b98c(uVar5,param_1,*(undefined8 *)puVar3,0);
            puVar2 = PTR_DAT_049c4300;
            if (lStack_48 != 0) {
              PointerHoldElement__AddStartListener_241d320(lStack_48,uVar5,0);
              uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
              System_Action___ctor_306b98c(uVar5,param_1,*(undefined8 *)puVar2,0);
              PointerHoldElement__AddUpdateListener_241d3b0(lStack_48,uVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

