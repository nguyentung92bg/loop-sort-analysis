/* IL2CPP: StreakTournament$$GetHomeText
System_String_o* StreakTournament__GetHomeText (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$GetHomeText
   System_String_o* StreakTournament__GetHomeText (StreakTournament_o* __this, const MethodInfo*
   method); */

undefined8 StreakTournament__GetHomeText_2524f3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  
  uVar3 = StreakTournament__CanClaim_2524f94();
  puVar1 = PTR_DAT_049c2ea8;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0x16,0);
    puVar1 = PTR_DAT_049c2ea8;
    if ((uVar3 & 1) != 0) {
      return **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    if ((bRam0000000004f4bef7 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c2ea8);
      FUN_021f03f8(PTR_DAT_049c9990);
      bRam0000000004f4bef7 = 1;
    }
    puVar2 = PTR_DAT_049c9990;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = *(undefined8 *)puVar2;
    uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  else {
    if ((bRam0000000004f4bef4 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c2ea8);
      FUN_021f03f8(PTR_DAT_049c9988);
      bRam0000000004f4bef4 = 1;
    }
    puVar2 = PTR_DAT_049c9988;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = *(undefined8 *)puVar2;
    uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  puVar1 = PTR_DAT_049fa828;
  if ((bRam0000000004f51045 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fa830,uVar7,0);
    FUN_021f03f8(PTR_DAT_049fa838);
    FUN_021f03f8(PTR_DAT_049fa828);
    bRam0000000004f51045 = 1;
  }
  plVar9 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (plVar9 == (long *)0x0) {
    lVar5 = StatefulUI_Runtime_Localization_LocalizationUtils__FindLocalizationProvider_33464ac();
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049fa830);
      System_Object___ctor_3142338(lVar5,0);
    }
    **(long **)(*(long *)puVar1 + 0xb8) = lVar5;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar5);
    plVar9 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  lVar5 = *plVar9;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049fa838) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03444554;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049fa838,0);
LAB_03444554:
                    /* WARNING: Could not recover jumptable at 0x03444570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar6)(plVar9,uVar4,uVar7,puVar6[1]);
  return uVar4;
}

