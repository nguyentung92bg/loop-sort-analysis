/* IL2CPP: AutoQualitySetter$$set_CurrentQualitySetting
void AutoQualitySetter__set_CurrentQualitySetting (int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$set_CurrentQualitySetting
   void AutoQualitySetter__set_CurrentQualitySetting (int32_t value, const MethodInfo* method); */

void AutoQualitySetter__set_CurrentQualitySetting_24989f8(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c6078;
  if ((bRam0000000004f4baa6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    bRam0000000004f4baa6 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  **(undefined4 **)(lVar2 + 0xb8) = param_1;
  return;
}

