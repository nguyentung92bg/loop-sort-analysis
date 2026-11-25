/* IL2CPP: CollectItems.<ApplyCollectTextMotion>d__11$$MoveNext
void CollectItems__ApplyCollectTextMotion_d__11__MoveNext (CollectItems__ApplyCollectTextMotion_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CollectItems.<ApplyCollectTextMotion>d__11$$MoveNext
   void CollectItems__ApplyCollectTextMotion_d__11__MoveNext
   (CollectItems__ApplyCollectTextMotion_d__11_o __this, const MethodInfo* method); */

void CollectItems__ApplyCollectTextMotion_d__11__MoveNext_25107e0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  int aiStack_c4 [3];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
                    /* try { // try from 026107e4 to 027107e7 has its CatchHandler @ 02610964 */
                    /* try { // try from 026107e8 to 027107f7 has its CatchHandler @ 02610978 */
                    /* try { // try from 02610800 to 0271080b has its CatchHandler @ 02610968 */
  if ((bRam0000000004f4bdf1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9218);
                    /* try { // try from 02610818 to 0271081f has its CatchHandler @ 02610960 */
    FUN_021f03f8(PTR_DAT_049c9220);
    FUN_021f03f8(PTR_DAT_049c2d48);
                    /* try { // try from 02610838 to 02710843 has its CatchHandler @ 02610974 */
    FUN_021f03f8(PTR_DAT_049c45a0);
                    /* try { // try from 02610844 to 02710953 has its CatchHandler @ 02610624 */
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    FUN_021f03f8(PTR_DAT_049c53e0);
    bRam0000000004f4bdf1 = 1;
  }
  puVar5 = PTR_DAT_049c2be8;
  puVar4 = PTR_DAT_049c1358;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar1 = ZEXT816(0);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auVar22 = ZEXT816(0);
  auStack_a0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_b0._8_4_ = 0;
  auStack_b0._0_8_ = 0;
  uStack_b8 = 0;
  if (*param_1 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_b0 = *(undefined1 (*) [12])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      *param_1 = -1;
      auStack_90 = auVar22;
      auStack_80 = auVar1;
      auStack_a0 = ZEXT816(0);
      goto LAB_02610da4;
    }
    lVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                       (*(undefined8 *)(param_1 + 6),0x9927ed9b,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *(long *)(lVar12 + 0x38);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = TMPro_TMP_Text__get_rectTransform_3b0ca7c(lVar12,0);
    plVar15 = (long *)(param_1 + 0xc);
    *plVar15 = lVar8;
                    /* try { // try from 02610954 to 02710957 has its CatchHandler @ 02610970 */
                    /* try { // try from 02610958 to 0271095b has its CatchHandler @ 0261096c */
    thunk_FUN_021f190c(plVar15);
                    /* try { // try from 0261095c to 02710993 has its CatchHandler @ 02610624 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610818 with catch @ 02610960
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026107e4 with catch @ 02610964
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610800 with catch @ 02610968
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610958 with catch @ 0261096c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610954 with catch @ 02610970
                        */
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar12,auStack_70,*(undefined8 *)PTR_DAT_049c2d48);
    piVar14 = param_1 + 0xe;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610838 with catch @ 02610974
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026107e8 with catch @ 02610978
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0261075c with catch @ 0261097c
                        */
    *(undefined8 *)piVar14 = auStack_70._0_8_;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0261077c with catch @ 02610980
                        */
    thunk_FUN_021f190c(piVar14);
    aiStack_c4[0] = param_1[8];
                    /* try { // try from 02610994 to 02710997 has its CatchHandler @ 026109b0 */
                    /* try { // try from 02610998 to 027109b3 has its CatchHandler @ 02610624 */
    uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),aiStack_c4);
                    /* catch() { ... } // from try @ 02610994 with catch @ 026109b0 */
                    /* try { // try from 026109b4 to 027109bb has its CatchHandler @ 026109c4 */
    uVar9 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c53e0,uVar9,0);
                    /* try { // try from 026109bc to 027109c7 has its CatchHandler @ 02610624 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026109b4 with catch @ 026109c4
                        */
    TMPro_TMP_Text__SetText_3b0f78c(lVar12,uVar9,0);
    lVar12 = *plVar15;
    if (cRam0000000004f49d57 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f49d57 = '\x01';
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar18 = (float)(*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),fVar18,lVar12,0);
    lVar12 = *plVar15;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar17 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar12,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fVar17 + (float)param_1[9] * _UNK_013aa7c4,
               fVar18 + (float)param_1[10] * _UNK_013aa7c4,lVar12,0);
    puVar3 = PTR_DAT_049c1690;
    lVar12 = *(long *)PTR_DAT_049c1690;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      lVar12 = *(long *)puVar3;
    }
    puVar11 = *(undefined4 **)(lVar12 + 0xb8);
    uVar19 = *puVar11;
    uVar20 = puVar11[1];
    uVar21 = puVar11[2];
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    uVar2 = _UNK_013aa4d0;
    lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar19,uVar20,uVar21,*(undefined4 *)(lVar12 + 0xc),
                            *(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x14),
                            _UNK_013aa4d0,0);
    auVar22 = FUN_024f4e50(auStack_80,0x1a,*(undefined8 *)PTR_DAT_049c1680);
    LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
              (auVar22._0_8_,auVar22._8_8_,*plVar15,*(undefined8 *)PTR_DAT_049c1670);
    auStack_90 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,uVar2,0);
    auVar22 = FUN_024f4e50(auStack_90,0x1a,*(undefined8 *)puVar4);
    LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
              (auVar22._0_8_,auVar22._8_8_,*(undefined8 *)piVar14,*(undefined8 *)puVar5);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = System_TimeSpan__FromSeconds_311711c(_UNK_013a7950,0);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar9,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_70,0);
    uVar6 = auStack_70._8_8_;
    uVar9 = auStack_70._0_8_;
    auStack_a0 = auStack_70;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar22 = auStack_90;
    auVar1 = auStack_80;
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
      auVar22 = auStack_90;
      auVar1 = auStack_80;
    }
    if ((long *)uVar9 != (long *)0x0) {
      lVar12 = *(long *)uVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02610c5c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      auStack_90 = auVar22;
      auStack_80 = auVar1;
      puVar10 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
      auVar22 = auStack_90;
      auVar1 = auStack_80;
LAB_02610c5c:
      auStack_90 = auVar22;
      auStack_80 = auVar1;
      iVar7 = (*(code *)*puVar10)(uVar9,uVar6 & 0xffffffff,puVar10[1]);
      auVar22 = auStack_90;
      auVar1 = auStack_80;
      if (iVar7 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c9218);
        return;
      }
    }
  }
  auStack_90 = auVar22;
  auStack_80 = auVar1;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar12 = *(long *)auStack_a0._0_8_;
    uVar16 = auStack_a0._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_02610cf4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02610cf4:
    (*(code *)*puVar10)(uVar9,uVar16,puVar10[1]);
  }
  uVar19 = _UNK_013aa8a8;
  auVar22 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa8a8,0);
  auStack_90 = auVar22;
  auVar22 = FUN_024f4e50(auStack_90,4,*(undefined8 *)puVar4);
  LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
            (auVar22._0_8_,auVar22._8_8_,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)puVar5);
  auVar22 = LitMotion_LMotion__Create_2ea9f9c(0,0x425c0000,uVar19,0);
  auStack_90 = auVar22;
  auVar22 = FUN_024f4e50(auStack_90,4,*(undefined8 *)puVar4);
  auVar22 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26671dc
                      (auVar22._0_8_,auVar22._8_8_,*(undefined8 *)(param_1 + 0xc),
                       *(undefined8 *)PTR_DAT_049c45a0);
  auStack_b0 = LitMotion_MotionHandleExtensions__GetAwaiter_2ead0d4
                         (auVar22._0_8_,auVar22._8_8_ & 0xffffffff,0);
  uVar13 = LitMotion_MotionAwaiter__get_IsCompleted_2eab264(auStack_b0,0);
  puVar4 = PTR_DAT_049c9220;
  if ((uVar13 & 1) == 0) {
    *param_1 = 1;
    uVar9 = *(undefined8 *)puVar4;
    *(undefined1 (*) [12])(param_1 + 0x14) = auStack_b0;
    FUN_0235c25c(param_1 + 2,auStack_b0,param_1,uVar9);
    return;
  }
LAB_02610da4:
  LitMotion_MotionAwaiter__GetResult_2eab2a8(auStack_b0,0);
  *param_1 = -2;
  piVar14 = param_1 + 0xc;
  piVar14[0] = 0;
  piVar14[1] = 0;
  thunk_FUN_021f190c(piVar14,0);
  piVar14 = param_1 + 0xe;
  piVar14[0] = 0;
  piVar14[1] = 0;
  thunk_FUN_021f190c(piVar14,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    lVar12 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_02610e90;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b56d0,2);
LAB_02610e90:
    (*(code *)*puVar10)(plVar15,puVar10[1]);
  }
  return;
}

