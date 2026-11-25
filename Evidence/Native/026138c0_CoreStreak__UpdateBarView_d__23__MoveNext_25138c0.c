/* IL2CPP: CoreStreak.<UpdateBarView>d__23$$MoveNext
void CoreStreak__UpdateBarView_d__23__MoveNext (CoreStreak__UpdateBarView_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak.<UpdateBarView>d__23$$MoveNext
   void CoreStreak__UpdateBarView_d__23__MoveNext (CoreStreak__UpdateBarView_d__23_o __this, const
   MethodInfo* method); */

void CoreStreak__UpdateBarView_d__23__MoveNext_25138c0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  int iVar20;
  long *unaff_x21;
  ulong uVar21;
  ulong unaff_x22;
  long *unaff_x24;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  
  if ((bRam0000000004f4be07 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c92f0);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1fd0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c92f8);
    FUN_021f03f8(PTR_DAT_049c9300);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1690);
    FUN_021f03f8(PTR_DAT_049c2e38);
    bRam0000000004f4be07 = 1;
  }
  puVar5 = PTR_DAT_049c1690;
  puVar4 = PTR_DAT_049c1680;
  plVar18 = (long *)PTR_DAT_049b54e0;
  puVar3 = PTR_DAT_049b5310;
  puVar2 = PTR_DAT_049b5138;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  auVar25 = ZEXT816(0);
  iVar7 = *param_1;
  lVar19 = *(long *)(param_1 + 0xc);
  if (iVar7 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    goto LAB_02613f2c;
  }
  if (iVar7 == 1) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    goto LAB_02613e6c;
  }
  if (iVar7 == 2) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    auStack_b0 = ZEXT816(0);
  }
  else {
    lVar9 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar3;
    }
    iVar7 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar9 + 0xb8) + 0x840,0);
    param_1[0xe] = iVar7;
    lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (*(undefined8 *)(param_1 + 6),0x1914de40,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar9,0);
    unaff_x21 = (long *)(param_1 + 0x10);
    *unaff_x21 = lVar9;
    thunk_FUN_021f190c(unaff_x21);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(*unaff_x21,0);
    while( true ) {
      iVar7 = iVar7 + -1;
      param_1[0x12] = iVar7;
      if (iVar7 < 0) break;
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = UnityEngine_Transform__GetChild_3c2f8bc(*(long *)(param_1 + 0x10),iVar7,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
      unaff_x24 = (long *)(param_1 + 0x14);
      *unaff_x24 = lVar11;
      thunk_FUN_021f190c(unaff_x24);
      if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      bVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(*unaff_x24,0);
      iVar7 = param_1[0xe];
      iVar20 = param_1[0x12];
      if (((bVar6 ^ iVar20 < iVar7) & 1) != 0) {
        if ((char)param_1[8] == '\0') {
          if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_GameObject__SetActive_3c1ce34(*unaff_x24,iVar20 < iVar7,0);
        }
        else {
          if (iVar20 < iVar7) {
            if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(*unaff_x24,1,0);
            lVar11 = *(long *)puVar5;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              FUN_021f0574();
              lVar11 = *(long *)puVar5;
            }
            puVar14 = *(undefined4 **)(lVar11 + 0xb8);
            uVar22 = *puVar14;
            uVar23 = puVar14[1];
            uVar24 = puVar14[2];
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a190 = '\x01';
            }
            lVar11 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            auVar25 = LitMotion_LMotion__Create_2eaa1b4
                                (uVar22,uVar23,uVar24,*(undefined4 *)(lVar11 + 0xc),
                                 *(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                                 0x3e800000,0);
            auStack_b0 = auVar25;
            auVar25 = FUN_024f4e50(auStack_b0,0x1a,*(undefined8 *)puVar4);
            auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                (auVar25._0_8_,auVar25._8_8_,lVar9,*(undefined8 *)PTR_DAT_049c1670);
            unaff_x22 = unaff_x22 & 0xffffffff00000000 | auVar25._8_8_ & 0xffffffff;
            auVar25 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                                (auVar25._0_8_,unaff_x22,*(undefined8 *)(param_1 + 10),0);
            unaff_x24 = auVar25._8_8_;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auStack_90 = auVar25;
            thunk_FUN_021f190c(auStack_90,0);
            auStack_a0 = auStack_90;
            if (cRam0000000004f49bf4 == '\0') {
              FUN_021f03f8(PTR_DAT_049b5138);
              cRam0000000004f49bf4 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (cRam0000000004f49bf5 == '\0') {
              FUN_021f03f8(PTR_DAT_049b54e0);
              cRam0000000004f49bf5 = '\x01';
            }
            uVar10 = auStack_a0._0_8_;
            auVar25 = auStack_b0;
            if ((long *)auStack_a0._0_8_ != (long *)0x0) {
              lVar9 = *(long *)auStack_a0._0_8_;
              unaff_x24 = (long *)(auStack_a0._8_8_ & 0xffff);
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *plVar18) {
                    puVar13 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_02613f18;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,0);
LAB_02613f18:
              iVar7 = (*(code *)*puVar13)(uVar10,unaff_x24,puVar13[1]);
              auVar25 = auStack_b0;
              if (iVar7 == 0) {
                *param_1 = 0;
                *(undefined1 (*) [16])(param_1 + 0x16) = auStack_a0;
                thunk_FUN_021f190c(param_1 + 0x16,0);
                FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c92f0);
                return;
              }
            }
LAB_02613f2c:
            auStack_b0 = auVar25;
            if (cRam0000000004f49bf6 == '\0') {
              FUN_021f03f8(PTR_DAT_049b54e0);
              cRam0000000004f49bf6 = '\x01';
            }
            uVar10 = auStack_a0._0_8_;
            if ((long *)auStack_a0._0_8_ != (long *)0x0) {
              lVar9 = *(long *)auStack_a0._0_8_;
              unaff_x24 = (long *)(auStack_a0._8_8_ & 0xffff);
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *plVar18) {
                    puVar13 = (undefined8 *)(lVar9 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_02613fa4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,2);
LAB_02613fa4:
              (*(code *)*puVar13)(uVar10,unaff_x24,puVar13[1]);
            }
          }
          else {
            if (cRam0000000004f4a190 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a190 = '\x01';
            }
            lVar11 = *(long *)puVar5;
            lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            uVar22 = *(undefined4 *)(lVar12 + 0xc);
            uVar23 = *(undefined4 *)(lVar12 + 0x10);
            uVar24 = *(undefined4 *)(lVar12 + 0x14);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              FUN_021f0574();
              lVar11 = *(long *)puVar5;
            }
            puVar14 = *(undefined4 **)(lVar11 + 0xb8);
            auVar25 = LitMotion_LMotion__Create_2eaa1b4
                                (uVar22,uVar23,uVar24,*puVar14,puVar14[1],puVar14[2],0x3e800000,0);
            auStack_b0 = auVar25;
            auVar25 = FUN_024f4e50(auStack_b0,0x19,*(undefined8 *)puVar4);
            auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                                (auVar25._0_8_,auVar25._8_8_,lVar9,*(undefined8 *)PTR_DAT_049c1670);
            unaff_x21 = (long *)((ulong)unaff_x21 & 0xffffffff00000000 | auVar25._8_8_ & 0xffffffff)
            ;
            auVar25 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                                (auVar25._0_8_,unaff_x21,*(undefined8 *)(param_1 + 10),0);
            unaff_x24 = auVar25._8_8_;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auStack_90 = auVar25;
            thunk_FUN_021f190c(auStack_90,0);
            auStack_a0 = auStack_90;
            if (cRam0000000004f49bf4 == '\0') {
              FUN_021f03f8(PTR_DAT_049b5138);
              cRam0000000004f49bf4 = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (cRam0000000004f49bf5 == '\0') {
              FUN_021f03f8(PTR_DAT_049b54e0);
              cRam0000000004f49bf5 = '\x01';
            }
            uVar10 = auStack_a0._0_8_;
            auVar25 = auStack_b0;
            if ((long *)auStack_a0._0_8_ != (long *)0x0) {
              lVar9 = *(long *)auStack_a0._0_8_;
              unaff_x24 = (long *)(auStack_a0._8_8_ & 0xffff);
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *plVar18) {
                    puVar13 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_02613e58;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,0);
LAB_02613e58:
              iVar7 = (*(code *)*puVar13)(uVar10,unaff_x24,puVar13[1]);
              auVar25 = auStack_b0;
              if (iVar7 == 0) {
                *param_1 = 1;
                    /* try { // try from 02614628 to 02714827 has its CatchHandler @ 02614628
                       catch() { ... } // from try @ 02614628 with catch @ 02614628
                       catch() { ... } // from try @ 0261489c with catch @ 02614628
                       catch() { ... } // from try @ 026148f4 with catch @ 02614628
                       catch() { ... } // from try @ 02614a04 with catch @ 02614628
                       catch() { ... } // from try @ 02614b24 with catch @ 02614628
                       catch() { ... } // from try @ 02614b70 with catch @ 02614628
                       catch() { ... } // from try @ 02614bcc with catch @ 02614628
                       catch() { ... } // from try @ 02614be8 with catch @ 02614628
                       catch() { ... } // from try @ 02614c4c with catch @ 02614628 */
                *(undefined1 (*) [16])(param_1 + 0x16) = auStack_a0;
                thunk_FUN_021f190c(param_1 + 0x16,0);
                FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c92f0);
                return;
              }
            }
LAB_02613e6c:
            auStack_b0 = auVar25;
            if (cRam0000000004f49bf6 == '\0') {
              FUN_021f03f8(PTR_DAT_049b54e0);
              cRam0000000004f49bf6 = '\x01';
            }
            uVar10 = auStack_a0._0_8_;
            if ((long *)auStack_a0._0_8_ != (long *)0x0) {
              lVar9 = *(long *)auStack_a0._0_8_;
              unaff_x24 = (long *)(auStack_a0._8_8_ & 0xffff);
              uVar16 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *plVar18) {
                    puVar13 = (undefined8 *)(lVar9 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_02613ee4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,2);
LAB_02613ee4:
              (*(code *)*puVar13)(uVar10,unaff_x24,puVar13[1]);
            }
            if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(param_1 + 0x14),0,0);
          }
          piVar17 = param_1 + 0x14;
          piVar17[0] = 0;
          piVar17[1] = 0;
          thunk_FUN_021f190c(piVar17,0);
        }
      }
      iVar7 = param_1[0x12];
    }
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar7 = CoreStreak__GetCurrentItemCount_2513268(lVar19);
    if (iVar7 < 1) {
      uVar10 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    else {
      auStack_90._0_4_ = iVar7;
      uVar10 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),auStack_90);
      uVar10 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c2e38,uVar10,0);
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (*(undefined8 *)(param_1 + 6),0x5cac0bbb,uVar10,0);
    lVar19 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                       (*(undefined8 *)(param_1 + 6),0x2516c3ab,0);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar19 = StatefulUI_Runtime_References_ObjectReference__get_Transform_3345dec(lVar19,0);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar8 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar19,0);
    puVar2 = PTR_DAT_049bbf90;
    iVar20 = 0;
    iVar1 = iVar8 + -1;
    if (iVar7 <= iVar8 + -1) {
      iVar1 = iVar7;
    }
    while( true ) {
      iVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar19,0);
      plVar18 = (long *)PTR_DAT_049b54e0;
      puVar3 = PTR_DAT_049b5138;
      if (iVar7 <= iVar20) break;
      lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c9300);
      System_Object___ctor_3142338(lVar9,0);
      lVar11 = UnityEngine_Transform__GetChild_3c2f8bc(lVar19,iVar20,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar18 = (long *)(lVar9 + 0x10);
      *plVar18 = lVar12;
      thunk_FUN_021f190c(plVar18);
      if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      bVar6 = UnityEngine_GameObject__get_activeSelf_3c1cef8(*plVar18,0);
      if (((iVar1 == iVar20 ^ bVar6) & 1) != 0) {
        if ((char)param_1[8] == '\0') {
          if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_GameObject__SetActive_3c1ce34(*plVar18,iVar1 == iVar20,0);
        }
        else if (iVar1 == iVar20) {
          if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_GameObject__SetActive_3c1ce34(*plVar18,1,0);
          lVar9 = *(long *)PTR_DAT_049c1690;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            FUN_021f0574();
            lVar9 = *(long *)PTR_DAT_049c1690;
          }
          puVar14 = *(undefined4 **)(lVar9 + 0xb8);
          uVar22 = *puVar14;
          uVar23 = puVar14[1];
          uVar24 = puVar14[2];
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4a190 = '\x01';
          }
          lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
          auVar25 = LitMotion_LMotion__Create_2eaa1b4
                              (uVar22,uVar23,uVar24,*(undefined4 *)(lVar9 + 0xc),
                               *(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                               0x3e800000,0);
          auStack_b0 = auVar25;
          auVar25 = FUN_024f6e90(0x3e800000,auStack_b0,0,1,*(undefined8 *)PTR_DAT_049c2808);
          auStack_b0 = auVar25;
          auVar25 = FUN_024f4e50(auStack_b0,0x1a,*(undefined8 *)PTR_DAT_049c1680);
          auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                              (auVar25._0_8_,auVar25._8_8_,lVar11,*(undefined8 *)PTR_DAT_049c1670);
          unaff_x24 = (long *)((ulong)unaff_x24 & 0xffffffff00000000 | auVar25._8_8_ & 0xffffffff);
          LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                    (auVar25._0_8_,unaff_x24,*(undefined8 *)(param_1 + 10),0);
        }
        else {
          if (cRam0000000004f4a190 == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4a190 = '\x01';
          }
          lVar15 = *(long *)(*(long *)puVar2 + 0xb8);
          lVar12 = *(long *)PTR_DAT_049c1690;
          uVar22 = *(undefined4 *)(lVar15 + 0xc);
          uVar23 = *(undefined4 *)(lVar15 + 0x10);
          uVar24 = *(undefined4 *)(lVar15 + 0x14);
          if (*(int *)(lVar12 + 0xe4) == 0) {
            FUN_021f0574();
            lVar12 = *(long *)PTR_DAT_049c1690;
          }
          puVar14 = *(undefined4 **)(lVar12 + 0xb8);
          auVar25 = LitMotion_LMotion__Create_2eaa1b4
                              (uVar22,uVar23,uVar24,*puVar14,puVar14[1],puVar14[2],0x3e800000,0);
          auStack_b0 = auVar25;
          uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
          System_Action___ctor_306b98c(uVar10,lVar9,*(undefined8 *)PTR_DAT_049c92f8,0);
          auVar25 = FUN_024f6b84(auStack_b0,uVar10,*(undefined8 *)PTR_DAT_049c1fd0);
          auStack_b0 = auVar25;
          auVar25 = FUN_024f4e50(auStack_b0,0x19,*(undefined8 *)PTR_DAT_049c1680);
          auVar25 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                              (auVar25._0_8_,auVar25._8_8_,lVar11,*(undefined8 *)PTR_DAT_049c1670);
          LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                    (auVar25._0_8_,auVar25._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0);
        }
      }
      iVar20 = iVar20 + 1;
    }
    if ((char)param_1[8] == '\0') goto LAB_026144ec;
    uVar10 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar25 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x15e,0,8,uVar10,0,0);
    auStack_90 = auVar25;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_a0 = auStack_90;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
      lVar19 = *(long *)auStack_a0._0_8_;
      uVar21 = auStack_a0._8_8_ & 0xffff;
      uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar18) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02614450;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,0);
