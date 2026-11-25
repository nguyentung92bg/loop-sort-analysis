/* IL2CPP: NakamaLeaderboardProvider.<Submit>d__0$$MoveNext
void NakamaLeaderboardProvider__Submit_d__0__MoveNext (NakamaLeaderboardProvider__Submit_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider.<Submit>d__0$$MoveNext
   void NakamaLeaderboardProvider__Submit_d__0__MoveNext (NakamaLeaderboardProvider__Submit_d__0_o
   __this, const MethodInfo* method); */

void NakamaLeaderboardProvider__Submit_d__0__MoveNext_224c834(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000004f49b70 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5b88);
    FUN_021f03f8(PTR_DAT_049b5b90);
    FUN_021f03f8(PTR_DAT_049b5b20);
    FUN_021f03f8(PTR_DAT_049b5b98);
    FUN_021f03f8(PTR_DAT_049b5ba0);
    FUN_021f03f8(PTR_DAT_049b5ba8);
    bRam0000000004f49b70 = 1;
  }
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*param_1 == 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0x1c);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_0234c9a0:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_90,&lStack_38,*(undefined8 *)PTR_DAT_049b5b98);
    if (lStack_38 != 0) {
      uStack_c8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_d0 = *(undefined8 *)(lStack_38 + 0x10);
      thunk_FUN_021f190c(&uStack_d0);
      uStack_b8 = *(undefined8 *)(lStack_38 + 0x20);
      uStack_58 = uStack_a8;
      uStack_60 = uStack_b0;
      uStack_48 = uStack_98;
      uStack_50 = uStack_a0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_70 = uStack_c0;
      uStack_68 = uStack_b8;
      goto LAB_0234ca04;
    }
  }
  else {
    uVar5 = NakamaServices__TryGetLeaderboard_224bf24(&plStack_88);
    plVar4 = plStack_88;
    if ((uVar5 & 1) != 0) {
      if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *plStack_88;
      uVar1 = *(undefined8 *)(param_1 + 0x16);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar9 = *(undefined8 *)(param_1 + 0x1a);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b5b20) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_0234c958;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plStack_88,*(long *)PTR_DAT_049b5b20,6);
LAB_0234c958:
      lVar7 = (*(code *)*puVar6)(plVar4,uVar1,uVar2,uVar9,puVar6[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_90 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                            (lVar7,*(undefined8 *)PTR_DAT_049b5ba8);
      uVar5 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                        (&uStack_90,*(undefined8 *)PTR_DAT_049b5ba0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x1c) = uStack_90;
        thunk_FUN_021f190c(param_1 + 0x1c,0);
        FUN_0235bb44(param_1 + 2,&uStack_90,param_1,*(undefined8 *)PTR_DAT_049b5b88);
        return;
      }
      goto LAB_0234c9a0;
    }
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
LAB_0234ca04:
  puVar3 = PTR_DAT_049b5b90;
  *param_1 = -2;
  uStack_128 = uStack_78;
  uStack_130 = uStack_80;
  uStack_118 = uStack_68;
  uStack_120 = uStack_70;
  uStack_108 = uStack_58;
  uStack_110 = uStack_60;
  uStack_f8 = uStack_48;
  uStack_100 = uStack_50;
  FUN_0235bed4(param_1 + 2,&uStack_130,*(undefined8 *)puVar3);
  return;
}

