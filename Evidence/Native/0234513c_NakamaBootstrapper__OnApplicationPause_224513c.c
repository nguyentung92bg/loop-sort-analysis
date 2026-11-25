/* IL2CPP: NakamaBootstrapper$$OnApplicationPause
void NakamaBootstrapper__OnApplicationPause (NakamaBootstrapper_o* __this, bool isPaused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$OnApplicationPause
   void NakamaBootstrapper__OnApplicationPause (NakamaBootstrapper_o* __this, bool isPaused, const
   MethodInfo* method); */

undefined8 NakamaBootstrapper__OnApplicationPause_224513c(long param_1,ulong param_2)

{
  float *pfVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = PTR_DAT_049bbf30;
  pfVar1 = (float *)(param_1 + 0x30);
  if ((param_2 & 1) != 0) {
    if ((bRam0000000004f5c3ff & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049bbf30,0);
      bRam0000000004f5c3ff = 1;
    }
    if (*(float *)(param_1 + 0x38) <= **(float **)(*(long *)puVar2 + 0xb8)) {
      fVar5 = *pfVar1;
      fVar3 = (float)UniTimer__GetTime_3f0f084(pfVar1);
      fVar4 = 0.0;
      if (0.0 <= fVar5 - fVar3) {
        fVar4 = fVar5 - fVar3;
      }
      *(float *)(param_1 + 0x38) = fVar4;
    }
    return *(undefined8 *)pfVar1;
  }
  if ((bRam0000000004f5c3ff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bbf30,0);
    bRam0000000004f5c3ff = 1;
  }
  if (**(float **)(*(long *)puVar2 + 0xb8) < *(float *)(param_1 + 0x38)) {
    fVar4 = (float)UniTimer__GetTime_3f0f084(pfVar1);
    fVar3 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 0;
    *pfVar1 = fVar4 + fVar3;
  }
  return *(undefined8 *)pfVar1;
}

