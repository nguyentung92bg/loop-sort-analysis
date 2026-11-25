/* IL2CPP: ConveyorEndMeshSystem$$MoveEnd
void ConveyorEndMeshSystem__MoveEnd (ConveyorEndMeshSystem_o* __this, double percent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorEndMeshSystem$$MoveEnd
   void ConveyorEndMeshSystem__MoveEnd (ConveyorEndMeshSystem_o* __this, double percent, const
   MethodInfo* method); */

void ConveyorEndMeshSystem__MoveEnd_24b2eb0(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s3;
  float fVar9;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    Dreamteck_Splines_SplineComputer__Evaluate_2349114(&uStack_c0,*(long *)(param_1 + 0x40),0);
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    if (*(long *)(param_1 + 0x60) != 0) {
      fVar5 = (float)(uStack_c0 >> 0x20);
      fVar7 = (float)uStack_b8;
      UnityEngine_Transform__set_position_3c2d61c
                (uStack_c0 & 0xffffffff,uStack_c0 >> 0x20,uStack_b8 & 0xffffffff,
                 *(long *)(param_1 + 0x60),0);
      lVar2 = *(long *)(param_1 + 0x60);
      fVar3 = (float)Dreamteck_Splines_SplineSample__get_rotation_23697d0(&uStack_80,0);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar1 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar6 = *(float *)(lVar1 + 0x18);
      fVar8 = *(float *)(lVar1 + 0x1c);
      fVar9 = *(float *)(lVar1 + 0x20);
      fVar4 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x43340000,fVar6,fVar8,fVar9,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__set_rotation_3c2d86c
                  ((fVar5 * fVar8 + in_s3 * fVar4 + fVar3 * fVar9) - fVar7 * fVar6,
                   (fVar7 * fVar4 + in_s3 * fVar6 + fVar5 * fVar9) - fVar3 * fVar8,
                   (fVar3 * fVar6 + in_s3 * fVar8 + fVar7 * fVar9) - fVar5 * fVar4,
                   ((in_s3 * fVar9 - fVar3 * fVar4) - fVar5 * fVar6) - fVar7 * fVar8,lVar2,0);
                    /* catch() { ... } // from try @ 025b3030 with catch @ 025b3000
                       catch() { ... } // from try @ 025b3060 with catch @ 025b3000
                       catch() { ... } // from try @ 025b3094 with catch @ 025b3000
                       catch() { ... } // from try @ 025b3140 with catch @ 025b3000 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

