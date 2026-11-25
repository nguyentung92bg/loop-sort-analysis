/* IL2CPP: SupportMonitor$$GetErrorsText
System_String_o* SupportMonitor__GetErrorsText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$GetErrorsText
   System_String_o* SupportMonitor__GetErrorsText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetErrorsText_2465b40(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  
  if ((bRam0000000004f4b964 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c52a0);
    bRam0000000004f4b964 = 1;
  }
  puVar1 = PTR_DAT_049c52a0;
  if (param_2 != (long *)0x0) {
    System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    ConsoleListener__GetErrors_24f2444(param_2,0);
                    /* WARNING: Could not recover jumptable at 0x02565bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

