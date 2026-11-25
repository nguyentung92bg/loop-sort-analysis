/* IL2CPP: SandFlowRenderer$$TryCreate
bool SandFlowRenderer__TryCreate (UnityEngine_Shader_o* shader, UnityEngine_ComputeShader_o* compute, SandFlowRenderer_o** renderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$TryCreate
   bool SandFlowRenderer__TryCreate (UnityEngine_Shader_o* shader, UnityEngine_ComputeShader_o*
   compute, SandFlowRenderer_o** renderer, const MethodInfo* method); */

undefined8 SandFlowRenderer__TryCreate_24be640(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f4bbc4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c6e48);
    bRam0000000004f4bbc4 = 1;
  }
  *param_3 = 0;
  thunk_FUN_021f190c(param_3,0);
  iVar2 = UnityEngine_SystemInfo__get_graphicsShaderLevel_3c28a1c(0);
  if ((0x2c < iVar2) &&
     (iVar2 = UnityEngine_SystemInfo__get_maxComputeBufferInputsVertex_3c291e0(0),
     puVar1 = PTR_DAT_049b3b98, 1 < iVar2)) {
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) {
LAB_025be7c0:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar4 = UnityEngine_Shader__get_isSupported_3bdfae4(param_1,0);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = UnityEngine_SystemInfo__get_supportsComputeShaders_3c28cec(0), (uVar4 & 1) != 0))
      {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar4 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
        puVar1 = PTR_DAT_049c6e48;
        if ((uVar4 & 1) == 0) {
          if (param_2 == 0) goto LAB_025be7c0;
          uVar4 = UnityEngine_ComputeShader__HasKernel_3c27550
                            (param_2,*(undefined8 *)PTR_DAT_049c6e48,0);
          if ((uVar4 & 1) != 0) {
            uVar3 = UnityEngine_ComputeShader__FindKernel_3c27364(param_2,*(undefined8 *)puVar1,0);
            uVar4 = UnityEngine_ComputeShader__IsSupported_3c27c58(param_2,uVar3,0);
            if ((uVar4 & 1) != 0) {
              uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6e10);
              SandFlowRenderer___ctor_24bc298(uVar5,param_1,param_2);
              *param_3 = uVar5;
              thunk_FUN_021f190c(param_3,uVar5);
              return 1;
            }
          }
        }
      }
    }
  }
                    /* try { // try from 025be7ac to 026be7d3 has its CatchHandler @ 025bebb0 */
  return 0;
}

