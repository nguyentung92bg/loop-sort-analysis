/* IL2CPP: AutoQualitySetter$$Normalize
System_String_o* AutoQualitySetter__Normalize (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$Normalize
   System_String_o* AutoQualitySetter__Normalize (System_String_o* s, const MethodInfo* method); */

void AutoQualitySetter__Normalize_249a96c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f4baa9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6188);
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4baa9 = 1;
  }
  puVar1 = PTR_DAT_049b3bd0;
  if (param_1 != 0) {
    lVar2 = System_String__Replace_2f7fb18
                      (param_1,*(undefined8 *)PTR_DAT_049b6188,
                       **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    if ((lVar2 != 0) &&
       (lVar2 = System_String__Replace_2f7fb18
                          (lVar2,*(undefined8 *)PTR_DAT_049b61a0,
                           **(undefined8 **)(*(long *)(puVar1 + 0x90) + 0xb8),0),
       puVar1 = PTR_DAT_049b44e8, lVar2 != 0)) {
      if ((bRam0000000004f4efab & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b44e8,0);
        bRam0000000004f4efab = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar3 = (long *)System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03081ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

