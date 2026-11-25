/* IL2CPP: LevelAnimationSystem.<>c__DisplayClass28_0$$<ApplyMoveMotion>b__1
void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__1 (LevelAnimationSystem___c__DisplayClass28_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem.<>c__DisplayClass28_0$$<ApplyMoveMotion>b__1
   void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__1
   (LevelAnimationSystem___c__DisplayClass28_0_o* __this, float x, const MethodInfo* method); */

void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__1_24d9058
               (float param_1,long param_2)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != 0) {
    fVar18 = *(float *)(param_2 + 0x70);
    fVar16 = *(float *)(param_2 + 0x28);
    fVar12 = *(float *)(param_2 + 0x60);
    fVar5 = 1.0;
    if (param_1 <= 1.0) {
      fVar5 = param_1;
    }
    fVar9 = 0.0;
    if (0.0 <= param_1) {
      fVar9 = fVar5;
    }
    fVar5 = *(float *)(param_2 + 0x6c) * 1.5 * fVar18 * _UNK_013aa860;
    fVar6 = (float)FUN_046086e0(param_1 * _UNK_013aa860);
    uVar11 = NEON_fmov(0x3fc00000,4);
    uVar14 = *(undefined8 *)(param_2 + 100);
    uVar17 = *(undefined8 *)(param_2 + 0x20);
    fVar13 = (float)*(undefined8 *)(param_2 + 0x58);
                    /* try { // try from 025d911c to 026d91b3 has its CatchHandler @ 025d911c
                       catch() { ... } // from try @ 025d911c with catch @ 025d911c
                       catch() { ... } // from try @ 025d931c with catch @ 025d911c
                       catch() { ... } // from try @ 025d9394 with catch @ 025d911c */
    fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
    fVar10 = (float)uVar14 * (float)uVar11 * fVar18 * 3.1415927 * param_1;
    fVar13 = fVar13 + ((float)uVar17 - fVar13) * fVar9;
    fVar7 = fVar13 + fVar10 * fVar6;
    fVar8 = (float)UnityEngine_Transform__get_position_3c2d540(lVar4,0);
    if (cRam0000000004f4a55c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a55c = '\x01';
    }
    fVar7 = fVar7 - fVar8;
    fVar10 = (fVar15 + ((float)((ulong)uVar17 >> 0x20) - fVar15) * fVar9 +
             (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar11 >> 0x20) * fVar18 * 3.1415927 *
             param_1 * fVar6) - fVar10;
    fVar13 = (fVar12 + fVar9 * (fVar16 - fVar12) + fVar6 * fVar5 * param_1) - fVar13;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar1 = PTR_DAT_049bbf90;
                    /* try { // try from 025d91b4 to 026d91d7 has its CatchHandler @ 025d9364 */
    fVar5 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar7 * fVar7);
    if (fVar5 <= _UNK_013aa920) {
      if (cRam0000000004f4a233 == '\0') {
                    /* try { // try from 025d91f4 to 026d923b has its CatchHandler @ 025d935c */
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a233 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)puVar1 + 0xb8);
      fVar7 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
    }
    else {
      fVar7 = fVar7 / fVar5;
      fVar10 = fVar10 / fVar5;
      fVar13 = fVar13 / fVar5;
    }
    uVar19 = *(undefined4 *)(param_2 + 0x4c);
    uVar20 = *(undefined4 *)(param_2 + 0x50);
    uVar21 = *(undefined4 *)(param_2 + 0x54);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
                    /* try { // try from 025d9248 to 026d926b has its CatchHandler @ 025d9354 */
    uVar19 = FUN_025bb780(uVar19,uVar20,uVar21,fVar7,fVar10,fVar13,0);
    if (cRam0000000004f4a55e == '\0') {
                    /* try { // try from 025d9288 to 026d92e7 has its CatchHandler @ 025d9358 */
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    fVar5 = *(float *)(lVar4 + 0x18);
    fVar12 = *(float *)(lVar4 + 0x1c);
    UnityEngine_Quaternion__AngleAxis_3c0a0a8(uVar19,fVar5,fVar12,*(undefined4 *)(lVar4 + 0x20),0);
    uVar19 = UnityEngine_Quaternion__op_Multiply_3c0a3d8(0);
    lVar4 = *(long *)(param_2 + 0x18);
    if (*(char *)(param_2 + 0x74) == '\0') {
      if (lVar4 == 0) goto LAB_025d94a4;
      fVar16 = fVar5;
      fVar18 = fVar12;
      fVar9 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar4,0);
      fVar9 = -fVar9;
      fVar16 = -fVar16;
      fVar18 = -fVar18;
    }
    else {
      if (lVar4 == 0) goto LAB_025d94a4;
      fVar16 = fVar5;
      fVar18 = fVar12;
      fVar9 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar4,0);
                    /* try { // try from 025d92ec to 026d931b has its CatchHandler @ 025d9360 */
    }
    if (cRam0000000004f4a55e == '\0') {
                    /* try { // try from 025d931c to 026d937f has its CatchHandler @ 025d911c */
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d9248 with catch @ 025d9354
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d9288 with catch @ 025d9358
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d91f4 with catch @ 025d935c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d92ec with catch @ 025d9360
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d91b4 with catch @ 025d9364
                        */
    fVar18 = (float)FUN_025bb780(fVar7,fVar10,fVar13,fVar9,fVar16,fVar18,0);
                    /* try { // try from 025d9380 to 026d9383 has its CatchHandler @ 025d9388 */
    fVar16 = fVar18 * 40.0;
    if (*(char *)(param_2 + 0x74) != '\0') {
      fVar16 = -(fVar18 * 40.0);
    }
                    /* catch() { ... } // from try @ 025d9380 with catch @ 025d9388 */
                    /* try { // try from 025d938c to 026d9393 has its CatchHandler @ 025d939c */
                    /* try { // try from 025d9394 to 026d939f has its CatchHandler @ 025d911c */
    fVar18 = 40.0;
    if (fVar16 <= 40.0) {
      fVar18 = fVar16;
    }
    fVar9 = -40.0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d938c with catch @ 025d939c
                        */
    if (-40.0 <= fVar16) {
      fVar9 = fVar18;
    }
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 0xf8);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      UnityEngine_Quaternion__AngleAxis_3c0a0a8
                (fVar9,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                 *(undefined4 *)(lVar3 + 0x20),0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_localRotation_3c2d9f0(lVar4,0);
        if (*(long *)(param_2 + 0x30) != 0) {
          lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 0x100);
          if (cRam0000000004f4a55e == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
          UnityEngine_Quaternion__AngleAxis_3c0a0a8
                    (fVar9 + 180.0,*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                     *(undefined4 *)(lVar3 + 0x20),0);
          if (lVar4 != 0) {
            UnityEngine_Transform__set_localRotation_3c2d9f0(lVar4,0);
            if (*(long *)(param_2 + 0x18) != 0) {
              UnityEngine_Transform__set_forward_3c2dbf4
                        (uVar19,fVar5,fVar12,*(long *)(param_2 + 0x18),0);
              lVar4 = *(long *)(param_2 + 0x18);
              if (lVar4 != 0) {
                if ((bRam0000000004f58a09 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a26ad0,0);
                  bRam0000000004f58a09 = 1;
                }
                if (lVar4 != 0) {
                  lVar3 = *(long *)(lVar4 + 0x10);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
                  }
                  if (pcRam0000000004f58a38 == (code *)0x0) {
                    pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
                  }
                  (*pcRam0000000004f58a38)(lVar3,&stack0xffffffffffffffd4);
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
LAB_025d94a4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