LAB_02614450:
      iVar7 = (*(code *)*puVar13)(uVar10,uVar21,puVar13[1]);
      if (iVar7 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x16) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 0x16,0);
        FUN_0235c25c(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c92f0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar19 = *(long *)auStack_a0._0_8_;
    uVar21 = auStack_a0._8_8_ & 0xffff;
    uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar18) {
          puVar13 = (undefined8 *)(lVar19 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_026144dc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*plVar18,2);
LAB_026144dc:
    (*(code *)*puVar13)(uVar10,uVar21,puVar13[1]);
  }
LAB_026144ec:
  uVar22 = 0x370ffbc1;
  if (param_1[0xe] < 5) {
    uVar22 = 0x5f10e269;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*(undefined8 *)(param_1 + 6),uVar22,0);
  *param_1 = -2;
  piVar17 = param_1 + 0x10;
  piVar17[0] = 0;
  piVar17[1] = 0;
  thunk_FUN_021f190c(piVar17,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar18 = *(long **)(param_1 + 2);
  if (plVar18 != (long *)0x0) {
    lVar19 = *plVar18;
    uVar16 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar13 = (undefined8 *)(lVar19 + (long)(*piVar17 + 2) * 0x10 + 0x138);
          goto LAB_026145ac;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049b56d0,2);
LAB_026145ac:
    (*(code *)*puVar13)(plVar18,puVar13[1]);
  }
  return;
}

