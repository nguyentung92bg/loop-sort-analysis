/* IL2CPP: Extensions$$ToDescription
System_String_o* Extensions__ToDescription (WeeklyMissionSheet_MissionArgs_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToDescription
   System_String_o* Extensions__ToDescription (WeeklyMissionSheet_MissionArgs_o args, const
   MethodInfo* method); */

void Extensions__ToDescription_24e832c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c7eb8;
                    /* try { // try from 025e8340 to 026e834f has its CatchHandler @ 025e8fd0 */
  if ((bRam0000000004f4bca2 & 1) == 0) {
                    /* try { // try from 025e835c to 026e8367 has its CatchHandler @ 025e8fbc */
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c7eb8);
    FUN_021f03f8(PTR_DAT_049c7ec0);
                    /* try { // try from 025e837c to 026e8383 has its CatchHandler @ 025e8f30 */
    bRam0000000004f4bca2 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  uStack_38 = (undefined4)param_1;
  uStack_40 = 0xffffffffffffffff;
  lVar3 = System_Enum__ToString_3135e00(&uStack_48,0);
  puVar2 = PTR_DAT_049c7ec0;
  puVar1 = PTR_DAT_049c2ea8;
  if (lVar3 != 0) {
                    /* try { // try from 025e83ac to 026e83c3 has its CatchHandler @ 025e8fa4 */
    uVar4 = System_String__ToLowerInvariant_2f81e54(lVar3,0);
    uVar4 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar4,0);
                    /* try { // try from 025e83e0 to 026e83e7 has its CatchHandler @ 025e8fdc */
    uStack_24 = (undefined4)((ulong)param_1 >> 0x20);
    uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_24);
                    /* try { // try from 025e83f8 to 026e83fb has its CatchHandler @ 025e8f44 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
                    /* try { // try from 025e8410 to 026e8417 has its CatchHandler @ 025e8fc8 */
    Localization__Format_252dbfc(uVar4,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

