/* IL2CPP: LavaQuest$$OnLevelLose
void LavaQuest__OnLevelLose (LavaQuest_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$OnLevelLose
   void LavaQuest__OnLevelLose (LavaQuest_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void LavaQuest__OnLevelLose_251b67c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int aiStack_120 [3];
  undefined4 uStack_114;
  int aiStack_108 [3];
  undefined4 uStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
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
  
  if ((bRam0000000004f4be40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9540);
    FUN_021f03f8(PTR_DAT_049c8308);
    FUN_021f03f8(PTR_DAT_049c9548);
    bRam0000000004f4be40 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar5 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0xc,0);
    if ((uVar5 & 1) != 0) {
      if (cRam0000000004f4be72 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5310);
        cRam0000000004f4be72 = '\x01';
      }
      puVar1 = PTR_DAT_049b5310;
      lVar6 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_049c8308;
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_70 = *(undefined8 *)(lVar6 + 0x658);
      uStack_98 = *(undefined8 *)(lVar6 + 0x630);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x628);
      uStack_88 = *(undefined8 *)(lVar6 + 0x640);
      uStack_90 = *(undefined8 *)(lVar6 + 0x638);
      uStack_78 = *(undefined8 *)(lVar6 + 0x650);
      uStack_80 = *(undefined8 *)(lVar6 + 0x648);
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (&uStack_a0,&uStack_b8,*(undefined8 *)PTR_DAT_049c8308);
      puVar3 = PTR_DAT_049c9548;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      uStack_c4 = 0;
      uStack_e8 = uStack_b0;
      uStack_f0 = uStack_b8;
      uStack_e0 = uStack_a8;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_d8,&uStack_f0,*(undefined8 *)PTR_DAT_049c9548);
      cVar4 = cRam0000000004f4be72;
      *(ulong *)(param_1 + 0x70) = CONCAT44(uStack_cc,uStack_d0);
      *(undefined8 *)(param_1 + 0x68) = uStack_d8;
      *(ulong *)(param_1 + 0x7c) = CONCAT44(uStack_c0,uStack_c4);
      *(ulong *)(param_1 + 0x74) = CONCAT44(uStack_c8,uStack_cc);
      if (cVar4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5310);
        cRam0000000004f4be72 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_70 = *(undefined8 *)(lVar6 + 0x658);
      uStack_98 = *(undefined8 *)(lVar6 + 0x630);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x628);
      uStack_88 = *(undefined8 *)(lVar6 + 0x640);
      uStack_90 = *(undefined8 *)(lVar6 + 0x638);
      uStack_78 = *(undefined8 *)(lVar6 + 0x650);
      uStack_80 = *(undefined8 *)(lVar6 + 0x648);
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (&uStack_a0,&iStack_158,*(undefined8 *)puVar2);
      uStack_fc = 3;
      aiStack_108[0] = iStack_158 + 1;
      LavaQuest__DecreasePlayerCount_251b138(&iStack_158,param_1,aiStack_108);
      if (cRam0000000004f4be72 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5310);
        cRam0000000004f4be72 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      aiStack_120[0] = iStack_158;
      uStack_70 = *(undefined8 *)(lVar6 + 0x658);
      uStack_98 = *(undefined8 *)(lVar6 + 0x630);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x628);
      uStack_88 = *(undefined8 *)(lVar6 + 0x640);
      uStack_90 = *(undefined8 *)(lVar6 + 0x638);
      uStack_78 = *(undefined8 *)(lVar6 + 0x650);
      uStack_80 = *(undefined8 *)(lVar6 + 0x648);
      uStack_114 = uStack_14c;
      CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                (&uStack_a0,aiStack_120,*(undefined8 *)PTR_DAT_049c9540);
      if (cRam0000000004f4be72 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5310);
        cRam0000000004f4be72 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      uStack_70 = *(undefined8 *)(lVar6 + 0x658);
      uStack_98 = *(undefined8 *)(lVar6 + 0x630);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x628);
      uStack_88 = *(undefined8 *)(lVar6 + 0x640);
      uStack_90 = *(undefined8 *)(lVar6 + 0x638);
      uStack_78 = *(undefined8 *)(lVar6 + 0x650);
      uStack_80 = *(undefined8 *)(lVar6 + 0x648);
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (&uStack_a0,&uStack_138,*(undefined8 *)puVar2);
      iStack_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_168 = uStack_130;
      uStack_170 = uStack_138;
      uStack_160 = uStack_128;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&iStack_158,&uStack_170,*(undefined8 *)puVar3);
      *(ulong *)(param_1 + 0x8c) = CONCAT44(uStack_14c,uStack_150);
      *(ulong *)(param_1 + 0x84) = CONCAT44(uStack_154,iStack_158);
      *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_140,uStack_144);
      *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_148,uStack_14c);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0261b50c;
      LiveOpsModule__Complete_2546f00(*(long *)(param_1 + 0x30),0xc,0);
    }
    return;
  }
LAB_0261b50c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

