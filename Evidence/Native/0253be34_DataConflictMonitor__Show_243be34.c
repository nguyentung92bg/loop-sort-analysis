/* IL2CPP: DataConflictMonitor$$Show
void DataConflictMonitor__Show (DataConflictMonitor_o* __this, CloudSaveConflict_o* conflict, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DataConflictMonitor$$Show
   void DataConflictMonitor__Show (DataConflictMonitor_o* __this, CloudSaveConflict_o* conflict,
   const MethodInfo* method); */

void DataConflictMonitor__Show_243be34(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4b822 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c3d80);
    FUN_021f03f8(PTR_DAT_049c3d88);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b822 = 1;
  }
  *(long *)(param_1 + 0xa0) = param_2;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_70._8_8_ = 0;
  auStack_70._0_8_ = 0;
  thunk_FUN_021f190c((long *)(param_1 + 0xa0),param_2);
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Activate_object__268887c(*(long *)(param_1 + 0x30),0,*(undefined8 *)PTR_DAT_049c3d80);
    lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (param_1,0x8ac5d2c5,0);
    if (lVar4 != 0) {
      StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar4,0);
      uStack_80 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar4,0);
      uStack_60 = 0;
      uStack_78 = 0;
      auStack_70._8_8_ = 0;
      auStack_70._0_8_ = 0;
      thunk_FUN_021f190c(&uStack_80,uStack_80);
      puVar3 = PTR_DAT_049c3d90;
      puVar1 = PTR_DAT_049b5310;
      if (param_2 != 0) {
        uStack_78 = *(undefined8 *)(param_2 + 0x18);
        thunk_FUN_021f190c((ulong)&uStack_80 | 8);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_021f0574();
          lVar5 = *(long *)puVar1;
        }
        puVar2 = PTR_DAT_049c3d88;
        puVar1 = PTR_DAT_049b5050;
        lVar5 = *(long *)(lVar5 + 0xb8);
        uStack_98 = *(undefined8 *)(lVar5 + 0x7d8);
        uStack_a0 = *(undefined8 *)(lVar5 + 2000);
        uStack_88 = *(undefined8 *)(lVar5 + 0x7e8);
        uStack_90 = *(undefined8 *)(lVar5 + 0x7e0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uStack_b8 = uStack_98;
        uStack_c0 = uStack_a0;
        uStack_a8 = uStack_88;
        uStack_b0 = uStack_90;
        PlayerPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2911918
                  (&uStack_c0,&uStack_50,*(undefined8 *)puVar2);
        auStack_70._8_8_ = uStack_48;
        auStack_70._0_8_ = uStack_50;
        uStack_60 = _UNK_013a8188;
        uStack_d0 = _UNK_013a8188;
        uStack_e8 = uStack_78;
        uStack_f0 = uStack_80;
        uStack_d8 = uStack_48;
        uStack_e0 = uStack_50;
        DataConflictMonitor__CreateSaveElement_243c078(param_1,&uStack_f0);
        uStack_80 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar4,0);
        uStack_60 = 0;
        uStack_78 = 0;
        auStack_70._8_8_ = 0;
        auStack_70._0_8_ = 0;
        thunk_FUN_021f190c(&uStack_80,uStack_80);
        uStack_78 = *(undefined8 *)(param_2 + 0x20);
        thunk_FUN_021f190c((ulong)&uStack_80 | 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_110 = System_DateTimeOffset__ToLocalTime_30e3088(param_2 + 0x28,0);
        uStack_60 = _UNK_013a85c8;
        uStack_118 = uStack_78;
        uStack_120 = uStack_80;
        uStack_100 = _UNK_013a85c8;
        auStack_70 = auStack_110;
        DataConflictMonitor__CreateSaveElement_243c078(param_1,&uStack_120);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

