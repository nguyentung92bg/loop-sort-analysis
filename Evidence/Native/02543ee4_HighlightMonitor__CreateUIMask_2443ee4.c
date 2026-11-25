/* IL2CPP: HighlightMonitor$$CreateUIMask
void HighlightMonitor__CreateUIMask (HighlightMonitor_o* __this, UnityEngine_Vector3_o worldPoint, UnityEngine_Vector2_o size, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HighlightMonitor$$CreateUIMask
   void HighlightMonitor__CreateUIMask (HighlightMonitor_o* __this, UnityEngine_Vector3_o
   worldPoint, UnityEngine_Vector2_o size, UnityEngine_Vector2_o offset, const MethodInfo* method);
    */

void HighlightMonitor__CreateUIMask_2443ee4
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,float param_6,float param_7,long param_8)

{
  float fVar1;
  long lStack_58;
  
  if ((bRam0000000004f4b858 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4198);
    bRam0000000004f4b858 = 1;
  }
  HighlightMonitor__ShowMask_2443fe8(_UNK_013aa4f4,param_8);
  if (*(long *)(param_8 + 0xa0) != 0) {
    StatefulUI_Runtime_Core_ContainerView__AddInstance___Il2CppFullySharedGenericType__25c841c
              (*(long *)(param_8 + 0xa0),&lStack_58,*(undefined8 *)PTR_DAT_049c4198);
    MonitorBase__WorldToCanvasSpace_256cc8c(param_1,param_2,param_3,param_8,lStack_58,0);
    if (lStack_58 != 0) {
      fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lStack_58,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (param_6 + fVar1,param_7 + param_2,lStack_58,0);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(param_4,param_5,lStack_58,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

