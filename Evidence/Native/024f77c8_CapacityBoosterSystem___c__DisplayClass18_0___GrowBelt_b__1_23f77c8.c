/* IL2CPP: CapacityBoosterSystem.<>c__DisplayClass18_0$$<GrowBelt>b__1
void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__1 (CapacityBoosterSystem___c__DisplayClass18_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CapacityBoosterSystem.<>c__DisplayClass18_0$$<GrowBelt>b__1
   void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__1
   (CapacityBoosterSystem___c__DisplayClass18_0_o* __this, float x, const MethodInfo* method); */

void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__1_23f77c8(float param_1,long param_2)

{
  long lVar1;
  double dVar2;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  
  if ((*(long *)(param_2 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x68), lVar1 != 0)) {
    dVar2 = *(double *)(param_2 + 0x20) +
            (*(double *)(param_2 + 0x28) - *(double *)(param_2 + 0x20)) * (double)param_1;
    Conveyor__GrowMesh_24b04ac(dVar2,lVar1,0);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x88), lVar1 != 0)) {
      ConveyorEndMeshSystem__MoveEnd_24b2eb0(dVar2,lVar1,0);
      if ((*(long *)(param_2 + 0x18) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x70), lVar1 != 0)) {
        Dreamteck_Splines_SplineComputer__Evaluate_2349114(&uStack_70,dVar2,lVar1,0);
        if (*(long *)(param_2 + 0x10) != 0) {
          lVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_2 + 0x10),0);
          if (lVar1 != 0) {
            UnityEngine_Transform__set_position_3c2d61c
                      (uStack_70,fStack_6c + -0.5,uStack_68,lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

