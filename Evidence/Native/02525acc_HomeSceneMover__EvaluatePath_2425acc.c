/* IL2CPP: HomeSceneMover$$EvaluatePath
void HomeSceneMover__EvaluatePath (HomeSceneMover_o* __this, float u, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneMover$$EvaluatePath
   void HomeSceneMover__EvaluatePath (HomeSceneMover_o* __this, float u, const MethodInfo* method);
    */

void HomeSceneMover__EvaluatePath_2425acc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_70 [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
                    /* try { // try from 02525ad4 to 02625ad7 has its CatchHandler @ 02525ae0 */
                    /* catch() { ... } // from try @ 02525ad4 with catch @ 02525ae0 */
                    /* try { // try from 02525ae4 to 02625aeb has its CatchHandler @ 02525af4 */
                    /* try { // try from 02525aec to 02625af7 has its CatchHandler @ 025256ec */
                    /* catch() { ... } // from try @ 02525aa8 with catch @ 02525af4
                       catch() { ... } // from try @ 02525ae4 with catch @ 02525af4 */
  if ((bRam0000000004f4b796 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b796 = 1;
  }
  fStack_54 = 0.0;
  if (*(long *)(param_2 + 0x90) != 0) {
    if (*(long *)(*(long *)(param_2 + 0x90) + 0x18) == 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      fStack_54 = 0.0;
      if (lVar3 == 0) goto LAB_02525d68;
      fStack_6c = *(float *)(lVar3 + 0x2c);
      fStack_68 = *(float *)(lVar3 + 0x30);
      fVar12 = 1.0;
      fStack_60 = 0.0;
      fVar8 = 1.0;
      fVar9 = 1.0;
    }
    else {
                    /* try { // try from 02525b30 to 02625b97 has its CatchHandler @ 02525b30
                       catch() { ... } // from try @ 02525b30 with catch @ 02525b30
                       catch() { ... } // from try @ 02525d28 with catch @ 02525b30
                       catch() { ... } // from try @ 02525d80 with catch @ 02525b30
                       catch() { ... } // from try @ 02525db4 with catch @ 02525b30
                       catch() { ... } // from try @ 02525e00 with catch @ 02525b30 */
      HomeSceneMover__Sample_2425dbc(auStack_70,param_1,param_2,&fStack_54);
      lVar3 = *(long *)(param_2 + 0x10);
      fVar12 = fStack_64;
      fVar8 = fStack_58;
      fVar9 = fStack_5c;
      if (lVar3 == 0) goto LAB_02525d68;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 02525b98 to 02625bbb has its CatchHandler @ 02525d88 */
      fVar10 = -(fStack_68 + *(float *)(param_2 + 0xa8) +
                (1.0 - *(float *)(param_2 + 0x70)) * *(float *)(lVar3 + 0x38));
      fVar11 = fStack_6c + *(float *)(param_2 + 0x6c) * *(float *)(lVar3 + 0x34);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (fVar11,fVar10,*(long *)(param_2 + 0x18),0);
      lVar3 = *(long *)(param_2 + 0x18);
                    /* try { // try from 02525bc8 to 02625beb has its CatchHandler @ 02525d8c */
      UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fStack_60 * _UNK_013aa730,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
        puVar1 = PTR_DAT_049b3b98;
        if (*(long *)(param_2 + 0x18) != 0) {
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (fVar8 * fVar9,fVar8,0x3f800000,*(long *)(param_2 + 0x18),0);
          uVar5 = *(undefined8 *)(param_2 + 0x80);
                    /* try { // try from 02525c10 to 02625c17 has its CatchHandler @ 02525d84 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(param_2 + 0x80) == 0) goto LAB_02525d68;
                    /* try { // try from 02525c40 to 02625c4b has its CatchHandler @ 02525d3c */
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                      (fVar11,fVar10,*(long *)(param_2 + 0x80),0);
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525d68;
            lVar3 = *(long *)(param_2 + 0x80);
            UnityEngine_Transform__get_localRotation_3c2d92c(*(long *)(param_2 + 0x18),0);
                    /* try { // try from 02525c58 to 02625c63 has its CatchHandler @ 02525d38 */
            if (lVar3 == 0) goto LAB_02525d68;
            UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525d68;
            lVar3 = *(long *)(param_2 + 0x80);
                    /* try { // try from 02525c74 to 02625c7b has its CatchHandler @ 02525d2c */
            UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_2 + 0x18),0);
            if (lVar3 == 0) goto LAB_02525d68;
            UnityEngine_Transform__set_localScale_3c2ddfc(lVar3,0);
          }
                    /* try { // try from 02525c90 to 02625ca3 has its CatchHandler @ 02525d34 */
          uVar5 = *(undefined8 *)(param_2 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x40) == 0))
            goto LAB_02525d68;
                    /* try { // try from 02525ccc to 02625cf7 has its CatchHandler @ 02525d90 */
            UnityEngine_CanvasGroup__set_alpha_3ec2b80
                      (fVar12 * *(float *)(*(long *)(param_2 + 0x10) + 0x3c),
                       *(long *)(param_2 + 0x40),0);
          }
          fVar8 = _UNK_013aa948;
          fVar12 = _UNK_013aa654;
          lVar3 = *(long *)(param_2 + 0x48);
          if (lVar3 != 0) {
            lVar7 = 0;
            fVar9 = -fStack_54;
            do {
              uVar6 = (uint)lVar7;
              if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar6) {
                    /* catch() { ... } // from try @ 02525d5c with catch @ 02525d70 */
                    /* try { // try from 02525d78 to 02625d7f has its CatchHandler @ 02525e08 */
                    /* try { // try from 02525d80 to 02625daf has its CatchHandler @ 02525b30 */
                    /* catch() { ... } // from try @ 02525c10 with catch @ 02525d84
                       catch() { ... } // from try @ 02525d0c with catch @ 02525d84 */
                return;
              }
                    /* try { // try from 02525d04 to 02625d07 has its CatchHandler @ 02525d8c */
                    /* try { // try from 02525d08 to 02625d0b has its CatchHandler @ 02525d90 */
              if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_02525d88:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02525b98 with catch @ 02525d88 */
                FUN_021f06a8();
              }
                    /* try { // try from 02525d0c to 02625d0f has its CatchHandler @ 02525d84 */
              lVar4 = *(long *)(param_2 + 0x50);
                    /* try { // try from 02525d10 to 02625d13 has its CatchHandler @ 02525d3c */
              if (lVar4 == 0) break;
                    /* try { // try from 02525d14 to 02625d17 has its CatchHandler @ 02525d38 */
                    /* try { // try from 02525d18 to 02625d1b has its CatchHandler @ 02525d30 */
                    /* try { // try from 02525d1c to 02625d1f has its CatchHandler @ 02525d28 */
              if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02525d88;
                    /* try { // try from 02525d20 to 02625d27 has its CatchHandler @ 02525d90 */
                    /* catch() { ... } // from try @ 02525d1c with catch @ 02525d28
                       try { // try from 02525d28 to 02625d5b has its CatchHandler @ 02525b30 */
                    /* catch() { ... } // from try @ 02525c74 with catch @ 02525d2c */
                    /* catch() { ... } // from try @ 02525d18 with catch @ 02525d30 */
                    /* catch() { ... } // from try @ 02525c90 with catch @ 02525d34 */
              lVar3 = *(long *)(lVar3 + lVar7 * 8 + 0x20);
                    /* catch() { ... } // from try @ 02525c58 with catch @ 02525d38
                       catch() { ... } // from try @ 02525d14 with catch @ 02525d38 */
                    /* catch() { ... } // from try @ 02525c40 with catch @ 02525d3c
                       catch() { ... } // from try @ 02525d10 with catch @ 02525d3c */
              UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                        (0,0,(fVar9 / *(float *)(lVar4 + lVar7 * 4 + 0x20)) * fVar12 * fVar8,0);
              if (lVar3 == 0) break;
              UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
                    /* try { // try from 02525d5c to 02625d5f has its CatchHandler @ 02525d70 */
              lVar3 = *(long *)(param_2 + 0x48);
              lVar7 = lVar7 + 1;
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
LAB_02525d68:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

