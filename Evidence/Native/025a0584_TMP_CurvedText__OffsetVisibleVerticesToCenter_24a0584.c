/* IL2CPP: TMP_CurvedText$$OffsetVisibleVerticesToCenter
void TMP_CurvedText__OffsetVisibleVerticesToCenter (TMPro_TMP_TextInfo_o* textInfo, UnityEngine_Vector3_o textCenter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TMP_CurvedText$$OffsetVisibleVerticesToCenter
   void TMP_CurvedText__OffsetVisibleVerticesToCenter (TMPro_TMP_TextInfo_o* textInfo,
   UnityEngine_Vector3_o textCenter, const MethodInfo* method); */

void TMP_CurvedText__OffsetVisibleVerticesToCenter_24a0584
               (float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  if (param_4 == 0) {
LAB_025a07ac:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar6 = *(uint *)(param_4 + 0x18);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 4);
  if (0 < (int)uVar6) {
    lVar9 = *(long *)(param_4 + 0x38);
    iVar7 = 0;
    uVar8 = 0;
    lVar10 = lVar9 + 0x20;
    do {
      if (lVar9 == 0) goto LAB_025a07ac;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_025a07a8;
      if (*(char *)(lVar10 + uVar8 * 0x178 + 0x170) != '\0') {
        lVar12 = *(long *)(param_4 + 0x60);
        if (lVar12 == 0) goto LAB_025a07ac;
        uVar2 = *(uint *)(lVar10 + uVar8 * 0x178 + 0x30);
        if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_025a07a8;
        lVar12 = *(long *)(lVar12 + (long)(int)uVar2 * 0x50 + 0x30);
        if (lVar12 == 0) goto LAB_025a07ac;
        lVar4 = 0;
        uVar1 = *(uint *)(lVar10 + uVar8 * 0x178 + 0x44);
        uVar2 = 0;
        if (uVar1 <= *(uint *)(lVar12 + 0x18)) {
          uVar2 = *(uint *)(lVar12 + 0x18) - uVar1;
        }
        do {
          if (uVar2 < 4) goto LAB_025a07a8;
          iVar3 = (int)lVar4;
          lVar4 = lVar4 + 1;
          uVar13 = *(undefined8 *)(lVar12 + (long)(int)(uVar1 + iVar3) * 0xc + 0x24);
          uVar14 = CONCAT44((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                            (float)uVar14 + (float)uVar13);
        } while (lVar4 != 4);
        iVar7 = iVar7 + 4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)));
    if ((iVar7 != 0) && (0 < (int)uVar6)) {
      uVar8 = 0;
      do {
        lVar10 = *(long *)(param_4 + 0x38);
        if (lVar10 == 0) goto LAB_025a07ac;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_025a07a8;
        lVar10 = lVar10 + 0x20;
        if (*(char *)(lVar10 + uVar8 * 0x178 + 0x170) != '\0') {
          lVar9 = *(long *)(param_4 + 0x60);
          if (lVar9 == 0) goto LAB_025a07ac;
          uVar6 = *(uint *)(lVar10 + uVar8 * 0x178 + 0x30);
          if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_025a07a8:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar9 = *(long *)(lVar9 + (long)(int)uVar6 * 0x50 + 0x30);
          if (lVar9 == 0) goto LAB_025a07ac;
          lVar12 = 0;
          uVar11 = (ulong)*(uint *)(lVar10 + uVar8 * 0x178 + 0x44);
          lVar10 = uVar11 << 0x20;
          do {
            if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar11 + lVar12) goto LAB_025a07a8;
            lVar12 = lVar12 + 1;
            puVar5 = (undefined8 *)(lVar9 + 0x20 + (long)(int)((ulong)lVar10 >> 0x20) * 0xc);
            *puVar5 = CONCAT44((param_2 - (float)uVar14 / (float)iVar7) +
                               (float)((ulong)*puVar5 >> 0x20),param_1 + (float)*puVar5);
            *(float *)(puVar5 + 1) =
                 (param_3 - (float)((ulong)uVar14 >> 0x20) / (float)iVar7) + *(float *)(puVar5 + 1);
            lVar10 = lVar10 + 0x100000000;
          } while (lVar12 != 4);
          uVar6 = *(uint *)(param_4 + 0x18);
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)uVar6);
    }
  }
  return;
}

