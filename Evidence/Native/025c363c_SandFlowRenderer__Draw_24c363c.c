/* IL2CPP: SandFlowRenderer$$Draw
void SandFlowRenderer__Draw (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025c37e8) */
/* IL2CPP: SandFlowRenderer$$Draw
   void SandFlowRenderer__Draw (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera, int32_t
   layer, const MethodInfo* method); */

void SandFlowRenderer__Draw_24c363c(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4bbd6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bcf68);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd6 = 1;
  }
  puVar2 = PTR_DAT_049c6e10;
  iVar1 = *(int *)(param_1 + 0x324);
  lStack_38 = 0;
  if (iVar1 < 0x21) {
    iVar1 = 0x20;
  }
  if (iVar1 * *(int *)(param_1 + 0x2f8) != 0) {
    SandFlowRenderer__SolveGrains_24c3134(param_1);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_049b3b98;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xb0);
    if (lVar4 != 0) {
      Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample_3bc0d70(lVar4,0);
    }
    plStack_40 = &lStack_38;
    uStack_48 = 0;
    lStack_38 = lVar4;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = UnityEngine_Object__op_Inequality_3c1b96c(param_2,0,0);
    uVar6 = param_2;
    if ((uVar5 & 1) == 0) {
      uVar6 = UnityEngine_Camera__get_main_3bcec2c(0,param_2);
    }
    SandFlowRenderer__SetViewLight_24c3844(param_1,uVar6);
    uStack_58 = *(undefined8 *)(param_1 + 0x2e8);
    uStack_60 = *(undefined8 *)(param_1 + 0x2e0);
    uStack_50 = *(undefined8 *)(param_1 + 0x2f0);
    uVar7 = *(undefined8 *)(param_1 + 0x2d0);
    uVar3 = SandFlowRenderer__PrepareChunks_24be418(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x2d8);
    if (*(int *)(*(long *)PTR_DAT_049bcf68 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    UnityEngine_Graphics__DrawProcedural_3bd93dc
              (uVar7,&uStack_80,5,0x400,uVar3,param_2,uVar6,0,0,param_3,0);
    if (lStack_38 != 0) {
      Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample_3bc0df8(lStack_38,0);
    }
  }
  return;
}

