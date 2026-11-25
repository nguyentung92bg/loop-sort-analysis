/* IL2CPP: HomeSceneFxRunner.Clock$$Hand
UnityEngine_RectTransform_o* HomeSceneFxRunner_Clock__Hand (UnityEngine_RectTransform_o* dial, UnityEngine_Color_o color, float width, float length, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Clock$$Hand
   UnityEngine_RectTransform_o* HomeSceneFxRunner_Clock__Hand (UnityEngine_RectTransform_o* dial,
   UnityEngine_Color_o color, float width, float length, const MethodInfo* method); */

long HomeSceneFxRunner_Clock__Hand_2423ea8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 02523ea8 to 02623eb3 has its CatchHandler @ 02524094 */
  puVar1 = PTR_DAT_049c3110;
                    /* try { // try from 02523eb8 to 02623ec3 has its CatchHandler @ 02524078 */
                    /* try { // try from 02523ec8 to 02623ed3 has its CatchHandler @ 02524074 */
                    /* try { // try from 02523ed8 to 02623ee3 has its CatchHandler @ 025240a0 */
  if ((bRam0000000004f4b790 & 1) == 0) {
                    /* try { // try from 02523ef4 to 02623efb has its CatchHandler @ 0252408c */
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c32d8);
                    /* try { // try from 02523f18 to 02623f1b has its CatchHandler @ 02524068 */
    bRam0000000004f4b790 = 1;
  }
  puVar2 = PTR_DAT_049c32d8;
                    /* try { // try from 02523f20 to 02623f4b has its CatchHandler @ 0252409c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_7,0);
  if (lVar3 != 0) {
                    /* try { // try from 02523f58 to 02623f63 has its CatchHandler @ 02524088 */
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0x3f000000,0x3f000000,lVar3,0);
                    /* try { // try from 02523f6c to 02623f77 has its CatchHandler @ 02524084 */
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0x3f000000,0x3f000000,lVar3,0);
    fVar9 = 0.0;
                    /* try { // try from 02523f7c to 02623f87 has its CatchHandler @ 025240a0 */
    UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0,lVar3,0);
    if (param_7 != 0) {
                    /* try { // try from 02523f88 to 02623fbf has its CatchHandler @ 02523dd4 */
      fVar8 = (float)UnityEngine_RectTransform__get_sizeDelta_3c2c02c(param_7,0);
      UnityEngine_RectTransform__get_sizeDelta_3c2c02c(param_7,0);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar8 * param_5,fVar9 * param_6,lVar3,0);
                    /* try { // try from 02523fc0 to 02623fcb has its CatchHandler @ 02524070 */
      lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
                    /* try { // try from 02523fd8 to 02623ff7 has its CatchHandler @ 02524080 */
      if ((lVar4 != 0) &&
         (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                     (lVar4,*(undefined8 *)PTR_DAT_049c32d0), plVar5 != (long *)0x0)
         ) {
        (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
                    /* try { // try from 02524008 to 02624013 has its CatchHandler @ 02524064 */
        pcVar7 = *(code **)(*plVar5 + 0x2a8);
        uVar6 = *(undefined8 *)(*plVar5 + 0x2b0);
        *(undefined4 *)(plVar5 + 0x1c) = 0x3e99999a;
                    /* try { // try from 02524020 to 0262403f has its CatchHandler @ 0252406c */
        (*pcVar7)(param_1,param_2,param_3,param_4,plVar5,uVar6);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

