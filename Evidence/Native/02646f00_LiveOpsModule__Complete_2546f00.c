/* IL2CPP: LiveOpsModule$$Complete
void LiveOpsModule__Complete (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$Complete
   void LiveOpsModule__Complete (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

void LiveOpsModule__Complete_2546f00(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4c018 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c018 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
    auStack_98._0_4_ = param_2;
    uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar2,auStack_98,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
      lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar2,auStack_98,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar2 != 0) {
        uStack_68 = *(undefined8 *)(lVar2 + 0x40);
        uStack_70 = *(undefined8 *)(lVar2 + 0x38);
        uStack_58 = *(undefined8 *)(lVar2 + 0x50);
        uStack_60 = *(undefined8 *)(lVar2 + 0x48);
        uStack_48 = *(undefined8 *)(lVar2 + 0x60);
        uStack_50 = *(undefined8 *)(lVar2 + 0x58);
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (&uStack_70,*(undefined8 *)PTR_DAT_049c4fd8);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        plVar4 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
        if (plVar4 != (long *)0x0) {
          lVar5 = *(long *)(param_1 + 0x10);
          (**(code **)(*plVar4 + 0x238))(auStack_98,plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (lVar5 != 0) {
            uStack_b8 = auStack_98._8_8_;
            uStack_c0 = auStack_98._0_8_;
            uStack_a8 = uStack_80;
            uStack_b0 = uStack_88;
            uStack_a0 = uStack_78;
            AnalyticsModule__LiveOpsEventCompleted_2540804(lVar5,param_2,&uStack_c0);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x90), lVar5 != 0)) {
              lVar5 = HomeLiveOpsSheet__FindSlot_2560f84(lVar5,param_2,0);
              if (lVar5 != 0) {
                HomeLiveOpsSheet_Slot__MoveToNext_2561620(lVar5,0);
              }
              if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                FUN_021f0574();
              }
              auStack_40 = TimeProvider__get_UtcNow_24f95ec(0);
              uVar3 = LiveOpsSheet_Row__get_HasPostCompletionCooldown_256312c(lVar2,0);
              if ((uVar3 & 1) != 0) {
                uStack_48 = *(undefined8 *)(lVar2 + 0xc0);
                uStack_50 = *(undefined8 *)(lVar2 + 0xb8);
                uStack_58 = *(undefined8 *)(lVar2 + 0xb0);
                uStack_60 = *(undefined8 *)(lVar2 + 0xa8);
                uStack_68 = *(undefined8 *)(lVar2 + 0xa0);
                uStack_70 = *(undefined8 *)(lVar2 + 0x98);
                iVar1 = *(int *)(lVar2 + 0x1c);
                if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                auStack_98 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar1,auStack_40,0);
                CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                          (&uStack_70,auStack_98,*(undefined8 *)PTR_DAT_049b5fa0);
              }
              (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
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

