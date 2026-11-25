/* IL2CPP: HomeSceneFxRunner.Rays$$.ctor
void HomeSceneFxRunner_Rays___ctor (HomeSceneFxRunner_Rays_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Rays$$.ctor
   void HomeSceneFxRunner_Rays___ctor (HomeSceneFxRunner_Rays_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_Rays___ctor_2420c04(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  puVar6 = PTR_DAT_049c2b98;
  puVar5 = PTR_DAT_049be640;
  if ((bRam0000000004f4b77e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3108);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c2b98);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c3118);
    bRam0000000004f4b77e = 1;
  }
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar6,2);
  plVar15 = (long *)(param_1 + 0x10);
  *plVar15 = lVar8;
  thunk_FUN_021f190c(plVar15,lVar8);
  lVar8 = FUN_021f04e4(*(undefined8 *)puVar5,2);
  plVar16 = (long *)(param_1 + 0x18);
  *plVar16 = lVar8;
  thunk_FUN_021f190c(plVar16,lVar8);
  System_Object___ctor_3142338(param_1,0);
  fVar4 = _UNK_013aa8f4;
  fVar3 = _UNK_013aa7ac;
  fVar2 = _UNK_013aa4f4;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      uStack_a4 = 0x3f800000;
      uStack_a8 = _UNK_013aa464;
      uVar20 = _UNK_013aa664;
    }
    else {
      uStack_a4 = *(undefined4 *)(param_2 + 0x2c);
      uStack_a8 = *(undefined4 *)(param_2 + 0x30);
      uVar20 = *(undefined4 *)(param_2 + 0x34);
    }
    uVar17 = 0;
    lVar8 = 0x20;
    iVar1 = 0xc;
    if (-1 < *(int *)(param_2 + 0x54)) {
      iVar1 = *(int *)(param_2 + 0x54);
    }
    fVar21 = _UNK_013aa734;
    if (0.0 <= *(float *)(param_2 + 0x58)) {
      fVar21 = *(float *)(param_2 + 0x58);
    }
    while( true ) {
      fVar18 = 1.0;
      if (uVar17 != 0) {
        fVar18 = fVar2;
      }
      fVar19 = *(float *)(param_2 + 0x24);
      iVar13 = 0;
      if (uVar17 != 0) {
        iVar13 = 3;
      }
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar9 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c3118,param_3,0);
      if (lVar9 == 0) break;
                    /* try { // try from 02520db8 to 02620f47 has its CatchHandler @ 02520db8
                       catch() { ... } // from try @ 02520db8 with catch @ 02520db8
                       catch() { ... } // from try @ 02520f80 with catch @ 02520db8
                       catch() { ... } // from try @ 02520fe8 with catch @ 02520db8
                       catch() { ... } // from try @ 0252113c with catch @ 02520db8
                       catch() { ... } // from try @ 02521168 with catch @ 02520db8
                       catch() { ... } // from try @ 025211b0 with catch @ 02520db8
                       catch() { ... } // from try @ 0252121c with catch @ 02520db8
                       catch() { ... } // from try @ 0252123c with catch @ 02520db8
                       catch() { ... } // from try @ 02521258 with catch @ 02520db8
                       catch() { ... } // from try @ 0252127c with catch @ 02520db8
                       catch() { ... } // from try @ 025212a8 with catch @ 02520db8 */
      fVar18 = fVar18 * fVar19;
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar9,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar9,0);
      UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar9,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (*(undefined4 *)(param_2 + 0x1c),-*(float *)(param_2 + 0x20),lVar9,0);
      fVar18 = fVar18 + fVar18;
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar18,fVar18,lVar9,0);
      lVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
      if ((lVar10 == 0) ||
         (plVar11 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                      (lVar10,*(undefined8 *)PTR_DAT_049c3108),
         plVar11 == (long *)0x0)) break;
      (**(code **)(*plVar11 + 0x2c8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2d0));
      uVar12 = HomeSceneShapes__get_Screen_2428a54(0);
      (**(code **)(*plVar11 + 0x348))(plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x350));
      *(int *)(plVar11 + 0x1b) = iVar13 + iVar1;
      pcVar14 = *(code **)(*plVar11 + 0x2a8);
      uVar12 = *(undefined8 *)(*plVar11 + 0x2b0);
      fVar18 = 1.0;
      if (uVar17 != 0) {
        fVar18 = fVar4;
      }
      *(float *)((long)plVar11 + 0xdc) =
           (((float)(int)uVar17 * 360.0) / (float)(iVar13 + iVar1)) * 0.5;
      (*pcVar14)(uStack_a4,uStack_a8,uVar20,fVar21 * fVar18,plVar11,uVar12);
      lVar10 = *plVar15;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar17) {
LAB_02520f70:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(long *)(lVar10 + uVar17 * 8 + 0x20) = lVar9;
      thunk_FUN_021f190c(lVar10 + lVar8,lVar9);
      lVar9 = *plVar16;
      fVar18 = 60.0;
      if (0.0 <= *(float *)(param_2 + 0x44)) {
        fVar18 = *(float *)(param_2 + 0x44);
      }
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_02520f70;
      bVar7 = uVar17 != 0;
      lVar10 = uVar17 * 4;
      uVar17 = uVar17 + 1;
      fVar19 = 1.0;
      if (bVar7) {
        fVar19 = fVar3;
      }
      lVar8 = lVar8 + 8;
      *(float *)(lVar9 + lVar10 + 0x20) = fVar19 * fVar18;
      if (uVar17 == 2) {
                    /* try { // try from 02520f48 to 02620f4f has its CatchHandler @ 02521178 */
                    /* try { // try from 02520f60 to 02620f7f has its CatchHandler @ 0252125c */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

