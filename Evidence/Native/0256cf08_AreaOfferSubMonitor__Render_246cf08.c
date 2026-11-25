/* IL2CPP: AreaOfferSubMonitor$$Render
void AreaOfferSubMonitor__Render (AreaOfferSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$Render
   void AreaOfferSubMonitor__Render (AreaOfferSubMonitor_o* __this, const MethodInfo* method); */

void AreaOfferSubMonitor__Render_246cf08(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b985 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b985 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  SubMonitorBase__Render_248253c(param_1,0);
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x88), lVar1 != 0)) {
    uStack_30 = *(undefined4 *)(param_1 + 0x40);
    uVar2 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar1,&uStack_30,*(undefined8 *)PTR_DAT_049c2f60);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = StatefulUISupport_Scripts_Components_StatefulView__HasText_335196c
                          (param_1,0xce1592a9,0), (uVar2 & 1) == 0)) {
      return;
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x88), lVar1 != 0)) {
      uStack_30 = *(undefined4 *)(param_1 + 0x40);
      lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar1,&uStack_30,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar1 != 0) {
        uStack_58 = *(undefined8 *)(lVar1 + 0x40);
        uStack_60 = *(undefined8 *)(lVar1 + 0x38);
        uStack_48 = *(undefined8 *)(lVar1 + 0x50);
        uStack_50 = *(undefined8 *)(lVar1 + 0x48);
        uStack_38 = *(undefined8 *)(lVar1 + 0x60);
        uStack_40 = *(undefined8 *)(lVar1 + 0x58);
        uVar2 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                          (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
        if ((uVar2 & 1) == 0) {
          return;
        }
        uStack_58 = *(undefined8 *)(lVar1 + 0x40);
        uStack_60 = *(undefined8 *)(lVar1 + 0x38);
        uStack_48 = *(undefined8 *)(lVar1 + 0x50);
        uStack_50 = *(undefined8 *)(lVar1 + 0x48);
        uStack_38 = *(undefined8 *)(lVar1 + 0x60);
        uStack_40 = *(undefined8 *)(lVar1 + 0x58);
        CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                  (&uStack_60,&uStack_30,*(undefined8 *)PTR_DAT_049b5fa8);
        uStack_70 = CONCAT44(uStack_2c,uStack_30);
        uStack_68 = uStack_28;
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar4 = TimeProvider__get_UtcNow_24f95ec(0);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = System_DateTimeOffset__Subtract_30e2d84(&uStack_70,auVar4._0_8_,auVar4._8_8_,0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b6110);
        }
        uVar3 = Extensions__ToReadableString_24e7038(uVar3,2,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                  (param_1,0xce1592a9,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

