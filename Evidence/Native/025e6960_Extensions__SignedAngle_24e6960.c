/* IL2CPP: Extensions$$SignedAngle
float Extensions__SignedAngle (Dreamteck_Splines_SplineComputer_o* s, double from, double to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$SignedAngle
   float Extensions__SignedAngle (Dreamteck_Splines_SplineComputer_o* s, double from, double to,
   const MethodInfo* method); */

void Extensions__SignedAngle_24e6960(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
                    /* try { // try from 025e6964 to 026e696f has its CatchHandler @ 025e669c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025e695c with catch @ 025e696c
                        */
                    /* try { // try from 025e6970 to 026e6ae7 has its CatchHandler @ 025e6970
                       catch() { ... } // from try @ 025e6970 with catch @ 025e6970
                       catch() { ... } // from try @ 025e6b54 with catch @ 025e6970
                       catch() { ... } // from try @ 025e6b90 with catch @ 025e6970
                       catch() { ... } // from try @ 025e6bcc with catch @ 025e6970
                       catch() { ... } // from try @ 025e6c00 with catch @ 025e6970
                       catch() { ... } // from try @ 025e6c2c with catch @ 025e6970 */
  if (param_3 != 0) {
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(auStack_80,param_3,0);
    uVar3 = uStack_60;
    uVar2 = uStack_64;
    uVar1 = uStack_68;
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(auStack_80,param_2,param_3,0);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    FUN_025bb780(uVar1,uVar2,uVar3,uStack_68,uStack_64,uStack_60,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

