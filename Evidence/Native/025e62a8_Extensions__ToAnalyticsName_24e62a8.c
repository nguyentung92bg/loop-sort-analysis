/* IL2CPP: Extensions$$ToAnalyticsName
System_String_o* Extensions__ToAnalyticsName (int32_t feature, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToAnalyticsName
   System_String_o* Extensions__ToAnalyticsName (int32_t feature, const MethodInfo* method); */

undefined8 Extensions__ToAnalyticsName_24e62a8(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000004f4bc8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7bc0);
    FUN_021f03f8(PTR_DAT_049c7bc8);
    FUN_021f03f8(PTR_DAT_049c7bd0);
    FUN_021f03f8(PTR_DAT_049c7bd8);
                    /* try { // try from 025e62f4 to 026e62fb has its CatchHandler @ 025e65ac */
    FUN_021f03f8(PTR_DAT_049c7be0);
    FUN_021f03f8(PTR_DAT_049c7be8);
    FUN_021f03f8(PTR_DAT_049c7bf0);
    FUN_021f03f8(PTR_DAT_049c7bf8);
    FUN_021f03f8(PTR_DAT_049c7c00);
    FUN_021f03f8(PTR_DAT_049c7c08);
    FUN_021f03f8(PTR_DAT_049c7c10);
    FUN_021f03f8(PTR_DAT_049c7c18);
                    /* try { // try from 025e6354 to 026e635b has its CatchHandler @ 025e65e4 */
    FUN_021f03f8(PTR_DAT_049c7c20);
    FUN_021f03f8(PTR_DAT_049c7c28);
    FUN_021f03f8(PTR_DAT_049c7c30);
                    /* try { // try from 025e6374 to 026e63bf has its CatchHandler @ 025e6628 */
    FUN_021f03f8(PTR_DAT_049c7c38);
    FUN_021f03f8(PTR_DAT_049c7c40);
    bRam0000000004f4bc8b = 1;
  }
  puVar1 = (undefined8 *)PTR_DAT_049c7c28;
  if (param_1 - 2U < 0x21) {
    puVar1 = *(undefined8 **)(&UNK_0460ed78 + (ulong)(param_1 - 2U) * 8);
  }
                    /* try { // try from 025e63c0 to 026e63d7 has its CatchHandler @ 025e618c */
  return *puVar1;
}

