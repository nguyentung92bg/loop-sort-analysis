/* IL2CPP: Phrase$$get_Free
System_String_o* Phrase__get_Free (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Phrase$$get_Free
   System_String_o* Phrase__get_Free (const MethodInfo* method); */

void Phrase__get_Free_252e664(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_049c2ea8;
  if ((bRam0000000004f4bee8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c9d60);
    bRam0000000004f4bee8 = 1;
  }
  puVar2 = PTR_DAT_049c9d60;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049fa828;
  uVar3 = *(undefined8 *)puVar2;
  uVar6 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  if ((bRam0000000004f51045 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fa830,uVar6,0);
    FUN_021f03f8(PTR_DAT_049fa838);
    FUN_021f03f8(PTR_DAT_049fa828);
    bRam0000000004f51045 = 1;
  }
  plVar9 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (plVar9 == (long *)0x0) {
    lVar4 = StatefulUI_Runtime_Localization_LocalizationUtils__FindLocalizationProvider_33464ac();
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049fa830);
      System_Object___ctor_3142338(lVar4,0);
    }
    **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar4);
    plVar9 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049fa838) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03444554;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049fa838,0);
LAB_03444554:
                    /* WARNING: Could not recover jumptable at 0x03444570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar9,uVar3,uVar6,puVar5[1]);
  return;
}

