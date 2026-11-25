/* IL2CPP: LongCarrier$$StretchCollider
void LongCarrier__StretchCollider (LongCarrier_o* __this, UnityEngine_Vector3_o shift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$StretchCollider
   void LongCarrier__StretchCollider (LongCarrier_o* __this, UnityEngine_Vector3_o shift, const
   MethodInfo* method); */

void LongCarrier__StretchCollider_24ab9ac
               (undefined4 param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float afStack_5c [3];
  
  puVar1 = PTR_DAT_049b3b98;
  fVar12 = param_2;
  fVar14 = param_3;
  if ((bRam0000000004f4bb2f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bb2f = 1;
  }
  uVar9 = *(undefined8 *)(param_4 + 0x108);
  afStack_5c[1] = 0.0;
  afStack_5c[2] = 0.0;
  afStack_5c[0] = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(long *)(param_4 + 0x108) != 0) {
    lVar5 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_4 + 0x108),0);
    if (((*(long *)(param_4 + 0x100) != 0) &&
        (lVar6 = *(long *)(*(long *)(param_4 + 0x100) + 0x110), lVar6 != 0)) &&
       (UnityEngine_Transform__get_forward_3c2db78(lVar6,0), lVar5 != 0)) {
      fVar10 = (float)UnityEngine_Transform__InverseTransformDirection_3c2e98c(lVar5,0);
      fVar13 = ABS(fVar12);
      fVar11 = ABS(fVar10);
      iVar7 = 2;
      if (ABS(fVar14) <= fVar13) {
        iVar7 = 1;
      }
      bVar2 = true;
      bVar3 = false;
      if (ABS(fVar14) <= fVar11) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11) && !NAN(fVar13)) {
          bVar2 = fVar11 < fVar13;
          bVar3 = false;
        }
      }
      if (bVar2 == bVar3) {
        iVar7 = 0;
      }
      fVar11 = (float)UnityEngine_Transform__InverseTransformVector_3c2eb7c(param_1,lVar5,0);
      afStack_5c[2] = *(float *)(param_4 + 0x154);
      afStack_5c[1] = *(float *)(param_4 + 0x158);
      afStack_5c[0] = *(float *)(param_4 + 0x15c);
      if (iVar7 == 0) {
        pfVar8 = afStack_5c + 2;
        fVar13 = afStack_5c[2];
      }
      else if (iVar7 == 1) {
        pfVar8 = afStack_5c + 1;
        fVar13 = afStack_5c[1];
        fVar11 = param_2;
        fVar10 = fVar12;
      }
      else {
        pfVar8 = afStack_5c;
        fVar13 = afStack_5c[0];
        fVar11 = param_3;
        fVar10 = fVar14;
      }
      lVar5 = *(long *)(param_4 + 0x108);
      fVar12 = -fVar11;
      if (0.0 <= fVar10) {
        fVar12 = fVar11;
      }
      *pfVar8 = fVar12 + fVar13;
      if (lVar5 != 0) {
        UnityEngine_BoxCollider__set_size_3c851b4(afStack_5c[2],afStack_5c[1],afStack_5c[0],lVar5,0)
        ;
        lVar5 = *(long *)(param_4 + 0x108);
        if (lVar5 != 0) {
          if ((bRam0000000004f59f43 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a28760,0);
            bRam0000000004f59f43 = 1;
          }
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar5,0);
            }
            if (pcRam0000000004f59f50 == (code *)0x0) {
              pcRam0000000004f59f50 = (code *)FUN_021f03bc(&UNK_013d5331);
            }
            (*pcRam0000000004f59f50)(lVar6,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

