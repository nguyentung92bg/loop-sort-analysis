/* IL2CPP: SwipeablePageLayout$$OnFingerUp
void SwipeablePageLayout__OnFingerUp (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwipeablePageLayout$$OnFingerUp
   void SwipeablePageLayout__OnFingerUp (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void SwipeablePageLayout__OnFingerUp_244cb4c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  if ((bRam0000000004f4b8a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4b8a0 = 1;
  }
  if (*(char *)(param_4 + 0x2c) == '\0') {
    return;
  }
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x10) != *(int *)(param_4 + 0x30)) {
      return;
    }
    *(undefined1 *)(param_4 + 0x2c) = 0;
    if (*(long *)(param_4 + 0x10) != 0) {
      Monitors__RestoreRaycaster_256eafc(*(long *)(param_4 + 0x10),param_4,0);
      iVar7 = UnityEngine_Screen__get_width_3bd80bc(0);
      fVar18 = (float)iVar7 / 2.0;
      if (fVar18 <= ABS(*(float *)(param_4 + 0x34))) {
        if ((bRam0000000004f4b89f & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c44f8);
          FUN_021f03f8(PTR_DAT_049c4500);
          FUN_021f03f8(PTR_DAT_049c4508);
          FUN_021f03f8(PTR_DAT_049b5480);
          FUN_021f03f8(PTR_DAT_049c4510);
          bRam0000000004f4b89f = 1;
        }
        puVar6 = PTR_DAT_049c4508;
        puVar5 = PTR_DAT_049c4500;
        puVar4 = PTR_DAT_049c44f8;
        puVar2 = PTR_DAT_049b5480;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_4 + 0x18),&uStack_b8,*(undefined8 *)PTR_DAT_049c4510);
        uStack_a0 = uStack_b8;
        puVar3 = PTR_DAT_049bbf90;
        uStack_b8 = 0;
        uStack_98 = puStack_b0;
        uStack_90 = uStack_a8;
        puStack_b0 = &uStack_a0;
        lVar8 = 0;
        fVar19 = 3.4028235e+38;
        while( true ) {
          uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_a0,*(undefined8 *)puVar5);
          if ((uVar12 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_a0,*(undefined8 *)puVar4);
            SwipeablePageLayout__TransitionTo_244c42c(param_4,lVar8);
            return;
          }
          lVar15 = *(long *)puVar6;
          lVar10 = *(long *)(lVar15 + 0x20);
          uVar1 = *(ushort *)(lVar10 + 0x135);
          lVar11 = lVar10;
          if ((uVar1 & 1) == 0) {
            lVar11 = FUN_02229718();
            lVar10 = *(long *)(lVar15 + 0x20);
            uVar1 = *(ushort *)(lVar10 + 0x135);
          }
          uVar16 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_a0,
                                      *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&stack0xffffffffffffffa8,uVar14,uVar16);
          if (in_stack_ffffffffffffffa8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar11 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                             (in_stack_ffffffffffffffa8,0x8ac5d2f7,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar11 = UnityEngine_GameObject__get_transform_3c1ca74(lVar11,0);
          if (lVar11 == 0) break;
          uVar16 = UnityEngine_Transform__get_position_3c2d540(lVar11,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar16 = Extensions__WithZ_3f0d5f4(uVar16,fVar18,param_3,0,0);
          if (cRam0000000004f4a233 == '\0') {
            FUN_021f03f8(puVar3);
            cRam0000000004f4a233 = '\x01';
          }
          puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          fVar17 = (float)Extensions__DistanceTo_3f0c6f4
                                    (uVar16,fVar18,param_3,*puVar13,puVar13[1],puVar13[2],0);
          if (fVar17 <= fVar19) {
            lVar8 = in_stack_ffffffffffffffa8;
            fVar19 = fVar17;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(param_5 + 0x20) != '\0') {
        uVar14 = *(undefined8 *)(param_4 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar12 = Extensions__HasPlayingMotions_24e6bcc(uVar14,0);
        if ((uVar12 & 1) != 0) {
          return;
        }
      }
      if ((bRam0000000004f4b89e & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c45c0);
        FUN_021f03f8(PTR_DAT_049c45c8);
        FUN_021f03f8(PTR_DAT_049c2f70);
        FUN_021f03f8(PTR_DAT_049c2d70);
        FUN_021f03f8(PTR_DAT_049bc0c8);
        bRam0000000004f4b89e = 1;
      }
      if (*(long *)(param_4 + 0x20) != 0) {
        LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_4 + 0x20),0);
        puVar6 = PTR_DAT_049c45c8;
        puVar5 = PTR_DAT_049c2f70;
        puVar4 = PTR_DAT_049c2d70;
        puVar2 = PTR_DAT_049bc0c8;
        lVar8 = *(long *)(param_4 + 0x18);
        if (lVar8 != 0) {
          iVar7 = 0;
          do {
            if (*(int *)(lVar8 + 0x18) <= iVar7) {
              return;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar8,iVar7,&stack0xffffffffffffff98,*(undefined8 *)puVar6);
            if ((in_stack_ffffffffffffff98 == 0) ||
               (lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                  (in_stack_ffffffffffffff98,0x8ac5d2f7,0), lVar8 == 0)) break;
            plVar9 = (long *)UnityEngine_GameObject__get_transform_3c1ca74(lVar8,0);
            if ((plVar9 == (long *)0x0) || (*plVar9 != *(long *)puVar2)) {
              SwipeablePageLayout__GetPageTargetPosition_244c490(param_4,iVar7);
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            SwipeablePageLayout__GetPageTargetPosition_244c490(param_4,iVar7);
            UnityEngine_RectTransform__get_anchoredPosition_3c2be98(plVar9,0);
            LitMotion_LMotion__Create_2eaa148(0);
            auVar20 = FUN_024f4e50(&stack0xffffffffffffff88,3,*(undefined8 *)puVar4);
            auVar20 = LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2666894
                                (auVar20._0_8_,auVar20._8_8_,plVar9,*(undefined8 *)puVar5);
            LitMotion_MotionHandleExtensions__AddTo_2eacb44
                      (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_4 + 0x20),0);
            lVar8 = *(long *)(param_4 + 0x18);
            iVar7 = iVar7 + 1;
          } while (lVar8 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

