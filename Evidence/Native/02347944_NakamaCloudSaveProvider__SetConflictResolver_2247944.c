/* IL2CPP: NakamaCloudSaveProvider$$SetConflictResolver
void NakamaCloudSaveProvider__SetConflictResolver (NakamaCloudSaveProvider_o* __this, bool enabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$SetConflictResolver
   void NakamaCloudSaveProvider__SetConflictResolver (NakamaCloudSaveProvider_o* __this, bool
   enabled, const MethodInfo* method); */

void NakamaCloudSaveProvider__SetConflictResolver_2247944(undefined8 param_1,byte param_2)

{
  if (cRam0000000004f49bee == '\0') {
    FUN_021f03f8(PTR_DAT_049b5018);
    cRam0000000004f49bee = '\x01';
  }
  *(byte *)(*(long *)(*(long *)PTR_DAT_049b5018 + 0xb8) + 8) = param_2 & 1;
  return;
}

