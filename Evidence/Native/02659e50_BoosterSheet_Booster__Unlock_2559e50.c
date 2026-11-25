/* IL2CPP: BoosterSheet.Booster$$Unlock
void BoosterSheet_Booster__Unlock (BoosterSheet_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSheet.Booster$$Unlock
   void BoosterSheet_Booster__Unlock (BoosterSheet_Booster_o* __this, const MethodInfo* method); */

void BoosterSheet_Booster__Unlock_2559e50(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b52a8;
  if ((bRam0000000004f4bccb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,0,0);
    bRam0000000004f4bccb = 1;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(&uStack_40,0,0);
  return;
}

