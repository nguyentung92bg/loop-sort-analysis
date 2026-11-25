/* IL2CPP: LeaderboardSnapshot$$CreateSnapshot
LeaderboardSnapshot_o* LeaderboardSnapshot__CreateSnapshot (int32_t leaderboardSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardSnapshot$$CreateSnapshot
   LeaderboardSnapshot_o* LeaderboardSnapshot__CreateSnapshot (int32_t leaderboardSize, const
   MethodInfo* method); */

long LeaderboardSnapshot__CreateSnapshot_252188c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_049c9718;
  if ((bRam0000000004f4be73 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b68c0);
    FUN_021f03f8(PTR_DAT_049b68c8);
    FUN_021f03f8(PTR_DAT_049c9718);
    FUN_021f03f8(PTR_DAT_049b53e0);
    FUN_021f03f8(PTR_DAT_049b53c0);
    FUN_021f03f8(PTR_DAT_049b53b8);
    bRam0000000004f4be73 = 1;
  }
  iVar9 = param_1;
  if (999 < param_1) {
    iVar9 = 1000;
  }
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  System_Object___ctor_3142338(lVar6,0);
  auVar19 = UniTimer__CreateFromSeconds_3f0f2f4(0x44160000,0);
  puVar1 = PTR_DAT_049b53b8;
  if (lVar6 == 0) {
LAB_02621a64:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)puVar5;
  *(long *)(lVar6 + 0x10) = auVar19._0_8_;
  puVar2 = PTR_DAT_049b53c0;
  *(long *)(lVar6 + 0x18) = auVar19._8_8_;
  puVar4 = PTR_DAT_049b68c8;
  puVar3 = PTR_DAT_049b68c0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar5;
  }
  puVar10 = *(undefined8 **)(lVar7 + 0xb8);
  uVar14 = puVar10[4];
  uVar13 = puVar10[7];
  uVar8 = puVar10[6];
  uVar16 = puVar10[1];
  uVar15 = *puVar10;
  uVar18 = puVar10[3];
  uVar17 = puVar10[2];
  *(undefined8 *)(lVar6 + 0x48) = puVar10[5];
  *(undefined8 *)(lVar6 + 0x40) = uVar14;
  *(undefined8 *)(lVar6 + 0x58) = uVar13;
  *(undefined8 *)(lVar6 + 0x50) = uVar8;
  *(undefined8 *)(lVar6 + 0x28) = uVar16;
  *(undefined8 *)(lVar6 + 0x20) = uVar15;
  *(undefined8 *)(lVar6 + 0x38) = uVar18;
  *(undefined8 *)(lVar6 + 0x30) = uVar17;
  thunk_FUN_021f190c(lVar6 + 0x20,0);
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar7,*(undefined8 *)puVar2);
  plVar12 = (long *)(lVar6 + 0x60);
  *plVar12 = lVar7;
  thunk_FUN_021f190c(plVar12,lVar7);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType____ctor_28a1904
            (uVar8,*(undefined8 *)puVar3);
  *(undefined8 *)(lVar6 + 0x68) = uVar8;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x68),uVar8);
  puVar1 = PTR_DAT_049b53e0;
  if (0 < param_1) {
    do {
      lVar7 = *(long *)puVar5;
      lVar11 = *plVar12;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar5;
      }
      if (lVar11 == 0) goto LAB_02621a64;
      puVar10 = *(undefined8 **)(lVar7 + 0xb8);
      uStack_68 = puVar10[5];
      uStack_70 = puVar10[4];
      uStack_58 = puVar10[7];
      uStack_60 = puVar10[6];
      uStack_88 = puVar10[1];
      uStack_90 = *puVar10;
      uStack_78 = puVar10[3];
      uStack_80 = puVar10[2];
      FUN_02333498(lVar11,&uStack_90,*(undefined8 *)puVar1);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return lVar6;
}

