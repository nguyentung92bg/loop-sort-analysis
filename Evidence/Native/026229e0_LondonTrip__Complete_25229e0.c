/* IL2CPP: LondonTrip$$Complete
void LondonTrip__Complete (LondonTrip_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTrip$$Complete
   void LondonTrip__Complete (LondonTrip_o* __this, const MethodInfo* method); */

void LondonTrip__Complete_25229e0(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,0);
    bRam0000000004f4bcb4 = 1;
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__DeleteValue_3f0db18(&uStack_30,0);
  return;
}

