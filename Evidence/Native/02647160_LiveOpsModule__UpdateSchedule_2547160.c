/* IL2CPP: LiveOpsModule$$UpdateSchedule
void LiveOpsModule__UpdateSchedule (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$UpdateSchedule
   void LiveOpsModule__UpdateSchedule (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo*
   method); */

void LiveOpsModule__UpdateSchedule_2547160(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4c01b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c01b = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
    auStack_40._0_4_ = param_2;
    uVar3 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar2,auStack_40,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar2 != 0)) {
      lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar2,auStack_40,*(undefined8 *)PTR_DAT_049c2c68);
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5fc8);
      }
      auVar6 = TimeProvider__get_UtcNow_24f95ec(0);
      uVar5 = auVar6._8_8_;
      uVar4 = auVar6._0_8_;
      if (lVar2 != 0) {
        auStack_50 = LiveOpsSheet_Row__GetJoinStartTime_25636b4(lVar2,uVar4,uVar5,0);
        iVar1 = *(int *)(lVar2 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar6 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar1,auStack_50,0);
        uVar3 = System_DateTimeOffset__op_GreaterThan_30e48c8
                          (auVar6._0_8_,auVar6._8_8_,uVar4,uVar5,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        auStack_40 = LiveOpsSheet_Row__GetNextJoinStartTime_2563b6c(lVar2,uVar4,uVar5,0);
        uStack_78 = *(undefined8 *)(lVar2 + 0xa0);
        uStack_80 = *(undefined8 *)(lVar2 + 0x98);
        uStack_68 = *(undefined8 *)(lVar2 + 0xb0);
        uStack_70 = *(undefined8 *)(lVar2 + 0xa8);
        uStack_58 = *(undefined8 *)(lVar2 + 0xc0);
        uStack_60 = *(undefined8 *)(lVar2 + 0xb8);
        CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                  (&uStack_80,auStack_40,*(undefined8 *)PTR_DAT_049b5fa0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

