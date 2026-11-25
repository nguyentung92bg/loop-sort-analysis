/* IL2CPP: BoosterSystem$$CanSelect
bool BoosterSystem__CanSelect (BoosterSystem_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$CanSelect
   bool BoosterSystem__CanSelect (BoosterSystem_o* __this, int32_t boosterType, const MethodInfo*
   method); */

void BoosterSystem__CanSelect_24e5e90(long param_1)

{
  long *aplStack_40 [6];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    Boosters__Get_24e5ab0(aplStack_40);
    if ((*(long *)(param_1 + 0x40) != 0) && (aplStack_40[0] != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025e5ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*aplStack_40[0] + 0x228))
                (aplStack_40[0],*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x50),
                 *(undefined8 *)(*aplStack_40[0] + 0x230));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

