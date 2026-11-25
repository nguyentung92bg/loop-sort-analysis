/* IL2CPP: HomeSceneFxRunner.CloudShadow$$.ctor
void HomeSceneFxRunner_CloudShadow___ctor (HomeSceneFxRunner_CloudShadow_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.CloudShadow$$.ctor
   void HomeSceneFxRunner_CloudShadow___ctor (HomeSceneFxRunner_CloudShadow_o* __this,
   HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_CloudShadow___ctor_24214b4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_049c3158;
  if ((bRam0000000004f4b784 & 1) == 0) {
                    /* try { // try from 025214ec to 026214fb has its CatchHandler @ 025212b4 */
    FUN_021f03f8(PTR_DAT_049c3110);
                    /* try { // try from 025214fc to 02621503 has its CatchHandler @ 025217bc */
    FUN_021f03f8(PTR_DAT_049c3158);
    bRam0000000004f4b784 = 1;
  }
  System_Object___ctor_3142338(param_1,0);
                    /* try { // try from 0252151c to 02621567 has its CatchHandler @ 02521744 */
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0x10),param_2);
  uVar2 = HomeSceneShapes__get_SoftDisc_242699c(0);
  lVar3 = HomeSceneShapes__Add_2426acc
                    (_UNK_013aa468,_UNK_013aa83c,_UNK_013aa97c,_UNK_013aa62c,param_3,
                     *(undefined8 *)puVar1,uVar2,0);
  if (lVar3 != 0) {
                    /* try { // try from 02521568 to 0262157b has its CatchHandler @ 025212b4 */
    lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0);
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = lVar3;
    thunk_FUN_021f190c(plVar5,lVar3);
                    /* try { // try from 0252157c to 02621587 has its CatchHandler @ 02521680 */
    if (param_2 != 0) {
      uVar6 = *(undefined4 *)(param_2 + 0x8c);
      fVar7 = *(float *)(param_2 + 0x90);
                    /* try { // try from 02521590 to 02621597 has its CatchHandler @ 0252167c */
      lVar3 = *plVar5;
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 025215b4 to 026215bb has its CatchHandler @ 02521670 */
                    /* try { // try from 025215cc to 026215d3 has its CatchHandler @ 02521664 */
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(0,0);
      }
      UnityEngine_RectTransform__set_pivot_3c2c28c(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(uVar6,-fVar7,lVar3,0);
      if ((bRam0000000004f58962 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26c78,0);
        bRam0000000004f58962 = 1;
      }
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
        }
        if (pcRam0000000004f589b8 == (code *)0x0) {
          pcRam0000000004f589b8 = (code *)FUN_021f03bc(&UNK_013d4c25);
        }
        (*pcRam0000000004f589b8)(lVar4,&stack0xffffffffffffffe8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

