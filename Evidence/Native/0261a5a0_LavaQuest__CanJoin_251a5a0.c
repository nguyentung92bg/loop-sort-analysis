/* IL2CPP: LavaQuest$$CanJoin
bool LavaQuest__CanJoin (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$CanJoin
   bool LavaQuest__CanJoin (LavaQuest_o* __this, const MethodInfo* method); */

byte LavaQuest__CanJoin_251a5a0(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0261a5a4 to 0271a66f has its CatchHandler @ 0261a8bc */
  if ((bRam0000000004f4be39 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be39 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    bVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x10) != '\0') {
      uVar3 = LavaQuest__IsStreakTournamentWindow_251a6e4(param_1);
      puVar1 = PTR_DAT_049b5310;
      if ((uVar3 & 1) == 0) {
        lVar4 = *(long *)PTR_DAT_049b5310;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        uStack_68 = *(undefined8 *)(lVar4 + 0x678);
        uStack_70 = *(undefined8 *)(lVar4 + 0x670);
        uStack_58 = *(undefined8 *)(lVar4 + 0x688);
        uStack_60 = *(undefined8 *)(lVar4 + 0x680);
        uStack_48 = *(undefined8 *)(lVar4 + 0x698);
        uStack_50 = *(undefined8 *)(lVar4 + 0x690);
        CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                  (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                    /* try { // try from 0261a680 to 0271a707 has its CatchHandler @ 0261a8c0 */
          FUN_021f0574();
        }
        auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        bVar2 = System_DateTimeOffset__op_GreaterThan_30e48c8
                          (uStack_40,uStack_38,auVar5._0_8_,auVar5._8_8_,0);
        bVar2 = bVar2 ^ 1;
      }
      else {
        bVar2 = 0;
      }
    }
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

