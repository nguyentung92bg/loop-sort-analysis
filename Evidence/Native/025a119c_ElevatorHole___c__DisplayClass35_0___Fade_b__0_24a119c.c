/* IL2CPP: ElevatorHole.<>c__DisplayClass35_0$$<Fade>b__0
void ElevatorHole___c__DisplayClass35_0___Fade_b__0 (ElevatorHole___c__DisplayClass35_0_o* __this, float visibility, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ElevatorHole.<>c__DisplayClass35_0$$<Fade>b__0
   void ElevatorHole___c__DisplayClass35_0___Fade_b__0 (ElevatorHole___c__DisplayClass35_0_o*
   __this, float visibility, const MethodInfo* method); */

void ElevatorHole___c__DisplayClass35_0___Fade_b__0_24a119c(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
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
  float fVar17;
  float fVar18;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *(long *)(param_2 + 0x18);
  if ((bRam0000000004f4b725 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b40,lVar4,0);
    bRam0000000004f4b725 = 1;
  }
  puVar1 = PTR_DAT_049c2b40;
  if (*(long *)(lVar3 + 0xa0) != 0) {
    fVar12 = *(float *)(lVar3 + 0xb8);
    lVar2 = UnityEngine_Renderer__get_sharedMaterial_3bddc88(*(long *)(lVar3 + 0xa0),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    if (lVar2 != 0) {
      fVar8 = 0.0;
      fVar11 = fVar12 * 1.0 * 1.0 * 1.0;
      fVar5 = (float)UnityEngine_Material__GetFloat_3bee37c
                               (lVar2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
      fVar12 = _UNK_013aa688;
      if (fVar5 <= _UNK_013aa688) {
        fVar5 = _UNK_013aa688;
      }
      fVar5 = fVar11 / fVar5;
      fVar7 = 1.0;
      if (fVar5 <= 1.0) {
        fVar7 = fVar5;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar5) {
        fVar13 = fVar7;
      }
      fVar6 = (float)UnityEngine_Material__GetVector_3bee3e4
                               (lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4),0);
      fVar7 = fVar8;
      fVar5 = (float)UnityEngine_Material__GetVector_3bee3e4
                               (lVar2,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      fVar10 = *(float *)(lVar3 + 0xbc);
      fVar9 = 0.0;
      if (0.0 <= fVar13) {
        fVar9 = fVar13;
      }
      if (cRam0000000004f4a68f == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68f = '\x01';
      }
      if (lVar4 != 0) {
        if (fVar5 <= fVar12) {
          fVar5 = fVar12;
        }
        if (fVar7 <= fVar12) {
          fVar7 = fVar12;
        }
        fVar10 = (fVar10 + -1.0) * 1.0 + 1.0;
        fVar12 = fVar9 * (fVar5 + -1.0) + 1.0;
        if (param_1 <= _UNK_013aa94c) {
          param_1 = _UNK_013aa94c;
        }
        lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        param_1 = param_1 * fVar10;
        fVar14 = *(float *)(lVar2 + 0x24);
        fVar18 = *(float *)(lVar2 + 0x28);
        fVar17 = *(float *)(lVar2 + 0x2c);
        fVar15 = param_1 * (fVar9 * (fVar7 + -1.0) + 1.0);
        fVar16 = param_1 * fVar12;
        lVar4 = UnityEngine_Component__get_transform_3c18724(lVar4,0);
        fVar9 = *(float *)(lVar3 + 0x104);
        fVar7 = *(float *)(lVar3 + 0x100);
        fVar5 = (float)ElevatorHole__ScaleAroundShaft_24118e4
                                 (*(undefined4 *)(lVar3 + 0xfc),fVar7,fVar9,fVar16,param_1,fVar15,
                                  lVar3);
        if (lVar4 != 0) {
          fVar14 = fVar6 * fVar13 + fVar11 * fVar14;
          fVar6 = fVar13 * 0.0 + fVar11 * fVar18;
          fVar8 = fVar8 * fVar13 + fVar11 * fVar17;
          UnityEngine_Transform__set_position_3c2d61c
                    (fVar14 + fVar5,fVar6 + fVar7,fVar8 + fVar9,lVar4,0);
          UnityEngine_Transform__set_localScale_3c2ddfc(fVar16,param_1,fVar15,lVar4,0);
          lVar2 = *(long *)(lVar3 + 0xa8);
          lVar4 = UnityEngine_Component__get_transform_3c18724(lVar3,0);
          if (lVar4 != 0) {
            fVar7 = *(float *)(lVar3 + 0x110);
            fVar11 = *(float *)(lVar3 + 0x10c);
            UnityEngine_Transform__TransformPoint_3c2ec74
                      (*(undefined4 *)(lVar3 + 0x108),fVar11,fVar7,lVar4,0);
            fVar5 = (float)ElevatorHole__ScaleAroundShaft_24118e4(lVar3);
            if (lVar2 != 0) {
              UnityEngine_Transform__set_position_3c2d61c
                        (fVar14 + fVar5,fVar6 + fVar11,fVar8 + fVar7,lVar2,0);
              lVar4 = *(long *)(lVar3 + 0xa8);
              ElevatorHole__ScaleInPlatformAxes_24119f4(fVar10 * fVar12,lVar3);
              if (lVar4 != 0) {
                if ((bRam0000000004f58a11 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a26ad0,0);
                  bRam0000000004f58a11 = 1;
                }
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                lVar3 = *(long *)(lVar4 + 0x10);
                if (lVar3 != 0) {
                  if (pcRam0000000004f58a78 == (code *)0x0) {
                    pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
                  }
                  (*pcRam0000000004f58a78)(lVar3,&stack0xffffffffffffffd4);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
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

