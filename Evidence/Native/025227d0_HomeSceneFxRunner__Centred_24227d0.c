/* IL2CPP: HomeSceneFxRunner$$Centred
UnityEngine_RectTransform_o* HomeSceneFxRunner__Centred (UnityEngine_UI_RawImage_o* image, float x, float y, float w, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner$$Centred
   UnityEngine_RectTransform_o* HomeSceneFxRunner__Centred (UnityEngine_UI_RawImage_o* image, float
   x, float y, float w, float h, const MethodInfo* method); */

long HomeSceneFxRunner__Centred_24227d0
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  
  if (param_5 != 0) {
    lVar1 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_5,0);
    if (lVar1 != 0) {
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar1,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar1,0);
      UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar1,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(param_1,-param_2,lVar1,0);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(param_3,param_4,lVar1,0);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

