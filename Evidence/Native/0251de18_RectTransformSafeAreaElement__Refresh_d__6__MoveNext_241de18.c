/* IL2CPP: RectTransformSafeAreaElement.<Refresh>d__6$$MoveNext
void RectTransformSafeAreaElement__Refresh_d__6__MoveNext (RectTransformSafeAreaElement__Refresh_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectTransformSafeAreaElement.<Refresh>d__6$$MoveNext
   void RectTransformSafeAreaElement__Refresh_d__6__MoveNext
   (RectTransformSafeAreaElement__Refresh_d__6_o __this, const MethodInfo* method); */

void RectTransformSafeAreaElement__Refresh_d__6__MoveNext_241de18
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,int *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  ushort uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
  if ((bRam0000000004f4b769 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f40);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b769 = 1;
  }
  lVar15 = *(long *)(param_5 + 4);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  if (*param_5 == 0) {
    auStack_90 = *(undefined1 (*) [16])(param_5 + 6);
    param_5[6] = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    *param_5 = -1;
  }
  else {
    fVar16 = (float)UnityEngine_Screen__get_safeArea_3bd822c(0);
    puVar1 = PTR_DAT_049b5138;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar17 = NEON_uminv(CONCAT26(-(ushort)((short)((ushort)((float)((ulong)*(undefined8 *)
                                                                            (lVar15 + 0x30) >> 0x20)
                                                           == param_4) * -0x8000) < 0),
                                 CONCAT24(-(ushort)((short)((ushort)((float)*(undefined8 *)
                                                                             (lVar15 + 0x30) ==
                                                                    param_3) * -0x8000) < 0),
                                          CONCAT22(-(ushort)((short)((ushort)((float)((ulong)*(
                                                  undefined8 *)(lVar15 + 0x28) >> 0x20) == param_2)
                                                  * -0x8000) < 0),
                                                  -(ushort)((short)((ushort)((float)*(undefined8 *)
                                                                                     (lVar15 + 0x28)
                                                                            == fVar16) * -0x8000) <
                                                           0)))),2);
    if ((uVar17 & 1) != 0) goto LAB_0251e1c8;
    *(float *)(lVar15 + 0x28) = fVar16;
    *(float *)(lVar15 + 0x2c) = param_2;
    *(float *)(lVar15 + 0x30) = param_3;
    *(float *)(lVar15 + 0x34) = param_4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_80 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8448(0);
    thunk_FUN_021f190c(auStack_80,0);
    uVar3 = auStack_80._8_8_;
    uVar2 = auStack_80._0_8_;
    auStack_90 = auStack_80;
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
    if ((long *)uVar2 != (long *)0x0) {
      lVar9 = *(long *)uVar2;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0251dfc0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_0251dfc0:
      iVar4 = (*(code *)*puVar8)(uVar2,uVar3 & 0xffffffff,puVar8[1]);
      if (iVar4 == 0) {
        *param_5 = 0;
        *(undefined1 (*) [16])(param_5 + 6) = auStack_90;
        thunk_FUN_021f190c(param_5 + 6,0);
        FUN_0235c420(param_5 + 2,auStack_90,param_5,*(undefined8 *)PTR_DAT_049c2f40);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_90._0_8_;
    uVar14 = auStack_90._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0251e058;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251e058:
    (*(code *)*puVar8)(uVar2,uVar14,puVar8[1]);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar19 = *(float *)(lVar15 + 0x28);
  fVar16 = *(float *)(lVar15 + 0x2c);
  fVar20 = *(float *)(lVar15 + 0x30);
  fVar18 = *(float *)(lVar15 + 0x34);
  iVar4 = UnityEngine_Screen__get_width_3bd80bc(0);
  iVar5 = UnityEngine_Screen__get_height_3bd80e4(0);
  iVar6 = UnityEngine_Screen__get_width_3bd80bc(0);
  iVar7 = UnityEngine_Screen__get_height_3bd80e4(0);
  lVar9 = *(long *)(lVar15 + 0x20);
  if (cRam0000000004f4a196 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a196 = '\x01';
  }
  puVar1 = PTR_DAT_049b8a18;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__set_anchorMin_3c2bc3c
            (fVar19 / (float)iVar4 +
             *(float *)(lVar15 + 0x38) *
             *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x10),
             fVar16 / (float)iVar5 +
             *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x14) *
             *(float *)(lVar15 + 0x38),lVar9,0);
  lVar9 = *(long *)(lVar15 + 0x20);
  if (cRam0000000004f4a196 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a196 = '\x01';
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0xb8);
  UnityEngine_RectTransform__set_anchorMax_3c2bdd0
            ((fVar19 + fVar20) / (float)iVar6 -
             *(float *)(lVar15 + 0x3c) * *(float *)(lVar10 + 0x10),
             (fVar16 + fVar18) / (float)iVar7 -
             *(float *)(lVar10 + 0x14) * *(float *)(lVar15 + 0x3c),lVar9,0);
  lVar9 = *(long *)(lVar15 + 0x20);
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar11 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
  UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(*puVar11,puVar11[1],lVar9,0);
  if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__ForceUpdateRectTransforms_3c2cc7c(*(long *)(lVar15 + 0x20),0);
LAB_0251e1c8:
  *param_5 = -2;
  FUN_0235afc8(param_5 + 2,0);
  return;
}

