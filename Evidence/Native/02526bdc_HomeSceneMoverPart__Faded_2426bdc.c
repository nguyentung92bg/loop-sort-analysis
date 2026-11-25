/* IL2CPP: HomeSceneMoverPart$$Faded
UnityEngine_UI_RawImage_o* HomeSceneMoverPart__Faded (UnityEngine_RectTransform_o* parent, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_array* stops, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMoverPart$$Faded
   UnityEngine_UI_RawImage_o* HomeSceneMoverPart__Faded (UnityEngine_RectTransform_o* parent,
   System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_array* stops, const
   MethodInfo* method); */

long * HomeSceneMoverPart__Faded_2426bdc
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b79d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c33d0);
                    /* try { // try from 02526c2c to 02626c37 has its CatchHandler @ 02526d80 */
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b79d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02526c4c to 02626c6b has its CatchHandler @ 02526d84 */
    FUN_021f0574();
  }
  lVar2 = HomeSceneView__CreateNode_2426d00(param_6,param_5);
                    /* try { // try from 02526c7c to 02626c83 has its CatchHandler @ 02526d88 */
  if (((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0))
     && (plVar3 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                    (lVar2,*(undefined8 *)PTR_DAT_049c33d0), plVar3 != (long *)0x0))
  {
    plVar3[0x1e] = param_7;
    thunk_FUN_021f190c(plVar3 + 0x1e,param_7);
    uVar4 = HomeSceneShapes__get_Foam_2426ea0();
    UnityEngine_UI_RawImage__set_texture_3edced0(plVar3,uVar4,0);
                    /* try { // try from 02526ca8 to 02626ce3 has its CatchHandler @ 02526d8c */
    (**(code **)(*plVar3 + 0x2a8))
              (param_1,param_2,param_3,param_4,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
                    /* try { // try from 02526ce4 to 02626d53 has its CatchHandler @ 0252661c */
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

