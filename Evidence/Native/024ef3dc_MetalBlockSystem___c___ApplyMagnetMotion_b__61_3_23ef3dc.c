/* IL2CPP: MetalBlockSystem.<>c$$<ApplyMagnetMotion>b__61_3
int32_t MetalBlockSystem___c___ApplyMagnetMotion_b__61_3 (MetalBlockSystem___c_o* __this, MetalBlockSystem_MagnetPiece_o* left, MetalBlockSystem_MagnetPiece_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem.<>c$$<ApplyMagnetMotion>b__61_3
   int32_t MetalBlockSystem___c___ApplyMagnetMotion_b__61_3 (MetalBlockSystem___c_o* __this,
   MetalBlockSystem_MagnetPiece_o* left, MetalBlockSystem_MagnetPiece_o* right, const MethodInfo*
   method); */

int MetalBlockSystem___c___ApplyMagnetMotion_b__61_3_23ef3dc
              (undefined8 param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar1 = *(float *)(param_3 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x1c);
  if (fVar2 < fVar1) {
    return -1;
  }
  if (fVar2 <= fVar1) {
    if (fVar2 == fVar1) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS(fVar2)) {
      return -(uint)((uint)ABS(fVar1) < 0x7f800001);
    }
  }
  return 1;
}

