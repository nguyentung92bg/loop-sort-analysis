/* IL2CPP: Extensions$$TravelUnclamped
double Extensions__TravelUnclamped (Dreamteck_Splines_SplineComputer_o* s, double start, float distance, int32_t direction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$TravelUnclamped
   double Extensions__TravelUnclamped (Dreamteck_Splines_SplineComputer_o* s, double start, float
   distance, int32_t direction, const MethodInfo* method); */

undefined8
Extensions__TravelUnclamped_24e666c(undefined8 param_1,float param_2,long param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fStack_34;
  
  fVar1 = _UNK_013aa688;
                    /* try { // try from 025e667c to 026e667f has its CatchHandler @ 025e6684 */
                    /* catch() { ... } // from try @ 025e667c with catch @ 025e6684 */
  fStack_34 = 0.0;
                    /* try { // try from 025e6688 to 026e668f has its CatchHandler @ 025e6698 */
                    /* try { // try from 025e6690 to 026e669b has its CatchHandler @ 025e618c */
  if (_UNK_013aa688 < param_2) {
                    /* catch() { ... } // from try @ 025e661c with catch @ 025e6698
                       catch() { ... } // from try @ 025e665c with catch @ 025e6698
                       catch() { ... } // from try @ 025e6688 with catch @ 025e6698 */
                    /* try { // try from 025e669c to 026e681f has its CatchHandler @ 025e669c
                       catch() { ... } // from try @ 025e669c with catch @ 025e669c
                       catch() { ... } // from try @ 025e688c with catch @ 025e669c
                       catch() { ... } // from try @ 025e68c8 with catch @ 025e669c
                       catch() { ... } // from try @ 025e6904 with catch @ 025e669c
                       catch() { ... } // from try @ 025e6938 with catch @ 025e669c
                       catch() { ... } // from try @ 025e6964 with catch @ 025e669c */
    uVar3 = 0;
    if (param_4 != 1) {
      uVar3 = 0x3ff0000000000000;
    }
    uVar2 = param_1;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    do {
      param_1 = Dreamteck_Splines_SplineComputer__Travel_23493b4
                          (uVar2,param_2,param_3,&fStack_34,param_4,0);
      param_2 = param_2 - fStack_34;
      uVar2 = uVar3;
    } while (fVar1 < param_2);
  }
  return param_1;
}

