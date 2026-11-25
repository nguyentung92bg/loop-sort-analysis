/* IL2CPP: GiftBoxElement.<ApplyProgressMotion>d__5$$MoveNext
void GiftBoxElement__ApplyProgressMotion_d__5__MoveNext (GiftBoxElement__ApplyProgressMotion_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: GiftBoxElement.<ApplyProgressMotion>d__5$$MoveNext
   void GiftBoxElement__ApplyProgressMotion_d__5__MoveNext
   (GiftBoxElement__ApplyProgressMotion_d__5_o __this, const MethodInfo* method); */

void GiftBoxElement__ApplyProgressMotion_d__5__MoveNext_2419f84(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4b753 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c2e98);
    FUN_021f03f8(PTR_DAT_049c2ea0);
    FUN_021f03f8(PTR_DAT_049c2d50);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c2eb0);
    FUN_021f03f8(PTR_DAT_049c2eb8);
    FUN_021f03f8(PTR_DAT_049c2ec0);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c2ec8);
    FUN_021f03f8(PTR_DAT_049c2ed0);
    bRam0000000004f4b753 = 1;
  }
  lVar15 = *(long *)(param_1 + 4);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar18 = ZEXT816(0);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_98 = 0;
  if (*param_1 == 0) {
    auStack_90 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2ec0);
    System_Object___ctor_3142338(lVar6,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(*(long *)(lVar15 + 0x30) + 0x38);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar18 = FeatureSheet__GetCurrentProgress_255fa20(lVar7,0);
    pauVar17 = (undefined1 (*) [16])(param_1 + 6);
    *pauVar17 = auVar18;
    thunk_FUN_021f190c(pauVar17,0);
    uVar8 = FeatureSheet_Progress__get_HasProgress_255ffe8(pauVar17,0);
    puVar2 = PTR_DAT_049c2eb0;
    if ((uVar8 & 1) == 0) goto LAB_0251a72c;
    if (*(long *)*pauVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(lVar15 + 0x28);
    plVar12 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2eb0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
    uVar9 = thunk_FUN_0224e54c(*(long *)*pauVar17,*(undefined8 *)(*plVar12 + 0x80));
    func_0x04608620(&uStack_c0,uVar9,uVar1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Features__Get_24fb17c(&uStack_c0,lVar7,uStack_c0 & 0xffffffff,0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                      (lVar15,0xbcdc2f95,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar7,0);
    uVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar7,0);
    lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                       (uVar9,0x1a9a2c8b,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_Image__set_sprite_3cee6e8(lVar10,CONCAT44(uStack_ac,uStack_b0),0);
    lVar10 = UnityEngine_Component__get_transform_3c18724(lVar10,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar3 = PTR_DAT_049bbf90;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (fStack_a8 * *(float *)(lVar13 + 0xc),fStack_a8 * *(float *)(lVar13 + 0x10),
               fStack_a8 * *(float *)(lVar13 + 0x14),lVar10,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
              (uVar9,0x5cac0bbb,**(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    if (*(long *)*pauVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar12[1] + 0xfc);
    uVar9 = thunk_FUN_0224e54c(*(long *)*pauVar17,*(undefined8 *)(*plVar12 + 0x80));
    func_0x04608620(&uStack_c0,uVar9,uVar1);
    uStack_b0 = (undefined4)uStack_c0;
    uStack_b8 = 0xffffffffffffffff;
    uStack_c0 = *(ulong *)PTR_DAT_049c2ea0;
    lVar10 = System_Enum__ToString_3135e00(&uStack_c0,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = System_String__ToLowerInvariant_2f81e54(lVar10,0);
    uVar9 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c2ed0,uVar9,*(undefined8 *)PTR_DAT_049c2ec8,0);
    if (*(int *)(*(long *)PTR_DAT_049c2ea8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = Localization__Get_252dbe0(uVar9,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar15,0x4f91ca30,uVar9,0);
    lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                       (lVar15,0x8204c370,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar10,auStack_70,*(undefined8 *)PTR_DAT_049c2d50);
    if (auStack_70._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AssetKits_ParticleImage_ParticleImage__Clear_32a75c8(auStack_70._0_8_,0);
    lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(lVar15,0x4f91ca30,0)
    ;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(lVar10 + 0x38);
    lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
    if ((lVar7 == 0) || (UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar15,0xc24dc4d1,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = UnityEngine_GameObject__get_gameObject_3c1e7c8(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar15,0x85f8a9cf,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0);
    uVar9 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c(lVar15,0x85f8a9cf,0)
    ;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lVar6 + 0x10) = uVar9;
    thunk_FUN_021f190c();
    lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetText_33518fc(lVar15,0x6d8b1339,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar12 = (long *)(lVar6 + 0x18);
    *plVar12 = *(long *)(lVar7 + 0x38);
    thunk_FUN_021f190c(plVar12);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = TMPro_TMP_Text__get_transform_3b0c9d0(*plVar12,0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
    UnityEngine_Transform__set_localScale_3c2ddfc
              (*(undefined4 *)(lVar10 + 0xc),*(undefined4 *)(lVar10 + 0x10),
               *(undefined4 *)(lVar10 + 0x14),lVar7,0);
    auStack_80 = LitMotion_LMotion__Create_2ea9f9c(param_1[8],param_1[9],0x3f800000,0);
    puVar2 = PTR_DAT_049c2288;
    lVar7 = *(long *)PTR_DAT_049c2288;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
    auVar18 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60),
                           *(undefined8 *)PTR_DAT_049c2bf0);
    auStack_80 = auVar18;
    auVar18 = FUN_024f6e90(_UNK_013aa8f4,auStack_80,0,1,*(undefined8 *)PTR_DAT_049c20d8);
    auStack_80 = auVar18;
    uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar9,lVar6,*(undefined8 *)PTR_DAT_049c2eb8,0);
    FUN_024f6d0c(auStack_80,uVar9,*(undefined8 *)PTR_DAT_049c20a8);
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x6a4,1,8,0,0,0);
    thunk_FUN_021f190c(auStack_70,0);
    uVar4 = auStack_70._8_8_;
    uVar9 = auStack_70._0_8_;
    auStack_90 = auStack_70;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar18 = auStack_80;
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
      auVar18 = auStack_80;
    }
    if ((long *)uVar9 != (long *)0x0) {
      lVar6 = *(long *)uVar9;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0251a660;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      auStack_80 = auVar18;
      puVar11 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
      auVar18 = auStack_80;
LAB_0251a660:
      auStack_80 = auVar18;
      iVar5 = (*(code *)*puVar11)(uVar9,uVar4 & 0xffffffff,puVar11[1]);
      auVar18 = auStack_80;
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_90;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c420(param_1 + 2,auStack_90,param_1,*(undefined8 *)PTR_DAT_049c2e98);
        return;
      }
    }
  }
  auStack_80 = auVar18;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_90._0_8_;
    uVar16 = auStack_90._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0251a6f8;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251a6f8:
    (*(code *)*puVar11)(uVar9,uVar16,puVar11[1]);
  }
  if (1.0 <= (float)param_1[9]) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar18 = GiftBoxElement__ApplyUnlockMotion_2419690(lVar15);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268(auVar18._0_8_,auVar18._8_8_,0);
  }
LAB_0251a72c:
  *param_1 = -2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

