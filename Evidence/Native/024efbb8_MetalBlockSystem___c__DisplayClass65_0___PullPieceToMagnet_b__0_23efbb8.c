/* IL2CPP: MetalBlockSystem.<>c__DisplayClass65_0$$<PullPieceToMagnet>b__0
void MetalBlockSystem___c__DisplayClass65_0___PullPieceToMagnet_b__0 (MetalBlockSystem___c__DisplayClass65_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem.<>c__DisplayClass65_0$$<PullPieceToMagnet>b__0
   void MetalBlockSystem___c__DisplayClass65_0___PullPieceToMagnet_b__0
   (MetalBlockSystem___c__DisplayClass65_0_o* __this, float k, const MethodInfo* method); */

void MetalBlockSystem___c__DisplayClass65_0___PullPieceToMagnet_b__0_23efbb8
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 024efbd8 to 025efbf7 has its CatchHandler @ 024ef33c */
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar7 = *(float *)(param_2 + 0x20);
    fVar3 = (float)UnityEngine_Transform__TransformPoint_3c2ec74
                             (*(undefined4 *)(param_2 + 0x18),fVar4,fVar7,*(long *)(param_2 + 0x10),
                              0);
    fVar12 = *(float *)(param_2 + 0x2c);
                    /* try { // try from 024efbf8 to 025efbfb has its CatchHandler @ 024eff80 */
    uVar13 = *(undefined8 *)(param_2 + 0x24);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
                    /* try { // try from 024efc1c to 025efc37 has its CatchHandler @ 024efff8 */
      cRam0000000004f4a55e = '\x01';
    }
    if (*(long *)(param_2 + 0x40) != 0) {
      uVar8 = NEON_fmov(0x3fc00000,4);
      fVar10 = *(float *)(param_2 + 0x3c);
                    /* try { // try from 024efc5c to 025efca7 has its CatchHandler @ 024efff4 */
      uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x18);
      fVar6 = 1.0;
      if (param_1 <= 1.0) {
        fVar6 = param_1;
      }
                    /* try { // try from 024efca8 to 025efccf has its CatchHandler @ 024ef33c */
      fVar14 = ((float)uVar13 + fVar3) * 0.5 + (float)uVar11 * (float)uVar8 +
               *(float *)(param_2 + 0x30) * fVar10;
      fVar15 = ((float)((ulong)uVar13 >> 0x20) + fVar4) * 0.5 +
               (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar8 >> 0x20) +
               fVar10 * *(float *)(param_2 + 0x34);
      fVar10 = (fVar7 + fVar12) * 0.5 +
               *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x20) * 1.5 +
               *(float *)(param_2 + 0x38) * fVar10;
      fVar12 = 0.0;
      if (0.0 <= param_1) {
        fVar12 = fVar6;
      }
      fVar5 = (float)*(undefined8 *)(param_2 + 0x24);
      fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
                    /* try { // try from 024efcd0 to 025efcdb has its CatchHandler @ 024efff0 */
      fVar5 = fVar5 + (fVar14 - fVar5) * fVar12;
      fVar6 = fVar6 + (fVar15 - fVar6) * fVar12;
      fVar9 = *(float *)(param_2 + 0x2c) + fVar12 * (fVar10 - *(float *)(param_2 + 0x2c));
      fVar6 = fVar6 + ((fVar15 + (fVar4 - fVar15) * fVar12) - fVar6) * fVar12;
      UnityEngine_Transform__set_position_3c2d61c
                (CONCAT44(fVar6,fVar5 + ((fVar14 + (fVar3 - fVar14) * fVar12) - fVar5) * fVar12),
                 fVar6,fVar9 + fVar12 * ((fVar10 + fVar12 * (fVar7 - fVar10)) - fVar9),
                 *(long *)(param_2 + 0x40),0);
      lVar1 = *(long *)(param_2 + 0x40);
      if (lVar1 != 0) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar1 != 0) {
          lVar2 = *(long *)(lVar1 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

