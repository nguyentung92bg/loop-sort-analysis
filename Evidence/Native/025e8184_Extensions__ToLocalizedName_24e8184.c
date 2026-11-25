/* IL2CPP: Extensions$$ToLocalizedName
System_String_o* Extensions__ToLocalizedName (int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToLocalizedName
   System_String_o* Extensions__ToLocalizedName (int32_t liveOps, const MethodInfo* method); */

void Extensions__ToLocalizedName_24e8184(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_049c7e70;
                    /* try { // try from 025e8198 to 026e819f has its CatchHandler @ 025e901c */
  if ((bRam0000000004f4bca0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7e70);
    FUN_021f03f8(PTR_DAT_049c2ea8);
                    /* try { // try from 025e81c8 to 026e81cb has its CatchHandler @ 025e8f0c */
    FUN_021f03f8(PTR_DAT_049c7ea8);
    bRam0000000004f4bca0 = 1;
  }
  uStack_38 = *(undefined8 *)puVar1;
  uStack_30 = 0xffffffffffffffff;
  uStack_28 = param_1;
  lVar3 = System_Enum__ToString_3135e00(&uStack_38,0);
  puVar2 = PTR_DAT_049c7ea8;
  puVar1 = PTR_DAT_049c2ea8;
  if (lVar3 != 0) {
                    /* try { // try from 025e81f4 to 026e81f7 has its CatchHandler @ 025e8f08 */
    uVar4 = System_String__ToLowerInvariant_2f81e54(lVar3,0);
    uVar4 = System_String__Format_2f73700(*(undefined8 *)puVar2,uVar4,0);
                    /* try { // try from 025e8220 to 026e8237 has its CatchHandler @ 025e8e88 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Localization__Get_252dbe0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

