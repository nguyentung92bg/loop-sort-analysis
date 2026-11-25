/* IL2CPP: HomeSceneMover$$.ctor
void HomeSceneMover___ctor (HomeSceneMover_o* __this, HomeSceneSprite_o* data, UnityEngine_RectTransform_o* parent, bool flip, HomeScenePathKey_array* path, bool needsGroup, float speed, UnityEngine_RectTransform_o* ground, UnityEngine_Material_o* grade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneMover$$.ctor
   void HomeSceneMover___ctor (HomeSceneMover_o* __this, HomeSceneSprite_o* data,
   UnityEngine_RectTransform_o* parent, bool flip, HomeScenePathKey_array* path, bool needsGroup,
   float speed, UnityEngine_RectTransform_o* ground, UnityEngine_Material_o* grade, const
   MethodInfo* method); */

void HomeSceneMover___ctor_24244cc
               (float param_1,long param_2,long param_3,undefined8 param_4,byte param_5,long param_6
               ,uint param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  float *pfVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  undefined8 unaff_x29;
  long lVar30;
  float unaff_w30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 unaff_d8;
  float fVar39;
  undefined8 unaff_d9;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  puVar3 = PTR_DAT_049c3308;
  puVar2 = PTR_DAT_049c3300;
  if ((bRam0000000004f4b794 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3310);
    FUN_021f03f8(PTR_DAT_049c31c8);
    FUN_021f03f8(PTR_DAT_049c32d0);
    FUN_021f03f8(PTR_DAT_049c3318);
    FUN_021f03f8(PTR_DAT_049c3320);
    FUN_021f03f8(PTR_DAT_049c3328);
    FUN_021f03f8(PTR_DAT_049c3330);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3338);
    FUN_021f03f8(PTR_DAT_049c3308);
    FUN_021f03f8(PTR_DAT_049c3300);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2b98);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c3340);
    FUN_021f03f8(PTR_DAT_049c3348);
    FUN_021f03f8(PTR_DAT_049c3350);
    FUN_021f03f8(PTR_DAT_049c3358);
    FUN_021f03f8(PTR_DAT_049c3360);
    FUN_021f03f8(PTR_DAT_049c3368);
    FUN_021f03f8(PTR_DAT_049c3370);
    FUN_021f03f8(PTR_DAT_049c3378);
    FUN_021f03f8(PTR_DAT_049c3380);
    FUN_021f03f8(PTR_DAT_049c3388);
    bRam0000000004f4b794 = 1;
  }
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar8,*(undefined8 *)puVar3);
  plVar9 = (long *)(param_2 + 0x88);
  *plVar9 = lVar8;
  thunk_FUN_021f190c(plVar9,lVar8);
  *(undefined4 *)(param_2 + 0xa0) = 0xffffffff;
  System_Object___ctor_3142338(param_2,0);
  *(long *)(param_2 + 0x10) = param_3;
  thunk_FUN_021f190c((long *)(param_2 + 0x10),param_3);
  *(byte *)(param_2 + 0x68) = param_5 & 1;
  if (param_3 != 0) {
    fVar39 = *(float *)(param_3 + 0x34);
    fVar40 = *(float *)(param_3 + 0x38);
    uVar23 = *(undefined8 *)(param_3 + 0x10);
    lVar8 = *(long *)PTR_DAT_049b3b98;
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_3 + 0x28);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
    if ((uVar10 & 1) == 0) {
      uVar23 = *(undefined8 *)PTR_DAT_049c3368;
    }
    else {
      if (*(long *)(param_3 + 0x10) == 0) goto LAB_02525400;
      uVar23 = UnityEngine_Object__get_name_3c232a8(*(long *)(param_3 + 0x10),0);
    }
    if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar8 = HomeSceneView__CreateNode_2426d00(uVar23,param_4,0);
    plVar11 = (long *)(param_2 + 0x18);
    *plVar11 = lVar8;
    thunk_FUN_021f190c();
    puVar2 = PTR_DAT_049bbf30;
    fVar34 = _UNK_013aa8a0;
    if (param_6 != 0) {
      if ((int)*(ulong *)(param_6 + 0x18) < 1) {
        bVar1 = false;
      }
      else {
        bVar1 = false;
        uVar10 = 0;
        uVar17 = *(ulong *)(param_6 + 0x18) & 0xffffffff;
        pfVar21 = (float *)(param_6 + 0x38);
        do {
          if (uVar17 <= uVar10) goto LAB_02525838;
          fVar38 = *pfVar21;
          if (cRam0000000004f4a18f == '\0') {
            FUN_021f03f8(puVar2);
            cRam0000000004f4a18f = '\x01';
          }
          fVar31 = ABS(fVar38);
          uVar10 = uVar10 + 1;
          pfVar21 = pfVar21 + 7;
          if (fVar31 <= 1.0) {
            fVar31 = 1.0;
          }
          uVar17 = (ulong)*(uint *)(param_6 + 0x18);
          fVar33 = **(float **)(*(long *)puVar2 + 0xb8) * 8.0;
          fVar43 = fVar31 * fVar34;
          if (fVar31 * fVar34 <= fVar33) {
            fVar43 = fVar33;
          }
          bVar1 = (bool)(bVar1 | fVar43 <= ABS(1.0 - fVar38));
        } while ((long)uVar10 < (long)(int)*(uint *)(param_6 + 0x18));
      }
      if (param_2 != 0) {
        lVar8 = *(long *)(param_2 + 0x18);
        uVar23 = 0x3f000000;
        if (!bVar1) {
          uVar23 = 0x3f0000003f000000;
        }
        *(undefined8 *)(param_2 + 0x6c) = uVar23;
        if (lVar8 != 0) {
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar8,0);
          UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar8,0);
          if (*(long *)(param_2 + 0x18) != 0) {
            UnityEngine_RectTransform__set_pivot_3c2c28c
                      (*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70),
                       *(long *)(param_2 + 0x18),0);
            if (*(long *)(param_2 + 0x18) != 0) {
              fVar34 = fVar40;
              UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                        (fVar39,fVar40,*(long *)(param_2 + 0x18),0);
              if ((param_7 & 1) != 0) {
                if ((*plVar11 == 0) ||
                   (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(*plVar11,0), lVar8 == 0))
                goto LAB_02525400;
                uVar23 = UnityEngine_GameObject__AddComponent_object__261a774
                                   (lVar8,*(undefined8 *)PTR_DAT_049c3310);
                *(undefined8 *)(param_2 + 0x40) = uVar23;
                thunk_FUN_021f190c();
              }
              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(param_8,0,0);
              if (((uVar10 & 1) != 0) &&
                 (((*(char *)(param_3 + 0xa0) != '\0' || (*(char *)(param_3 + 0xb9) != '\0')) ||
                  (*(char *)(param_3 + 0xc4) != '\0')))) {
                if (*plVar11 == 0) goto LAB_02525400;
                uVar23 = UnityEngine_Object__get_name_3c232a8(*plVar11,0);
                uVar23 = System_String__Concat_2f72b28(uVar23,*(undefined8 *)PTR_DAT_049c3348,0);
                if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
                  FUN_021f0574(*(long *)PTR_DAT_049c3110);
                }
                lVar8 = HomeSceneView__CreateNode_2426d00(uVar23,param_8,0);
                plVar19 = (long *)(param_2 + 0x80);
                *plVar19 = lVar8;
                thunk_FUN_021f190c(plVar19,lVar8);
                if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525400;
                lVar8 = *plVar19;
                uVar32 = UnityEngine_RectTransform__get_anchorMin_3c2bb70
                                   (*(long *)(param_2 + 0x18),0);
                if (lVar8 == 0) goto LAB_02525400;
                UnityEngine_RectTransform__set_anchorMax_3c2bdd0(lVar8,0);
                UnityEngine_RectTransform__set_anchorMin_3c2bc3c(uVar32,fVar34,lVar8,0);
                if (*plVar19 == 0) goto LAB_02525400;
                UnityEngine_RectTransform__set_pivot_3c2c28c
                          (*(undefined4 *)(param_2 + 0x6c),*(undefined4 *)(param_2 + 0x70),*plVar19,
                           0);
                if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525400;
                lVar8 = *(long *)(param_2 + 0x80);
                UnityEngine_RectTransform__get_sizeDelta_3c2c02c(*(long *)(param_2 + 0x18),0);
                if (lVar8 == 0) goto LAB_02525400;
                UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(lVar8,0);
              }
              lVar8 = *(long *)(param_2 + 0x80);
              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(lVar8,0,0);
              puVar2 = PTR_DAT_049c3370;
              plVar15 = (long *)PTR_DAT_049c3110;
              plVar19 = (long *)(param_2 + 0x80);
              if ((uVar10 & 1) == 0) {
                plVar19 = plVar11;
              }
              lVar8 = *plVar19;
              if (*(char *)(param_3 + 0xa0) != '\0') {
                if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                lVar12 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,lVar8,0);
                HomeSceneView__Place_2427788
                          (fVar39 * (1.0 - *(float *)(param_3 + 0xa4)) * 0.5,
                           (fVar40 - *(float *)(param_3 + 0xb0)) - *(float *)(param_3 + 0xa8) * 0.5,
                           fVar39 * *(float *)(param_3 + 0xa4),lVar12,0);
                if (((lVar12 == 0) ||
                    (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0), lVar12 == 0))
                   || (plVar19 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                                   (lVar12,*(undefined8 *)PTR_DAT_049c31c8),
                      puVar2 = PTR_DAT_049c3328, plVar19 == (long *)0x0)) goto LAB_02525400;
                (**(code **)(*plVar19 + 0x2c8))(plVar19,0,*(undefined8 *)(*plVar19 + 0x2d0));
                lVar12 = *(long *)puVar2;
                iVar4 = *(int *)(lVar12 + 0xe4);
                *(undefined1 *)((long)plVar19 + 0xdc) = *(undefined1 *)(param_3 + 0xb8);
                if (iVar4 == 0) {
                  FUN_021f0574();
                  lVar12 = *(long *)puVar2;
                }
                puVar18 = *(undefined4 **)(lVar12 + 0xb8);
                (**(code **)(*plVar19 + 0x2a8))
                          (*puVar18,puVar18[1],puVar18[2],*(undefined4 *)(param_3 + 0xac),plVar19,
                           *(undefined8 *)(*plVar19 + 0x2b0));
                puVar3 = PTR_DAT_049c3360;
                fVar38 = _UNK_013aa4c0;
                fVar34 = _UNK_013aa4b8;
                if (0.0 < *(float *)(param_3 + 0xb4)) {
                  lVar12 = *(long *)(param_3 + 0x90);
                  if (lVar12 == 0) goto LAB_02525400;
                  if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                    uVar10 = 0;
                    uVar17 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                    pfVar21 = (float *)(lVar12 + 0x28);
                    do {
                      if (uVar17 <= uVar10) goto LAB_02525838;
                      fVar31 = pfVar21[-2];
                      fVar43 = *pfVar21;
                      if (*(int *)(*plVar15 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      lVar13 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar3,lVar8,0);
                      fVar41 = *(float *)(param_3 + 0xa8);
                      fVar33 = 1.0 - fVar31;
                      if ((param_5 & 1) == 0) {
                        fVar33 = fVar31;
                      }
                      fVar31 = *(float *)(param_3 + 0xb0);
                      if (*(int *)(*plVar15 + 0xe4) == 0) {
                        FUN_021f0574(*plVar15);
                      }
                      HomeSceneView__Place_2427788
                                (fVar39 * fVar33 - fVar39 * fVar43 * fVar38 * 0.5,
                                 (fVar40 - fVar31) - fVar41 * fVar34 * 0.5,lVar13,0);
                      if (((lVar13 == 0) ||
                          (lVar13 = UnityEngine_Component__get_gameObject_3c187f4(lVar13,0),
                          lVar13 == 0)) ||
                         (plVar19 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                                      (lVar13,*(undefined8 *)PTR_DAT_049c31c8),
                         plVar19 == (long *)0x0)) goto LAB_02525400;
                      (**(code **)(*plVar19 + 0x2c8))(plVar19,0,*(undefined8 *)(*plVar19 + 0x2d0));
                      lVar13 = *(long *)puVar2;
                      if (*(int *)(lVar13 + 0xe4) == 0) {
                        FUN_021f0574();
                        lVar13 = *(long *)puVar2;
                      }
                      puVar18 = *(undefined4 **)(lVar13 + 0xb8);
                      (**(code **)(*plVar19 + 0x2a8))
                                (*puVar18,puVar18[1],puVar18[2],*(undefined4 *)(param_3 + 0xb4),
                                 plVar19,*(undefined8 *)(*plVar19 + 0x2b0));
                      uVar17 = (ulong)*(uint *)(lVar12 + 0x18);
                      uVar10 = uVar10 + 1;
                      pfVar21 = pfVar21 + 3;
                    } while ((long)uVar10 < (long)(int)*(uint *)(lVar12 + 0x18));
                  }
                }
              }
              puVar2 = PTR_DAT_049c3350;
              if (*(char *)(param_3 + 0xb9) != '\0') {
                if (*(int *)(*plVar15 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                lVar12 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,lVar8,0);
                if (lVar12 == 0) goto LAB_02525400;
                UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar12,0);
                UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar12,0);
                UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f800000,lVar12,0);
                UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                          (fVar39 * 0.5,-fVar40,lVar12,0);
                UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                          (fVar39,fVar40 * *(float *)(param_3 + 0xc0),lVar12,0);
                uVar32 = 0xbf800000;
                if ((param_5 & 1) == 0) {
                  uVar32 = 0x3f800000;
                }
                UnityEngine_Transform__set_localScale_3c2ddfc(uVar32,0x3f800000,0x3f800000,lVar12,0)
                ;
                lVar12 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0);
                if (lVar12 == 0) goto LAB_02525400;
                lVar12 = UnityEngine_GameObject__AddComponent_object__261a774
                                   (lVar12,*(undefined8 *)PTR_DAT_049c32d0);
                plVar20 = (long *)(param_2 + 0x78);
                *plVar20 = lVar12;
                thunk_FUN_021f190c(plVar20,lVar12);
                plVar19 = (long *)*plVar20;
                if (plVar19 == (long *)0x0) goto LAB_02525400;
                (**(code **)(*plVar19 + 0x2c8))(plVar19,0,*(undefined8 *)(*plVar19 + 0x2d0));
                plVar19 = (long *)*plVar20;
                if (plVar19 == (long *)0x0) goto LAB_02525400;
                plVar19[0x1b] = _UNK_013a78d8;
                (**(code **)(*plVar19 + 0x2a8))
                          (0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(param_3 + 0xbc),plVar19,
                           *(undefined8 *)(*plVar19 + 0x2b0));
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_02525400;
                (**(code **)(*plVar20 + 0x348))(plVar20,param_9,*(undefined8 *)(*plVar20 + 0x350));
              }
              puVar3 = PTR_DAT_049c3380;
              puVar2 = PTR_DAT_049c3358;
              lVar12 = *plVar11;
              if (*(int *)(*plVar15 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar23 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar3,lVar12,0);
              puVar27 = (undefined8 *)(param_2 + 0x20);
              *puVar27 = uVar23;
              thunk_FUN_021f190c(puVar27,uVar23);
              HomeSceneView__Stretch_242881c(*puVar27,0);
              lVar12 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,*puVar27,0);
              plVar19 = (long *)(param_2 + 0x28);
              *plVar19 = lVar12;
              thunk_FUN_021f190c(plVar19,lVar12);
              HomeSceneView__Stretch_242881c(*plVar19,0);
              if (*(char *)(param_3 + 0x58) == '\0') {
                fVar34 = 0.5;
                uVar32 = 0x3f000000;
              }
              else {
                fVar34 = 1.0 - *(float *)(param_3 + 0x6c);
                uVar32 = *(undefined4 *)(param_3 + 0x68);
              }
              if (*plVar19 != 0) {
                UnityEngine_RectTransform__set_pivot_3c2c28c(uVar32,fVar34,*plVar19,0);
                puVar2 = PTR_DAT_049c3388;
                lVar12 = *plVar19;
                fVar34 = -1.0;
                if ((param_5 & 1) == 0) {
                  fVar34 = 1.0;
                }
                if (*(char *)(param_3 + 0x80) == '\0') {
                  if (lVar12 == 0) goto LAB_02525400;
                  UnityEngine_Transform__set_localScale_3c2ddfc
                            (fVar34,0x3f800000,0x3f800000,lVar12,0);
                }
                else {
                  if (lVar12 == 0) goto LAB_02525400;
                  UnityEngine_Transform__set_localScale_3c2ddfc
                            (fVar34 * *(float *)(param_3 + 0x8c),0x3f800000,0x3f800000,lVar12,0);
                  lVar12 = *plVar19;
                  if (*(int *)(*plVar15 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar23 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,lVar12,0);
                  puVar24 = (undefined8 *)(param_2 + 0x30);
                  *puVar24 = uVar23;
                  thunk_FUN_021f190c(puVar24,uVar23);
                  HomeSceneView__Stretch_242881c(*puVar24,0);
                }
                lVar12 = *(long *)(param_2 + 0x30);
                if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(lVar12,0,0);
                plVar20 = (long *)(param_2 + 0x30);
                if ((uVar10 & 1) == 0) {
                  plVar20 = plVar19;
                }
                lVar12 = *plVar20;
                if ((lVar12 != 0) &&
                   (lVar13 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0), lVar13 != 0))
                {
                  lVar13 = UnityEngine_GameObject__AddComponent_object__261a774
                                     (lVar13,*(undefined8 *)PTR_DAT_049c3318);
                  plVar20 = (long *)(param_2 + 0x38);
                  *plVar20 = lVar13;
                  thunk_FUN_021f190c(plVar20,lVar13);
                  plVar19 = (long *)*plVar20;
                  if (plVar19 != (long *)0x0) {
                    (**(code **)(*plVar19 + 0x2c8))(plVar19,0,*(undefined8 *)(*plVar19 + 0x2d0));
                    plVar19 = (long *)*plVar20;
                    if (plVar19 != (long *)0x0) {
                      (**(code **)(*plVar19 + 0x348))
                                (plVar19,param_9,*(undefined8 *)(*plVar19 + 0x350));
                      uVar23 = *(undefined8 *)(param_3 + 0x10);
                      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
                      fVar34 = 0.0;
                      fVar38 = 0.0;
                      fVar33 = 1.0;
                      fVar31 = 1.0;
                      fVar43 = 1.0;
                      if ((uVar10 & 1) != 0) {
                        if (*(long *)(param_3 + 0x10) == 0) goto LAB_02525400;
                        lVar13 = *plVar20;
                        uVar23 = UnityEngine_Sprite__get_texture_3bc3d98
                                           (*(long *)(param_3 + 0x10),0);
                        if (lVar13 == 0) goto LAB_02525400;
                        UnityEngine_UI_RawImage__set_texture_3edced0(lVar13,uVar23,0);
                        if (*(long *)(param_3 + 0x10) == 0) goto LAB_02525400;
                        plVar19 = (long *)UnityEngine_Sprite__get_texture_3bc3d98
                                                    (*(long *)(param_3 + 0x10),0);
                        if ((*(long *)(param_3 + 0x10) == 0) ||
                           (fVar34 = (float)UnityEngine_Sprite__get_rect_3bc3be8
                                                      (*(long *)(param_3 + 0x10),0),
                           plVar19 == (long *)0x0)) goto LAB_02525400;
                        iVar4 = (**(code **)(*plVar19 + 0x178))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                        iVar5 = (**(code **)(*plVar19 + 0x198))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1a0));
                        iVar6 = (**(code **)(*plVar19 + 0x178))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                        iVar7 = (**(code **)(*plVar19 + 0x198))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1a0));
                        fVar34 = fVar34 / (float)iVar4;
                        fVar38 = fVar38 / (float)iVar5;
                        fVar31 = fVar31 / (float)iVar6;
                        fVar43 = fVar43 / (float)iVar7;
                        plVar15 = (long *)PTR_DAT_049c3110;
                      }
                      plVar19 = *(long **)(param_2 + 0x38);
                      *(float *)(param_2 + 0x58) = fVar34;
                      *(float *)(param_2 + 0x5c) = fVar38;
                      *(float *)(param_2 + 0x60) = fVar31;
                      *(float *)(param_2 + 100) = fVar43;
                      if ((param_7 & 1) == 0) {
                        fVar33 = *(float *)(param_3 + 0x3c);
                      }
                      if (plVar19 != (long *)0x0) {
                        uVar10 = 0x3f800000;
                        fVar34 = 1.0;
                        (**(code **)(*plVar19 + 0x2a8))
                                  (0x3f800000,0x3f800000,0x3f800000,fVar33,plVar19,
                                   *(undefined8 *)(*plVar19 + 0x2b0));
                        HomeSceneMover__SetFrame_242583c(param_2,0);
                        if (*(long *)(param_3 + 0x90) != 0) {
                          lVar13 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c2b98,
                                                *(undefined4 *)(*(long *)(param_3 + 0x90) + 0x18));
                          plVar19 = (long *)(param_2 + 0x48);
                          *plVar19 = lVar13;
                          thunk_FUN_021f190c(plVar19,lVar13);
                          if (*(long *)(param_3 + 0x90) != 0) {
                            lVar13 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049be640,
                                                  *(undefined4 *)(*(long *)(param_3 + 0x90) + 0x18))
                            ;
                            plVar25 = (long *)(param_2 + 0x50);
                            *plVar25 = lVar13;
                            thunk_FUN_021f190c(plVar25,lVar13);
                            fVar38 = _UNK_013aa59c;
                            lVar13 = *(long *)(param_3 + 0x90);
                            if (lVar13 != 0) {
                              lVar30 = 0;
                              lVar29 = 8;
                              lVar28 = 0x20;
                              while( true ) {
                                fVar31 = (float)uVar10;
                                uVar17 = lVar29 - 8;
                                if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar17) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_02525838;
                                lVar13 = lVar13 + lVar30;
                                fVar43 = *(float *)(lVar13 + 0x20);
                                fVar41 = *(float *)(lVar13 + 0x24);
                                fVar31 = *(float *)(lVar13 + 0x28);
                                if (*(int *)(*plVar15 + 0xe4) == 0) {
                                  FUN_021f0574();
                                }
                                lVar13 = HomeSceneView__CreateNode_2426d00
                                                   (*(undefined8 *)PTR_DAT_049c3340,lVar12,0);
                                if (lVar13 == 0) goto LAB_02525400;
                                fVar31 = fVar39 * fVar31;
                                UnityEngine_RectTransform__set_anchorMax_3c2bdd0
                                          (0,0x3f800000,lVar13,0);
                                UnityEngine_RectTransform__set_anchorMin_3c2bc3c
                                          (0,0x3f800000,lVar13,0);
                                UnityEngine_RectTransform__set_pivot_3c2c28c
                                          (0x3f000000,0x3f000000,lVar13,0);
                                UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                                          (fVar39 * fVar43,-(fVar41 * fVar40),lVar13,0);
                                uVar10 = (ulong)(uint)(fVar31 + fVar31);
                                UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(lVar13,0);
                                lVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar13,0);
                                if ((lVar14 == 0) ||
                                   (plVar15 = (long *)
                                                  UnityEngine_GameObject__AddComponent_object__261a774
                                                            (lVar14,*(undefined8 *)PTR_DAT_049c31c8)
                                   , plVar15 == (long *)0x0)) goto LAB_02525400;
                    /* try { // try from 025252dc to 02625353 has its CatchHandler @ 025252dc
                       catch() { ... } // from try @ 025252dc with catch @ 025252dc
                       catch() { ... } // from try @ 02525360 with catch @ 025252dc
                       catch() { ... } // from try @ 02525550 with catch @ 025252dc
                       catch() { ... } // from try @ 0252557c with catch @ 025252dc
                       catch() { ... } // from try @ 025255d8 with catch @ 025252dc
                       catch() { ... } // from try @ 0252562c with catch @ 025252dc */
                                (**(code **)(*plVar15 + 0x2c8))
                                          (plVar15,0,*(undefined8 *)(*plVar15 + 0x2d0));
                                (**(code **)(*plVar15 + 0x348))
                                          (plVar15,param_9,*(undefined8 *)(*plVar15 + 0x350));
                                uVar23 = *(undefined8 *)(param_3 + 0x10);
                                if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                                  FUN_021f0574();
                                }
                                uVar16 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
                                if ((uVar16 & 1) != 0) {
                                  if (*(long *)(param_3 + 0x10) == 0) goto LAB_02525400;
                                  iVar4 = *(int *)(param_3 + 0x18);
                                  if (iVar4 < 2) {
                                    iVar4 = 1;
                                  }
                    /* try { // try from 02525354 to 0262535f has its CatchHandler @ 025255f8 */
                                  fVar34 = *(float *)(param_2 + 100);
                                  fVar37 = *(float *)(param_2 + 0x58);
                                  fVar36 = *(float *)(param_2 + 0x5c);
                    /* try { // try from 02525360 to 026253b7 has its CatchHandler @ 025252dc */
                                  fVar35 = *(float *)(param_2 + 0x60) / (float)iVar4;
                                  fVar33 = (fVar31 / fVar40) * fVar34;
                                  fVar42 = (fVar31 / fVar39) * fVar35;
                                  uVar23 = UnityEngine_Sprite__get_texture_3bc3d98
                                                     (*(long *)(param_3 + 0x10),0);
                                  uVar10 = (ulong)(uint)(((1.0 - fVar41) * fVar34 + fVar36) - fVar33
                                                        );
                                  fVar34 = fVar42 + fVar42;
                                  fVar33 = fVar33 + fVar33;
                                  HomeSceneDisc__SetTexture_241f858
                                            ((fVar37 + fVar43 * fVar35) - fVar42,plVar15,uVar23);
                                }
                                plVar15 = (long *)PTR_DAT_049c3110;
                                lVar14 = *plVar19;
                                if (lVar14 == 0) goto LAB_02525400;
                    /* try { // try from 025253b8 to 026253bf has its CatchHandler @ 025255f4 */
                                if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_02525838;
                                *(long *)(lVar14 + lVar28) = lVar13;
                                thunk_FUN_021f190c(lVar14 + lVar28,lVar13);
                                lVar14 = *plVar25;
                                if (lVar14 == 0) goto LAB_02525400;
                    /* try { // try from 025253dc to 026253e3 has its CatchHandler @ 025255e8 */
                                if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_02525838;
                                lVar13 = *(long *)(param_3 + 0x90);
                                lVar30 = lVar30 + 0xc;
                                lVar28 = lVar28 + 8;
                    /* try { // try from 025253f4 to 026253fb has its CatchHandler @ 025255dc */
                                *(float *)(lVar14 + lVar29 * 4) = fVar31 / fVar38;
                                lVar29 = lVar29 + 1;
                                if (lVar13 == 0) goto LAB_02525400;
                              }
                              uVar23 = *(undefined8 *)(param_3 + 0x98);
                    /* try { // try from 02525414 to 02625417 has its CatchHandler @ 0252557c */
                              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                                FUN_021f0574();
                              }
                    /* try { // try from 02525424 to 02625447 has its CatchHandler @ 02525590 */
                              uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
                              puVar2 = PTR_DAT_049c3320;
                              if ((uVar10 & 1) != 0) {
                                if (*(int *)(*plVar15 + 0xe4) == 0) {
                                  FUN_021f0574();
                                }
                                lVar12 = HomeSceneView__CreateNode_2426d00
                                                   (*(undefined8 *)PTR_DAT_049c3378,lVar12,0);
                                HomeSceneView__Stretch_242881c(lVar12,0);
                    /* try { // try from 02525480 to 0262548b has its CatchHandler @ 0252559c */
                    /* try { // try from 02525498 to 026254a3 has its CatchHandler @ 02525598 */
                                if (((lVar12 == 0) ||
                                    (lVar12 = UnityEngine_Component__get_gameObject_3c187f4
                                                        (lVar12,0), lVar12 == 0)) ||
                                   (plVar19 = (long *)
                                                  UnityEngine_GameObject__AddComponent_object__261a774
                                                            (lVar12,*(undefined8 *)PTR_DAT_049c3318)
                                   , plVar19 == (long *)0x0)) goto LAB_02525400;
                    /* try { // try from 025254b4 to 026254bb has its CatchHandler @ 02525588 */
                                (**(code **)(*plVar19 + 0x2c8))
                                          (plVar19,0,*(undefined8 *)(*plVar19 + 0x2d0));
                                (**(code **)(*plVar19 + 0x348))
                                          (plVar19,param_9,*(undefined8 *)(*plVar19 + 0x350));
                    /* try { // try from 025254d0 to 026254d7 has its CatchHandler @ 02525580 */
                                plVar20 = (long *)*plVar20;
                    /* try { // try from 025254d8 to 026254f7 has its CatchHandler @ 02525594 */
                                if (plVar20 == (long *)0x0) goto LAB_02525400;
                                (**(code **)(*plVar20 + 0x298))
                                          (plVar20,*(undefined8 *)(*plVar20 + 0x2a0));
                                (**(code **)(*plVar19 + 0x2a8))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x2b0));
                                if (*(long *)(param_3 + 0x98) == 0) goto LAB_02525400;
                                plVar15 = (long *)UnityEngine_Sprite__get_texture_3bc3d98
                                                            (*(long *)(param_3 + 0x98),0);
                                if (*(long *)(param_3 + 0x98) == 0) goto LAB_02525400;
                    /* try { // try from 02525518 to 0262554f has its CatchHandler @ 025255e4 */
                                fVar39 = (float)UnityEngine_Sprite__get_rect_3bc3be8
                                                          (*(long *)(param_3 + 0x98),0);
                                UnityEngine_UI_RawImage__set_texture_3edced0(plVar19,plVar15,0);
                                if (plVar15 == (long *)0x0) goto LAB_02525400;
                    /* try { // try from 02525550 to 02625553 has its CatchHandler @ 025252dc */
                    /* try { // try from 02525554 to 02625557 has its CatchHandler @ 025255f0 */
                    /* try { // try from 02525558 to 0262555b has its CatchHandler @ 025255f4 */
                                iVar4 = (**(code **)(*plVar15 + 0x178))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x180));
                    /* try { // try from 0252555c to 0262555f has its CatchHandler @ 025255ec */
                    /* try { // try from 02525560 to 02625563 has its CatchHandler @ 025255e0 */
                    /* try { // try from 02525564 to 02625567 has its CatchHandler @ 025255e4 */
                    /* try { // try from 02525568 to 0262556b has its CatchHandler @ 02525590 */
                    /* try { // try from 0252556c to 0262556f has its CatchHandler @ 0252559c */
                                iVar5 = (**(code **)(*plVar15 + 0x198))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x1a0));
                    /* try { // try from 02525570 to 02625573 has its CatchHandler @ 02525598 */
                    /* try { // try from 02525574 to 02625577 has its CatchHandler @ 0252558c */
                    /* try { // try from 02525578 to 0262557b has its CatchHandler @ 02525584 */
                    /* catch() { ... } // from try @ 02525414 with catch @ 0252557c
                       try { // try from 0252557c to 026255bb has its CatchHandler @ 025252dc */
                    /* catch() { ... } // from try @ 025254d0 with catch @ 02525580 */
                                iVar6 = (**(code **)(*plVar15 + 0x178))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x180));
                    /* catch() { ... } // from try @ 02525578 with catch @ 02525584 */
                    /* catch() { ... } // from try @ 025254b4 with catch @ 02525588 */
                    /* catch() { ... } // from try @ 02525574 with catch @ 0252558c */
                    /* catch() { ... } // from try @ 02525424 with catch @ 02525590
                       catch() { ... } // from try @ 02525568 with catch @ 02525590 */
                    /* catch() { ... } // from try @ 025254d8 with catch @ 02525594 */
                                iVar7 = (**(code **)(*plVar15 + 0x198))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x1a0));
                    /* catch() { ... } // from try @ 02525498 with catch @ 02525598
                       catch() { ... } // from try @ 02525570 with catch @ 02525598 */
                    /* catch() { ... } // from try @ 02525480 with catch @ 0252559c
                       catch() { ... } // from try @ 0252556c with catch @ 0252559c */
                    /* try { // try from 025255bc to 026255bf has its CatchHandler @ 025255c8 */
                                UnityEngine_UI_RawImage__set_uvRect_3edcf98
                                          (fVar39 / (float)iVar4,fVar31 / (float)iVar5,
                                           fVar34 / (float)iVar6,fVar33 / (float)iVar7,plVar19,0);
                              }
                              puVar3 = PTR_DAT_049c3338;
                    /* catch() { ... } // from try @ 025255bc with catch @ 025255c8 */
                    /* try { // try from 025255d0 to 026255d7 has its CatchHandler @ 02525634 */
                    /* try { // try from 025255d8 to 02625617 has its CatchHandler @ 025252dc */
                              if (*(char *)(param_3 + 0xd8) != '\0') {
                    /* catch() { ... } // from try @ 025253f4 with catch @ 025255dc */
                    /* catch() { ... } // from try @ 02525560 with catch @ 025255e0 */
                                lVar12 = *plVar9;
                    /* catch() { ... } // from try @ 02525518 with catch @ 025255e4
                       catch() { ... } // from try @ 02525564 with catch @ 025255e4 */
                                uVar26 = *puVar27;
                    /* catch() { ... } // from try @ 025253dc with catch @ 025255e8 */
                                uVar23 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0252555c with catch @ 025255ec */
                    /* catch() { ... } // from try @ 02525554 with catch @ 025255f0 */
                    /* catch() { ... } // from try @ 025253b8 with catch @ 025255f4
                       catch() { ... } // from try @ 02525558 with catch @ 025255f4 */
                    /* catch() { ... } // from try @ 02525354 with catch @ 025255f8 */
                                HomeSceneBlade___ctor_24282f4(uVar23,uVar26,param_3,param_5 & 1,0,0)
                                ;
                                if (lVar12 == 0) goto LAB_02525400;
                    /* try { // try from 02525618 to 0262561b has its CatchHandler @ 02525620 */
                                FUN_02333498(lVar12,uVar23,*(undefined8 *)puVar3);
                              }
                    /* catch() { ... } // from try @ 02525618 with catch @ 02525620 */
                              if (*(char *)(param_3 + 0xe8) != '\0') {
                    /* try { // try from 02525624 to 0262562b has its CatchHandler @ 02525634 */
                                lVar12 = *plVar9;
                    /* try { // try from 0252562c to 02625637 has its CatchHandler @ 025252dc */
                                uVar26 = *puVar27;
                                uVar23 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 025255d0 with catch @ 02525634
                       catch() { ... } // from try @ 02525624 with catch @ 02525634 */
                                HomeSceneBlade___ctor_24282f4(uVar23,uVar26,param_3,param_5 & 1,1,0)
                                ;
                                if (lVar12 == 0) goto LAB_02525400;
                                FUN_02333498(lVar12,uVar23,*(undefined8 *)puVar3);
                              }
                              puVar2 = PTR_DAT_049bbf30;
                              fVar39 = _UNK_013aa8a0;
                              if (*(char *)(param_3 + 0xc4) == '\0') goto LAB_025257ec;
                              if (1 < (int)*(ulong *)(param_6 + 0x18)) {
                                fVar38 = 0.0;
                                fVar40 = 0.0;
                                fVar34 = 0.0;
                                uVar17 = *(ulong *)(param_6 + 0x18) & 0xffffffff;
                                pfVar21 = (float *)(param_6 + 0x40);
                                uVar10 = 1;
                                goto LAB_025256b0;
                              }
                    /* try { // try from 0252578c to 02625797 has its CatchHandler @ 02525a60 */
                              uVar32 = 0x3f800000;
                              if (param_1 < 0.0) {
                                param_1 = 0.0;
                                uVar32 = 0x3f800000;
                              }
                              goto LAB_025257a0;
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
LAB_02525400:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    fVar43 = *pfVar21;
    fVar33 = pfVar21[-7];
    fVar31 = pfVar21[-3];
    if (cRam0000000004f4a18f == '\0') {
      FUN_021f03f8(puVar2);
      uVar17 = (ulong)*(uint *)(param_6 + 0x18);
      cRam0000000004f4a18f = '\x01';
    }
                    /* try { // try from 025256ec to 0262578b has its CatchHandler @ 025256ec
                       catch() { ... } // from try @ 025256ec with catch @ 025256ec
                       catch() { ... } // from try @ 02525978 with catch @ 025256ec
                       catch() { ... } // from try @ 025259bc with catch @ 025256ec
                       catch() { ... } // from try @ 02525a38 with catch @ 025256ec
                       catch() { ... } // from try @ 02525ab0 with catch @ 025256ec
                       catch() { ... } // from try @ 02525aec with catch @ 025256ec */
    fVar31 = (fVar43 - fVar33) * fVar31;
    fVar41 = **(float **)(*(long *)puVar2 + 0xb8) * 8.0;
    fVar33 = ABS(fVar31);
    fVar43 = fVar33;
    if (fVar33 <= 0.0) {
      fVar43 = 0.0;
    }
    fVar35 = fVar43 * fVar39;
    if (fVar43 * fVar39 <= fVar41) {
      fVar35 = fVar41;
    }
    if (fVar35 <= ABS(0.0 - fVar31)) {
      if (uVar17 <= uVar10) goto LAB_02525838;
      fVar40 = fVar40 + fVar33;
      fVar34 = fVar34 + (pfVar21[-1] - pfVar21[-8]) * *(float *)(param_3 + 0x50);
    }
    fVar38 = fVar38 + fVar31;
    uVar10 = uVar10 + 1;
    pfVar21 = pfVar21 + 7;
    if ((long)(int)uVar17 <= (long)uVar10) break;
