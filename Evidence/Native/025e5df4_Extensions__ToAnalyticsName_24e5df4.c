/* IL2CPP: Extensions$$ToAnalyticsName
System_String_o* Extensions__ToAnalyticsName (int32_t booster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToAnalyticsName
   System_String_o* Extensions__ToAnalyticsName (int32_t booster, const MethodInfo* method); */

undefined8 Extensions__ToAnalyticsName_24e5df4(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f4bc86 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7b58);
    FUN_021f03f8(PTR_DAT_049c7b60);
    FUN_021f03f8(PTR_DAT_049c7b68);
    FUN_021f03f8(PTR_DAT_049c7b70);
    FUN_021f03f8(PTR_DAT_049c7b78);
    FUN_021f03f8(PTR_DAT_049c7b80);
    bRam0000000004f4bc86 = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_049c7b78;
  if (param_1 - 2U < 5) {
    puVar1 = *(undefined8 **)(&UNK_0460ed50 + (ulong)(param_1 - 2U) * 8);
  }
  return *puVar1;
}

