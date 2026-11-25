/* IL2CPP: Extensions$$Angle
float Extensions__Angle (Dreamteck_Splines_SplineComputer_o* s, double from, double to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$Angle
   float Extensions__Angle (Dreamteck_Splines_SplineComputer_o* s, double from, double to, const
   MethodInfo* method); */

float Extensions__Angle_24e6818(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
                    /* try { // try from 025e6820 to 026e6827 has its CatchHandler @ 025e6914 */
  if (param_3 != 0) {
                    /* try { // try from 025e6840 to 026e688b has its CatchHandler @ 025e6918 */
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(auStack_90,param_3,0);
    fVar2 = fStack_70;
    fVar7 = fStack_74;
    fVar6 = fStack_78;
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(auStack_90,param_2,param_3,0);
    if (cRam0000000004f4a5db == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a5db = '\x01';
    }
    puVar1 = PTR_DAT_049b8758;
                    /* try { // try from 025e688c to 026e68ab has its CatchHandler @ 025e669c */
                    /* try { // try from 025e68ac to 026e68af has its CatchHandler @ 025e6904 */
                    /* try { // try from 025e68c0 to 026e68c7 has its CatchHandler @ 025e6910 */
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                    /* try { // try from 025e68c8 to 026e68fb has its CatchHandler @ 025e669c */
      FUN_021f0574();
    }
    fVar5 = SQRT((fVar2 * fVar2 + fVar6 * fVar6 + fVar7 * fVar7) *
                 (fStack_70 * fStack_70 + fStack_78 * fStack_78 + fStack_74 * fStack_74));
    fVar3 = 0.0;
    if (_UNK_013aa374 <= fVar5) {
                    /* try { // try from 025e68fc to 026e68ff has its CatchHandler @ 025e690c */
                    /* try { // try from 025e6900 to 026e6903 has its CatchHandler @ 025e6908 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e68ac with catch @ 025e6904
                       try { // try from 025e6904 to 026e6933 has its CatchHandler @ 025e669c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6900 with catch @ 025e6908
                        */
      fVar5 = (fVar2 * fStack_70 + fVar6 * fStack_78 + fVar7 * fStack_74) / fVar5;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e68fc with catch @ 025e690c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e68c0 with catch @ 025e6910
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6820 with catch @ 025e6914
                        */
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025e6840 with catch @ 025e6918
                        */
      fVar7 = -1.0;
      if (-1.0 <= fVar5) {
        fVar7 = fVar6;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      dVar4 = (double)FUN_046086c0((double)fVar7);
                    /* try { // try from 025e6934 to 026e6937 has its CatchHandler @ 025e6958 */
                    /* try { // try from 025e6938 to 026e695b has its CatchHandler @ 025e669c */
      fVar3 = (float)dVar4 * _UNK_013aa654;
    }
                    /* catch() { ... } // from try @ 025e6934 with catch @ 025e6958 */
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e695c to 026e6963 has its CatchHandler @ 025e696c */
  FUN_021f06a0();
}

