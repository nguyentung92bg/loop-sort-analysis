/* IL2CPP: RankingMonitor$$Render
void RankingMonitor__Render (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$Render
   void RankingMonitor__Render (RankingMonitor_o* __this, const MethodInfo* method); */

void RankingMonitor__Render_245710c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_144 [100];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined4 uStack_60;
  long lStack_58;
  
  MonitorBase__Render_256c914(param_1,0);
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4b900 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4b900 = 1;
  }
  puVar4 = PTR_DAT_049b6110;
  puVar3 = PTR_DAT_049b5050;
  uStack_60 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_168 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x140) == 0) {
LAB_02557334:
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x140) + 0x18) != '\0') {
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_02557334;
      iVar1 = *(int *)(lVar7 + 0x70);
      func_0x04608620(&uStack_d0,lVar7 + 0x74,0x74);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar10 = System_DateTimeOffset__get_UtcNow_30e0d34(0);
      func_0x04608620(auStack_144,&uStack_d0,0x74);
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uVar5 = System_DateTimeOffset__Subtract_30e2d84(&uStack_160,auVar10._0_8_,auVar10._8_8_,0);
      uStack_168 = uVar5;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574(*(long *)puVar4);
      }
      uVar5 = Extensions__ToReadableString_24e7038(uVar5,2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xce1592a9,uVar5,0)
      ;
      if (*(long *)(param_1 + 0xf8) != 0) {
        if (*(long *)(param_1 + 0xa8) == 0) goto LAB_02557334;
        uVar8 = *(undefined8 *)(param_1 + 0x158);
        uVar5 = Leaderboard__get_TournamentId_251cbe4(*(long *)(param_1 + 0xa8),0);
        uVar6 = System_String__op_Inequality_2f7b800(uVar8,uVar5,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
            FUN_021f0574();
          }
          dVar9 = (double)System_TimeSpan__get_TotalSeconds_3116bf4(&uStack_168,0);
          if ((dVar9 <= 0.0) && (iVar1 == 2)) {
            lVar7 = *(long *)(param_1 + 0xf8);
            if (lVar7 == 0) goto LAB_02557334;
            auVar10 = UniTimer__Expire_3f0f24c(lVar7 + 0x10,0);
            *(undefined1 (*) [16])(lVar7 + 0x10) = auVar10;
            RankingMonitor__OnWeeklyClicked_245836c(param_1);
          }
        }
      }
    }
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

