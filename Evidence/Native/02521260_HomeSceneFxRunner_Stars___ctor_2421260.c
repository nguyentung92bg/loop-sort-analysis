/* IL2CPP: HomeSceneFxRunner.Stars$$.ctor
void HomeSceneFxRunner_Stars___ctor (HomeSceneFxRunner_Stars_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.Stars$$.ctor
   void HomeSceneFxRunner_Stars___ctor (HomeSceneFxRunner_Stars_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_Stars___ctor_2421260(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  
                    /* try { // try from 02521278 to 0262127b has its CatchHandler @ 02521290 */
                    /* try { // try from 0252127c to 02621293 has its CatchHandler @ 02520db8 */
                    /* catch() { ... } // from try @ 02521278 with catch @ 02521290 */
                    /* try { // try from 02521294 to 026212a7 has its CatchHandler @ 025212b0 */
  if ((bRam0000000004f4b783 & 1) == 0) {
                    /* catch() { ... } // from try @ 025211ac with catch @ 025212a0
                       catch() { ... } // from try @ 0252120c with catch @ 025212a0 */
    FUN_021f03f8(PTR_DAT_049c3148);
                    /* try { // try from 025212a8 to 026212b3 has its CatchHandler @ 02520db8 */
    FUN_021f03f8(PTR_DAT_049c3110);
                    /* catch() { ... } // from try @ 02521250 with catch @ 025212b0
                       catch() { ... } // from try @ 02521294 with catch @ 025212b0 */
                    /* try { // try from 025212b4 to 026213f3 has its CatchHandler @ 025212b4
                       catch() { ... } // from try @ 025212b4 with catch @ 025212b4
                       catch() { ... } // from try @ 025214ec with catch @ 025212b4
                       catch() { ... } // from try @ 02521568 with catch @ 025212b4
                       catch() { ... } // from try @ 02521660 with catch @ 025212b4
                       catch() { ... } // from try @ 025216b0 with catch @ 025212b4
                       catch() { ... } // from try @ 025216d8 with catch @ 025212b4
                       catch() { ... } // from try @ 02521728 with catch @ 025212b4
                       catch() { ... } // from try @ 02521778 with catch @ 025212b4
                       catch() { ... } // from try @ 02521794 with catch @ 025212b4
                       catch() { ... } // from try @ 025217e0 with catch @ 025212b4
                       catch() { ... } // from try @ 02521884 with catch @ 025212b4 */
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c3150);
    bRam0000000004f4b783 = 1;
  }
  System_Object___ctor_3142338(param_1,0);
  puVar5 = PTR_DAT_049c3150;
  puVar4 = PTR_DAT_049c3148;
  puVar3 = PTR_DAT_049c3110;
  puVar2 = PTR_DAT_049b3b98;
  if ((param_2 != 0) && (lVar10 = *(long *)(param_2 + 0x80), lVar10 != 0)) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      puVar12 = (undefined4 *)(lVar10 + 0x30);
      do {
        if (uVar7 <= uVar11) {
LAB_025214b0:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar1 = puVar12[-1];
        if (-1 < (int)uVar1) {
          lVar8 = *(long *)(param_2 + 0x108);
          if (lVar8 == 0) goto LAB_025214ac;
          if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
            uVar14 = puVar12[-2];
            uVar15 = puVar12[-4];
            fVar16 = (float)puVar12[-3];
            uVar13 = *puVar12;
            uVar9 = *(undefined8 *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar9,0,0);
            if ((uVar7 & 1) == 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar8 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar5,param_3,0);
              if (lVar8 == 0) goto LAB_025214ac;
              UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar8,0);
              UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar8,0);
              UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(uVar15,-fVar16,lVar8,0);
              UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(uVar14,uVar14,lVar8,0);
                    /* try { // try from 025213f4 to 0262141b has its CatchHandler @ 025217b0 */
              lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
              if (lVar8 == 0) goto LAB_025214ac;
              plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                         (lVar8,*(undefined8 *)puVar4);
              lVar8 = *(long *)(param_2 + 0x108);
              if (lVar8 == 0) goto LAB_025214ac;
              if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_025214b0;
              if (plVar6 == (long *)0x0) goto LAB_025214ac;
              UnityEngine_UI_Image__set_sprite_3cee6e8
                        (plVar6,*(undefined8 *)(lVar8 + (ulong)uVar1 * 8 + 0x20),0);
              (**(code **)(*plVar6 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,uVar13,plVar6,
                         *(undefined8 *)(*plVar6 + 0x2b0));
                    /* try { // try from 02521460 to 02621487 has its CatchHandler @ 025217ac */
              (**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0));
            }
          }
        }
        uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 5;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
                    /* try { // try from 025214a4 to 026214eb has its CatchHandler @ 025217bc */
    return;
  }
LAB_025214ac:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

