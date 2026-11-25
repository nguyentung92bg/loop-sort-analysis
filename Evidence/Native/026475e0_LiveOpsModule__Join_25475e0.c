/* IL2CPP: LiveOpsModule$$Join
void LiveOpsModule__Join (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$Join
   void LiveOpsModule__Join (LiveOpsModule_o* __this, int32_t liveOps, const MethodInfo* method); */

void LiveOpsModule__Join_25475e0(long param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02647588 with catch @ 026475e4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026474dc with catch @ 026475e8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02647500 with catch @ 026475ec
                        */
  if ((bRam0000000004f4c014 & 1) == 0) {
                    /* try { // try from 02647608 to 0274760b has its CatchHandler @ 0264763c */
                    /* try { // try from 0264760c to 0274763f has its CatchHandler @ 02647404 */
    FUN_021f03f8(PTR_DAT_049c4fd8);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* catch() { ... } // from try @ 02647608 with catch @ 0264763c */
    FUN_021f03f8(PTR_DAT_049c2f60);
                    /* try { // try from 02647640 to 02747647 has its CatchHandler @ 02647664 */
                    /* try { // try from 02647648 to 02747667 has its CatchHandler @ 02647404 */
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c014 = 1;
  }
  auVar9._8_8_ = auStack_40._8_8_;
  auVar9._0_8_ = auStack_40._0_8_;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02647640 with catch @ 02647664
                        */
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  auVar1 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), auVar1 = ZEXT816(0), auStack_40 = auVar9,
     lVar6 != 0)) {
    auStack_40._0_4_ = param_2;
    uVar7 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar6,auStack_40,*(undefined8 *)PTR_DAT_049c2f60);
    auVar3._8_8_ = auStack_40._8_8_;
    auVar3._0_8_ = auStack_40._0_8_;
    auVar2._8_8_ = auStack_50._8_8_;
    auVar2._0_8_ = auStack_50._0_8_;
    auVar1._8_8_ = auStack_50._8_8_;
    auVar1._0_8_ = auStack_50._0_8_;
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), auVar1 = auVar2, auStack_40 = auVar3,
       lVar6 != 0)) {
      lVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar6,auStack_40,*(undefined8 *)PTR_DAT_049c2c68);
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b5fc8);
      }
      auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
      auVar1._8_8_ = auStack_50._8_8_;
      auVar1._0_8_ = auStack_50._0_8_;
      if (lVar6 != 0) {
        auStack_50 = LiveOpsSheet_Row__GetJoinStartTime_25636b4(lVar6,auVar9._0_8_,auVar9._8_8_,0);
        uStack_58 = *(undefined8 *)(lVar6 + 0x60);
        uStack_60 = *(undefined8 *)(lVar6 + 0x58);
        uStack_68 = *(undefined8 *)(lVar6 + 0x50);
        uStack_70 = *(undefined8 *)(lVar6 + 0x48);
        uStack_78 = *(undefined8 *)(lVar6 + 0x40);
        uStack_80 = *(undefined8 *)(lVar6 + 0x38);
        iVar5 = *(int *)(lVar6 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_40 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar5,auStack_50,0);
        puVar4 = PTR_DAT_049b5fa0;
        CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                  (&uStack_80,auStack_40,*(undefined8 *)PTR_DAT_049b5fa0);
        uStack_78 = *(undefined8 *)(lVar6 + 0xa0);
        uStack_80 = *(undefined8 *)(lVar6 + 0x98);
        uStack_68 = *(undefined8 *)(lVar6 + 0xb0);
        uStack_70 = *(undefined8 *)(lVar6 + 0xa8);
        uStack_58 = *(undefined8 *)(lVar6 + 0xc0);
        uStack_60 = *(undefined8 *)(lVar6 + 0xb8);
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (&uStack_80,*(undefined8 *)PTR_DAT_049c4fd8);
        uStack_78 = *(undefined8 *)(lVar6 + 0x70);
        uStack_80 = *(undefined8 *)(lVar6 + 0x68);
        uStack_68 = *(undefined8 *)(lVar6 + 0x80);
        uStack_70 = *(undefined8 *)(lVar6 + 0x78);
        uStack_58 = *(undefined8 *)(lVar6 + 0x90);
        uStack_60 = *(undefined8 *)(lVar6 + 0x88);
        auStack_40 = auStack_50;
        CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                  (&uStack_80,auStack_40,*(undefined8 *)puVar4);
        uStack_b8 = *(undefined8 *)(lVar6 + 0xd0);
        uStack_c0 = *(undefined8 *)(lVar6 + 200);
        uStack_a8 = *(undefined8 *)(lVar6 + 0xe0);
        uStack_b0 = *(undefined8 *)(lVar6 + 0xd8);
        uStack_a0 = uStack_c0;
        uStack_98 = uStack_b8;
        uStack_90 = uStack_b0;
        uStack_88 = uStack_a8;
        iVar5 = CloudPrefsInt__get_Value_24e99c0(&uStack_c0,0);
        CloudPrefsInt__Set_24e9aa8(&uStack_a0,iVar5 + 1,0);
        auVar1 = auStack_50;
        if (*(long *)(param_1 + 0x10) != 0) {
          AnalyticsModule__LiveOpsEventJoined_25403e8(*(long *)(param_1 + 0x10),param_2);
          if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
            FUN_021f0574();
          }
          plVar8 = (long *)Extensions__ToClassInstance_24e79d0(param_2,0);
          if (plVar8 == (long *)0x0) {
            return;
          }
          (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          return;
        }
      }
    }
  }
  auStack_50 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

