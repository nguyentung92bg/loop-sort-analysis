/* IL2CPP: StreakTournament$$GetLeaderboard
System_Collections_Generic_List_StreakTournamentPlayer__o* StreakTournament__GetLeaderboard (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$GetLeaderboard
   System_Collections_Generic_List_StreakTournamentPlayer__o* StreakTournament__GetLeaderboard
   (StreakTournament_o* __this, const MethodInfo* method); */

long StreakTournament__GetLeaderboard_2524aac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_60;
  
  puVar2 = PTR_DAT_049c9950;
  puVar1 = PTR_DAT_049c9948;
  if ((bRam0000000004f4bea3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9958);
    FUN_021f03f8(PTR_DAT_049c9960);
    FUN_021f03f8(PTR_DAT_049c9968);
    FUN_021f03f8(PTR_DAT_049c9950);
    FUN_021f03f8(PTR_DAT_049c9948);
    FUN_021f03f8(PTR_DAT_049c9970);
    FUN_021f03f8(PTR_DAT_049c9978);
    bRam0000000004f4bea3 = 1;
  }
  StreakTournament__get_Save_2524120(&uStack_a0);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd248
            (lVar3,uStack_60,*(undefined8 *)puVar2);
  StreakTournament__get_Save_2524120(&uStack_a0);
  puVar1 = PTR_DAT_049c9978;
  uStack_d8 = uStack_98;
  uStack_e0 = uStack_a0;
  uStack_c8 = uStack_88;
  uStack_d0 = uStack_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  if (lVar3 != 0) {
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    FUN_02333498(lVar3,&uStack_120,*(undefined8 *)PTR_DAT_049c9960);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_049c9968;
    puVar6 = *(undefined8 **)(lVar4 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        puVar6 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c9958);
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar7,uVar8,*(undefined8 *)PTR_DAT_049c9970,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar5 = lVar7;
      thunk_FUN_021f190c(plVar5,lVar7);
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
              (lVar3,lVar7,*(undefined8 *)puVar2);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

