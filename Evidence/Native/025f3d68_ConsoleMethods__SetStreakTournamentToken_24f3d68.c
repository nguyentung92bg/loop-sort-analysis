/* IL2CPP: ConsoleMethods$$SetStreakTournamentToken
void ConsoleMethods__SetStreakTournamentToken (int32_t token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetStreakTournamentToken
   void ConsoleMethods__SetStreakTournamentToken (int32_t token, const MethodInfo* method); */

void ConsoleMethods__SetStreakTournamentToken_24f3d68(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_160 [96];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd0f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049c8350);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025f3dc8 to 026f3efb has its CatchHandler @ 025f3dc8
                       catch() { ... } // from try @ 025f3dc8 with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f3fc8 with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f4140 with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f4194 with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f41b4 with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f423c with catch @ 025f3dc8
                       catch() { ... } // from try @ 025f4268 with catch @ 025f3dc8 */
    FUN_021f03f8(PTR_DAT_049c8358);
    bRam0000000004f4bd0f = 1;
  }
  puVar4 = PTR_DAT_049c8350;
  puVar3 = PTR_DAT_049c8348;
  puVar1 = PTR_DAT_049b3c58;
  lVar6 = *(long *)puVar2;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar5 = PTR_DAT_049c8358;
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar6 + 0xb8) + 0x6d0,&uStack_100,*(undefined8 *)puVar3);
  func_0x04608620(&uStack_a0,&uStack_100,0x60);
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_80 = CONCAT44(param_1,uStack_e0);
  thunk_FUN_021f190c(&uStack_90,0);
  func_0x04608620(auStack_160,&uStack_a0,0x60);
  CloudPrefsT___Il2CppFullySharedGenericStructType___set_Value_28023e4
            (*(long *)(*(long *)puVar2 + 0xb8) + 0x6d0,auStack_160,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar5,0);
  return;
}

