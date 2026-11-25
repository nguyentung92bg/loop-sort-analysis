/* IL2CPP: Localization$$Get
System_String_o* Localization__Get (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Localization$$Get
   System_String_o* Localization__Get (System_String_o* key, const MethodInfo* method); */

void Localization__Get_252dbe0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_049fa828;
  uVar4 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  if ((bRam0000000004f51045 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049fa830,uVar4,0);
    FUN_021f03f8(PTR_DAT_049fa838);
    FUN_021f03f8(PTR_DAT_049fa828);
    bRam0000000004f51045 = 1;
  }
  plVar7 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (plVar7 == (long *)0x0) {
    lVar2 = StatefulUI_Runtime_Localization_LocalizationUtils__FindLocalizationProvider_33464ac();
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049fa830);
      System_Object___ctor_3142338(lVar2,0);
    }
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar2);
    plVar7 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  lVar2 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049fa838) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_03444554;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049fa838,0);
LAB_03444554:
                    /* WARNING: Could not recover jumptable at 0x03444570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,param_1,uVar4,puVar3[1]);
  return;
}

