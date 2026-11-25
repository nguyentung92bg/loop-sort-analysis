/* IL2CPP: Conveyor$$ClipMesh
void Conveyor__ClipMesh (Conveyor_o* __this, double percent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$ClipMesh
   void Conveyor__ClipMesh (Conveyor_o* __this, double percent, const MethodInfo* method); */

void Conveyor__ClipMesh_24b0468(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  double dVar5;
  
  *(double *)(param_2 + 0x170) = param_1;
                    /* try { // try from 025b047c to 026b0487 has its CatchHandler @ 025b04f0 */
  lVar2 = Conveyor__get_AutoCount_24b03e4();
  if (lVar2 != 0) {
    plVar4 = *(long **)(param_2 + 0xc0);
    *(double *)(lVar2 + 0x38) = param_1;
    if (plVar4 != (long *)0x0) {
      if ((double)plVar4[0x1d] == param_1) {
        return;
      }
      *(float *)((long)plVar4 + 0xf4) = (float)(double)plVar4[0x1d];
      dVar5 = (double)Dreamteck_DMath__Clamp01_237ba2c(0,0);
      plVar4[0x1d] = (long)dVar5;
      if (dVar5 < (double)plVar4[0x1c]) {
        if (plVar4[5] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar1 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0(plVar4[5],0);
        if ((uVar1 & 1) == 0) {
          plVar4[0x1c] = plVar4[0x1d];
        }
      }
      uVar3 = *(undefined8 *)(*plVar4 + 0x220);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x218);
      *(undefined1 *)((long)plVar4 + 0x101) = 1;
                    /* WARNING: Could not recover jumptable at 0x0245ad40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar4,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

