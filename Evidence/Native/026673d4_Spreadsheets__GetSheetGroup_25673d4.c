/* IL2CPP: Spreadsheets$$GetSheetGroup
SheetGroup_o Spreadsheets__GetSheetGroup (Spreadsheets_o __this, System_String_o* targetName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Spreadsheets$$GetSheetGroup
   SheetGroup_o Spreadsheets__GetSheetGroup (Spreadsheets_o __this, System_String_o* targetName,
   const MethodInfo* method); */

undefined1  [16] Spreadsheets__GetSheetGroup_25673d4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
                    /* try { // try from 026673e4 to 027673e7 has its CatchHandler @ 02667770 */
  lVar4 = *param_1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
                    /* try { // try from 026673f8 to 027673ff has its CatchHandler @ 026677a8 */
    uVar5 = 0;
    uVar1 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
    puVar6 = (undefined8 *)(lVar4 + 0x28);
    do {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02667464 to 02767467 has its CatchHandler @ 02667768 */
        FUN_021f06a8();
      }
      uVar2 = puVar6[-1];
      uVar3 = *puVar6;
                    /* try { // try from 02667420 to 02767423 has its CatchHandler @ 0266776c */
      uVar1 = System_String__Equals_2f7b554(uVar2,param_2,3,0);
      if ((uVar1 & 1) != 0) goto LAB_02667448;
      uVar1 = (ulong)*(uint *)(lVar4 + 0x18);
                    /* try { // try from 02667430 to 0276743f has its CatchHandler @ 026677a4 */
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
  }
  uVar2 = 0;
                    /* try { // try from 02667444 to 0276744f has its CatchHandler @ 026677a0 */
  uVar3 = 0;
LAB_02667448:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}

