/* IL2CPP: LavaQuest.<ApplyHomeAction>d__30$$MoveNext
void LavaQuest__ApplyHomeAction_d__30__MoveNext (LavaQuest__ApplyHomeAction_d__30_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest.<ApplyHomeAction>d__30$$MoveNext
   void LavaQuest__ApplyHomeAction_d__30__MoveNext (LavaQuest__ApplyHomeAction_d__30_o __this, const
   MethodInfo* method); */

void LavaQuest__ApplyHomeAction_d__30__MoveNext_251bfcc(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f4be4a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9588);
    FUN_021f03f8(PTR_DAT_049c9590);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c9598);
    FUN_021f03f8(PTR_DAT_049c95a0);
    FUN_021f03f8(PTR_DAT_049c95a8);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4be4a = 1;
  }
  puVar1 = PTR_DAT_049c95a0;
  lVar11 = *(long *)(param_1 + 6);
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_a8 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x16);
    lStack_50 = *(long *)(param_1 + 0x14);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0261c0f0:
    FUN_0235b3fc(&lStack_50,&lStack_d0,*(undefined8 *)PTR_DAT_049c4698);
    if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lStack_d0,&lStack_d0,*(undefined8 *)PTR_DAT_049c9598);
    if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_118 = *(undefined8 *)(param_1 + 10);
    uStack_120 = *(undefined8 *)(param_1 + 8);
    uStack_110 = *(undefined8 *)(param_1 + 0xc);
    uStack_138 = *(undefined8 *)(param_1 + 0x10);
    uStack_140 = *(undefined8 *)(param_1 + 0xe);
    uStack_130 = *(undefined8 *)(param_1 + 0x12);
    auStack_90 = LavaQuestSubMonitor__ShowProgress_247a8f0(lStack_d0,&uStack_120,&uStack_140,0);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b5138);
    }
    auStack_a0 = Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow_37ccd58(auStack_90,0);
    FUN_0235b0c0(auStack_a0,&lStack_d0,*(undefined8 *)PTR_DAT_049c4778);
    lVar12 = *(long *)PTR_DAT_049c4770;
    uStack_78 = uStack_c8;
    lStack_80 = lStack_d0;
    lVar4 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&lStack_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
    lVar4 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x1c) = uStack_78;
      *(long *)(param_1 + 0x1a) = lStack_80;
      thunk_FUN_021f190c(param_1 + 0x1a,0);
      FUN_0235c25c(param_1 + 2,&lStack_80,param_1,*(undefined8 *)PTR_DAT_049c9588);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_049c95a0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      pcVar5 = (char *)thunk_FUN_0224e54c(lVar11 + 0x68,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
      if (*pcVar5 == '\0') goto LAB_0261c424;
      lVar4 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      pcVar5 = (char *)thunk_FUN_0224e54c(lVar11 + 0x84,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
      puVar1 = PTR_DAT_049c95a8;
      if (*pcVar5 == '\0') goto LAB_0261c424;
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (lVar11 + 0x68,&lStack_f0,*(undefined8 *)PTR_DAT_049c95a8);
      uVar7 = *(undefined8 *)puVar1;
      uStack_c8 = uStack_e8;
      lStack_d0 = lStack_f0;
      uStack_c0 = uStack_e0;
      *(undefined8 *)(param_1 + 10) = uStack_e8;
      *(long *)(param_1 + 8) = lStack_f0;
      *(undefined8 *)(param_1 + 0xc) = uStack_e0;
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (lVar11 + 0x84,&lStack_108,uVar7);
      *(undefined8 *)(param_1 + 0x10) = uStack_100;
      *(long *)(param_1 + 0xe) = lStack_108;
      *(undefined8 *)(param_1 + 0x12) = uStack_f8;
      uStack_e8 = uStack_100;
      lStack_f0 = lStack_108;
      uStack_e0 = uStack_f8;
      *(undefined8 *)(lVar11 + 0x70) = 0;
      *(undefined8 *)(lVar11 + 0x68) = 0;
      *(undefined8 *)(lVar11 + 0x80) = 0;
      *(undefined8 *)(lVar11 + 0x78) = 0;
      *(undefined8 *)(lVar11 + 0x90) = 0;
      *(undefined8 *)(lVar11 + 0x88) = 0;
      *(undefined8 *)(lVar11 + 0x98) = 0;
      if (*(long *)(lVar11 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LiveOpsModule__Show_253e230(&lStack_108,*(long *)(lVar11 + 0x30),0xc,1,0);
      uStack_68 = uStack_100;
      lStack_70 = lStack_108;
      uStack_60 = uStack_f8;
      FUN_0235b0c0(&lStack_70,&lStack_108,*(undefined8 *)PTR_DAT_049c46b0);
      lVar12 = *(long *)PTR_DAT_049c46a0;
      uStack_48 = uStack_100;
      lStack_50 = lStack_108;
      uStack_40 = uStack_f8;
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar7 = thunk_FUN_0224e54c(&lStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
      lVar4 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x16) = uStack_48;
        *(long *)(param_1 + 0x14) = lStack_50;
        *(undefined8 *)(param_1 + 0x18) = uStack_40;
        thunk_FUN_021f190c(param_1 + 0x14,0);
        FUN_0235c25c(param_1 + 2,&lStack_50,param_1,*(undefined8 *)PTR_DAT_049c9590);
        return;
      }
      goto LAB_0261c0f0;
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    lStack_80 = *(long *)(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
    auStack_a0 = ZEXT816(0);
    auStack_90 = ZEXT816(0);
  }
  FUN_0235b3fc(&lStack_80,&lStack_d0,*(undefined8 *)PTR_DAT_049c4768);
  if (param_1[0x11] == 2) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_158 = *(undefined8 *)(param_1 + 0x10);
    uStack_160 = *(undefined8 *)(param_1 + 0xe);
    uStack_150 = *(undefined8 *)(param_1 + 0x12);
    LavaQuest__HandlePrizeClaim_251b510(lVar11,&uStack_160);
  }
LAB_0261c424:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0261c4ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_0261c4ac:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

