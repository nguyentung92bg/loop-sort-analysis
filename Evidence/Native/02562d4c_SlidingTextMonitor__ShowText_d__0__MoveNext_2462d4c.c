/* IL2CPP: SlidingTextMonitor.<ShowText>d__0$$MoveNext
void SlidingTextMonitor__ShowText_d__0__MoveNext (SlidingTextMonitor__ShowText_d__0_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SlidingTextMonitor.<ShowText>d__0$$MoveNext
   void SlidingTextMonitor__ShowText_d__0__MoveNext (SlidingTextMonitor__ShowText_d__0_o __this,
   const MethodInfo* method); */

void SlidingTextMonitor__ShowText_d__0__MoveNext_2462d4c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4b958 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c50c8);
    FUN_021f03f8(PTR_DAT_049c2d48);
    FUN_021f03f8(PTR_DAT_049c45a0);
    FUN_021f03f8(PTR_DAT_049c2be8);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c50d0);
    FUN_021f03f8(PTR_DAT_049c50d8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b958 = 1;
  }
  puVar4 = PTR_DAT_049c2bf0;
  puVar3 = PTR_DAT_049c2be8;
  puVar2 = PTR_DAT_049c2288;
  auStack_70._8_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auVar17 = ZEXT816(0);
  auStack_80._0_8_ = 0;
  if (*param_1 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    lVar11 = *(long *)(param_1 + 6);
    lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c50d8);
    System_Object___ctor_3142338(lVar6,0);
    plVar10 = (long *)(param_1 + 0xc);
    *plVar10 = lVar6;
    thunk_FUN_021f190c(plVar10,lVar6);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (lVar11,0xbcdc2f95,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *plVar10;
    uVar7 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar12 = (undefined8 *)(lVar11 + 0x10);
    *puVar12 = uVar7;
    thunk_FUN_021f190c(puVar12);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (*(undefined8 *)(*plVar10 + 0x10),0xcc12786d,*(undefined8 *)(param_1 + 8),0);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *(long *)(*plVar10 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(lVar6,0);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(*plVar10 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (lVar11,auStack_60,*(undefined8 *)PTR_DAT_049c2d48);
    piVar9 = param_1 + 0xe;
    *(undefined8 *)piVar9 = auStack_60._0_8_;
    thunk_FUN_021f190c(piVar9);
    auStack_70 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa838,0);
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_021f0574();
      lVar11 = *(long *)puVar2;
    }
    auVar17 = FUN_02526574(auStack_70,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60),
                           *(undefined8 *)puVar4);
    LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
              (auVar17._0_8_,auVar17._8_8_,*(undefined8 *)piVar9,*(undefined8 *)puVar3);
    if (cRam0000000004f4a196 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f4a196 = '\x01';
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar15 = (float)param_1[10] + (float)param_1[0xb] * -0.5;
    fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14) * fVar15;
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (*(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10) * fVar15,fVar16,lVar6,
               0);
    UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar6,0);
    auVar17 = LitMotion_LMotion__Create_2ea9f9c(fVar16,fVar16 + (float)param_1[0xb],_UNK_013aa8f4,0)
    ;
    auStack_70 = auVar17;
    auVar17 = FUN_02526574(auStack_70,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                           *(undefined8 *)puVar4);
    LitMotion_Extensions_LitMotionRectTransformExtensions__BindToAnchoredPositionY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26671dc
              (auVar17._0_8_,auVar17._8_8_,lVar6,*(undefined8 *)PTR_DAT_049c45a0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x5dc,1,8,0,0,0);
    thunk_FUN_021f190c(auStack_60,0);
    uVar14 = auStack_60._8_8_;
    uVar7 = auStack_60._0_8_;
    auStack_80 = auStack_60;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar17 = auStack_70;
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
      auVar17 = auStack_70;
    }
    if ((long *)uVar7 != (long *)0x0) {
      lVar6 = *(long *)uVar7;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02563138;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      auStack_70 = auVar17;
      puVar12 = (undefined8 *)FUN_02229a4c(uVar7,*(long *)PTR_DAT_049b54e0,0);
      auVar17 = auStack_70;
LAB_02563138:
      auStack_70 = auVar17;
      iVar5 = (*(code *)*puVar12)(uVar7,uVar14 & 0xffffffff,puVar12[1]);
      auVar17 = auStack_70;
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = auStack_80;
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c50c8);
        return;
      }
    }
  }
  auStack_70 = auVar17;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar7 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_80._0_8_;
    uVar13 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025631d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025631d0:
    (*(code *)*puVar12)(uVar7,uVar13,puVar12[1]);
  }
  auVar17 = LitMotion_LMotion__Create_2ea9f9c(0x3f800000,0,_UNK_013aa62c,0);
  lVar6 = *(long *)puVar2;
  auStack_70 = auVar17;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  auVar17 = FUN_02526574(auStack_70,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                         *(undefined8 *)puVar4);
  uVar14 = *(undefined8 *)(param_1 + 0xc);
  auStack_70 = auVar17;
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
  System_Action___ctor_306b98c(uVar7,uVar14,*(undefined8 *)PTR_DAT_049c50d0,0);
  auVar17 = FUN_024f6b84(auStack_70,uVar7,*(undefined8 *)PTR_DAT_049c2240);
  LitMotion_Extensions_LitMotionUGUIExtensions__BindToAlpha___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2673774
            (auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)puVar3);
  *param_1 = -2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  thunk_FUN_021f190c(param_1 + 0xc,0);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_021f190c(param_1 + 0xe,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar12 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02563334;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02563334:
    (*(code *)*puVar12)(plVar10,puVar12[1]);
  }
  return;
}

