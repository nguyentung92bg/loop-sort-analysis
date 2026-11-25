/* IL2CPP: AreasMonitor$$GetHeightFromBottom
float AreasMonitor__GetHeightFromBottom (UnityEngine_RectTransform_o* parent, UnityEngine_RectTransform_o* child, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$GetHeightFromBottom
   float AreasMonitor__GetHeightFromBottom (UnityEngine_RectTransform_o* parent,
   UnityEngine_RectTransform_o* child, const MethodInfo* method); */

float AreasMonitor__GetHeightFromBottom_2436dbc
                (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  float fVar1;
  
  if ((param_4 != 0) && (UnityEngine_Transform__get_position_3c2d540(param_4,0), param_3 != 0)) {
    UnityEngine_Transform__InverseTransformPoint_3c2ed70(param_3,0);
    fVar1 = param_2;
    UnityEngine_RectTransform__get_rect_3c2ba98(param_3,0);
    return param_2 - fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

