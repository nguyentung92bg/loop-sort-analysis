/* IL2CPP: StreakTournament$$UpdateTimeProgression
void StreakTournament__UpdateTimeProgression (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$UpdateTimeProgression
   void StreakTournament__UpdateTimeProgression (StreakTournament_o* __this, const MethodInfo*
   method); */

void StreakTournament__UpdateTimeProgression_2525654(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_1f0 [92];
  int iStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4be9d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
    FUN_021f03f8(PTR_DAT_049c99a0);
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049c99a8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4be9d = 1;
  }
  uStack_118 = 0;
  auStack_160._0_8_ = 0;
  auStack_160._8_8_ = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  auVar4 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x88), auVar4 = ZEXT816(0), lVar6 != 0)) {
    uStack_110 = 0x16;
    lVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar6,&uStack_110,*(undefined8 *)PTR_DAT_049c2c68);
    puVar5 = PTR_DAT_049b5f98;
    auVar4._8_8_ = auStack_160._8_8_;
    auVar4._0_8_ = auStack_160._0_8_;
    if (lVar6 != 0) {
      uStack_148 = *(undefined8 *)(lVar6 + 0x70);
      uStack_150 = *(undefined8 *)(lVar6 + 0x68);
      uStack_138 = *(undefined8 *)(lVar6 + 0x80);
      uStack_140 = *(undefined8 *)(lVar6 + 0x78);
      uStack_128 = *(undefined8 *)(lVar6 + 0x90);
      uStack_130 = *(undefined8 *)(lVar6 + 0x88);
      uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                        (&uStack_150,*(undefined8 *)PTR_DAT_049b5f98);
      auVar4._8_8_ = auStack_160._8_8_;
      auVar4._0_8_ = auStack_160._0_8_;
      if ((uVar7 & 1) != 0) {
        uStack_148 = *(undefined8 *)(lVar6 + 0x40);
        uStack_150 = *(undefined8 *)(lVar6 + 0x38);
        uStack_138 = *(undefined8 *)(lVar6 + 0x50);
        uStack_140 = *(undefined8 *)(lVar6 + 0x48);
        uStack_128 = *(undefined8 *)(lVar6 + 0x60);
        uStack_130 = *(undefined8 *)(lVar6 + 0x58);
        uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                          (&uStack_150,*(undefined8 *)puVar5);
        auVar4._8_8_ = auStack_160._8_8_;
        auVar4._0_8_ = auStack_160._0_8_;
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auStack_160 = TimeProvider__get_UtcNow_24f95ec(0);
          uStack_188 = *(undefined8 *)(lVar6 + 0x70);
          uStack_190 = *(undefined8 *)(lVar6 + 0x68);
          uStack_178 = *(undefined8 *)(lVar6 + 0x80);
          uStack_180 = *(undefined8 *)(lVar6 + 0x78);
          uStack_168 = *(undefined8 *)(lVar6 + 0x90);
          uStack_170 = *(undefined8 *)(lVar6 + 0x88);
          CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                    (&uStack_190,&uStack_110,*(undefined8 *)PTR_DAT_049c5888);
          uVar3 = CONCAT44(uStack_10c,uStack_110);
          if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uStack_118 = System_DateTimeOffset__Subtract_30e2d84(auStack_160,uVar3,uStack_108,0);
          if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
            FUN_021f0574(*(long *)PTR_DAT_049b6128);
          }
          dVar9 = (double)System_TimeSpan__get_TotalMinutes_3116bdc(&uStack_118,0);
          fVar10 = (float)dVar9;
          if ((float)*(int *)(lVar6 + 0x18) <= (float)dVar9) {
            fVar10 = (float)*(int *)(lVar6 + 0x18);
          }
          auVar4 = auStack_160;
          if ((*(long *)(param_1 + 0x38) == 0) ||
             (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar6 == 0)) goto LAB_02625988;
          fVar8 = (float)ConstantSheetBase_object___GetFloat_281c0c4
                                   (lVar6,0x1c,*(undefined8 *)PTR_DAT_049c99a8);
          iVar1 = -0x80000000;
          if (fVar10 / fVar8 != INFINITY) {
            iVar1 = (int)(fVar10 / fVar8);
          }
          StreakTournament__get_Save_2524120(&uStack_110);
          auVar4 = auStack_160;
          if (0 < iVar1 - iStack_b4) {
            do {
              StreakTournament__ApplyProgression_2526e0c(param_1);
              puVar5 = PTR_DAT_049b5310;
              iStack_b4 = iStack_b4 + 1;
            } while (iVar1 != iStack_b4);
            lVar6 = *(long *)PTR_DAT_049b5310;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_021f0574();
              lVar6 = *(long *)puVar5;
            }
            CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                      (*(long *)(lVar6 + 0xb8) + 0x6d0,&uStack_110,*(undefined8 *)PTR_DAT_049c8348);
            func_0x04608620(&uStack_b0,&uStack_110,0x5c);
            func_0x04608620(auStack_1f0,&uStack_b0,0x5c);
            iStack_194 = iVar1;
            CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                      (*(long *)(*(long *)puVar5 + 0xb8) + 0x6d0,auStack_1f0,
                       *(undefined8 *)PTR_DAT_049c99a0);
            auVar4 = auStack_160;
          }
        }
      }
      if (*(long *)(lVar2 + 0x28) == lStack_48) {
        return;
      }
      goto LAB_0262599c;
    }
  }
LAB_02625988:
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    auStack_160 = auVar4;
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0262599c:
  auStack_160 = auVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

