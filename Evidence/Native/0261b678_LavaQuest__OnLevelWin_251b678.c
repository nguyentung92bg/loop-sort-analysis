/* IL2CPP: LavaQuest$$OnLevelWin
void LavaQuest__OnLevelWin (LavaQuest_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$OnLevelWin
   void LavaQuest__OnLevelWin (LavaQuest_o* __this, LevelWinMessage_o m, const MethodInfo* method);
    */

void LavaQuest__OnLevelWin_251b678(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int aiStack_138 [3];
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int aiStack_120 [5];
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
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
  int iStack_64;
  
  if ((bRam0000000004f4be3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9540);
    FUN_021f03f8(PTR_DAT_049c8308);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c9548);
    bRam0000000004f4be3f = 1;
  }
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0261b134:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar6 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0xc,0);
  if ((uVar6 & 1) != 0) {
    if (cRam0000000004f4be72 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5310);
      cRam0000000004f4be72 = '\x01';
    }
    puVar1 = PTR_DAT_049b5310;
    lVar7 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_049c8308;
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_70 = *(undefined8 *)(lVar7 + 0x658);
    uStack_98 = *(undefined8 *)(lVar7 + 0x630);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x628);
    uStack_88 = *(undefined8 *)(lVar7 + 0x640);
    uStack_90 = *(undefined8 *)(lVar7 + 0x638);
    uStack_78 = *(undefined8 *)(lVar7 + 0x650);
    uStack_80 = *(undefined8 *)(lVar7 + 0x648);
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
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_70 = *(undefined8 *)(lVar7 + 0x658);
    uStack_98 = *(undefined8 *)(lVar7 + 0x630);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x628);
    uStack_88 = *(undefined8 *)(lVar7 + 0x640);
    uStack_90 = *(undefined8 *)(lVar7 + 0x638);
    uStack_78 = *(undefined8 *)(lVar7 + 0x650);
    uStack_80 = *(undefined8 *)(lVar7 + 0x648);
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (&uStack_a0,&iStack_108,*(undefined8 *)puVar2);
    aiStack_120[0] = iStack_108 + 1;
    iStack_10c = iStack_f4;
    LavaQuest__DecreasePlayerCount_251b138(&iStack_108,param_1,aiStack_120);
    iVar5 = iStack_108;
    iVar9 = iStack_fc;
    iVar10 = iStack_f8;
    if (9 < iStack_108) {
      iVar9 = 2;
      iVar10 = 0;
      if (iStack_104 != 0) {
        iVar10 = iStack_f4 / iStack_104;
      }
    }
    if (cRam0000000004f4be72 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5310);
      cRam0000000004f4be72 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    aiStack_138[0] = iStack_108;
    uStack_70 = *(undefined8 *)(lVar7 + 0x658);
    uStack_98 = *(undefined8 *)(lVar7 + 0x630);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x628);
    uStack_88 = *(undefined8 *)(lVar7 + 0x640);
    uStack_90 = *(undefined8 *)(lVar7 + 0x638);
    uStack_78 = *(undefined8 *)(lVar7 + 0x650);
    uStack_80 = *(undefined8 *)(lVar7 + 0x648);
    iStack_124 = iStack_f4;
    iStack_12c = iVar9;
    iStack_128 = iVar10;
    CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
              (&uStack_a0,aiStack_138,*(undefined8 *)PTR_DAT_049c9540);
    if (cRam0000000004f4be72 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5310);
      cRam0000000004f4be72 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_70 = *(undefined8 *)(lVar7 + 0x658);
    uStack_98 = *(undefined8 *)(lVar7 + 0x630);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x628);
    uStack_88 = *(undefined8 *)(lVar7 + 0x640);
    uStack_90 = *(undefined8 *)(lVar7 + 0x638);
    uStack_78 = *(undefined8 *)(lVar7 + 0x650);
    uStack_80 = *(undefined8 *)(lVar7 + 0x648);
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (&uStack_a0,&uStack_b8,*(undefined8 *)puVar2);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_148 = uStack_b0;
    uStack_150 = uStack_b8;
    uStack_140 = uStack_a8;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_d8,&uStack_150,*(undefined8 *)puVar3);
    puVar1 = PTR_DAT_049b3c20;
    lVar7 = *(long *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x8c) = CONCAT44(uStack_cc,uStack_d0);
    *(undefined8 *)(param_1 + 0x84) = uStack_d8;
    uVar8 = *(undefined8 *)puVar1;
    *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_c0,uStack_c4);
    *(ulong *)(param_1 + 0x90) = CONCAT44(uStack_c8,uStack_cc);
    iStack_108 = 0;
    iStack_104 = 0;
    iStack_64 = iVar5;
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&iStack_108,&iStack_64,uVar8);
    if (lVar7 == 0) goto LAB_0261b134;
    uStack_188 = CONCAT44(iStack_104,iStack_108);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    AnalyticsModule__LiveOpsMilestoneCompleted_2540658(lVar7,0xc,&uStack_188,0);
    if (iVar9 == 2) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0261b134;
      LiveOpsModule__Complete_2546f00(*(long *)(param_1 + 0x30),0xc,0);
    }
  }
  return;
}

