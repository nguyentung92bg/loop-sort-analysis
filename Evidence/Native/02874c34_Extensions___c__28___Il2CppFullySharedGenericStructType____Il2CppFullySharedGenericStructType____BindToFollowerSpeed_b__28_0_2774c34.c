/* IL2CPP: Extensions.<>c__28<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToFollowerSpeed>b__28_0
void Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToFollowerSpeed_b__28_0 (Extensions___c__28_TOptions__TAdapter__o* __this, float v, Dreamteck_Splines_SplineFollower_o* follower, const MethodInfo_2774C34* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions.<>c__28<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToFollowerSpeed>b__28_0
   void 
   Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToFollowerSpeed_b__28_0
   (Extensions___c__28_TOptions__TAdapter__o* __this, float v, Dreamteck_Splines_SplineFollower_o*
   follower, const MethodInfo_2774C34* method); */

void Extensions___c__28___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToFollowerSpeed_b__28_0_2774c34
               (float param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = cRam0000000004f4a18f;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(float *)(param_3 + 0x4f) != param_1) {
    *(float *)(param_3 + 0x4f) = param_1;
    if (cVar1 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf30,0);
      cRam0000000004f4a18f = '\x01';
    }
    fVar3 = ABS(param_1);
    if (ABS(param_1) <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
    fVar2 = fVar3 * _UNK_013aa8a0;
    if (fVar3 * _UNK_013aa8a0 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar2 <= ABS(0.0 - param_1)) {
      fVar3 = *(float *)(param_3 + 0x4f);
      if (fVar3 < 0.0) {
        (**(code **)(*param_3 + 0x2c8))(param_3,0xffffffff,*(undefined8 *)(*param_3 + 0x2d0));
        fVar3 = *(float *)(param_3 + 0x4f);
      }
      if (0.0 < fVar3) {
                    /* WARNING: Could not recover jumptable at 0x0244c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x2c8))(param_3,1,*(undefined8 *)(*param_3 + 0x2d0));
        return;
      }
    }
  }
  return;
}

