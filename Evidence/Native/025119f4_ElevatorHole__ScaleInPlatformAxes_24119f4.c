/* IL2CPP: ElevatorHole$$ScaleInPlatformAxes
UnityEngine_Vector3_o ElevatorHole__ScaleInPlatformAxes (ElevatorHole_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$ScaleInPlatformAxes
   UnityEngine_Vector3_o ElevatorHole__ScaleInPlatformAxes (ElevatorHole_o* __this,
   UnityEngine_Vector3_o scale, const MethodInfo* method); */

void ElevatorHole__ScaleInPlatformAxes_24119f4
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = UnityEngine_Component__get_transform_3c18724(param_5,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__get_rotation_3c2d7a8(lVar3,0);
    fVar4 = (float)UnityEngine_Quaternion__Inverse_3c09acc(0);
    if (*(long *)(param_5 + 0xa8) != 0) {
      fVar6 = param_2;
      fVar8 = param_4;
      fVar7 = param_3;
      fVar5 = (float)UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(param_5 + 0xa8),0);
      fVar9 = (param_2 * fVar7 + param_4 * fVar5 + fVar4 * fVar8) - param_3 * fVar6;
      fVar10 = (param_3 * fVar5 + param_4 * fVar6 + param_2 * fVar8) - fVar4 * fVar7;
      fVar11 = (fVar4 * fVar6 + param_4 * fVar7 + param_3 * fVar8) - param_2 * fVar5;
      fVar4 = ((param_4 * fVar8 - fVar4 * fVar5) - param_2 * fVar6) - param_3 * fVar7;
      if (cRam0000000004f4a632 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
      }
      puVar2 = PTR_DAT_049bbf90;
      lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      UnityEngine_Quaternion__op_Multiply_3c0a3d8
                (fVar9,fVar10,fVar11,fVar4,*(undefined4 *)(lVar3 + 0x3c),
                 *(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x44),0);
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      puVar1 = PTR_DAT_049b8758;
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
      UnityEngine_Quaternion__op_Multiply_3c0a3d8
                (fVar9,fVar10,fVar11,fVar4,*(undefined4 *)(lVar3 + 0x18),
                 *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),0);
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
      UnityEngine_Quaternion__op_Multiply_3c0a3d8
                (fVar9,fVar10,fVar11,fVar4,*(undefined4 *)(lVar3 + 0x48),
                 *(undefined4 *)(lVar3 + 0x4c),*(undefined4 *)(lVar3 + 0x50),0);
                    /* try { // try from 02511c44 to 02611ee7 has its CatchHandler @ 02511c44
                       catch() { ... } // from try @ 02511c44 with catch @ 02511c44
                       catch() { ... } // from try @ 02511ef0 with catch @ 02511c44
                       catch() { ... } // from try @ 0251200c with catch @ 02511c44
                       catch() { ... } // from try @ 025120f4 with catch @ 02511c44 */
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

