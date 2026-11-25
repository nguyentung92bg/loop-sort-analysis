/* IL2CPP: HomeSceneView$$CreateClip
UnityEngine_RectTransform_o* HomeSceneView__CreateClip (HomeSceneView_o* __this, UnityEngine_RectTransform_o* group, UnityEngine_Rect_o clip, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$CreateClip
   UnityEngine_RectTransform_o* HomeSceneView__CreateClip (HomeSceneView_o* __this,
   UnityEngine_RectTransform_o* group, UnityEngine_Rect_o clip, const MethodInfo* method); */

long HomeSceneView__CreateClip_242d098
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3698);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c36a0);
    FUN_021f03f8(PTR_DAT_049c36a8);
    bRam0000000004f4b7ba = 1;
  }
  puVar2 = PTR_DAT_049c36a8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_6);
  HomeSceneView__Place_2427788(param_1,param_2,param_3,param_4);
  if ((lVar3 != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0), puVar1 = PTR_DAT_049c36a0,
     lVar4 != 0)) {
    UnityEngine_GameObject__AddComponent_object__261a774(lVar4,*(undefined8 *)PTR_DAT_049c3698);
    lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar1,lVar3);
    if (lVar3 != 0) {
      UnityEngine_RectTransform__set_pivot_3c2c28c(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(-param_1,param_2,lVar3,0);
      lVar4 = *(long *)(param_5 + 0x40);
      if (lVar4 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                  (*(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),lVar3,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

