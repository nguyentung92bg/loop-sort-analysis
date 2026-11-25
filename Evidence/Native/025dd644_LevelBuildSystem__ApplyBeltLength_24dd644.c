/* IL2CPP: LevelBuildSystem$$ApplyBeltLength
void LevelBuildSystem__ApplyBeltLength (LevelBuildSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelBuildSystem$$ApplyBeltLength
   void LevelBuildSystem__ApplyBeltLength (LevelBuildSystem_o* __this, const MethodInfo* method); */

void LevelBuildSystem__ApplyBeltLength_24dd644(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  double dVar6;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    if (*(float *)(*(long *)(param_1 + 0x90) + 0x38) <= 0.0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      dVar6 = (double)Dreamteck_Splines_SplineComputer__Travel_2349410
                                (0,*(long *)(param_1 + 0x38),1,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        Conveyor__SetEndPercent_24b03dc(*(long *)(param_1 + 0x48),0);
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar3 != 0) {
          *(double *)(lVar3 + 0x170) = dVar6;
          lVar2 = Conveyor__get_AutoCount_24b03e4(lVar3,0);
          if (lVar2 != 0) {
            plVar5 = *(long **)(lVar3 + 0xc0);
            *(double *)(lVar2 + 0x38) = dVar6;
            if (plVar5 != (long *)0x0) {
              if ((double)plVar5[0x1d] == dVar6) {
                return;
              }
              *(float *)((long)plVar5 + 0xf4) = (float)(double)plVar5[0x1d];
              dVar6 = (double)Dreamteck_DMath__Clamp01_237ba2c(0,0);
              plVar5[0x1d] = (long)dVar6;
              if (dVar6 < (double)plVar5[0x1c]) {
                if (plVar5[5] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                uVar1 = Dreamteck_Splines_SplineComputer__get_isClosed_23467e0(plVar5[5],0);
                if ((uVar1 & 1) == 0) {
                  plVar5[0x1c] = plVar5[0x1d];
                }
              }
              uVar4 = *(undefined8 *)(*plVar5 + 0x220);
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x218);
              *(undefined1 *)((long)plVar5 + 0x101) = 1;
                    /* WARNING: Could not recover jumptable at 0x0245ad40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar5,uVar4);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

