/* IL2CPP: Extensions$$DistanceTo
float Extensions__DistanceTo (UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$DistanceTo
   float Extensions__DistanceTo (UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const
   MethodInfo* method); */

float Extensions__DistanceTo_3f0c634
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam0000000004f5c3ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f5c3ce = 1;
  }
  if ((param_4 != 0) &&
     (fVar2 = (float)UnityEngine_Transform__get_position_3c2d540(param_4,0),
     puVar1 = PTR_DAT_049b5480, param_5 != 0)) {
    fVar4 = param_2;
    fVar5 = param_3;
    fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(param_5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f4a234 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a234 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    return SQRT((param_3 - fVar5) * (param_3 - fVar5) +
                (fVar2 - fVar3) * (fVar2 - fVar3) + (param_2 - fVar4) * (param_2 - fVar4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

