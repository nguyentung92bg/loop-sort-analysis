/* IL2CPP: SandFlowRenderer$$ArrivedShare
float SandFlowRenderer__ArrivedShare (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o* packet, float time, bool* flying, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$ArrivedShare
   float SandFlowRenderer__ArrivedShare (SandFlowRenderer_o* __this, int32_t index,
   SandFlowPacket_o* packet, float time, bool* flying, const MethodInfo* method); */

float SandFlowRenderer__ArrivedShare_24c05c4
                (float param_1,long param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_1f0 [88];
  float fStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  int iStack_184;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_78;
  
  puVar3 = PTR_DAT_049c6ec0;
  if ((bRam0000000004f4bbca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ec0);
    bRam0000000004f4bbca = 1;
  }
  fVar2 = _UNK_013aa688;
  fVar6 = _UNK_013aa688;
  if (_UNK_013aa688 <= *(float *)(param_4 + 0x1c)) {
    fVar6 = *(float *)(param_4 + 0x1c);
  }
  fVar6 = (param_1 - *(float *)(param_4 + 0xc)) / fVar6;
  fVar4 = *(float *)(param_4 + 0x2c) + -3.0;
  if (*(float *)(param_4 + 0x2c) <= 3.0) {
    fVar4 = 0.0;
  }
  SandFlowRenderer__CreateReformJob_24c0754(auStack_130,param_2,param_3,param_4);
  func_0x04608620(auStack_1f0,auStack_130,0x58);
  fVar1 = fVar4;
  if (fVar4 <= 0.0) {
    fVar1 = fVar6;
  }
  uStack_190 = uStack_d0;
  uStack_154 = uStack_94;
  uStack_15c = uStack_9c;
  uStack_188 = uStack_c8;
  iStack_184 = iStack_c4;
  uStack_180 = uStack_c0;
  fVar5 = 1.0;
  if (fVar1 <= 1.0) {
    fVar5 = fVar1;
  }
  uStack_164 = uStack_a4;
  uStack_16c = uStack_ac;
  fStack_170 = 0.0;
  if (0.0 <= fVar1) {
    fStack_170 = fVar5;
  }
  uStack_14c = uStack_8c;
  uStack_138 = uStack_78;
  fStack_198 = fVar2;
  if (fVar2 <= *(float *)(param_4 + 0x1c)) {
    fStack_198 = *(float *)(param_4 + 0x1c);
  }
  uStack_194 = *(undefined4 *)(param_2 + 0x10c);
  fStack_178 = fVar6;
  fStack_174 = fVar4;
  Unity_Jobs_IJobExtensions__Run___Il2CppFullySharedGenericStructType__2643b3c
            (auStack_1f0,*(undefined8 *)puVar3);
  *(bool *)param_5 = 0.5 < *(float *)(*(long *)(param_2 + 0x248) + 4);
  return **(float **)(param_2 + 0x248) / (float)iStack_c4;
}

