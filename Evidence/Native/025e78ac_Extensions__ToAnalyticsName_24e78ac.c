/* IL2CPP: Extensions$$ToAnalyticsName
System_String_o* Extensions__ToAnalyticsName (int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToAnalyticsName
   System_String_o* Extensions__ToAnalyticsName (int32_t liveOps, const MethodInfo* method); */

undefined8 Extensions__ToAnalyticsName_24e78ac(int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  if ((bRam0000000004f4bc9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b61b8);
    FUN_021f03f8(PTR_DAT_049c7d28);
    FUN_021f03f8(PTR_DAT_049c7d30);
    FUN_021f03f8(PTR_DAT_049c7d38);
    FUN_021f03f8(PTR_DAT_049c7d40);
    FUN_021f03f8(PTR_DAT_049c7d20);
    FUN_021f03f8(PTR_DAT_049c7d48);
    FUN_021f03f8(PTR_DAT_049c7d50);
    FUN_021f03f8(PTR_DAT_049c7d58);
    FUN_021f03f8(PTR_DAT_049c7d60);
    FUN_021f03f8(PTR_DAT_049c2cf8);
    bRam0000000004f4bc9c = 1;
  }
  puVar2 = (undefined8 *)PTR_DAT_049c7d20;
  if (param_1 < 0x15) {
    uVar1 = param_1 - 7;
    if (0xd < uVar1) goto LAB_025e7998;
    puVar3 = &UNK_0460ef58;
  }
  else {
    uVar1 = param_1 - 0x16;
    if (6 < uVar1) goto LAB_025e7998;
    puVar3 = &UNK_0460efc8;
  }
  puVar2 = *(undefined8 **)(puVar3 + (ulong)uVar1 * 8);
LAB_025e7998:
  return *puVar2;
}

