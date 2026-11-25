/* IL2CPP: ElevatorHole$$SetPose
void ElevatorHole__SetPose (ElevatorHole_o* __this, Carrier_o* carrier, float progress, float visibility, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ElevatorHole$$SetPose
   void ElevatorHole__SetPose (ElevatorHole_o* __this, Carrier_o* carrier, float progress, float
   visibility, const MethodInfo* method); */

void ElevatorHole__SetPose_2410ebc(float param_1,float param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((bRam0000000004f4b725 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b40);
    bRam0000000004f4b725 = 1;
  }
  puVar1 = PTR_DAT_049c2b40;
  if (*(long *)(param_3 + 0xa0) != 0) {
    fVar12 = *(float *)(param_3 + 0xb8);
    lVar2 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(*(long *)(param_3 + 0xa0),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    if (lVar2 != 0) {
      fVar7 = (1.0 - param_1) * (1.0 - param_1);
      param_1 = fVar12 * param_1 * param_1 * param_1;
      fVar10 = 1.0 - fVar7;
      fVar4 = (float)UnityEngine_Material__GetFloat_3bee37c
                               (lVar2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      fVar12 = _UNK_013aa688;
      if (fVar4 <= _UNK_013aa688) {
        fVar4 = _UNK_013aa688;
      }
      fVar4 = param_1 / fVar4;
      fVar6 = 1.0;
      if (fVar4 <= 1.0) {
        fVar6 = fVar4;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar4) {
        fVar9 = fVar6;
      }
      fVar5 = (float)UnityEngine_Material__GetVector_3bee3e4
                               (lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
      fVar8 = fVar7;
      fVar6 = (float)UnityEngine_Material__GetVector_3bee3e4
                               (lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      fVar4 = 1.0;
      if (fVar10 <= 1.0) {
        fVar4 = fVar10;
      }
      fVar11 = *(float *)(param_3 + 0xbc);
      fVar13 = 0.0;
      if (0.0 <= fVar10) {
        fVar13 = fVar4;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar9) {
        fVar4 = fVar9;
      }
      if (cRam0000000004f4a68f == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68f = '\x01';
      }
      if (param_4 != 0) {
        if (fVar6 <= fVar12) {
          fVar6 = fVar12;
        }
        if (fVar8 <= fVar12) {
          fVar8 = fVar12;
        }
        fVar10 = fVar13 * (fVar11 + -1.0) + 1.0;
        fVar12 = fVar4 * (fVar6 + -1.0) + 1.0;
        if (param_2 <= _UNK_013aa94c) {
          param_2 = _UNK_013aa94c;
        }
        lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        param_2 = param_2 * fVar10;
        fVar13 = *(float *)(lVar2 + 0x24);
        fVar16 = *(float *)(lVar2 + 0x28);
        fVar15 = *(float *)(lVar2 + 0x2c);
        fVar11 = param_2 * (fVar4 * (fVar8 + -1.0) + 1.0);
        fVar14 = param_2 * fVar12;
        lVar2 = UnityEngine_Component__get_transform_3c18724(param_4,0);
        fVar8 = *(float *)(param_3 + 0x104);
        fVar6 = *(float *)(param_3 + 0x100);
        fVar4 = (float)ElevatorHole__ScaleAroundShaft_24118e4
                                 (*(undefined4 *)(param_3 + 0xfc),fVar6,fVar8,fVar14,param_2,fVar11,
                                  param_3);
        if (lVar2 != 0) {
          fVar13 = fVar5 * fVar9 + param_1 * fVar13;
          fVar5 = fVar9 * 0.0 + param_1 * fVar16;
          fVar7 = fVar7 * fVar9 + param_1 * fVar15;
          UnityEngine_Transform__set_position_3c2d61c
                    (fVar13 + fVar4,fVar5 + fVar6,fVar7 + fVar8,lVar2,0);
          UnityEngine_Transform__set_localScale_3c2ddfc(fVar14,param_2,fVar11,lVar2,0);
          lVar3 = *(long *)(param_3 + 0xa8);
          lVar2 = UnityEngine_Component__get_transform_3c18724(param_3,0);
          if (lVar2 != 0) {
            fVar9 = *(float *)(param_3 + 0x110);
            fVar6 = *(float *)(param_3 + 0x10c);
            UnityEngine_Transform__TransformPoint_3c2ec74
                      (*(undefined4 *)(param_3 + 0x108),fVar6,fVar9,lVar2,0);
            fVar4 = (float)ElevatorHole__ScaleAroundShaft_24118e4(param_3);
            if (lVar3 != 0) {
              UnityEngine_Transform__set_position_3c2d61c
                        (fVar13 + fVar4,fVar5 + fVar6,fVar7 + fVar9,lVar3,0);
              lVar2 = *(long *)(param_3 + 0xa8);
              ElevatorHole__ScaleInPlatformAxes_24119f4(fVar10 * fVar12,param_3);
              if (lVar2 != 0) {
                if ((bRam0000000004f58a11 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a26ad0,0);
                  bRam0000000004f58a11 = 1;
                }
                if (lVar2 != 0) {
                  lVar3 = *(long *)(lVar2 + 0x10);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
                  }
                  if (pcRam0000000004f58a78 == (code *)0x0) {
                    pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
                  }
                  (*pcRam0000000004f58a78)(lVar3,&stack0xffffffffffffffd4);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

