/* IL2CPP: HomeSceneShapes$$Add
UnityEngine_UI_RawImage_o* HomeSceneShapes__Add (UnityEngine_RectTransform_o* parent, System_String_o* name, UnityEngine_Texture2D_o* texture, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$Add
   UnityEngine_UI_RawImage_o* HomeSceneShapes__Add (UnityEngine_RectTransform_o* parent,
   System_String_o* name, UnityEngine_Texture2D_o* texture, UnityEngine_Color_o color, const
   MethodInfo* method); */

long * HomeSceneShapes__Add_2426acc
                 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_049c3110;
                    /* try { // try from 02526ad0 to 02626ad7 has its CatchHandler @ 02526db4 */
                    /* try { // try from 02526ae4 to 02626aef has its CatchHandler @ 02526dd8 */
                    /* try { // try from 02526af4 to 02626aff has its CatchHandler @ 02526dd4 */
  if ((bRam0000000004f4b7aa & 1) == 0) {
                    /* try { // try from 02526b18 to 02626b27 has its CatchHandler @ 02526e44 */
    FUN_021f03f8(PTR_DAT_049c3318);
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b7aa = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = HomeSceneView__CreateNode_2426d00(param_6,param_5);
                    /* try { // try from 02526b4c to 02626b53 has its CatchHandler @ 02526ddc */
  if (((lVar2 != 0) && (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0))
     && (plVar3 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                    (lVar2,*(undefined8 *)PTR_DAT_049c3318), plVar3 != (long *)0x0))
  {
                    /* try { // try from 02526b74 to 02626b83 has its CatchHandler @ 02526df4 */
    UnityEngine_UI_RawImage__set_texture_3edced0(plVar3,param_7,0);
                    /* try { // try from 02526b9c to 02626ba7 has its CatchHandler @ 02526de8 */
    (**(code **)(*plVar3 + 0x2a8))
              (param_1,param_2,param_3,param_4,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    (**(code **)(*plVar3 + 0x2c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x2d0));
                    /* try { // try from 02526bd0 to 02626c0f has its CatchHandler @ 02526fec */
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

