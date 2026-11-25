/* IL2CPP: ConveyorBlock$$HandleClosedSpline
void ConveyorBlock__HandleClosedSpline (ConveyorBlock_o* __this, Dreamteck_Splines_SplineComputer_o* spline, double* from, double* to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ConveyorBlock$$HandleClosedSpline
   void ConveyorBlock__HandleClosedSpline (ConveyorBlock_o* __this,
   Dreamteck_Splines_SplineComputer_o* spline, double* from, double* to, const MethodInfo* method);
    */

void ConveyorBlock__HandleClosedSpline_24b261c
               (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  double dVar2;
  float fVar3;
  
  if (param_2 != 0) {
    uVar1 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0(param_2,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_025b26cc;
      fVar3 = *(float *)(*(long *)(param_1 + 0xa8) + 0x138) + _UNK_013aa810;
      dVar2 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410
                                (*param_3,fVar3,param_2,0xffffffff,0);
      if (dVar2 <= 0.0) {
        *param_3 = 0;
      }
      dVar2 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410(*param_4,fVar3,param_2,1,0);
      if (1.0 <= dVar2) {
        *param_4 = 0x3ff0000000000000;
      }
    }
    return;
  }
LAB_025b26cc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

