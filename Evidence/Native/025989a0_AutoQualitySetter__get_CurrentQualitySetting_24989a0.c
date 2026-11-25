/* IL2CPP: AutoQualitySetter$$get_CurrentQualitySetting
int32_t AutoQualitySetter__get_CurrentQualitySetting (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$get_CurrentQualitySetting
   int32_t AutoQualitySetter__get_CurrentQualitySetting (const MethodInfo* method); */

undefined4 AutoQualitySetter__get_CurrentQualitySetting_24989a0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049c6078;
  if ((bRam0000000004f4baa5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    bRam0000000004f4baa5 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar2 + 0xb8);
}

