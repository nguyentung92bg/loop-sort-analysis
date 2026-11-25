/* IL2CPP: HomeSceneFxRunner.Rings$$Add
void HomeSceneFxRunner_Rings__Add (HomeSceneFxRunner_Rings_o* __this, UnityEngine_RectTransform_o* parent, float x, float y, UnityEngine_Vector2_o size, float dur, float t0, float life, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Rings$$Add
   void HomeSceneFxRunner_Rings__Add (HomeSceneFxRunner_Rings_o* __this,
   UnityEngine_RectTransform_o* parent, float x, float y, UnityEngine_Vector2_o size, float dur,
   float t0, float life, float delay, const MethodInfo* method); */

void HomeSceneFxRunner_Rings__Add_2423098
               (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049c3110;
                    /* try { // try from 025230a4 to 026230b3 has its CatchHandler @ 025231e8 */
                    /* try { // try from 025230d0 to 026230d3 has its CatchHandler @ 025231fc */
                    /* try { // try from 025230f0 to 026230f3 has its CatchHandler @ 025231d8 */
  if ((bRam0000000004f4b787 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31c8);
                    /* try { // try from 02523104 to 0262310f has its CatchHandler @ 025231d4 */
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3238);
                    /* try { // try from 02523118 to 02623123 has its CatchHandler @ 025231f8 */
    FUN_021f03f8(PTR_DAT_049c3240);
    FUN_021f03f8(PTR_DAT_049c3248);
    bRam0000000004f4b787 = 1;
  }
  puVar2 = PTR_DAT_049c3248;
                    /* try { // try from 02523138 to 0262314f has its CatchHandler @ 025231d0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_10,0);
  if (lVar3 != 0) {
                    /* try { // try from 02523164 to 0262316b has its CatchHandler @ 025231cc */
                    /* try { // try from 0252316c to 026231b3 has its CatchHandler @ 02522fbc */
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar3,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(param_1,-param_2,lVar3,0);
                    /* try { // try from 025231b4 to 026231b7 has its CatchHandler @ 025231f4 */
                    /* try { // try from 025231b8 to 026231bb has its CatchHandler @ 025231f0 */
                    /* try { // try from 025231bc to 026231bf has its CatchHandler @ 025231e4 */
                    /* try { // try from 025231c0 to 026231c3 has its CatchHandler @ 025231fc */
                    /* try { // try from 025231c4 to 026231c7 has its CatchHandler @ 025231e0 */
    UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(param_3,param_4,lVar3,0);
                    /* try { // try from 025231c8 to 026231cb has its CatchHandler @ 025231dc */
                    /* catch() { ... } // from try @ 02523164 with catch @ 025231cc
                       try { // try from 025231cc to 0262321b has its CatchHandler @ 02522fbc */
                    /* catch() { ... } // from try @ 02523138 with catch @ 025231d0 */
    lVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
                    /* catch() { ... } // from try @ 02523104 with catch @ 025231d4 */
                    /* catch() { ... } // from try @ 025230f0 with catch @ 025231d8 */
                    /* catch() { ... } // from try @ 025231c8 with catch @ 025231dc */
                    /* catch() { ... } // from try @ 025231c4 with catch @ 025231e0 */
                    /* catch() { ... } // from try @ 025231bc with catch @ 025231e4 */
                    /* catch() { ... } // from try @ 025230a4 with catch @ 025231e8 */
    if ((lVar4 != 0) &&
       (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                   (lVar4,*(undefined8 *)PTR_DAT_049c31c8),
       puVar1 = PTR_DAT_049c3240, plVar5 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 0252308c with catch @ 025231ec */
                    /* catch() { ... } // from try @ 025231b8 with catch @ 025231f0 */
                    /* catch() { ... } // from try @ 025231b4 with catch @ 025231f4 */
                    /* catch() { ... } // from try @ 02523068 with catch @ 025231f8
                       catch() { ... } // from try @ 02523118 with catch @ 025231f8 */
                    /* catch() { ... } // from try @ 025230d0 with catch @ 025231fc
                       catch() { ... } // from try @ 025231c0 with catch @ 025231fc */
                    /* catch() { ... } // from try @ 02523044 with catch @ 02523200 */
      (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
      uVar6 = *(undefined8 *)puVar1;
      lVar4 = *(long *)(param_9 + 0x10);
                    /* try { // try from 0252321c to 0262321f has its CatchHandler @ 02523230 */
                    /* catch() { ... } // from try @ 0252321c with catch @ 02523230 */
                    /* try { // try from 02523234 to 0262323b has its CatchHandler @ 02523244 */
                    /* try { // try from 0252323c to 02623247 has its CatchHandler @ 02522fbc */
      *(undefined4 *)(plVar5 + 0x1b) = 0x40000000;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = param_8;
      uStack_74 = param_7;
      uStack_28 = param_6;
      uStack_24 = param_5;
                    /* catch() { ... } // from try @ 02523234 with catch @ 02523244 */
                    /* try { // try from 02523248 to 026232c3 has its CatchHandler @ 02523248
                       catch() { ... } // from try @ 02523248 with catch @ 02523248
                       catch() { ... } // from try @ 025232e8 with catch @ 02523248
                       catch() { ... } // from try @ 0252333c with catch @ 02523248
                       catch() { ... } // from try @ 0252335c with catch @ 02523248 */
      System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_____2a13a50
                (&uStack_a0,lVar3,plVar5,&uStack_24,&uStack_28,&uStack_74,&uStack_78,uVar6);
      if (lVar4 != 0) {
        uStack_b8 = uStack_98;
        uStack_c0 = uStack_a0;
        uStack_a8 = uStack_88;
        uStack_b0 = uStack_90;
        FUN_02333498(lVar4,&uStack_c0,*(undefined8 *)PTR_DAT_049c3238);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

