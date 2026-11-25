/* IL2CPP: NakamaCloudSaveProvider$$get_Baseline
System_String_o* NakamaCloudSaveProvider__get_Baseline (NakamaCloudSaveProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$get_Baseline
   System_String_o* NakamaCloudSaveProvider__get_Baseline (NakamaCloudSaveProvider_o* __this, const
   MethodInfo* method); */

undefined8 NakamaCloudSaveProvider__get_Baseline_224715c(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000004f49b4a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5828);
    bRam0000000004f49b4a = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
  }
  return uVar1;
}