LAB_025256b0:
    if (uVar17 <= uVar10) {
LAB_02525838:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
  uVar32 = 0xbf800000;
  if (0.0 <= fVar38) {
    uVar32 = 0x3f800000;
  }
  if (param_1 < 0.0) {
    if (fVar34 <= 0.0) {
      param_1 = 0.0;
    }
    else {
      param_1 = fVar40 / fVar34;
    }
  }
LAB_025257a0:
  lVar12 = *plVar9;
  lVar13 = *plVar11;
  uVar23 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3330);
                    /* try { // try from 025257b8 to 026257bb has its CatchHandler @ 02525a64 */
                    /* try { // try from 025257c8 to 026257eb has its CatchHandler @ 02525a68 */
  HomeSceneSplash___ctor_2426fd4(uVar32,param_1,uVar23,lVar13,lVar8,param_3,param_5 & 1,0);
  if (lVar12 == 0) goto LAB_02525400;
  FUN_02333498(lVar12,uVar23,*(undefined8 *)puVar3);
LAB_025257ec:
  HomeSceneMover__SetPath_242599c(param_2,param_6);
                    /* try { // try from 02525824 to 0262582f has its CatchHandler @ 02525a70 */
  if ((bRam0000000004f4b796 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b796 = 1;
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    if (*(long *)(*(long *)(param_2 + 0x90) + 0x18) == 0) {
      lVar8 = *(long *)(param_2 + 0x10);
      if (lVar8 == 0) goto LAB_02525d68;
      fVar39 = *(float *)(lVar8 + 0x2c);
      fVar40 = *(float *)(lVar8 + 0x30);
      fVar31 = 0.0;
      fVar34 = 1.0;
      fVar38 = 1.0;
      unaff_w30 = 1.0;
    }
    else {
      HomeSceneMover__Sample_2425dbc(&stack0xffffffffffffff90,0,param_2,&stack0xffffffffffffffac);
      lVar8 = *(long *)(param_2 + 0x10);
      if (lVar8 == 0) goto LAB_02525d68;
      fVar39 = (float)((ulong)unaff_d9 >> 0x20);
      fVar40 = (float)unaff_d8;
      fVar34 = (float)((ulong)unaff_d8 >> 0x20);
      fVar31 = (float)unaff_x29;
      fVar38 = (float)((ulong)unaff_x29 >> 0x20);
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      fVar40 = -(fVar40 + *(float *)(param_2 + 0xa8) +
                (1.0 - *(float *)(param_2 + 0x70)) * *(float *)(lVar8 + 0x38));
      fVar39 = fVar39 + *(float *)(param_2 + 0x6c) * *(float *)(lVar8 + 0x34);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (fVar39,fVar40,*(long *)(param_2 + 0x18),0);
      lVar8 = *(long *)(param_2 + 0x18);
      UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar31 * _UNK_013aa730,0);
      if (lVar8 != 0) {
        UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
        puVar2 = PTR_DAT_049b3b98;
        if (*(long *)(param_2 + 0x18) != 0) {
          UnityEngine_Transform__set_localScale_3c2ddfc
                    (unaff_w30 * fVar38,unaff_w30,0x3f800000,*(long *)(param_2 + 0x18),0);
          uVar23 = *(undefined8 *)(param_2 + 0x80);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(param_2 + 0x80) == 0) goto LAB_02525d68;
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                      (fVar39,fVar40,*(long *)(param_2 + 0x80),0);
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525d68;
            lVar8 = *(long *)(param_2 + 0x80);
            UnityEngine_Transform__get_localRotation_3c2d92c(*(long *)(param_2 + 0x18),0);
            if (lVar8 == 0) goto LAB_02525d68;
            UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
            if (*(long *)(param_2 + 0x18) == 0) goto LAB_02525d68;
            lVar8 = *(long *)(param_2 + 0x80);
            UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(param_2 + 0x18),0);
            if (lVar8 == 0) goto LAB_02525d68;
            UnityEngine_Transform__set_localScale_3c2ddfc(lVar8,0);
          }
          uVar23 = *(undefined8 *)(param_2 + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(uVar23,0,0);
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x40) == 0))
            goto LAB_02525d68;
            UnityEngine_CanvasGroup__set_alpha_3ec2b80
                      (fVar34 * *(float *)(*(long *)(param_2 + 0x10) + 0x3c),
                       *(long *)(param_2 + 0x40),0);
          }
          fVar40 = _UNK_013aa948;
          fVar39 = _UNK_013aa654;
          lVar8 = *(long *)(param_2 + 0x48);
          if (lVar8 != 0) {
            lVar12 = 0;
            do {
              uVar22 = (uint)lVar12;
              if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar22) {
                return;
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar22) {
LAB_02525d88:
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar13 = *(long *)(param_2 + 0x50);
              if (lVar13 == 0) break;
              if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_02525d88;
              lVar8 = *(long *)(lVar8 + lVar12 * 8 + 0x20);
              UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                        (0,0,(-0.0 / *(float *)(lVar13 + lVar12 * 4 + 0x20)) * fVar39 * fVar40,0);
              if (lVar8 == 0) break;
              UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
              lVar8 = *(long *)(param_2 + 0x48);
              lVar12 = lVar12 + 1;
            } while (lVar8 != 0);
          }
        }
      }
    }
  }
LAB_02525d68:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

