/* IL2CPP: ConveyorArrowSystem$$Extend
void ConveyorArrowSystem__Extend (ConveyorArrowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorArrowSystem$$Extend
   void ConveyorArrowSystem__Extend (ConveyorArrowSystem_o* __this, const MethodInfo* method); */

void ConveyorArrowSystem__Extend_24b1b94(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000004f4bb68 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6b70);
    bRam0000000004f4bb68 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    fVar4 = (float)Conveyor__get_ActiveLength_24b03a0();
    if (*(long *)(param_1 + 0x30) != 0) {
      fVar5 = *(float *)(*(long *)(param_1 + 0x30) + 0x48);
      if (cRam0000000004f49d58 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f49d58 = '\x01';
      }
      fVar4 = fVar4 / fVar5;
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar2 = -0x7fffffff;
      if ((float)(int)fVar4 != INFINITY) {
        iVar2 = (int)fVar4 + 1;
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
        if (iVar3 < iVar2) {
          do {
            plVar1 = (long *)ConveyorArrowSystem__RentArrow_24b1ce8(param_1,0);
            if (plVar1 == (long *)0x0) goto LAB_025b1ce4;
            (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
            if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0))
            goto LAB_025b1ce4;
            Dreamteck_Splines_SplineComputer__Travel_2349410
                      (0,*(float *)(param_1 + 100) +
                         *(float *)(*(long *)(param_1 + 0x30) + 0x48) * (float)iVar3,
                       *(long *)(param_1 + 0x38),1,0);
            (**(code **)(*plVar1 + 0x2e8))(plVar1,0,0,*(undefined8 *)(*plVar1 + 0x2f0));
            iVar3 = iVar3 + 1;
          } while (iVar2 != iVar3);
        }
        return;
      }
    }
  }
LAB_025b1ce4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

