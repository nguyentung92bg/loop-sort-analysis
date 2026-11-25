/* IL2CPP: HomeSceneRipple$$.ctor
void HomeSceneRipple___ctor (HomeSceneRipple_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneRipple$$.ctor
   void HomeSceneRipple___ctor (HomeSceneRipple_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneRipple___ctor_242f188(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((bRam0000000004f4b7d0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3318);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c3488);
    FUN_021f03f8(PTR_DAT_049c37d0);
    FUN_021f03f8(PTR_DAT_049c37d8);
    FUN_021f03f8(PTR_DAT_049c37e0);
    FUN_021f03f8(PTR_DAT_049c37e8);
    FUN_021f03f8(PTR_DAT_049c37f0);
    FUN_021f03f8(PTR_DAT_049c37f8);
    bRam0000000004f4b7d0 = 1;
  }
  HomeSceneFxRunner___ctor_24229c4(param_1,0);
  puVar1 = PTR_DAT_049b3b98;
  if ((param_2 == 0) || (lVar9 = *(long *)(param_2 + 0x108), lVar9 == 0)) {
LAB_0252f614:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar9 + 0x18) == 0) {
    lVar9 = 0;
  }
  else {
    if ((int)*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  uVar4 = UnityEngine_Resources__Load_object__26a73fc
                    (*(undefined8 *)PTR_DAT_049c37d0,*(undefined8 *)PTR_DAT_049c3488);
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_021f0574(lVar10);
  }
  uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(lVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar10 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c37f0,param_3);
      fVar12 = *(float *)(param_2 + 0x90);
      fVar14 = *(float *)(param_2 + 0x94);
      fVar15 = *(float *)(param_2 + 0x98);
      HomeSceneView__Place_2427788(*(undefined4 *)(param_2 + 0x8c),fVar12,fVar14,fVar15);
      if ((((lVar10 != 0) &&
           (lVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0), lVar10 != 0)) &&
          (plVar6 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                      (lVar10,*(undefined8 *)PTR_DAT_049c3318),
          plVar6 != (long *)0x0)) &&
         ((**(code **)(*plVar6 + 0x2c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x2d0)), lVar9 != 0)) {
        uVar7 = UnityEngine_Sprite__get_texture_3bc3d98(lVar9,0);
        UnityEngine_UI_RawImage__set_texture_3edced0(plVar6,uVar7,0);
        if (*(char *)(param_2 + 0xe0) == '\0') {
          fVar17 = fVar14;
          fVar16 = fVar15;
          if (cRam0000000004f49d57 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8a18);
            cRam0000000004f49d57 = '\x01';
          }
          fVar19 = **(float **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
          fVar18 = (*(float **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
          UnityEngine_Sprite__get_rect_3bc3be8(lVar9,0);
          fVar14 = fVar17;
          fVar15 = fVar16;
        }
        else {
          fVar19 = *(float *)(param_2 + 0xe4);
          fVar18 = *(float *)(param_2 + 0xe8);
          fVar17 = *(float *)(param_2 + 0xec);
          fVar16 = *(float *)(param_2 + 0xf0);
        }
        fVar11 = (float)UnityEngine_Sprite__get_rect_3bc3be8(lVar9,0);
        plVar8 = (long *)UnityEngine_Sprite__get_texture_3bc3d98(lVar9,0);
        if (plVar8 != (long *)0x0) {
          iVar2 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
          plVar8 = (long *)UnityEngine_Sprite__get_texture_3bc3d98(lVar9,0);
          if (plVar8 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
            fVar19 = (fVar11 + fVar14 * ((*(float *)(param_2 + 0x8c) - fVar19) / fVar17)) /
                     (float)iVar2;
            fVar12 = (fVar12 + fVar15 * (1.0 - ((*(float *)(param_2 + 0x90) +
                                                *(float *)(param_2 + 0x98)) - fVar18) / fVar16)) /
                     (float)iVar3;
            fVar14 = (fVar14 * (*(float *)(param_2 + 0x94) / fVar17)) / (float)iVar2;
            fVar15 = (fVar15 * (*(float *)(param_2 + 0x98) / fVar16)) / (float)iVar3;
            UnityEngine_UI_RawImage__set_uvRect_3edcf98(fVar19,fVar12,fVar14,fVar15,plVar6,0);
            lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b89f8);
            UnityEngine_Material___ctor_3be5d2c(lVar9,uVar4,0);
            plVar8 = (long *)(param_1 + 0x10);
            *plVar8 = lVar9;
            thunk_FUN_021f190c(plVar8,lVar9);
            if (*plVar8 != 0) {
              fVar17 = 10.0;
              if (0.0 <= *(float *)(param_2 + 0xd4)) {
                fVar17 = *(float *)(param_2 + 0xd4);
              }
              UnityEngine_Material__SetFloat_3bed9b8
                        (fVar17,*plVar8,*(undefined8 *)PTR_DAT_049c37e8,0);
              fVar17 = _UNK_013aa844;
              uVar13 = _UNK_013aa698;
              if (0.0 <= *(float *)(param_2 + 0xd8)) {
                fVar17 = *(float *)(param_2 + 0xd8);
                uVar13 = *(undefined4 *)(param_2 + 0xdc);
              }
              if (*plVar8 != 0) {
                UnityEngine_Material__SetVector_3beda70
                          (fVar17,uVar13,0,0,*plVar8,*(undefined8 *)PTR_DAT_049c37e0,0);
                lVar9 = *plVar8;
                HomeSceneFx__DurOr_241f50c(0x40e00000,param_2,0);
                if (lVar9 != 0) {
                  UnityEngine_Material__SetFloat_3bed9b8(lVar9,*(undefined8 *)PTR_DAT_049c37f8,0);
                  if (*plVar8 != 0) {
                    UnityEngine_Material__SetVector_3beda70
                              (fVar19,fVar12,fVar14,fVar15,*plVar8,*(undefined8 *)PTR_DAT_049c37d8,0
                              );
                    /* WARNING: Could not recover jumptable at 0x0252f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar6 + 0x348))(plVar6,*plVar8,*(undefined8 *)(*plVar6 + 0x350));
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0252f614;
    }
  }
  return;
}

