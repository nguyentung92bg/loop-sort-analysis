/* IL2CPP: SandFlowRenderer$$MarkSplit
float SandFlowRenderer__MarkSplit (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o* packet, float time, float front, float* previous, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$MarkSplit
   float SandFlowRenderer__MarkSplit (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o*
   packet, float time, float front, float* previous, const MethodInfo* method); */

float SandFlowRenderer__MarkSplit_24c0b48
                (float param_1,float param_2,long param_3,undefined4 param_4,long param_5,
                float *param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auStack_2e8 [65];
  undefined1 uStack_2a7;
  undefined4 uStack_2a6;
  undefined2 uStack_2a2;
  float fStack_2a0;
  float fStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined8 uStack_254;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_218;
  undefined2 uStack_214;
  undefined4 auStack_210 [16];
  undefined4 uStack_1ce;
  undefined2 uStack_1ca;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined8 uStack_130;
  float fStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ec;
  undefined1 auStack_e0 [72];
  long lStack_98;
  
  puVar4 = PTR_DAT_049c6ec0;
  lVar3 = tpidr_el0;
  lStack_98 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f4bbcc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f00);
    FUN_021f03f8(PTR_DAT_049c6ec0);
    FUN_021f03f8(PTR_DAT_049c6ec8);
    bRam0000000004f4bbcc = 1;
  }
  fStack_128 = 0.0;
  uStack_130 = 0;
  fStack_138 = 0.0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uVar5 = SandFlowRenderer__SplitSlotOf_24c0f28(param_3,param_5);
  fVar8 = (float)(int)(uVar5 + 1);
  if ((int)uVar5 < 0) {
    fVar8 = 0.0;
  }
  *param_6 = fVar8;
  SandFlowRenderer__CreateReformJob_24c0754(auStack_210,param_3,param_4,param_5);
  func_0x04608620(auStack_e0,auStack_210,0x41);
  uStack_100 = uStack_16c;
  uStack_218 = uStack_1ce;
  fVar8 = _UNK_013aa688;
  if (_UNK_013aa688 <= *(float *)(param_5 + 0x1c)) {
    fVar8 = *(float *)(param_5 + 0x1c);
  }
  uStack_228 = uStack_1a4;
  uStack_214 = uStack_1ca;
  fVar8 = (param_1 - *(float *)(param_5 + 0xc)) / fVar8;
  uStack_220 = uStack_19c;
  fVar11 = 1.0;
  if (fVar8 <= 1.0) {
    fVar11 = fVar8;
  }
  uStack_118 = uStack_184;
  uStack_120 = uStack_18c;
  uStack_108 = uStack_174;
  uStack_110 = uStack_17c;
  uStack_ec = uStack_158;
  fVar13 = _UNK_013aa94c;
  if (_UNK_013aa94c <= fVar8) {
    fVar13 = fVar11;
  }
  SandFlowRenderer__SampleFrame_24bfc7c(param_2,param_3,&uStack_130,&uStack_140,&uStack_150);
  uStack_294 = *(undefined4 *)(param_3 + 0x108);
  fVar8 = (*(float *)(param_5 + 0x20) - (float)uStack_130) * (float)uStack_140;
  fVar11 = (*(float *)(param_5 + 0x24) - uStack_130._4_4_) * uStack_140._4_4_;
  fVar12 = (*(float *)(param_5 + 0x28) - fStack_128) * fStack_138;
  fStack_280 = 0.0;
  if (0.0 <= *(float *)(param_3 + 0x104)) {
    fStack_280 = *(float *)(param_3 + 0x104);
  }
  uVar9 = CONCAT44(*(undefined4 *)(param_3 + 0x10c),uStack_1b8);
  uVar10 = *(undefined8 *)(param_3 + 0x110);
  uVar14 = 0;
  func_0x04608620(auStack_2e8,auStack_e0,0x41);
  uStack_2a7 = 1;
  uStack_2a2 = uStack_214;
  uStack_2a6 = uStack_218;
  uStack_298 = 0x3f333333;
  uStack_27c = uStack_228;
  uStack_25c = uStack_118;
  uStack_264 = uStack_120;
  uStack_24c = uStack_108;
  uStack_254 = uStack_110;
  uStack_274 = uStack_220;
  uStack_26c = uStack_194;
  uStack_244 = uStack_100;
  uStack_230 = uStack_ec;
  fStack_2a0 = fVar12 + fVar8 + fVar11 + param_2;
  fStack_29c = param_2;
  uStack_290 = uVar9;
  uStack_288 = uVar10;
  fStack_270 = fVar13;
  fStack_268 = fVar13;
  Unity_Jobs_IJobExtensions__Run___Il2CppFullySharedGenericStructType__2643b3c
            (auStack_2e8,*(undefined8 *)puVar4);
  if (**(float **)(param_3 + 0x248) < 0.5) {
LAB_025c0ebc:
    fVar8 = *(float *)(param_5 + 4);
  }
  else {
    auStack_210[0] = 0;
    uVar6 = System_Array__IndexOf___Il2CppFullySharedGenericType__25a850c
                      (*(undefined8 *)(param_3 + 0x278),auStack_210,*(undefined8 *)PTR_DAT_049c6f00)
    ;
    uVar1 = uVar5;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
    if ((int)uVar1 < 0) goto LAB_025c0ebc;
    if (uVar1 == uVar5) {
      *param_6 = 0.0;
    }
    SandFlowRenderer__CompleteDeposit_24bef9c(param_3,1);
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Copy_28f51ec
              (*(undefined8 *)(param_3 + 0x268),*(undefined8 *)(param_3 + 0x270),0,
               *(undefined8 *)(param_3 + 0x290),*(undefined8 *)(param_3 + 0x298),
               *(int *)(param_3 + 0x2a8) * uVar1,*(int *)(param_3 + 0x2a8),
               *(undefined8 *)PTR_DAT_049c6ec8,uVar10,uVar14,uVar9,uStack_1b0);
    lVar7 = *(long *)(param_3 + 0x278);
    if (lVar7 == 0) {
LAB_025c0efc:
      if (*(long *)(lVar3 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_025c0f24;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar1) {
LAB_025c0f10:
      if (*(long *)(lVar3 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      goto LAB_025c0f24;
    }
    iVar2 = -0x80000000;
    if (*(float *)(param_5 + 0x80) != INFINITY) {
      iVar2 = (int)*(float *)(param_5 + 0x80);
    }
    *(int *)(lVar7 + (ulong)uVar1 * 4 + 0x20) = iVar2;
    lVar7 = *(long *)(param_3 + 0x280);
    if (lVar7 == 0) goto LAB_025c0efc;
    if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_025c0f10;
    fVar8 = (float)(int)(uVar1 + 1);
    *(undefined1 *)(lVar7 + (ulong)uVar1 + 0x20) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == lStack_98) {
                    /* try { // try from 025c0ef8 to 026c0fa7 has its CatchHandler @ 025c0ef8
                       catch() { ... } // from try @ 025c0ef8 with catch @ 025c0ef8
                       catch() { ... } // from try @ 025c0fc4 with catch @ 025c0ef8
                       catch() { ... } // from try @ 025c10f8 with catch @ 025c0ef8 */
    return fVar8;
  }
LAB_025c0f24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

