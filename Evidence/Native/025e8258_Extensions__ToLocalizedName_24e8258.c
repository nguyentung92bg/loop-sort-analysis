/* IL2CPP: Extensions$$ToLocalizedName
System_String_o* Extensions__ToLocalizedName (int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToLocalizedName
   System_String_o* Extensions__ToLocalizedName (int32_t type, const MethodInfo* method); */

void Extensions__ToLocalizedName_24e8258(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_049c39c0;
  if ((bRam0000000004f4bca1 & 1) == 0) {
                    /* try { // try from 025e827c to 026e8287 has its CatchHandler @ 025e8fec */
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c7eb0);
                    /* try { // try from 025e82a0 to 026e82a3 has its CatchHandler @ 025e8f50 */
                    /* try { // try from 025e82a4 to 026e82b3 has its CatchHandler @ 025e8ff0 */
    bRam0000000004f4bca1 = 1;
  }
  uStack_38 = *(undefined8 *)puVar1;
                    /* try { // try from 025e82bc to 026e82c7 has its CatchHandler @ 025e8fe8 */
  uStack_30 = 0xffffffffffffffff;
  uStack_28 = param_1;
  lVar3 = System_Enum__ToString_3135e00(&uStack_38,0);
  puVar2 = PTR_DAT_049c7eb0;
  puVar1 = PTR_DAT_049c2ea8;
  if (lVar3 != 0) {
                    /* try { // try from 025e82cc to 026e82d3 has its CatchHandler @ 025e8f68 */
    uVar4 = System_String__ToLowerInvariant_2f81e54(lVar3,0);
                    /* try { // try from 025e82f0 to 026e82f3 has its CatchHandler @ 025e8f00 */
    uVar4 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar4,0);
                    /* try { // try from 025e82f4 to 026e830b has its CatchHandler @ 025e8f64 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Localization__Get_252dbe0(uVar4,0);
                    /* try { // try from 025e8324 to 026e8327 has its CatchHandler @ 025e8f4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e8328 to 026e8337 has its CatchHandler @ 025e8fe4 */
  FUN_021f06a0();
}

