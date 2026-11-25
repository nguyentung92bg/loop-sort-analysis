/* IL2CPP: Extensions$$AppendUnit
void Extensions__AppendUnit (int32_t value, System_String_o* locKey, int32_t maxUnits, int32_t* count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$AppendUnit
   void Extensions__AppendUnit (int32_t value, System_String_o* locKey, int32_t maxUnits, int32_t*
   count, const MethodInfo* method); */

void Extensions__AppendUnit_24e726c(int param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f4bc96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    bRam0000000004f4bc96 = 1;
  }
  puVar1 = PTR_DAT_049b6110;
  if ((param_1 < 1) || (param_3 <= *param_4)) {
                    /* try { // try from 025e73a0 to 026e73a7 has its CatchHandler @ 025e77f0 */
    return;
  }
                    /* try { // try from 025e72cc to 026e72d3 has its CatchHandler @ 025e7810 */
  lVar3 = *(long *)PTR_DAT_049b6110;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
                    /* try { // try from 025e72ec to 026e7337 has its CatchHandler @ 025e7814 */
  if (lVar3 != 0) {
    iVar2 = System_Text_StringBuilder__get_Length_2f84c30(lVar3,0);
    if (0 < iVar2) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_025e73a4;
      System_Text_StringBuilder__Append_2f843e0(lVar3,0x20,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025e7338 to 026e7357 has its CatchHandler @ 025e7118 */
      FUN_021f0574();
    }
    Extensions__AppendInt_24e73a8(param_1);
                    /* try { // try from 025e7358 to 026e735b has its CatchHandler @ 025e77ec */
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025e736c to 026e7373 has its CatchHandler @ 025e7804 */
    uVar4 = Localization__Get_252dbe0(param_2,0);
    if (lVar3 != 0) {
      System_Text_StringBuilder__Append_2f84430(lVar3,uVar4,0);
                    /* try { // try from 025e7388 to 026e738b has its CatchHandler @ 025e77dc */
      *param_4 = *param_4 + 1;
      return;
    }
  }
LAB_025e73a4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

