/* IL2CPP: Extensions.<>c__29<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>$$<BindToTransitionRate>b__29_0
void Extensions___c__29___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToTransitionRate_b__29_0 (Extensions___c__29_TOptions__TAdapter__o* __this, float v, Coffee_UIEffects_UIEffect_o* uiEffect, const MethodInfo_2775154* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions.<>c__29<__Il2CppFullySharedGenericStructType,
   __Il2CppFullySharedGenericStructType>$$<BindToTransitionRate>b__29_0
   void 
   Extensions___c__29___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToTransitionRate_b__29_0
   (Extensions___c__29_TOptions__TAdapter__o* __this, float v, Coffee_UIEffects_UIEffect_o*
   uiEffect, const MethodInfo_2775154* method); */

void Extensions___c__29___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____BindToTransitionRate_b__29_0_2775154
               (float param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar6 = *(float *)((long)param_3 + 0xc4);
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = fVar2;
  }
  if (cRam0000000004f4a18f == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf30,0);
    cRam0000000004f4a18f = '\x01';
  }
  fVar2 = ABS(fVar6);
  if (fVar2 <= ABS(fVar5)) {
    fVar2 = ABS(fVar5);
  }
  fVar4 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
  fVar3 = fVar2 * _UNK_013aa8a0;
  if (fVar2 * _UNK_013aa8a0 <= fVar4) {
    fVar3 = fVar4;
  }
  if (ABS(fVar5 - fVar6) < fVar3) {
    return;
  }
  lVar1 = (**(code **)(*param_3 + 0x2e8))(param_3,*(undefined8 *)(*param_3 + 0x2f0));
  *(float *)((long)param_3 + 0xc4) = fVar5;
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x44) = fVar5;
                    /* WARNING: Could not recover jumptable at 0x023f85bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x358))(param_3,*(undefined8 *)(*param_3 + 0x360));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

