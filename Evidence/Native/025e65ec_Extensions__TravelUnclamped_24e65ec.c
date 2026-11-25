/* IL2CPP: Extensions$$TravelUnclamped
double Extensions__TravelUnclamped (Dreamteck_Splines_SplineFollower_o* f, double start, float distance, int32_t direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$TravelUnclamped
   double Extensions__TravelUnclamped (Dreamteck_Splines_SplineFollower_o* f, double start, float
   distance, int32_t direction, const MethodInfo* method); */

undefined1  [16]
Extensions__TravelUnclamped_24e65ec(ulong param_1,float param_2,long param_3,int param_4)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  float fStack_34;
  
                    /* try { // try from 025e6608 to 026e660b has its CatchHandler @ 025e6614 */
  if ((bRam0000000004f4bc8c & 1) == 0) {
                    /* catch() { ... } // from try @ 025e6608 with catch @ 025e6614 */
                    /* try { // try from 025e661c to 026e6623 has its CatchHandler @ 025e6698 */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 025e6624 to 026e6647 has its CatchHandler @ 025e618c */
    bRam0000000004f4bc8c = 1;
  }
                    /* catch() { ... } // from try @ 025e6374 with catch @ 025e6628 */
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *(long *)(param_3 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025e6648 to 026e664b has its CatchHandler @ 025e6654 */
  fVar1 = _UNK_013aa688;
  fStack_34 = 0.0;
                    /* catch() { ... } // from try @ 025e6648 with catch @ 025e6654 */
                    /* try { // try from 025e665c to 026e6663 has its CatchHandler @ 025e6698 */
                    /* try { // try from 025e6664 to 026e667b has its CatchHandler @ 025e618c */
  if (_UNK_013aa688 < param_2) {
    uVar5 = 0;
    if (param_4 != 1) {
      uVar5 = 0x3ff0000000000000;
    }
    uVar3 = param_1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(param_1);
    }
    do {
      param_1 = Dreamteck_Splines_SplineComputer__Travel_23493b4
                          (uVar3,param_2,lVar2,&fStack_34,param_4,0);
      param_2 = param_2 - fStack_34;
      uVar3 = uVar5;
    } while (fVar1 < param_2);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

