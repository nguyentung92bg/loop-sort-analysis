/* IL2CPP: Grid$$Initialize
void Grid__Initialize (Grid_o* __this, GridSheet_Layout_o layout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Grid$$Initialize
   void Grid__Initialize (Grid_o* __this, GridSheet_Layout_o layout, const MethodInfo* method); */

void Grid__Initialize_25067a4
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long lStack_a0;
  long lStack_98;
  
  if ((bRam0000000004f4bd91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8e50);
    FUN_021f03f8(PTR_DAT_049c8d98);
    FUN_021f03f8(PTR_DAT_049c8e58);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b61a0);
    bRam0000000004f4bd91 = 1;
  }
  *(long *)(param_4 + 0xe0) = param_5;
  thunk_FUN_021f190c((long *)(param_4 + 0xe0),0);
  puVar2 = PTR_DAT_049c8e50;
  if (param_5 != 0) {
    iVar3 = System_Array__GetLength_3123e50(param_5,0,0);
    iVar4 = System_Array__GetLength_3123e50(param_5,1,0);
    lStack_a0 = (long)iVar3;
    lStack_98 = (long)iVar4;
    uVar5 = *(undefined8 *)puVar2;
    *(ulong *)(param_4 + 0xc0) = CONCAT44(iVar4,iVar3);
    lVar6 = FUN_021f04ec(uVar5,&lStack_a0);
    plVar13 = (long *)(param_4 + 0xb8);
    *plVar13 = lVar6;
    thunk_FUN_021f190c(plVar13,lVar6);
    lVar6 = *(long *)(param_4 + 0xa8);
    if (cRam0000000004f4bca5 == '\0') {
      FUN_021f03f8(PTR_DAT_049bef70);
      cRam0000000004f4bca5 = '\x01';
    }
    iVar3 = **(int **)(*(long *)PTR_DAT_049bef70 + 0xb8);
    iVar4 = (*(int **)(*(long *)PTR_DAT_049bef70 + 0xb8))[1];
    uVar7 = Grid__GetLayoutSize_2506dbc(param_4);
    puVar2 = PTR_DAT_049b61a0;
    fVar22 = _UNK_013aa3b4;
    if (0 < (int)uVar7) {
      uVar16 = 0;
      do {
        if (0 < (int)(uVar7 >> 0x20)) {
          uVar12 = 0;
          uVar14 = uVar16;
          do {
            if ((**(uint **)(param_5 + 0x10) <= uVar16) ||
               (uVar10 = *(ulong *)(*(uint **)(param_5 + 0x10) + 4), (uVar10 & 0xffffffff) <= uVar12
               )) {
LAB_02606d80:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar10 = System_String__op_Equality_2f7b7fc
                               (*(undefined8 *)(param_5 + (uVar12 + uVar16 * uVar10) * 8 + 0x20),
                                *(undefined8 *)puVar2,0);
            iVar1 = iVar4;
            if ((uVar10 & 1) == 0) {
              if (lVar6 == 0) goto LAB_02606d84;
              uVar15 = *(undefined8 *)(lVar6 + 0x28);
              uVar5 = UnityEngine_Component__get_transform_3c18724(param_4,0);
              if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
                FUN_021f0574(*(long *)PTR_DAT_049b3b98);
              }
              lVar8 = UnityEngine_Object__Instantiate_object__2695b80
                                (uVar15,uVar5,*(undefined8 *)PTR_DAT_049c8e58);
              if (cRam0000000004f4a190 == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a190 = '\x01';
              }
              fVar21 = *(float *)(lVar6 + 0x30);
              lVar11 = *plVar13;
              fVar23 = fVar21 * fVar22;
              if (*(int *)(lVar6 + 0x18) != 1) {
                fVar23 = fVar21;
              }
              if (lVar11 == 0) goto LAB_02606d84;
              if ((**(uint **)(lVar11 + 0x10) <= uVar16) ||
                 (uVar10 = *(ulong *)(*(uint **)(lVar11 + 0x10) + 4),
                 (uVar10 & 0xffffffff) <= uVar12)) goto LAB_02606d80;
              fVar24 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14);
              uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
              plVar9 = (long *)(lVar11 + (uVar12 + uVar16 * uVar10) * 8 + 0x20);
              *plVar9 = lVar8;
              thunk_FUN_021f190c(plVar9,lVar8);
              if (lVar8 == 0) goto LAB_02606d84;
              *(long *)(lVar8 + 0xd8) = param_4;
              fVar17 = (float)uVar5 * fVar21;
              fVar20 = (float)((ulong)uVar5 >> 0x20) * fVar21;
              fVar24 = fVar24 * fVar21;
              thunk_FUN_021f190c((long *)(lVar8 + 0xd8),param_4);
              *(ulong *)(lVar8 + 0xa8) = uVar14;
              *(ulong *)(lVar8 + 0xb0) = CONCAT44(fVar20 + fVar20,fVar17 + fVar17);
              *(float *)(lVar8 + 0xb8) = fVar24 + fVar24;
              *(float *)(lVar8 + 0xbc) = fVar21;
              *(undefined4 *)(lVar8 + 0xc0) = 0;
              *(float *)(lVar8 + 0xc4) = fVar23;
              if (*(long *)(param_4 + 0xe8) == 0) goto LAB_02606d84;
              FUN_02333498(*(long *)(param_4 + 0xe8),lVar8,*(undefined8 *)PTR_DAT_049c8d98);
              lVar8 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
              Grid__CoordinateToWorldOffset_2506e00(param_4,uVar14);
              if (lVar8 == 0) goto LAB_02606d84;
              UnityEngine_Transform__set_localPosition_3c2c450(lVar8,0);
              iVar1 = (int)uVar16;
              if ((int)uVar16 <= iVar3) {
                iVar1 = iVar3;
              }
              iVar3 = iVar1;
              iVar1 = (int)uVar12;
              if ((int)uVar12 <= iVar4) {
                iVar1 = iVar4;
              }
            }
            iVar4 = iVar1;
            uVar12 = uVar12 + 1;
            uVar14 = uVar14 + 0x100000000;
          } while (uVar7 >> 0x20 != uVar12);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != (uVar7 & 0xffffffff));
    }
    lVar8 = *(long *)(param_4 + 0xa8);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x34);
      if (*(int *)(lVar8 + 0x34) <= iVar3) {
        iVar1 = iVar3;
      }
      iVar3 = *(int *)(lVar8 + 0x38);
      if (*(int *)(lVar8 + 0x38) <= iVar4) {
        iVar3 = iVar4;
      }
      if (cRam0000000004f4bd9e == '\0') {
        FUN_021f03f8(PTR_DAT_049bef70);
        cRam0000000004f4bd9e = '\x01';
      }
      uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bef70 + 0xb8) + 8);
      Grid__PopulateCellElements_2506e84(param_4,param_5,0);
      if (lVar6 != 0) {
        fVar23 = *(float *)(lVar6 + 0x30);
        fVar22 = fVar23 * _UNK_013aa3b4;
        if (*(int *)(lVar6 + 0x18) != 1) {
          fVar22 = fVar23;
        }
        lVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
        if (lVar6 != 0) {
          fVar23 = fVar23 * (float)(iVar1 + (int)uVar5);
          fVar22 = fVar22 * (float)(iVar3 + (int)((ulong)uVar5 >> 0x20));
          fVar21 = fVar22 + fVar22;
          UnityEngine_Transform__get_rotation_3c2d7a8(lVar6,0);
          iVar3 = *(int *)(param_4 + 0xa4);
          if (iVar3 < 4) {
            if (iVar3 < 2) {
              if ((iVar3 != 0) && (iVar3 != 1)) goto LAB_02606d88;
            }
            else if ((iVar3 != 2) && (iVar3 != 3)) goto LAB_02606d88;
          }
          else if (iVar3 < 6) {
            if ((iVar3 != 4) && (iVar3 != 5)) goto LAB_02606d88;
          }
          else if ((iVar3 != 6) && ((iVar3 != 7 && (iVar3 != 8)))) {
LAB_02606d88:
            thunk_FUN_02256840(PTR_DAT_049b5000);
            uVar5 = thunk_FUN_0222ca34();
            System_ArgumentOutOfRangeException___ctor_306d788(uVar5,0);
            uVar15 = thunk_FUN_02256840(PTR_DAT_049c8e60);
                    /* WARNING: Subroutine does not return */
            FUN_021f0564(uVar5,uVar15);
          }
          fVar20 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
          fVar24 = param_3;
          fVar17 = fVar22;
          lVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
          if (lVar6 != 0) {
            fVar18 = (float)UnityEngine_Transform__get_position_3c2d540(lVar6,0);
            fVar17 = fVar17 - fVar22;
            fVar24 = fVar24 - param_3;
            UnityEngine_Transform__set_position_3c2d61c(fVar18 - fVar20,lVar6,0);
            lVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
            if (lVar6 != 0) {
              fVar18 = (float)UnityEngine_Transform__get_position_3c2d540(lVar6,0);
              fVar22 = fVar24;
              fVar20 = fVar17;
              lVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
              if (lVar6 != 0) {
                UnityEngine_Transform__get_rotation_3c2d7a8(lVar6,0);
                fVar19 = (float)UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
                *(undefined4 *)(param_4 + 0xd8) = 0;
                *(float *)(param_4 + 0xdc) = fVar21 * 0.5;
                *(float *)(param_4 + 200) = fVar18 + fVar19;
                *(float *)(param_4 + 0xcc) = fVar17 + fVar20;
                *(float *)(param_4 + 0xd0) = fVar24 + fVar22;
                *(float *)(param_4 + 0xd4) = (fVar23 + fVar23) * 0.5;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02606d84:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

