/* IL2CPP: TMP_CurvedText$$ComputeCircleTransformationMatrix
UnityEngine_Matrix4x4_o TMP_CurvedText__ComputeCircleTransformationMatrix (TMP_CurvedText_o* __this, float zeroToOnePos, TMPro_TMP_TextInfo_o* textInfo, int32_t charIdx, float textWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TMP_CurvedText$$ComputeCircleTransformationMatrix
   UnityEngine_Matrix4x4_o TMP_CurvedText__ComputeCircleTransformationMatrix (TMP_CurvedText_o*
   __this, float zeroToOnePos, TMPro_TMP_TextInfo_o* textInfo, int32_t charIdx, float textWidth,
   const MethodInfo* method); */

void TMP_CurvedText__ComputeCircleTransformationMatrix_24a03a0
               (undefined8 *param_1,float param_2,float param_3,long param_4,long param_5,
               uint param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_28;
  float fStack_24;
  
  fVar7 = _UNK_013aa948;
  fVar11 = *(float *)(param_4 + 0x20);
  sincosf(((param_2 + -0.5) * fVar11 + -90.0) * _UNK_013aa948,&fStack_24,&fStack_28);
  if ((param_5 != 0) && (lVar2 = *(long *)(param_5 + 0x50), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      lVar3 = *(long *)(param_5 + 0x38);
      if (lVar3 == 0) goto LAB_025a057c;
      if (param_6 < *(uint *)(lVar3 + 0x18)) {
        fVar4 = *(float *)(lVar2 + 0x7c);
        iVar1 = *(int *)(lVar3 + (long)(int)param_6 * 0x178 + 0x5c);
        fVar5 = (float)FUN_046086b0(fStack_24,fStack_28);
        if (cRam0000000004f4a55a == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55a = '\x01';
        }
        lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar8 = *(undefined4 *)(lVar2 + 0x48);
        uVar9 = *(undefined4 *)(lVar2 + 0x4c);
        uVar10 = *(undefined4 *)(lVar2 + 0x50);
        uVar6 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                          (fVar5 * _UNK_013aa5c0 + -90.0,uVar8,uVar9,uVar10,0);
        if (cRam0000000004f4a190 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a190 = '\x01';
        }
        fVar7 = (float)FUN_046086e0(fVar11 * 0.5 * fVar7);
        fVar7 = param_3 / (fVar7 + fVar7) - fVar4 * (float)iVar1;
        UnityEngine_Matrix4x4__TRS_3c06ad0
                  (&uStack_b0,fStack_28 * fVar7,-(fStack_24 * fVar7),0,uVar6,uVar8,uVar9,uVar10,0);
        param_1[1] = uStack_a8;
        *param_1 = uStack_b0;
        param_1[3] = uStack_98;
        param_1[2] = uStack_a0;
        param_1[5] = uStack_88;
        param_1[4] = uStack_90;
        param_1[7] = uStack_78;
        param_1[6] = uStack_80;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_025a057c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

