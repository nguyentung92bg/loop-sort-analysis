/* IL2CPP: HomeSceneDisc$$SetTexture
void HomeSceneDisc__SetTexture (HomeSceneDisc_o* __this, UnityEngine_Texture_o* texture, UnityEngine_Rect_o uvRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneDisc$$SetTexture
   void HomeSceneDisc__SetTexture (HomeSceneDisc_o* __this, UnityEngine_Texture_o* texture,
   UnityEngine_Rect_o uvRect, const MethodInfo* method); */

void HomeSceneDisc__SetTexture_241f858
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6)

{
  param_5[0x1c] = param_6;
  thunk_FUN_021f190c();
  *(undefined4 *)(param_5 + 0x1d) = param_1;
  *(undefined4 *)((long)param_5 + 0xec) = param_2;
  *(undefined4 *)(param_5 + 0x1e) = param_3;
  *(undefined4 *)((long)param_5 + 0xf4) = param_4;
  (**(code **)(*param_5 + 0x308))(param_5,*(undefined8 *)(*param_5 + 0x310));
                    /* catch() { ... } // from try @ 0251f910 with catch @ 0251f8a8
                       catch() { ... } // from try @ 0251f980 with catch @ 0251f8a8 */
                    /* WARNING: Could not recover jumptable at 0x0251f8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x2f8))(param_5,*(undefined8 *)(*param_5 + 0x300));
  return;
}

