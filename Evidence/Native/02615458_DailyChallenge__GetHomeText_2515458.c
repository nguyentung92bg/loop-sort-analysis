/* IL2CPP: DailyChallenge$$GetHomeText
System_String_o* DailyChallenge__GetHomeText (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetHomeText
   System_String_o* DailyChallenge__GetHomeText (DailyChallenge_o* __this, const MethodInfo*
   method); */

void DailyChallenge__GetHomeText_2515458(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_40 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049b5fc8;
  if ((bRam0000000004f4be0e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4be0e = 1;
  }
  puVar3 = PTR_DAT_049b5050;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fb0;
  auStack_40 = TimeProvider__get_Now_24f4584(0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c55b8;
  uVar4 = System_DateTimeOffset__get_Year_30e15d4(auStack_40,0);
  uVar5 = System_DateTimeOffset__get_Month_30e1374(auStack_40,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  uVar4 = System_DateTime__DaysInMonth_30dc6a0(uVar4,uVar5,0);
  uVar5 = DailyChallenge__GetCompletedDays_25168ec();
  puVar2 = PTR_DAT_049b3bd0;
  cVar8 = POPCOUNT((char)((uint)uVar5 >> 0x10));
  cVar9 = POPCOUNT((char)((uint)uVar5 >> 0x18));
  uVar1 = NEON_uaddlv((ulong)CONCAT13(cVar9,CONCAT12(cVar8,CONCAT11(POPCOUNT((char)((uint)uVar5 >> 8
                                                                                   )),
                                                                    POPCOUNT((char)uVar5)))),1);
  uStack_24 = CONCAT13(cVar9,CONCAT12(cVar8,uVar1));
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
  uStack_28 = uVar4;
  uVar7 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_28);
  System_String__Format_2f7dfac(*(undefined8 *)puVar3,uVar6,uVar7,0);
  return;
}

