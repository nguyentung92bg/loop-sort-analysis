/* IL2CPP: AreasMonitor$$SetupTopBottom
void AreasMonitor__SetupTopBottom (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$SetupTopBottom
   void AreasMonitor__SetupTopBottom (AreasMonitor_o* __this, const MethodInfo* method); */

void AreasMonitor__SetupTopBottom_2434624(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b7f3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c3a40);
    FUN_021f03f8(PTR_DAT_049c3a48);
    FUN_021f03f8(PTR_DAT_049c3a50);
    FUN_021f03f8(PTR_DAT_049c3a58);
    FUN_021f03f8(PTR_DAT_049c3a60);
    FUN_021f03f8(PTR_DAT_049c3a68);
    FUN_021f03f8(PTR_DAT_049b8d80);
    FUN_021f03f8(PTR_DAT_049c3a70);
    bRam0000000004f4b7f3 = 1;
  }
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0xd83b59b6,0)
  ;
  if (lVar4 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar4,&uStack_38,*(undefined8 *)PTR_DAT_049c3a60);
    *(undefined8 *)(param_1 + 0x128) = uStack_38;
    thunk_FUN_021f190c(param_1 + 0x128);
    if (*(long *)(param_1 + 0x128) != 0) {
      UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*(long *)(param_1 + 0x128),0);
      puVar3 = PTR_DAT_049c3a48;
      puVar2 = PTR_DAT_049c3a40;
      puVar1 = PTR_DAT_049b8d80;
      if (*(long *)(param_1 + 0x128) != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_3ec2e80(*(long *)(param_1 + 0x128),0,0);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                  (param_1,0x598fdb13,uVar5,0);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                  (param_1,0x43a763b,uVar5,0);
        puVar1 = PTR_DAT_049c3a50;
        if (*(long *)(param_1 + 0xd0) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0xd0) + 0xc0);
          uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3a68);
          UnityEngine_Events_UnityAction___Il2CppFullySharedGenericType____ctor_29e4370
                    (uVar5,param_1,*(undefined8 *)puVar1,0);
          puVar2 = PTR_DAT_049c3a58;
          puVar1 = PTR_DAT_049b4308;
          if (lVar4 != 0) {
            UnityEngine_Events_UnityEvent___Il2CppFullySharedGenericType___AddListener_29e5738
                      (lVar4,uVar5,*(undefined8 *)PTR_DAT_049c3a70);
            lVar4 = *(long *)(param_1 + 0xd0);
            uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
            System_Action___ctor_306b98c(uVar5,param_1,*(undefined8 *)puVar2,0);
            if (lVar4 != 0) {
              AreasScrollRect__add_DragStarted_24136b4(lVar4,uVar5,0);
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

