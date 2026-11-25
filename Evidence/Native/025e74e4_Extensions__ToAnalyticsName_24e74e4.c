/* IL2CPP: Extensions$$ToAnalyticsName
System_String_o* Extensions__ToAnalyticsName (int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToAnalyticsName
   System_String_o* Extensions__ToAnalyticsName (int32_t item, const MethodInfo* method); */

undefined8 Extensions__ToAnalyticsName_24e74e4(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000004f4bc98 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c90);
    FUN_021f03f8(PTR_DAT_049b6130);
    FUN_021f03f8(PTR_DAT_049c7c98);
    FUN_021f03f8(PTR_DAT_049c7ca0);
    FUN_021f03f8(PTR_DAT_049c7b58);
    FUN_021f03f8(PTR_DAT_049c7ca8);
    FUN_021f03f8(PTR_DAT_049c7cb0);
    FUN_021f03f8(PTR_DAT_049c7cb8);
    FUN_021f03f8(PTR_DAT_049c7cc0);
    FUN_021f03f8(PTR_DAT_049c7b60);
    FUN_021f03f8(PTR_DAT_049c7cc8);
    FUN_021f03f8(PTR_DAT_049c7b68);
    FUN_021f03f8(PTR_DAT_049c7b70);
    FUN_021f03f8(PTR_DAT_049c7b80);
    FUN_021f03f8(PTR_DAT_049c7cd0);
    FUN_021f03f8(PTR_DAT_049c7cd8);
    FUN_021f03f8(PTR_DAT_049c7ce0);
    FUN_021f03f8(PTR_DAT_049c7ce8);
    bRam0000000004f4bc98 = 1;
  }
  if ((int)param_1 < 0x29) {
    if (param_1 < 0x14) {
      puVar3 = *(undefined8 **)(&UNK_0460ee80 + (ulong)param_1 * 8);
    }
    else {
      puVar1 = (undefined8 *)PTR_DAT_049c7ca0;
      if (param_1 != 0x28) {
        puVar1 = (undefined8 *)PTR_DAT_049c7c90;
      }
      puVar3 = (undefined8 *)PTR_DAT_049c7ce0;
      if (param_1 != 0x1e) {
        puVar3 = puVar1;
      }
    }
  }
  else {
    puVar1 = (undefined8 *)PTR_DAT_049c7cd0;
    if (param_1 != 0x65) {
      puVar1 = (undefined8 *)PTR_DAT_049c7c90;
    }
    puVar3 = (undefined8 *)PTR_DAT_049c7cb0;
    if (param_1 != 100) {
      puVar3 = puVar1;
    }
    puVar1 = (undefined8 *)PTR_DAT_049c7ca8;
    if (param_1 != 0x3c) {
      puVar1 = (undefined8 *)PTR_DAT_049c7c90;
    }
    puVar2 = (undefined8 *)PTR_DAT_049c7cb8;
    if (param_1 != 0x32) {
      puVar2 = puVar1;
    }
    if (param_1 < 0x3d) {
      puVar3 = puVar2;
    }
  }
  return *puVar3;
}

