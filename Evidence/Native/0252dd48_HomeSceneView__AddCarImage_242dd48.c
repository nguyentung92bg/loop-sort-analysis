/* IL2CPP: HomeSceneView$$AddCarImage
UnityEngine_UI_Image_o* HomeSceneView__AddCarImage (UnityEngine_RectTransform_o* parent, System_String_o* name, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$AddCarImage
   UnityEngine_UI_Image_o* HomeSceneView__AddCarImage (UnityEngine_RectTransform_o* parent,
   System_String_o* name, UnityEngine_Sprite_o* sprite, const MethodInfo* method); */

long * HomeSceneView__AddCarImage_242dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7be & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3148);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7be = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(param_2,param_1);
  HomeSceneView__Stretch_242881c();
  if (((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0), lVar3 != 0))
     && (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                    (lVar3,*(undefined8 *)PTR_DAT_049c3148),
        puVar1 = PTR_DAT_049b3b98, plVar4 != (long *)0x0)) {
    UnityEngine_UI_Image__set_sprite_3cee6e8(plVar4,param_3,0);
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(param_3,0,0);
    UnityEngine_Behaviour__set_enabled_3c17eec(plVar4,uVar2 & 1,0);
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

