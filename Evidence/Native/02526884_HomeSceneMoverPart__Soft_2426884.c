/* IL2CPP: HomeSceneMoverPart$$Soft
UnityEngine_UI_RawImage_o* HomeSceneMoverPart__Soft (UnityEngine_RectTransform_o* parent, System_String_o* name, float x, float y, float w, float h, UnityEngine_Color_o color, UnityEngine_Vector2_o pivot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMoverPart$$Soft
   UnityEngine_UI_RawImage_o* HomeSceneMoverPart__Soft (UnityEngine_RectTransform_o* parent,
   System_String_o* name, float x, float y, float w, float h, UnityEngine_Color_o color,
   UnityEngine_Vector2_o pivot, const MethodInfo* method); */

long HomeSceneMoverPart__Soft_2426884
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9,
               undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fStack0000000000000000;
  float fStack0000000000000004;
  
                    /* try { // try from 025268ac to 026268af has its CatchHandler @ 02526da4 */
                    /* try { // try from 025268b4 to 026268bb has its CatchHandler @ 02526dec */
  uVar1 = HomeSceneShapes__get_SoftDisc_242699c();
                    /* try { // try from 025268d8 to 026268db has its CatchHandler @ 02526d9c */
  lVar2 = HomeSceneShapes__Add_2426acc(param_5,param_6,param_7,param_8,param_9,param_10,uVar1);
                    /* try { // try from 025268f8 to 0262694b has its CatchHandler @ 02526e48 */
  if ((lVar2 != 0) &&
     (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar2,0), lVar3 != 0)) {
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_pivot_3c2c28c
              (fStack0000000000000000,fStack0000000000000004,lVar3,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fStack0000000000000000 * param_3 + param_1,
               -((1.0 - fStack0000000000000004) * param_4 + param_2),lVar3,0);
                    /* try { // try from 02526970 to 02626977 has its CatchHandler @ 02526d98 */
    UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(param_3,param_4,lVar3,0);
                    /* try { // try from 0252697c to 02626987 has its CatchHandler @ 02526dfc */
                    /* try { // try from 02526994 to 0262699b has its CatchHandler @ 02526dcc */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

