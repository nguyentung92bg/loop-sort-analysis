/* IL2CPP: StreakTournament$$ApplyProgression
void StreakTournament__ApplyProgression (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$ApplyProgression
   void StreakTournament__ApplyProgression (StreakTournament_o* __this, const MethodInfo* method);
    */

void StreakTournament__ApplyProgression_2526e0c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  long lStack_78;
  
  lVar2 = tpidr_el0;
  lStack_78 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4be9e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a10);
    bRam0000000004f4be9e = 1;
  }
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  StreakTournament__get_Save_2524120(&uStack_100);
  puVar3 = PTR_DAT_049c9a10;
  if (lStack_c0 == 0) {
LAB_02627000:
    if (*(long *)(lVar2 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    if (0 < (int)*(ulong *)(lStack_c0 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lStack_c0 + 0x18) & 0xffffffff;
      puVar6 = (undefined8 *)(lStack_c0 + 0x30);
      do {
        if (uVar5 <= uVar7) {
LAB_02627014:
          if (*(long *)(lVar2 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          goto LAB_02627028;
        }
        uStack_118 = puVar6[-1];
        uStack_120 = puVar6[-2];
        uStack_108 = puVar6[1];
        uStack_110 = *puVar6;
        uStack_a0 = *(undefined8 *)((long)puVar6 + 0x14);
        uVar1 = *(undefined4 *)(puVar6 + 2);
        uStack_98 = (undefined4)*(undefined8 *)((long)puVar6 + 0x1c);
        uStack_8c = (undefined4)puVar6[5];
        uStack_88 = (undefined4)((ulong)puVar6[5] >> 0x20);
        uStack_94 = (undefined4)puVar6[4];
        uStack_90 = (undefined4)((ulong)puVar6[4] >> 0x20);
        if (((*(long *)(param_1 + 0x38) == 0) ||
            (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x108), lVar4 == 0)) ||
           (uStack_100 = uVar1,
           lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                             (lVar4,&uStack_100,*(undefined8 *)puVar3), lVar4 == 0))
        goto LAB_02627000;
        fVar9 = *(float *)(lVar4 + 0x1c);
        fVar8 = (float)UnityEngine_Random__get_value_3c11d1c(0);
        uStack_134 = uStack_98;
        uStack_13c = uStack_a0;
        uStack_158 = uStack_118;
        uStack_160 = uStack_120;
        uStack_148 = uStack_108;
        uStack_150 = uStack_110;
        uStack_128 = CONCAT44(uStack_88,uStack_8c);
        uStack_130 = uStack_94;
        uStack_12c = uStack_90;
        uStack_140 = uVar1;
        StreakTournament__UpdatePlayer_252702c
                  (&uStack_100,param_1,&uStack_160,fVar8 * 100.0 <= fVar9);
        uStack_120 = CONCAT44(uStack_fc,uStack_100);
        uStack_a0 = CONCAT44(uStack_d8,uStack_dc);
        uStack_118 = uStack_f8;
        uStack_108 = uStack_e8;
        uStack_110 = uStack_f0;
        uStack_98 = uStack_d4;
        uStack_8c = (undefined4)uStack_c8;
        uStack_88 = (undefined4)((ulong)uStack_c8 >> 0x20);
        uStack_94 = uStack_d0;
        uStack_90 = uStack_cc;
        if (*(uint *)(lStack_c0 + 0x18) <= uVar7) goto LAB_02627014;
        *(undefined4 *)(puVar6 + 2) = uStack_e0;
        puVar6[-1] = uStack_f8;
        puVar6[-2] = uStack_120;
        puVar6[1] = uStack_e8;
        *puVar6 = uStack_f0;
        *(ulong *)((long)puVar6 + 0x1c) = CONCAT44(uStack_d0,uStack_d4);
        *(undefined8 *)((long)puVar6 + 0x14) = uStack_a0;
        puVar6[5] = uStack_c8;
        puVar6[4] = CONCAT44(uStack_cc,uStack_d0);
        thunk_FUN_021f190c(puVar6,0);
        uVar5 = (ulong)*(uint *)(lStack_c0 + 0x18);
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 8;
      } while ((long)uVar7 < (long)(int)*(uint *)(lStack_c0 + 0x18));
    }
    StreakTournament__get_Save_2524120(&uStack_100);
    uStack_1a0 = CONCAT44(uStack_fc,uStack_100);
    uStack_198 = uStack_f8;
    uStack_188 = uStack_e8;
    uStack_190 = uStack_f0;
    uStack_168 = uStack_c8;
    StreakTournament__UpdateSave_25252a4(&uStack_1a0,lStack_c0);
    if (*(long *)(lVar2 + 0x28) == lStack_78) {
      return;
    }
  }
LAB_02627028:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

