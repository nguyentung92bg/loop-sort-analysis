/* IL2CPP: HomeSceneShimmer$$Band
HomeSceneQuad_o* HomeSceneShimmer__Band (UnityEngine_RectTransform_o* parent, UnityEngine_Rect_o rect, UnityEngine_Texture_o* texture, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShimmer$$Band
   HomeSceneQuad_o* HomeSceneShimmer__Band (UnityEngine_RectTransform_o* parent, UnityEngine_Rect_o
   rect, UnityEngine_Texture_o* texture, const MethodInfo* method); */

long * HomeSceneShimmer__Band_242ece4
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3038);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c37c8);
    bRam0000000004f4b7cd = 1;
  }
  puVar2 = PTR_DAT_049c37c8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_5);
  HomeSceneView__Place_2427788(param_1,param_2,param_3,param_4);
  if (((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0), lVar3 != 0))
     && (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                    (lVar3,*(undefined8 *)PTR_DAT_049c32d0),
        puVar1 = PTR_DAT_049c3038, plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    plVar4[0x1d] = **(long **)(lVar3 + 0xb8);
    thunk_FUN_021f190c();
    HomeSceneQuad__SetTexture_2429bd4(0,0,0x3f800000,0x3f800000,plVar4,param_6);
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

