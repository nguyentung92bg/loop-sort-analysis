/* IL2CPP: AreasMonitor$$FormatJourneyLevel
System_String_o* AreasMonitor__FormatJourneyLevel (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$FormatJourneyLevel
   System_String_o* AreasMonitor__FormatJourneyLevel (int32_t level, const MethodInfo* method); */

void AreasMonitor__FormatJourneyLevel_2436b34(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049c2ea8;
  if ((bRam0000000004f4b7fc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049b4de0);
    FUN_021f03f8(PTR_DAT_049c3bb0);
    FUN_021f03f8(PTR_DAT_049c3bb8);
    FUN_021f03f8(PTR_DAT_049c3bc0);
    FUN_021f03f8(PTR_DAT_049c3bc8);
    FUN_021f03f8(PTR_DAT_049bf170);
    FUN_021f03f8(PTR_DAT_049c3bd0);
    bRam0000000004f4b7fc = 1;
  }
  puVar4 = PTR_DAT_049c3bc0;
  puVar3 = PTR_DAT_049c3bb8;
  puVar2 = PTR_DAT_049c3bb0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = Localization__Get_252dbe0(*(undefined8 *)puVar3,0);
  puVar1 = PTR_DAT_049b3bd0;
  uStack_34 = param_1;
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uVar6 = System_String__Format_2f7dfac(*(undefined8 *)puVar4,*(undefined8 *)puVar2,uVar6,0);
  puVar2 = PTR_DAT_049b4de0;
  if (lVar5 != 0) {
    uVar7 = System_String__EndsWith_2f7aea8(lVar5,*(undefined8 *)PTR_DAT_049b4de0,0);
    if ((uVar7 & 1) == 0) {
      uVar6 = System_String__Format_2f73700(lVar5,uVar6,0);
      System_String__Concat_2f7d424
                (*(undefined8 *)PTR_DAT_049c3bd0,uVar6,*(undefined8 *)PTR_DAT_049bf170,0);
    }
    else {
      lVar5 = System_String__Replace_2f7fb18
                        (lVar5,*(undefined8 *)puVar2,
                         **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8),0);
      if (lVar5 == 0) goto LAB_02536cf4;
      uVar8 = System_String__Trim_2f8204c(lVar5,0);
      System_String__Concat_2f7dbac
                (*(undefined8 *)PTR_DAT_049c3bd0,uVar8,*(undefined8 *)PTR_DAT_049c3bc8,uVar6,0);
    }
    return;
  }
LAB_02536cf4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

