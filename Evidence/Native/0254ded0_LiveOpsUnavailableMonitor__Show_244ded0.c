/* IL2CPP: LiveOpsUnavailableMonitor$$Show
void LiveOpsUnavailableMonitor__Show (LiveOpsUnavailableMonitor_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsUnavailableMonitor$$Show
   void LiveOpsUnavailableMonitor__Show (LiveOpsUnavailableMonitor_o* __this, int32_t liveOps, const
   MethodInfo* method); */

void LiveOpsUnavailableMonitor__Show_244ded0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4b8b3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c46d0);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049be810);
    bRam0000000004f4b8b3 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x88), lVar2 != 0)) {
    uStack_c0 = param_2;
    uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar2,&uStack_c0,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Extensions__ToLocalizedName_24e8184(param_2,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x91273900,uVar4,0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar2 = *(long *)(param_1 + 0x98);
      uVar5 = SkinModule__get_Active_253a090(*(long *)(param_1 + 0xa8),0);
      if (lVar2 != 0) {
        LiveOpsData__GetData_256ff6c(&uStack_c0,lVar2,param_2,uVar5,0);
        StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                  (param_1,0x1a9a2c8b,uStack_a0,0);
        if (((*(long *)(param_1 + 0xa0) != 0) &&
            (lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x88), lVar2 != 0)) &&
           (uStack_c0 = param_2,
           lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                             (lVar2,&uStack_c0,*(undefined8 *)PTR_DAT_049c2c68), lVar2 != 0)) {
          uStack_58 = *(undefined8 *)(lVar2 + 0xa0);
          uStack_60 = *(undefined8 *)(lVar2 + 0x98);
          uStack_48 = *(undefined8 *)(lVar2 + 0xb0);
          uStack_50 = *(undefined8 *)(lVar2 + 0xa8);
          uStack_38 = *(undefined8 *)(lVar2 + 0xc0);
          uStack_40 = *(undefined8 *)(lVar2 + 0xb8);
          uVar3 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                            (&uStack_60,*(undefined8 *)PTR_DAT_049b5f98);
          if ((uVar3 & 1) == 0) {
            if (((*(long *)(param_1 + 0xa0) == 0) ||
                (lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x90), lVar2 == 0)) ||
               (lVar2 = HomeLiveOpsSheet__FindSlot_2560f84(lVar2,param_2,0), lVar2 == 0))
            goto LAB_0254e1d8;
            uVar1 = *(undefined4 *)(lVar2 + 0x18);
            uVar6 = Phrase__get_LiveOpsUnavailableLevel_252ed2c(0);
            uStack_c0 = uVar1;
            uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_c0);
          }
          else {
            uStack_58 = *(undefined8 *)(lVar2 + 0xa0);
            uStack_60 = *(undefined8 *)(lVar2 + 0x98);
            uStack_48 = *(undefined8 *)(lVar2 + 0xb0);
            uStack_50 = *(undefined8 *)(lVar2 + 0xa8);
            uStack_38 = *(undefined8 *)(lVar2 + 0xc0);
            uStack_40 = *(undefined8 *)(lVar2 + 0xb8);
            CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                      (&uStack_60,&uStack_c0,*(undefined8 *)PTR_DAT_049b5fa8);
            uStack_70 = CONCAT44(uStack_bc,uStack_c0);
            uStack_68 = uStack_b8;
            if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar5 = Localization__get_Culture_252dc80(0);
            if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b5050);
            }
            uVar5 = System_DateTimeOffset__ToString_30e3768
                              (&uStack_70,*(undefined8 *)PTR_DAT_049be810,uVar5,0);
            uVar6 = Phrase__get_LiveOpsUnavailableDate_252eda8(0);
          }
          uVar4 = System_String__Format_2f7dfac(uVar6,uVar4,uVar5,0);
          StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc
                    (param_1,0x993134c1,uVar4,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            Monitors__Additive_object__26888e8
                      (*(long *)(param_1 + 0x30),0,1,*(undefined8 *)PTR_DAT_049c46d0);
            return;
          }
        }
      }
    }
  }
LAB_0254e1d8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

