/* IL2CPP: AreaSheet.Row$$Unlock
void AreaSheet_Row__Unlock (AreaSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row$$Unlock
   void AreaSheet_Row__Unlock (AreaSheet_Row_o* __this, const MethodInfo* method); */

void AreaSheet_Row__Unlock_2558844(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bccb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,1,0);
    bRam0000000004f4bccb = 1;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(&uStack_40,1,0);
  return;
}

