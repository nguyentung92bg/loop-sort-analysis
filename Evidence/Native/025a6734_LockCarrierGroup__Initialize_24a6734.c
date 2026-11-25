/* IL2CPP: LockCarrierGroup$$Initialize
void LockCarrierGroup__Initialize (LockCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LockCarrierGroup$$Initialize
   void LockCarrierGroup__Initialize (LockCarrierGroup_o* __this, const MethodInfo* method); */

void LockCarrierGroup__Initialize_24a6734(long param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_48;
  
  if ((bRam0000000004f4bb1a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2620);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2648);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    FUN_021f03f8(PTR_DAT_049c6780);
    FUN_021f03f8(PTR_DAT_049c6788);
    bRam0000000004f4bb1a = 1;
  }
  uVar25 = 0;
  uVar28 = 0;
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_a0 = 0;
  iStack_b4 = 0;
  GameBehaviourBase__InjectColorType_24f4d78(0,0,0,0,param_1,*(undefined8 *)(param_1 + 0xf4),0);
  puVar9 = PTR_DAT_049c6788;
  puVar8 = PTR_DAT_049c2680;
  puVar7 = PTR_DAT_049c2648;
  puVar6 = PTR_DAT_049c2638;
  puVar5 = PTR_DAT_049c2630;
  puVar4 = PTR_DAT_049c2628;
  if (*(long *)(param_1 + 0x100) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x100),&lStack_d0,*(undefined8 *)PTR_DAT_049c2640);
    uStack_a0 = uStack_c0;
    plStack_a8 = plStack_c8;
    lStack_b0 = lStack_d0;
    lStack_d0 = 0;
    plStack_c8 = &lStack_b0;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_b0,*(undefined8 *)puVar5);
      fVar30 = (float)uVar28;
      fVar29 = (float)uVar25;
      if ((uVar10 & 1) == 0) break;
      lVar18 = *(long *)puVar6;
      lVar11 = *(long *)(lVar18 + 0x20);
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
                    /* catch() { ... } // from try @ 025a68d0 with catch @ 025a68a8
                       catch() { ... } // from try @ 025a6908 with catch @ 025a68a8
                       catch() { ... } // from try @ 025a6930 with catch @ 025a68a8 */
        lVar11 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      uVar27 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
                    /* try { // try from 025a68c8 to 026a68cf has its CatchHandler @ 025a68e8 */
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
                    /* try { // try from 025a68d0 to 026a6903 has its CatchHandler @ 025a68a8 */
      uVar13 = thunk_FUN_0224e54c(&lStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a68c8 with catch @ 025a68e8
                        */
      func_0x04608620(&lStack_48,uVar13,uVar27);
      lVar12 = lStack_48;
                    /* try { // try from 025a6904 to 026a6907 has its CatchHandler @ 025a6924 */
      uVar13 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
                    /* try { // try from 025a6908 to 026a6927 has its CatchHandler @ 025a68a8 */
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar13,uVar13);
      }
      Carrier__DisableInteraction_2403394(lVar12,uVar13,0);
                    /* catch() { ... } // from try @ 025a6904 with catch @ 025a6924 */
      uVar13 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
                    /* try { // try from 025a6928 to 026a692f has its CatchHandler @ 025a6938 */
                    /* try { // try from 025a6930 to 026a693b has its CatchHandler @ 025a68a8 */
      Carrier__DisableTransfer_23fe290(lVar12,uVar13,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a6928 with catch @ 025a6938
                        */
    }
                    /* try { // try from 025a693c to 026a69c7 has its CatchHandler @ 025a693c
                       catch() { ... } // from try @ 025a693c with catch @ 025a693c
                       catch() { ... } // from try @ 025a6a60 with catch @ 025a693c
                       catch() { ... } // from try @ 025a6adc with catch @ 025a693c */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&lStack_b0,*(undefined8 *)puVar4);
    lVar12 = *(long *)puVar9;
    lVar11 = *(long *)(param_1 + 0x100);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      lVar12 = *(long *)puVar9;
    }
    puVar16 = *(undefined8 **)(lVar12 + 0xb8);
    lVar18 = puVar16[1];
    if (lVar18 == 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_021f0574();
        puVar16 = *(undefined8 **)(*(long *)puVar9 + 0xb8);
      }
      uVar25 = *puVar16;
      lVar18 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2620);
      System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                (lVar18,uVar25,*(undefined8 *)PTR_DAT_049c6780,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
      *plVar14 = lVar18;
      thunk_FUN_021f190c(plVar14,lVar18);
    }
    if (lVar11 != 0) {
                    /* try { // try from 025a69c8 to 026a69d3 has its CatchHandler @ 025a6aa0 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                (lVar11,lVar18,*(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x100) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_1 + 0x100),0,&lStack_d0,*(undefined8 *)puVar8);
        lVar12 = lStack_d0;
        lVar11 = *(long *)(param_1 + 0x100);
                    /* try { // try from 025a6a00 to 026a6a0f has its CatchHandler @ 025a6a9c */
                    /* try { // try from 025a6a14 to 026a6a3b has its CatchHandler @ 025a6aa4 */
        if ((((lVar11 != 0) &&
             (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar11,*(int *)(lVar11 + 0x18) + -1,&lStack_d0,*(undefined8 *)puVar8),
             lVar12 != 0)) && (lStack_d0 != 0)) && (*(long *)(lStack_d0 + 0x110) != 0)) {
          lVar12 = *(long *)(lVar12 + 0x110);
          fVar20 = (float)UnityEngine_Transform__get_position_3c2d540
                                    (*(long *)(lStack_d0 + 0x110),0);
          if (lVar12 != 0) {
            fVar26 = fVar29;
            fVar22 = fVar30;
            fVar21 = (float)UnityEngine_Transform__get_position_3c2d540(lVar12,0);
                    /* try { // try from 025a6a50 to 026a6a5f has its CatchHandler @ 025a6aa8 */
                    /* try { // try from 025a6a60 to 026a6ac3 has its CatchHandler @ 025a693c */
            fVar23 = fVar22;
            if (cRam0000000004f4a55c == '\0') {
              FUN_021f03f8(PTR_DAT_049b8758);
              cRam0000000004f4a55c = '\x01';
            }
            puVar4 = PTR_DAT_049b8758;
            fVar20 = fVar20 - fVar21;
            fVar29 = fVar29 - fVar26;
            fVar30 = fVar30 - fVar22;
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            puVar5 = PTR_DAT_049bbf90;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6a00 with catch @ 025a6a9c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a69c8 with catch @ 025a6aa0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6a14 with catch @ 025a6aa4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6a50 with catch @ 025a6aa8
                        */
            fVar22 = SQRT(fVar30 * fVar30 + fVar20 * fVar20 + fVar29 * fVar29);
                    /* try { // try from 025a6ac4 to 026a6ac7 has its CatchHandler @ 025a6ad0 */
            fVar26 = _UNK_013aa920;
            if (fVar22 <= _UNK_013aa920) {
                    /* try { // try from 025a6adc to 026a6ae7 has its CatchHandler @ 025a693c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a6ad4 with catch @ 025a6ae4
                        */
              if (cRam0000000004f4a233 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a233 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)puVar5 + 0xb8);
              fVar20 = *pfVar17;
              fVar29 = pfVar17[1];
              fVar30 = pfVar17[2];
            }
            else {
              fVar20 = fVar20 / fVar22;
                    /* catch() { ... } // from try @ 025a6ac4 with catch @ 025a6ad0 */
              fVar29 = fVar29 / fVar22;
                    /* try { // try from 025a6ad4 to 026a6adb has its CatchHandler @ 025a6ae4 */
              fVar30 = fVar30 / fVar22;
            }
            fVar22 = (float)UnityEngine_Transform__get_right_3c2da80(lVar12,0);
            lVar12 = *(long *)(param_1 + 0x100);
            fVar30 = fVar30 * fVar23;
            fVar29 = fVar30 + fVar20 * fVar22 + fVar29 * fVar26;
            if (fVar29 <= 0.0) {
              iStack_b4 = -2;
            }
            else {
              iStack_b4 = System_Index__op_Implicit_30f94e8(0,0);
            }
            if (lVar12 != 0) {
              iVar2 = *(int *)(lVar12 + 0x18);
              uVar10 = System_Index__get_IsFromEnd_30f9438(&iStack_b4,0);
                    /* try { // try from 025a6b64 to 026a6c87 has its CatchHandler @ 025a6b64
                       catch() { ... } // from try @ 025a6b64 with catch @ 025a6b64
                       catch() { ... } // from try @ 025a6d3c with catch @ 025a6b64
                       catch() { ... } // from try @ 025a6de4 with catch @ 025a6b64
                       catch() { ... } // from try @ 025a6e7c with catch @ 025a6b64 */
              iVar1 = 0;
              if ((uVar10 & 1) != 0) {
                iVar1 = iVar2 + 1;
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (lVar12,iStack_b4 + iVar1,&lStack_d0,*(undefined8 *)puVar8);
              lVar12 = lStack_d0;
              lVar11 = *(long *)(param_1 + 0x100);
              if (fVar29 <= 0.0) {
                iStack_b4 = System_Index__op_Implicit_30f94e8(0,0);
              }
              else {
                iStack_b4 = -2;
              }
              if (lVar11 != 0) {
                iVar2 = *(int *)(lVar11 + 0x18);
                uVar10 = System_Index__get_IsFromEnd_30f9438(&iStack_b4,0);
                iVar1 = 0;
                if ((uVar10 & 1) != 0) {
                  iVar1 = iVar2 + 1;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lVar11,iStack_b4 + iVar1,&lStack_d0,*(undefined8 *)puVar8);
                lVar11 = lStack_d0;
                if (((lVar12 != 0) && (lStack_d0 != 0)) &&
                   (lVar18 = *(long *)(lVar12 + 0x110), lVar18 != 0)) {
                  lVar19 = *(long *)(lStack_d0 + 0x110);
                  fVar29 = (float)UnityEngine_Transform__get_position_3c2d540(lVar18,0);
                  if (lVar19 != 0) {
                    fVar20 = fVar30;
                    fVar26 = fVar23;
                    fVar22 = (float)UnityEngine_Transform__get_position_3c2d540(lVar19,0);
                    lVar15 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                    if (lVar15 != 0) {
                      fVar26 = (fVar23 + fVar26) * 0.5;
                      fVar30 = (fVar30 + fVar20) * 0.5;
                      UnityEngine_Transform__set_position_3c2d61c
                                ((fVar29 + fVar22) * 0.5,fVar30,fVar26,lVar15,0);
                      lVar15 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                      UnityEngine_Transform__get_rotation_3c2d7a8(lVar18,0);
                      if (lVar15 != 0) {
                    /* try { // try from 025a6c88 to 026a6caf has its CatchHandler @ 025a6e48 */
                        UnityEngine_Transform__set_rotation_3c2d86c(lVar15,0);
                        fVar23 = (float)UnityEngine_Transform__get_position_3c2d540(lVar18,0);
                        fVar29 = fVar30;
                        fVar20 = fVar26;
                        fVar22 = (float)UnityEngine_Transform__get_position_3c2d540(lVar19,0);
                        if (cRam0000000004f4a234 == '\0') {
                          FUN_021f03f8(PTR_DAT_049b8758);
                          cRam0000000004f4a234 = '\x01';
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                    /* try { // try from 025a6cec to 026a6d17 has its CatchHandler @ 025a6e44 */
                        if (*(long *)(param_1 + 0xd8) != 0) {
                          fVar29 = SQRT((fVar26 - fVar20) * (fVar26 - fVar20) +
                                        (fVar23 - fVar22) * (fVar23 - fVar22) +
                                        (fVar30 - fVar29) * (fVar30 - fVar29));
                          UnityEngine_Transform__set_localScale_3c2ddfc
                                    (fVar29 + *(float *)(param_1 + 0xe0),0x3f800000,0x3f800000,
                                     *(long *)(param_1 + 0xd8),0);
                    /* try { // try from 025a6d30 to 026a6d3b has its CatchHandler @ 025a6e38 */
                          if (*(long *)(param_1 + 0xe8) != 0) {
                    /* try { // try from 025a6d3c to 026a6dd3 has its CatchHandler @ 025a6b64 */
                            fVar30 = 1.0;
                            fVar20 = 1.0;
                            UnityEngine_Transform__set_localScale_3c2ddfc
                                      (fVar29 + *(float *)(param_1 + 0xf0),*(long *)(param_1 + 0xe8)
                                       ,0);
                            if (*(long *)(lVar12 + 0x110) != 0) {
                              lVar19 = *(long *)(param_1 + 200);
                              UnityEngine_Transform__get_position_3c2d540
                                        (*(long *)(lVar12 + 0x110),0);
                              if (lVar19 != 0) {
                                UnityEngine_Transform__set_position_3c2d61c(lVar19,0);
                                if (*(long *)(lVar11 + 0x110) != 0) {
                                  lVar12 = *(long *)(param_1 + 0xd0);
                                  UnityEngine_Transform__get_position_3c2d540
                                            (*(long *)(lVar11 + 0x110),0);
                                  if (lVar12 != 0) {
                                    UnityEngine_Transform__set_position_3c2d61c(lVar12,0);
                                    lVar12 = UnityEngine_Component__get_transform_3c18724(param_1,0)
                                    ;
                                    if (lVar12 != 0) {
                                      fVar23 = (float)UnityEngine_Transform__get_position_3c2d540
                                                                (lVar12,0);
                                      fVar29 = fVar30;
                                      fVar26 = fVar20;
                                      lVar11 = UnityEngine_Component__get_transform_3c18724
                                                         (param_1,0);
                                      if (lVar11 != 0) {
                    /* try { // try from 025a6dd4 to 026a6dd7 has its CatchHandler @ 025a6e40 */
                                        fVar22 = (float)UnityEngine_Transform__get_forward_3c2db78
                                                                  (lVar11,0);
                    /* try { // try from 025a6dd8 to 026a6ddb has its CatchHandler @ 025a6e3c */
                                        fVar21 = *(float *)(param_1 + 0xb0);
                    /* try { // try from 025a6ddc to 026a6de3 has its CatchHandler @ 025a6e34 */
                    /* try { // try from 025a6de4 to 026a6e63 has its CatchHandler @ 025a6b64 */
                                        fVar30 = fVar30 + fVar29 * fVar21;
                                        fVar20 = fVar20 + fVar26 * fVar21;
                                        UnityEngine_Transform__set_position_3c2d61c
                                                  (fVar23 + fVar22 * fVar21,lVar12,0);
                                        fVar29 = (float)UnityEngine_Transform__get_forward_3c2db78
                                                                  (lVar18,0);
                                        if (cRam0000000004f4a55a == '\0') {
                                          FUN_021f03f8(PTR_DAT_049bbf90);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6ddc with catch @ 025a6e34
                        */
                                          cRam0000000004f4a55a = '\x01';
                                        }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6d30 with catch @ 025a6e38
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6dd8 with catch @ 025a6e3c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6dd4 with catch @ 025a6e40
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6cec with catch @ 025a6e44
                        */
                                        lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a6c88 with catch @ 025a6e48
                        */
                                        fVar23 = *(float *)(lVar12 + 0x48);
                                        fVar22 = *(float *)(lVar12 + 0x4c);
                                        fVar26 = *(float *)(lVar12 + 0x50);
                                        if (cRam0000000004f4a5db == '\0') {
                                          FUN_021f03f8(PTR_DAT_049b8758);
                    /* try { // try from 025a6e64 to 026a6e67 has its CatchHandler @ 025a6e70 */
                                          cRam0000000004f4a5db = '\x01';
                                        }
                    /* catch() { ... } // from try @ 025a6e64 with catch @ 025a6e70 */
                    /* try { // try from 025a6e74 to 026a6e7b has its CatchHandler @ 025a6e84 */
                    /* try { // try from 025a6e7c to 026a6e87 has its CatchHandler @ 025a6b64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a6e74 with catch @ 025a6e84
                        */
                                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                          FUN_021f0574();
                                        }
                                        uVar27 = 0;
                                        fVar21 = SQRT((fVar20 * fVar20 +
                                                      fVar29 * fVar29 + fVar30 * fVar30) *
                                                      (fVar26 * fVar26 +
                                                      fVar23 * fVar23 + fVar22 * fVar22));
                                        if (_UNK_013aa374 <= fVar21) {
                                          fVar21 = (fVar20 * fVar26 +
                                                   fVar29 * fVar23 + fVar30 * fVar22) / fVar21;
                                          fVar29 = 1.0;
                                          if (fVar21 <= 1.0) {
                                            fVar29 = fVar21;
                                          }
                                          fVar30 = -1.0;
                                          if (-1.0 <= fVar21) {
                                            fVar30 = fVar29;
                                          }
                                          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                            FUN_021f0574();
                                          }
                                          dVar24 = (double)FUN_046086c0((double)fVar30);
                                          uVar27 = 0;
                                          if (91.0 <= (float)dVar24 * _UNK_013aa654) {
                                            uVar27 = 0x43340000;
                                          }
                                        }
                                        lVar12 = UnityEngine_Component__get_transform_3c18724
                                                           (param_1,0);
                                        if (cRam0000000004f4a55e == '\0') {
                                          FUN_021f03f8(PTR_DAT_049bbf90);
                                          cRam0000000004f4a55e = '\x01';
                                        }
                                        if (lVar12 != 0) {
                                          lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
                                          UnityEngine_Transform__Rotate_3c2e930
                                                    (*(undefined4 *)(lVar11 + 0x18),
                                                     *(undefined4 *)(lVar11 + 0x1c),
                                                     *(undefined4 *)(lVar11 + 0x20),uVar27,lVar12,0)
                                          ;
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

