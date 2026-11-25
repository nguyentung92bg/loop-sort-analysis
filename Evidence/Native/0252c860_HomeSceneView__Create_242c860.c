/* IL2CPP: HomeSceneView$$Create
HomeSceneView_o* HomeSceneView__Create (HomeSceneAsset_o* asset, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$Create
   HomeSceneView_o* HomeSceneView__Create (HomeSceneAsset_o* asset, UnityEngine_RectTransform_o*
   parent, const MethodInfo* method); */

long HomeSceneView__Create_242c860(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f4b7b7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1610);
    FUN_021f03f8(PTR_DAT_049c3618);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3620);
    bRam0000000004f4b7b7 = 1;
  }
  puVar2 = PTR_DAT_049c3620;
  puVar1 = PTR_DAT_049c3110;
  if (param_1 != 0) {
    uVar3 = UnityEngine_Object__get_name_3c232a8(param_1,0);
    uVar3 = System_String__Concat_2f72b28(*(undefined8 *)puVar2,uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    lVar4 = HomeSceneView__CreateNode_2426d00(uVar3,param_2);
    if (lVar4 != 0) {
      UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar4,0);
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0x3f000000,0x3f000000,lVar4,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0x3f000000,0x3f000000,lVar4,0);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),lVar4,0);
      lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
      if (lVar5 != 0) {
        UnityEngine_GameObject__AddComponent_object__261a774(lVar5,*(undefined8 *)PTR_DAT_049c1610);
        lVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
        if ((lVar5 != 0) &&
           (lVar5 = UnityEngine_GameObject__AddComponent_object__261a774
                              (lVar5,*(undefined8 *)PTR_DAT_049c3618), lVar5 != 0)) {
          HomeSceneView__Build_242c9cc(lVar5,param_1,lVar4);
          return lVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

