/* IL2CPP: LongCarrier$$StretchPart
void LongCarrier__StretchPart (LongCarrier_o* __this, UnityEngine_Transform_o* partT, UnityEngine_Bounds_o bounds, UnityEngine_Vector3_o basePosition, UnityEngine_Vector3_o baseScale, float delta, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$StretchPart
   void LongCarrier__StretchPart (LongCarrier_o* __this, UnityEngine_Transform_o* partT,
   UnityEngine_Bounds_o bounds, UnityEngine_Vector3_o basePosition, UnityEngine_Vector3_o baseScale,
   float delta, const MethodInfo* method); */

void LongCarrier__StretchPart_24ab5e8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,long param_8,long param_9,long param_10)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_90 [4];
  float afStack_38 [2];
  
  afStack_38[0] = 0.0;
  afStack_38[1] = 0.0;
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  afStack_90[2] = 0.0;
  afStack_90[3] = 0.0;
  if (((*(long *)(param_8 + 0x100) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_8 + 0x100) + 0x110), lVar3 != 0)) &&
     (UnityEngine_Transform__get_forward_3c2db78(lVar3,0), param_9 != 0)) {
    fVar8 = (float)UnityEngine_Transform__InverseTransformDirection_3c2e98c(param_9,0);
    param_2 = ABS(param_2);
    fVar8 = ABS(fVar8);
    iVar4 = 2;
    if (ABS(param_3) <= param_2) {
      iVar4 = 1;
    }
    bVar1 = true;
    bVar2 = false;
    if (ABS(param_3) <= fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8) && !NAN(param_2)) {
        bVar1 = fVar8 < param_2;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      iVar4 = 0;
    }
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar8 = (float)puVar5[2];
    afStack_90[3] = fVar8;
    afStack_38[1] = (float)*puVar5;
    afStack_38[0] = (float)puVar5[1];
    if (iVar4 == 0) {
      pfVar6 = (float *)(param_10 + 0xc);
      pfVar7 = afStack_38 + 1;
      fVar9 = param_4;
    }
    else if (iVar4 == 1) {
      pfVar6 = (float *)(param_10 + 0x10);
      pfVar7 = afStack_38;
      fVar9 = param_5;
    }
    else {
      pfVar6 = (float *)(param_10 + 0x14);
      pfVar7 = afStack_90 + 3;
      fVar9 = param_6;
    }
    fVar10 = *pfVar6 + *pfVar6;
    *pfVar7 = fVar9 * fVar10;
    lVar3 = UnityEngine_Transform__get_parent_3c2d470(param_9,0);
    UnityEngine_Transform__get_localRotation_3c2d92c(param_9,0);
    UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
    if (lVar3 != 0) {
      fVar9 = (float)UnityEngine_Transform__TransformVector_3c2ea84(lVar3,0);
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
      if (fVar8 <= 0.0) {
        return;
      }
      fVar8 = (fVar8 + param_7) / fVar8;
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a233 = '\x01';
      }
      if (iVar4 == 2) {
        pfVar6 = afStack_90;
        fVar8 = param_6;
      }
      else if (iVar4 == 1) {
        pfVar6 = afStack_90 + 1;
        fVar8 = param_5;
      }
      else {
        pfVar6 = afStack_90 + 2;
        fVar8 = param_4;
      }
      afStack_90[3] = (float)SUB84(afStack_90._8_8_,4);
      afStack_90[2] = param_4;
      afStack_90[0] = param_6;
      afStack_90[1] = param_5;
      *pfVar6 = fVar9 * fVar8;
      UnityEngine_Transform__set_localScale_3c2ddfc(afStack_90[2],param_9,0);
      UnityEngine_Transform__get_localRotation_3c2d92c(param_9,0);
      UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
      if ((bRam0000000004f58a0b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0b = 1;
      }
      if (param_9 != 0) {
        lVar3 = *(long *)(param_9 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_9,0);
        }
        if (pcRam0000000004f58a48 == (code *)0x0) {
          pcRam0000000004f58a48 = (code *)FUN_021f03bc(&UNK_013d4d13);
        }
        (*pcRam0000000004f58a48)(lVar3,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

