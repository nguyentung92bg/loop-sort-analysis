/* IL2CPP: HomeSceneFxRunner.Cabins$$.ctor
void HomeSceneFxRunner_Cabins___ctor (HomeSceneFxRunner_Cabins_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Cabins$$.ctor
   void HomeSceneFxRunner_Cabins___ctor (HomeSceneFxRunner_Cabins_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_Cabins___ctor_242238c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_98;
  float fStack_94;
  
  puVar3 = PTR_DAT_049c31e8;
  puVar4 = PTR_DAT_049c31e0;
  if ((bRam0000000004f4b792 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3148);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c31f0);
    FUN_021f03f8(PTR_DAT_049c31e8);
    FUN_021f03f8(PTR_DAT_049c31e0);
    FUN_021f03f8(PTR_DAT_049c31f8);
    FUN_021f03f8(PTR_DAT_049c3200);
    FUN_021f03f8(PTR_DAT_049c3208);
    bRam0000000004f4b792 = 1;
  }
  puVar5 = PTR_DAT_049c31f8;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar3);
  plVar10 = (long *)(param_1 + 0x20);
  *plVar10 = lVar6;
  thunk_FUN_021f190c(plVar10,lVar6);
                    /* try { // try from 02522478 to 026224d3 has its CatchHandler @ 02522478
                       catch() { ... } // from try @ 02522478 with catch @ 02522478
                       catch() { ... } // from try @ 0252253c with catch @ 02522478
                       catch() { ... } // from try @ 0252258c with catch @ 02522478
                       catch() { ... } // from try @ 025225cc with catch @ 02522478 */
  System_Object___ctor_3142338(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0x10),param_2);
  if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar6 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar5,param_3,0);
  if (lVar6 != 0) {
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar6,0);
                    /* try { // try from 025224d4 to 026224df has its CatchHandler @ 02522594 */
                    /* try { // try from 025224e0 to 026224eb has its CatchHandler @ 02522590 */
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar6,0);
    puVar4 = PTR_DAT_049c3208;
    if (param_2 != 0) {
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (*(undefined4 *)(param_2 + 0x1c),-*(float *)(param_2 + 0x20),lVar6,0);
                    /* try { // try from 02522508 to 0262250b has its CatchHandler @ 0252258c */
      if (cRam0000000004f49d57 == '\0') {
                    /* try { // try from 02522518 to 0262253b has its CatchHandler @ 02522598 */
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      puVar3 = PTR_DAT_049b8a18;
                    /* try { // try from 0252253c to 02622587 has its CatchHandler @ 02522478 */
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                 (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar6,0);
      UnityEngine_Transform__set_localScale_3c2ddfc
                (*(float *)(param_2 + 0xa8) / *(float *)(param_2 + 0xac),0x3f800000,0x3f800000,lVar6
                 ,0);
      lVar6 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar4,lVar6,0);
      plVar9 = (long *)(param_1 + 0x18);
      *plVar9 = lVar6;
      thunk_FUN_021f190c(plVar9,lVar6);
      lVar6 = *plVar9;
                    /* try { // try from 02522588 to 0262258b has its CatchHandler @ 02522598 */
      if (cRam0000000004f49d57 == '\0') {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02522508 with catch @ 0252258c
                       try { // try from 0252258c to 026225b3 has its CatchHandler @ 02522478 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025224e0 with catch @ 02522590
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025224d4 with catch @ 02522594
                        */
        FUN_021f03f8(PTR_DAT_049b8a18);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02522518 with catch @ 02522598
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 02522588 with catch @ 02522598
                        */
        cRam0000000004f49d57 = '\x01';
      }
      if (lVar6 != 0) {
                    /* try { // try from 025225b4 to 026225b7 has its CatchHandler @ 025225c0 */
        UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                  (**(undefined4 **)(*(long *)puVar3 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1],lVar6,0);
        puVar5 = PTR_DAT_049c3200;
        puVar3 = PTR_DAT_049c31f0;
        puVar4 = PTR_DAT_049c3148;
        fVar2 = _UNK_013aa948;
        lVar6 = *(long *)(param_2 + 0x108);
                    /* catch() { ... } // from try @ 025225b4 with catch @ 025225c0 */
        if (lVar6 != 0) {
                    /* try { // try from 025225c4 to 026225cb has its CatchHandler @ 025225d4 */
          fVar13 = *(float *)(param_2 + 0xac);
                    /* try { // try from 025225cc to 026225d7 has its CatchHandler @ 02522478 */
          fVar14 = *(float *)(param_2 + 0xa0);
          fVar15 = *(float *)(param_2 + 0xa8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025225c4 with catch @ 025225d4
                        */
          if (*(long *)(lVar6 + 0x18) == 0) {
            uVar11 = 0;
          }
          else {
                    /* try { // try from 025225d8 to 02622633 has its CatchHandler @ 025225d8
                       catch() { ... } // from try @ 025225d8 with catch @ 025225d8
                       catch() { ... } // from try @ 025226b8 with catch @ 025225d8
                       catch() { ... } // from try @ 025226fc with catch @ 025225d8
                       catch() { ... } // from try @ 0252273c with catch @ 025225d8 */
            if ((int)*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar11 = *(undefined8 *)(lVar6 + 0x20);
          }
          iVar1 = *(int *)(param_2 + 0x54);
          if (0 < iVar1) {
            fVar16 = fVar13 * *(float *)(param_2 + 0xb0);
            iVar12 = 0;
            do {
                    /* try { // try from 02522634 to 02622657 has its CatchHandler @ 02522700 */
              fVar17 = *(float *)(param_2 + 0xb4);
              lVar6 = *plVar9;
              if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar6 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar5,lVar6,0);
                    /* try { // try from 02522664 to 02622687 has its CatchHandler @ 02522704 */
              if (lVar6 == 0) goto LAB_02522748;
              sincosf((((float)iVar12 * 360.0) / (float)iVar1 + fVar17) * fVar2,&fStack_94,
                      &fStack_98);
                    /* try { // try from 02522698 to 026226a3 has its CatchHandler @ 025226fc */
              UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                        (fVar16 * fStack_98,fStack_94 * -fVar16,lVar6,0);
                    /* try { // try from 025226b0 to 026226b7 has its CatchHandler @ 02522708 */
              UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                        ((fVar13 * fVar14) / fVar15,*(undefined4 *)(param_2 + 0xa4),lVar6,0);
                    /* try { // try from 025226b8 to 026226f3 has its CatchHandler @ 025225d8 */
              lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar6,0);
              if ((lVar7 == 0) ||
                 (plVar8 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                             (lVar7,*(undefined8 *)puVar4), plVar8 == (long *)0x0))
              goto LAB_02522748;
              UnityEngine_UI_Image__set_sprite_3cee6e8(plVar8,uVar11,0);
                    /* try { // try from 025226f4 to 026226f7 has its CatchHandler @ 02522704 */
                    /* try { // try from 025226f8 to 026226fb has its CatchHandler @ 02522708 */
              (**(code **)(*plVar8 + 0x2c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x2d0));
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02522698 with catch @ 025226fc
                       try { // try from 025226fc to 02622723 has its CatchHandler @ 025225d8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02522634 with catch @ 02522700
                        */
              if (*plVar10 == 0) goto LAB_02522748;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02522664 with catch @ 02522704
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025226f4 with catch @ 02522704
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025226b0 with catch @ 02522708
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025226f8 with catch @ 02522708
                        */
              FUN_02333498(*plVar10,lVar6,*(undefined8 *)puVar3);
              iVar12 = iVar12 + 1;
            } while (iVar1 != iVar12);
          }
                    /* try { // try from 02522724 to 02622727 has its CatchHandler @ 02522730 */
                    /* catch() { ... } // from try @ 02522724 with catch @ 02522730 */
                    /* try { // try from 02522734 to 0262273b has its CatchHandler @ 02522744 */
                    /* try { // try from 0252273c to 02622747 has its CatchHandler @ 025225d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02522734 with catch @ 02522744
                        */
          return;
        }
      }
    }
  }
LAB_02522748:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

