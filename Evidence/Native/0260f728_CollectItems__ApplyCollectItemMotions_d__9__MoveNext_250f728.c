/* IL2CPP: CollectItems.<ApplyCollectItemMotions>d__9$$MoveNext
void CollectItems__ApplyCollectItemMotions_d__9__MoveNext (CollectItems__ApplyCollectItemMotions_d__9_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems.<ApplyCollectItemMotions>d__9$$MoveNext
   void CollectItems__ApplyCollectItemMotions_d__9__MoveNext
   (CollectItems__ApplyCollectItemMotions_d__9_o __this, const MethodInfo* method); */

void CollectItems__ApplyCollectItemMotions_d__9__MoveNext_250f728(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  long lStack_c8;
  uint *puStack_c0;
  uint **ppuStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined1 auStack_a0 [16];
  uint uStack_84;
  uint *puStack_80;
  uint uStack_74;
  
  puVar6 = param_1;
  puStack_80 = param_1;
  if ((bRam0000000004f4bdf0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9210);
    FUN_021f03f8(PTR_DAT_049c1b58);
    FUN_021f03f8(PTR_DAT_049c1b60);
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c1b88);
    FUN_021f03f8(PTR_DAT_049c5780);
    FUN_021f03f8(PTR_DAT_049c1b90);
    puVar6 = (uint *)FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bdf0 = 1;
  }
  uStack_84 = *param_1;
  lVar17 = *(long *)(param_1 + 4);
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  iStack_a8 = 0;
  if (3 < uStack_84) {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar17 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (*(long *)(lVar17 + 0x30),0x50ba3874,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0);
    *(undefined8 *)(puStack_80 + 0xe) = uVar8;
    thunk_FUN_021f190c();
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*(undefined8 *)(puStack_80 + 0xe),0x5f10e269,0);
    if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_02333498(*(long *)(lVar17 + 0x28),*(undefined8 *)(puStack_80 + 0xe),
                 *(undefined8 *)PTR_DAT_049c3e40);
    if (*(long *)(puStack_80 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = UnityEngine_Component__get_transform_3c18724(*(long *)(puStack_80 + 0xe),0);
    if (*(long *)(puStack_80 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(puStack_80 + 8),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__get_position_3c2d540(lVar9,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_position_3c2d61c(lVar7,0);
    puVar6 = puStack_80;
    if (*(int *)(*(long *)PTR_DAT_049c1b60 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar23 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (puVar6 + 0x14,*(undefined8 *)PTR_DAT_049c1b58);
    *(undefined1 (*) [16])(puStack_80 + 0x10) = auVar23;
    puVar6 = (uint *)thunk_FUN_021f190c((undefined1 (*) [16])(puStack_80 + 0x10),0);
  }
  puVar4 = PTR_DAT_049c1b88;
  puVar3 = PTR_DAT_049b8a18;
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  puStack_c0 = &uStack_84;
  ppuStack_b8 = &puStack_80;
  lStack_c8 = 0;
  if ((int)uStack_84 < 2) {
    if (uStack_84 == 0) {
      auStack_a0 = *(undefined1 (*) [16])(puStack_80 + 0x2a);
      puStack_80[0x2a] = 0;
      puStack_80[0x2b] = 0;
      puStack_80[0x2c] = 0;
      puStack_80[0x2d] = 0;
      uStack_84 = 0xffffffff;
      *puStack_80 = 0xffffffff;
      goto LAB_0261030c;
    }
    if (uStack_84 != 1) {
LAB_0260f98c:
      lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                        (*(undefined8 *)(puStack_80 + 0xe),0xbcdc2f95,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined8 *)(puStack_80 + 0x16) = *(undefined8 *)(lVar7 + 0x20);
      thunk_FUN_021f190c();
      puVar6 = puStack_80;
      if (*(long *)(puStack_80 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(*(long *)(puStack_80 + 10) + 0x20) == 1) {
        if (cRam0000000004f4a197 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8a18);
          cRam0000000004f4a197 = '\x01';
        }
        puVar11 = (uint *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        puVar12 = (uint *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24);
      }
      else {
        if (cRam0000000004f4a195 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8a18);
          cRam0000000004f4a195 = '\x01';
        }
        puVar11 = (uint *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
        puVar12 = (uint *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c);
      }
      uVar21 = *puVar12;
      puVar6[0x18] = *puVar11;
      puVar6[0x19] = uVar21;
      fVar18 = (float)FUN_02621790(0x40400000,0x42200000,0x43160000,0x41c80000,puStack_80[0xc],0);
      uVar21 = 0x80000000;
      if (fVar18 != INFINITY) {
        uVar21 = (int)fVar18;
      }
      puStack_80[0x1a] = uVar21;
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *(long *)(*(long *)(lVar17 + 0x18) + 0x28);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 0260fad4 to 0270fadb has its CatchHandler @ 0260fea0 */
      uStack_74 = puStack_80[0xd];
      GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                (lVar7,&uStack_74,&plStack_f8,*(undefined8 *)PTR_DAT_049c2d00);
      auStack_e0._8_8_ = uStack_f0;
      auStack_e0._0_8_ = plStack_f8;
      uStack_d0 = uStack_e8;
      *(undefined8 *)(puStack_80 + 0x1e) = uStack_f0;
      *(long **)(puStack_80 + 0x1c) = plStack_f8;
      *(undefined8 *)(puStack_80 + 0x20) = uStack_e8;
                    /* try { // try from 0260fb0c to 0270fb6f has its CatchHandler @ 0260fed8 */
      puVar6 = (uint *)thunk_FUN_021f190c(puStack_80 + 0x1c,0);
      uVar21 = 0;
      uVar14 = puStack_80[0xc];
      puStack_80[0x28] = 0;
      if (0x27 < (int)uVar14) {
        uVar14 = 0x28;
      }
      uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
      puStack_80[0x22] = uVar14;
      while ((int)uVar21 < (int)uVar14) {
        if (*(long *)(puStack_80 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                          (*(long *)(puStack_80 + 0x16),0);
        uStack_108 = *(undefined8 *)(puStack_80 + 0x1e);
        uStack_110 = *(undefined8 *)(puStack_80 + 0x1c);
        uStack_100 = *(undefined8 *)(puStack_80 + 0x20);
                    /* try { // try from 026100dc to 027100ef has its CatchHandler @ 0260ffb0 */
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                  (lVar7,0xbcdc2f95,&uStack_110,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar7,0);
                    /* try { // try from 026100f0 to 027100f3 has its CatchHandler @ 02610128 */
                    /* try { // try from 026100f4 to 02710117 has its CatchHandler @ 0260ffb0 */
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__SetAsFirstSibling_3c2eff0(lVar9,0);
        if (cRam0000000004f49d57 == '\0') {
                    /* try { // try from 02610118 to 0271011b has its CatchHandler @ 02610120 */
          FUN_021f03f8(PTR_DAT_049b8a18);
                    /* try { // try from 0261011c to 0271013b has its CatchHandler @ 0260ffb0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610118 with catch @ 02610120
                        */
          cRam0000000004f49d57 = '\x01';
        }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610070 with catch @ 02610124
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610090 with catch @ 02610128
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 026100f0 with catch @ 02610128
                        */
        fVar22 = (float)(*(undefined4 **)(*(long *)puVar3 + 0xb8))[1];
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                  (**(undefined4 **)(*(long *)puVar3 + 0xb8),fVar22,lVar9,0);
                    /* try { // try from 0261013c to 0271013f has its CatchHandler @ 02610158 */
                    /* try { // try from 02610140 to 0271015b has its CatchHandler @ 0260ffb0 */
        fVar18 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar9,0);
                    /* catch() { ... } // from try @ 0261013c with catch @ 02610158 */
                    /* try { // try from 0261015c to 02710163 has its CatchHandler @ 0261016c */
                    /* try { // try from 02610164 to 0271016f has its CatchHandler @ 0260ffb0 */
        fVar22 = fVar22 + (float)puStack_80[0x19] * 225.0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0261015c with catch @ 0261016c
                        */
                    /* try { // try from 02610170 to 0271022f has its CatchHandler @ 02610170
                       catch() { ... } // from try @ 02610170 with catch @ 02610170
                       catch() { ... } // from try @ 0261029c with catch @ 02610170
                       catch() { ... } // from try @ 026102b4 with catch @ 02610170
                       catch() { ... } // from try @ 026102dc with catch @ 02610170
                       catch() { ... } // from try @ 02610300 with catch @ 02610170
                       catch() { ... } // from try @ 02610324 with catch @ 02610170 */
        uVar8 = UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                          (fVar18 + (float)puStack_80[0x18] * 225.0,fVar22,lVar9,0);
        if (0 < (int)puStack_80[0x28]) {
          fVar19 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar9,0);
          fVar18 = fVar22;
          fVar20 = (float)Freya_Random__get_InUnitCircle_2efeff4(0);
          uVar8 = UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                            (fVar19 + fVar20 * 50.0,fVar22 + fVar18 * 50.0,lVar9,0);
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_128 = *(undefined8 *)(puStack_80 + 8);
        uStack_130 = *(undefined8 *)(puStack_80 + 6);
        uStack_120 = *(undefined8 *)(puStack_80 + 10);
        auVar23 = CollectItems__ApplyCollectItemJumpMotion_250eb1c(uVar8,lVar7,lVar9,&uStack_130);
        if (*(long *)(puStack_80 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_e0 = auVar23;
        FUN_02333498(*(long *)(puStack_80 + 0x14),auStack_e0,*(undefined8 *)puVar4);
        uVar21 = puStack_80[0x1a];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 02610230 to 02710237 has its CatchHandler @ 026102e4 */
        auVar23 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(uVar21,0,8,0,0,0);
        auStack_e0 = auVar23;
        thunk_FUN_021f190c(auStack_e0,0);
                    /* try { // try from 02610250 to 0271029b has its CatchHandler @ 026102e8 */
        auStack_a0 = auStack_e0;
        if (cRam0000000004f49bf4 == '\0') {
          FUN_021f03f8(PTR_DAT_049b5138);
          cRam0000000004f49bf4 = '\x01';
        }
        puVar6 = *(uint **)puVar1;
        if (puVar6[0x39] == 0) {
          puVar6 = (uint *)FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          puVar6 = (uint *)FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0261029c to 027102af has its CatchHandler @ 02610170 */
          cRam0000000004f49bf5 = '\x01';
        }
        uVar8 = auStack_a0._0_8_;
        if ((long *)auStack_a0._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_a0._0_8_;
          uVar16 = auStack_a0._8_8_ & 0xffff;
                    /* try { // try from 026102b0 to 027102b3 has its CatchHandler @ 026102e8 */
                    /* try { // try from 026102b4 to 027102d7 has its CatchHandler @ 02610170 */
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_026102f8;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
                    /* try { // try from 026102d8 to 027102db has its CatchHandler @ 026102e0 */
            } while (uVar13 != 0);
          }
                    /* try { // try from 026102dc to 027102fb has its CatchHandler @ 02610170 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026102d8 with catch @ 026102e0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610230 with catch @ 026102e4
                        */
          puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02610250 with catch @ 026102e8
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 026102b0 with catch @ 026102e8
                        */
LAB_026102f8:
                    /* try { // try from 026102fc to 027102ff has its CatchHandler @ 02610318 */
                    /* try { // try from 02610300 to 0271031b has its CatchHandler @ 02610170 */
          puVar6 = (uint *)(*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
          if ((int)puVar6 == 0) {
            uStack_84 = 0;
            *puStack_80 = 0;
            *(undefined1 (*) [16])(puStack_80 + 0x2a) = auStack_a0;
            thunk_FUN_021f190c(puStack_80 + 0x2a,0);
            FUN_0235c420(puStack_80 + 2,auStack_a0,puStack_80,*(undefined8 *)PTR_DAT_049c9210);
            goto LAB_02610548;
          }
        }
LAB_0261030c:
        if (cRam0000000004f49bf6 == '\0') {
                    /* catch() { ... } // from try @ 026102fc with catch @ 02610318 */
                    /* try { // try from 0261031c to 02710323 has its CatchHandler @ 0261032c */
          puVar6 = (uint *)FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02610324 to 0271032f has its CatchHandler @ 02610170 */
          cRam0000000004f49bf6 = '\x01';
        }
        uVar8 = auStack_a0._0_8_;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0261031c with catch @ 0261032c
                        */
        if ((long *)auStack_a0._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_a0._0_8_;
          uVar16 = auStack_a0._8_8_ & 0xffff;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_02610384;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,2);
LAB_02610384:
          puVar6 = (uint *)(*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
        }
        uVar14 = puStack_80[0x22];
        uVar21 = puStack_80[0x28] + 1;
        puStack_80[0x28] = uVar21;
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar23 = CollectItems__ApplyCollectTextMotion_250ebf4
                          (puStack_80[0x18],puStack_80[0x19],puVar6,puStack_80[0xc],
                           *(undefined8 *)(puStack_80 + 0xe));
      *(undefined1 (*) [16])(puStack_80 + 0x24) = auVar23;
      thunk_FUN_021f190c((undefined1 (*) [16])(puStack_80 + 0x24),0);
      uVar8 = *(undefined8 *)(puStack_80 + 0x14);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar23 = Cysharp_Threading_Tasks_UniTask__WhenAll_37cc4d0(uVar8,0);
      auStack_e0 = auVar23;
      thunk_FUN_021f190c(auStack_e0,0);
      auStack_a0 = auStack_e0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar8 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ == (long *)0x0) goto LAB_0260fbe0;
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_026104f4;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,0);
LAB_026104f4:
      iVar5 = (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
      if (iVar5 != 0) goto LAB_0260fbe0;
      uStack_84 = 1;
      *puStack_80 = 1;
      *(undefined1 (*) [16])(puStack_80 + 0x2a) = auStack_a0;
      thunk_FUN_021f190c(puStack_80 + 0x2a,0);
      FUN_0235c420(puStack_80 + 2,auStack_a0,puStack_80,*(undefined8 *)PTR_DAT_049c9210);
LAB_02610548:
      iVar5 = 0xe;
      goto LAB_0261054c;
    }
    auStack_a0 = *(undefined1 (*) [16])(puStack_80 + 0x2a);
    puStack_80[0x2a] = 0;
    puStack_80[0x2b] = 0;
    puStack_80[0x2c] = 0;
    puStack_80[0x2d] = 0;
    uStack_84 = 0xffffffff;
    *puStack_80 = 0xffffffff;
LAB_0260fbe0:
                    /* try { // try from 0260fbe4 to 0270fbeb has its CatchHandler @ 0260fef0 */
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
                    /* try { // try from 0260fbfc to 0270fc0b has its CatchHandler @ 0260fee0 */
    uVar8 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0260fc14 to 0270fc27 has its CatchHandler @ 0260fedc */
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* try { // try from 0260fc4c to 0270fc57 has its CatchHandler @ 0260feb8 */
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0260fc58;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
                    /* try { // try from 0260fc34 to 0270fc43 has its CatchHandler @ 0260febc */
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,2);
LAB_0260fc58:
      (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
    }
                    /* try { // try from 0260fc68 to 0270fc6f has its CatchHandler @ 0260feb4 */
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (*(undefined8 *)(puStack_80 + 0xe),0x93dbeb55,0);
    puVar6 = puStack_80;
                    /* try { // try from 0260fc88 to 0270fc8f has its CatchHandler @ 0260feb0 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_e0._8_8_ = *(undefined8 *)(puVar6 + 0x26);
    auStack_e0._0_8_ = *(undefined8 *)(puVar6 + 0x24);
    thunk_FUN_021f190c(auStack_e0,0);
                    /* try { // try from 0260fca8 to 0270fcaf has its CatchHandler @ 0260fde0 */
    auStack_a0._8_8_ = auStack_e0._8_8_;
    auStack_a0._0_8_ = auStack_e0._0_8_;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 0260fcc8 to 0270fd13 has its CatchHandler @ 0260fde4 */
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar8 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
                    /* try { // try from 0260fd14 to 0270fd23 has its CatchHandler @ 0260f960 */
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 0260fd24 to 0270fd2b has its CatchHandler @ 0260fdc4 */
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* try { // try from 0260fd4c to 0270fd53 has its CatchHandler @ 0260fddc */
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0260fd50;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
                    /* try { // try from 0260fd30 to 0270fd3f has its CatchHandler @ 0260fdc8 */
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,0);
LAB_0260fd50:
      iVar5 = (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
                    /* try { // try from 0260fd60 to 0270fd6b has its CatchHandler @ 0260fdd8 */
      if (iVar5 == 0) {
        uStack_84 = 2;
        *puStack_80 = 2;
        *(undefined8 *)(puStack_80 + 0x2c) = auStack_a0._8_8_;
        *(undefined8 *)(puStack_80 + 0x2a) = auStack_a0._0_8_;
        thunk_FUN_021f190c(puStack_80 + 0x2a,0);
        FUN_0235c420(puStack_80 + 2,auStack_a0,puStack_80,*(undefined8 *)PTR_DAT_049c9210);
        goto LAB_02610548;
      }
    }
LAB_0260fd64:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar8 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
                    /* try { // try from 0260fd88 to 0270fd8b has its CatchHandler @ 0260fed4 */
      lVar7 = *(long *)auStack_a0._0_8_;
      uVar16 = auStack_a0._8_8_ & 0xffff;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
                    /* try { // try from 0260fda0 to 0270fda7 has its CatchHandler @ 0260feac */
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 0260fdac to 0270fdaf has its CatchHandler @ 0260fdd4 */
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* catch() { ... } // from try @ 0260fdbc with catch @ 0260fdcc */
                    /* catch() { ... } // from try @ 0260fdb4 with catch @ 0260fdd0 */
                    /* catch() { ... } // from try @ 0260fdac with catch @ 0260fdd4 */
                    /* catch() { ... } // from try @ 0260fd60 with catch @ 0260fdd8 */
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0260fddc;
          }
          uVar13 = uVar13 - 1;
                    /* try { // try from 0260fdb4 to 0270fdb7 has its CatchHandler @ 0260fdd0 */
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
                    /* try { // try from 0260fdbc to 0270fdbf has its CatchHandler @ 0260fdcc */
                    /* try { // try from 0260fdc0 to 0270fe03 has its CatchHandler @ 0260f960 */
                    /* catch() { ... } // from try @ 0260fd24 with catch @ 0260fdc4 */
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,2);
                    /* catch() { ... } // from try @ 0260fd30 with catch @ 0260fdc8 */
LAB_0260fddc:
                    /* catch() { ... } // from try @ 0260fd4c with catch @ 0260fddc */
                    /* catch() { ... } // from try @ 0260fca8 with catch @ 0260fde0 */
                    /* catch() { ... } // from try @ 0260fcc8 with catch @ 0260fde4 */
      (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 0260fe04 to 0270fe07 has its CatchHandler @ 0260fe88 */
                    /* try { // try from 0260fe08 to 0270fe4f has its CatchHandler @ 0260f960 */
    auStack_e0 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(400,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_e0,0);
    auStack_a0 = auStack_e0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
                    /* try { // try from 0260fe50 to 0270fe53 has its CatchHandler @ 0260feec */
                    /* try { // try from 0260fe54 to 0270fe57 has its CatchHandler @ 0260fee8 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0260fe58 to 0270fe5b has its CatchHandler @ 0260fee4 */
      FUN_021f0574();
    }
                    /* try { // try from 0260fe5c to 0270fe63 has its CatchHandler @ 0260fed0 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 0260fe64 to 0270fe67 has its CatchHandler @ 0260fecc */
                    /* try { // try from 0260fe68 to 0270fe6b has its CatchHandler @ 0260fec8 */
                    /* try { // try from 0260fe6c to 0270fe6f has its CatchHandler @ 0260fec4 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0260fe70 to 0270fe73 has its CatchHandler @ 0260fec0 */
                    /* try { // try from 0260fe74 to 0270fe77 has its CatchHandler @ 0260fea8 */
      cRam0000000004f49bf5 = '\x01';
    }
                    /* try { // try from 0260fe78 to 0270fe7b has its CatchHandler @ 0260fea4 */
    uVar8 = auStack_a0._0_8_;
                    /* try { // try from 0260fe7c to 0270fe83 has its CatchHandler @ 0260f960 */
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_a0._0_8_;
                    /* try { // try from 0260fe84 to 0270fe87 has its CatchHandler @ 0260fe9c */
      uVar16 = auStack_a0._8_8_ & 0xffff;
                    /* catch() { ... } // from try @ 0260fe04 with catch @ 0260fe88 */
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0260fe90 to 0270fe97 has its CatchHandler @ 0260ff30 */
      if (uVar13 != 0) {
                    /* try { // try from 0260fe98 to 0270ff13 has its CatchHandler @ 0260f960 */
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 0260fe84 with catch @ 0260fe9c */
                    /* catch() { ... } // from try @ 0260fad4 with catch @ 0260fea0 */
                    /* catch() { ... } // from try @ 0260fe78 with catch @ 0260fea4 */
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* catch() { ... } // from try @ 0260fe6c with catch @ 0260fec4 */
                    /* catch() { ... } // from try @ 0260fe68 with catch @ 0260fec8 */
                    /* catch() { ... } // from try @ 0260fe64 with catch @ 0260fecc */
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0260fed0;
          }
                    /* catch() { ... } // from try @ 0260fe74 with catch @ 0260fea8 */
          uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 0260fda0 with catch @ 0260feac */
          piVar15 = piVar15 + 4;
                    /* catch() { ... } // from try @ 0260fc88 with catch @ 0260feb0 */
        } while (uVar13 != 0);
      }
                    /* catch() { ... } // from try @ 0260fc68 with catch @ 0260feb4 */
                    /* catch() { ... } // from try @ 0260fc4c with catch @ 0260feb8 */
                    /* catch() { ... } // from try @ 0260fc34 with catch @ 0260febc */
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,0);
                    /* catch() { ... } // from try @ 0260fe70 with catch @ 0260fec0 */
LAB_0260fed0:
                    /* catch() { ... } // from try @ 0260fe5c with catch @ 0260fed0 */
                    /* catch() { ... } // from try @ 0260fd88 with catch @ 0260fed4 */
                    /* catch() { ... } // from try @ 0260fb0c with catch @ 0260fed8 */
                    /* catch() { ... } // from try @ 0260fc14 with catch @ 0260fedc */
      iVar5 = (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
                    /* catch() { ... } // from try @ 0260fbfc with catch @ 0260fee0 */
      if (iVar5 == 0) {
        uStack_84 = 3;
        *puStack_80 = 3;
        *(undefined1 (*) [16])(puStack_80 + 0x2a) = auStack_a0;
        thunk_FUN_021f190c(puStack_80 + 0x2a,0);
        FUN_0235c420(puStack_80 + 2,auStack_a0,puStack_80,*(undefined8 *)PTR_DAT_049c9210);
        goto LAB_02610548;
      }
    }
  }
  else {
                    /* try { // try from 0260f960 to 0270fad3 has its CatchHandler @ 0260f960
                       catch() { ... } // from try @ 0260f960 with catch @ 0260f960
                       catch() { ... } // from try @ 0260fd14 with catch @ 0260f960
                       catch() { ... } // from try @ 0260fdc0 with catch @ 0260f960
                       catch() { ... } // from try @ 0260fe08 with catch @ 0260f960
                       catch() { ... } // from try @ 0260fe7c with catch @ 0260f960
                       catch() { ... } // from try @ 0260fe98 with catch @ 0260f960
                       catch() { ... } // from try @ 0260ff28 with catch @ 0260f960 */
    if (uStack_84 == 2) {
      auStack_a0._8_8_ = *(undefined8 *)(puStack_80 + 0x2c);
      auStack_a0._0_8_ = *(undefined8 *)(puStack_80 + 0x2a);
      puStack_80[0x2a] = 0;
      puStack_80[0x2b] = 0;
      puStack_80[0x2c] = 0;
      puStack_80[0x2d] = 0;
      uStack_84 = 0xffffffff;
      *puStack_80 = 0xffffffff;
      goto LAB_0260fd64;
    }
    if (uStack_84 != 3) goto LAB_0260f98c;
    auStack_a0 = *(undefined1 (*) [16])(puStack_80 + 0x2a);
    puStack_80[0x2a] = 0;
    puStack_80[0x2b] = 0;
    puStack_80[0x2c] = 0;
    puStack_80[0x2d] = 0;
    uStack_84 = 0xffffffff;
    *puStack_80 = 0xffffffff;
  }
                    /* catch() { ... } // from try @ 0260fe58 with catch @ 0260fee4 */
                    /* catch() { ... } // from try @ 0260fe54 with catch @ 0260fee8 */
  if (cRam0000000004f49bf6 == '\0') {
                    /* catch() { ... } // from try @ 0260fe50 with catch @ 0260feec */
                    /* catch() { ... } // from try @ 0260fbe4 with catch @ 0260fef0 */
                    /* catch() { ... } // from try @ 0260fbac with catch @ 0260fef4 */
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_a0._0_8_;
    uVar16 = auStack_a0._8_8_ & 0xffff;
                    /* try { // try from 0260ff14 to 0270ff17 has its CatchHandler @ 0260ff1c */
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
                    /* catch() { ... } // from try @ 0260ff14 with catch @ 0260ff1c */
                    /* try { // try from 0260ff20 to 0270ff27 has its CatchHandler @ 0260ff30 */
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 0260ff28 to 0270ff33 has its CatchHandler @ 0260f960 */
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_0260ffa0;
        }
                    /* catch() { ... } // from try @ 0260fe90 with catch @ 0260ff30
                       catch() { ... } // from try @ 0260ff20 with catch @ 0260ff30 */
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)puVar2,2);
LAB_0260ffa0:
    (*(code *)*puVar10)(uVar8,uVar16,puVar10[1]);
  }
                    /* try { // try from 0260ffb0 to 0271006f has its CatchHandler @ 0260ffb0
                       catch() { ... } // from try @ 0260ffb0 with catch @ 0260ffb0
                       catch() { ... } // from try @ 026100dc with catch @ 0260ffb0
                       catch() { ... } // from try @ 026100f4 with catch @ 0260ffb0
                       catch() { ... } // from try @ 0261011c with catch @ 0260ffb0
                       catch() { ... } // from try @ 02610140 with catch @ 0260ffb0
                       catch() { ... } // from try @ 02610164 with catch @ 0260ffb0 */
  if (*(long *)(puStack_80 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(puStack_80 + 0xe),0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar17 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
            (*(long *)(lVar17 + 0x28),*(undefined8 *)(puStack_80 + 0xe),
             *(undefined8 *)PTR_DAT_049c5780);
  iVar5 = 0x12;
LAB_0261054c:
  if ((int)*puStack_c0 < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppuStack_b8 + 0x10,*(undefined8 *)PTR_DAT_049c1b90);
  }
  if (lStack_c8 == 0) {
    if (iVar5 == 0x12) {
      *puStack_80 = 0xfffffffe;
      puVar6 = puStack_80 + 0xe;
      puVar6[0] = 0;
      puVar6[1] = 0;
      thunk_FUN_021f190c(puVar6,0);
      puVar6 = puStack_80 + 0x14;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = 0;
      puStack_80[0x12] = 0;
      puStack_80[0x13] = 0;
                    /* try { // try from 02610624 to 0271075b has its CatchHandler @ 02610624
                       catch() { ... } // from try @ 02610624 with catch @ 02610624
                       catch() { ... } // from try @ 026107c8 with catch @ 02610624
                       catch() { ... } // from try @ 02610844 with catch @ 02610624
                       catch() { ... } // from try @ 0261095c with catch @ 02610624
                       catch() { ... } // from try @ 02610998 with catch @ 02610624
                       catch() { ... } // from try @ 026109bc with catch @ 02610624 */
      thunk_FUN_021f190c(puVar6,0);
      puVar6 = puStack_80 + 0x16;
      puVar6[0] = 0;
      puVar6[1] = 0;
      thunk_FUN_021f190c(puVar6,0);
      puStack_80[0x1e] = 0;
      puStack_80[0x1f] = 0;
      puStack_80[0x20] = 0;
      puStack_80[0x21] = 0;
      puStack_80[0x1c] = 0;
      puStack_80[0x1d] = 0;
      puStack_80[0x24] = 0;
      puStack_80[0x25] = 0;
      puStack_80[0x26] = 0;
      puStack_80[0x27] = 0;
      FUN_0235afc8(puStack_80 + 2,0);
    }
    else if (iVar5 == 0) {
      uVar8 = (&uStack_b0)[iStack_a8 + -1];
      *puStack_80 = 0xfffffffe;
      puVar6 = puStack_80 + 0xe;
      puVar6[0] = 0;
      puVar6[1] = 0;
      thunk_FUN_021f190c(puVar6,0);
      puVar6 = puStack_80 + 0x14;
      puVar6[0] = 0;
      puVar6[1] = 0;
      puStack_80[0x10] = 0;
      puStack_80[0x11] = 0;
      puStack_80[0x12] = 0;
      puStack_80[0x13] = 0;
      thunk_FUN_021f190c(puVar6,0);
      puVar6 = puStack_80 + 0x16;
      puVar6[0] = 0;
      puVar6[1] = 0;
      thunk_FUN_021f190c(puVar6,0);
      puStack_80[0x1e] = 0;
      puStack_80[0x1f] = 0;
      puStack_80[0x20] = 0;
      puStack_80[0x21] = 0;
      puStack_80[0x1c] = 0;
      puStack_80[0x1d] = 0;
      puStack_80[0x24] = 0;
      puStack_80[0x25] = 0;
      puStack_80[0x26] = 0;
      puStack_80[0x27] = 0;
      FUN_0235aea8(puStack_80 + 2,uVar8,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698();
}

