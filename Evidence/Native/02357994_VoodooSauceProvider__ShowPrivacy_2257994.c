/* IL2CPP: VoodooSauceProvider$$ShowPrivacy
void VoodooSauceProvider__ShowPrivacy (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$ShowPrivacy
   void VoodooSauceProvider__ShowPrivacy (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__ShowPrivacy_2257994(void)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bc8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bc8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f5f4be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670,0);
    bRam0000000004f5f4be = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar2 = (long *)VoodooSauce__get_Privacy_4377320();
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0447a598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x268))(plVar2,0,*(undefined8 *)(*plVar2 + 0x270));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

