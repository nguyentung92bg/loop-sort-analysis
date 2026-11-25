/* IL2CPP: LifeModule$$GetCurrentLife
int32_t LifeModule__GetCurrentLife (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$GetCurrentLife
   int32_t LifeModule__GetCurrentLife (LifeModule_o* __this, const MethodInfo* method); */

void LifeModule__GetCurrentLife_2545fc4(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5aa8;
  if ((bRam0000000004f4bcb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5aa8,0);
    bRam0000000004f4bcb0 = 1;
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsInt__get_Value_3f0d974(&uStack_30,0);
  return;
}

