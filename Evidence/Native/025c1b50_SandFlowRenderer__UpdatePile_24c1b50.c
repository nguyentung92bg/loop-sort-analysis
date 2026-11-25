/* IL2CPP: SandFlowRenderer$$UpdatePile
void SandFlowRenderer__UpdatePile (SandFlowRenderer_o* __this, SandFlowPacket_array* packets, int32_t count, float time, float deltaTime, float heightScale, float settleSpeed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025c1fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$UpdatePile
   void SandFlowRenderer__UpdatePile (SandFlowRenderer_o* __this, SandFlowPacket_array* packets,
   int32_t count, float time, float deltaTime, float heightScale, float settleSpeed, const
   MethodInfo* method); */

void SandFlowRenderer__UpdatePile_24c1b50
               (float param_1,undefined4 param_2,float param_3,undefined4 param_4,long param_5,
               long param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 *puVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  
  puVar7 = PTR_DAT_049c6e10;
  if ((bRam0000000004f4bbd0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6f28);
    FUN_021f03f8(PTR_DAT_049c6f30);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd0 = 1;
  }
  lVar11 = *(long *)puVar7;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar7;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0xb8);
  if (lVar11 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample_3bc0d70(lVar11,0);
  }
  SandFlowRenderer__CompleteDeposit_24bef9c(param_5,1);
  SandFlowRenderer__RefreshSplit_24c1360(param_5,param_6,param_7);
  if (*(int *)(param_5 + 0x2fc) < 2) goto LAB_025c1f68;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar10 = *(int *)(param_6 + 0x18);
  lVar12 = *(long *)(param_5 + 0xa0);
  iVar17 = iVar10;
  if (param_7 <= iVar10) {
    iVar17 = param_7;
  }
  iVar4 = iVar17;
  if (0x3ff < iVar17) {
    iVar4 = 0x400;
  }
  if ((param_7 < 0) || (iVar17 == 0)) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    SandPileField__Clear_24d3f5c(lVar12,0);
    cVar8 = cRam0000000004f49d59;
    *(undefined1 *)(param_5 + 0xb4) = 1;
    *(undefined4 *)(param_5 + 0x204) = 0xff800000;
    if (cVar8 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a38);
      cRam0000000004f49d59 = '\x01';
    }
    puVar6 = PTR_DAT_049b8a38;
    lVar12 = *(long *)puVar7;
    uVar13 = **(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8);
    lVar16 = *(long *)(param_5 + 0x2d8);
    *(undefined8 *)(param_5 + 0x130) = (*(undefined8 **)(*(long *)PTR_DAT_049b8a38 + 0xb8))[1];
    *(undefined8 *)(param_5 + 0x128) = uVar13;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
                    /* catch() { ... } // from try @ 025c1ed4 with catch @ 025c1f1c
                       catch() { ... } // from try @ 025c1f0c with catch @ 025c1f1c */
                    /* try { // try from 025c1f20 to 026c1f23 has its CatchHandler @ 025c1f2c */
                    /* try { // try from 025c1f24 to 026c1f2f has its CatchHandler @ 025c1e38 */
      uVar19 = **(undefined4 **)(*(long *)puVar7 + 0xb8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025c1f20 with catch @ 025c1f2c
                        */
      if (cRam0000000004f49d59 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a38);
        cRam0000000004f49d59 = '\x01';
      }
    }
    else {
      uVar19 = **(undefined4 **)(lVar12 + 0xb8);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar15 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
    UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
              (*puVar15,puVar15[1],puVar15[2],puVar15[3],lVar16,uVar19,0);
    goto LAB_025c1f68;
  }
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025c1fd4 with catch @ 025c1fb0
                       catch() { ... } // from try @ 025c2008 with catch @ 025c1fb0
                       catch() { ... } // from try @ 025c2040 with catch @ 025c1fb0 */
    FUN_021f06a8();
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar18 = _UNK_013aa688;
  if (_UNK_013aa688 <= *(float *)(param_6 + 0x6c)) {
    fVar18 = *(float *)(param_6 + 0x6c);
  }
  SandPileField__Configure_24d3ad4(*(undefined4 *)(param_5 + 0x318),fVar18,lVar12,0);
  if (*(char *)(param_5 + 0x1a0) != '\0') {
    SandFlowRenderer__BuildDriftProfile_24beff4(param_5);
  }
  if (*(long *)(param_5 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  SandPileField__SetDrift_24d3e58
            (*(long *)(param_5 + 0xa0),*(undefined8 *)(param_5 + 0x150),
             *(undefined4 *)(param_5 + 0x2fc),0);
  iVar17 = *(int *)(param_5 + 0x324);
  if (iVar17 < 0x21) {
    iVar17 = 0x20;
  }
  if ((((param_1 < *(float *)(param_5 + 0x204)) || (iVar17 != *(int *)(param_5 + 0x20c))) ||
      (*(float *)(param_5 + 0x208) != param_3)) ||
     (*(int *)(param_5 + 0x210) != *(int *)(param_5 + 0x200))) {
LAB_025c1dd4:
    if (*(long *)(param_5 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025c1fd0 to 026c1fd3 has its CatchHandler @ 025c1fd8 */
      FUN_021f06a0();
    }
    SandPileField__SetSliceCount_24d4114(*(long *)(param_5 + 0xa0),2,0);
    uVar13 = 0;
    *(int *)(param_5 + 0x20c) = iVar17;
    *(float *)(param_5 + 0x208) = param_3;
    *(undefined4 *)(param_5 + 0x210) = *(undefined4 *)(param_5 + 0x200);
    bVar9 = true;
    do {
      bVar14 = bVar9;
      SandFlowRenderer__DepositSlice_24c2074
                (param_1,param_3,param_5,param_6,iVar4,iVar17,uVar13,2,0);
      uVar13 = 1;
      bVar9 = false;
    } while (bVar14);
    *(float *)(param_5 + 0x214) = param_1;
                    /* try { // try from 025c1e38 to 026c1e7f has its CatchHandler @ 025c1e38
                       catch() { ... } // from try @ 025c1e38 with catch @ 025c1e38
                       catch() { ... } // from try @ 025c1e88 with catch @ 025c1e38
                       catch() { ... } // from try @ 025c1eec with catch @ 025c1e38
                       catch() { ... } // from try @ 025c1f24 with catch @ 025c1e38 */
    *(undefined4 *)(param_5 + 0x218) = 0;
  }
  else {
    if (*(long *)(param_5 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar10 = SandPileField__get_SliceCount_24d40fc(*(long *)(param_5 + 0xa0),0);
    if (iVar10 != 2) goto LAB_025c1dd4;
    if (_UNK_013aa420 <= param_1 - *(float *)(param_5 + 0x214)) {
      SandFlowRenderer__DepositSlice_24c2074
                (param_1,param_3,param_5,param_6,iVar4,iVar17,*(undefined4 *)(param_5 + 0x218),2,1);
      *(float *)(param_5 + 0x214) = param_1;
      uVar1 = *(int *)(param_5 + 0x218) + 1;
      uVar2 = uVar1 & 1;
      uVar3 = -uVar2;
      if (-1 < (int)uVar1) {
        uVar3 = uVar2;
      }
      *(uint *)(param_5 + 0x218) = uVar3;
    }
  }
  if (*(long *)(param_5 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025c1fc4 to 026c1fc7 has its CatchHandler @ 025c1fd4 */
    FUN_021f06a0();
  }
  SandPileField__Step_24d43e0
            (param_2,param_4,*(undefined4 *)(param_5 + 800),*(long *)(param_5 + 0xa0),0);
  lVar12 = *(long *)(param_5 + 0xa0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  bVar5 = *(byte *)(lVar12 + 0xc9) | *(byte *)(param_5 + 0xb4);
  *(byte *)(param_5 + 0xb4) = bVar5;
  if ((bVar5 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) {
                    /* try { // try from 025c1e80 to 026c1e83 has its CatchHandler @ 025c1eb8 */
                    /* try { // try from 025c1e84 to 026c1e87 has its CatchHandler @ 025c1ebc */
    if (*(long *)(param_5 + 0x2b8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c1fc4 with catch @ 025c1fd4
                       try { // try from 025c1fd4 to 026c1fef has its CatchHandler @ 025c1fb0 */
      FUN_021f06a0();
    }
                    /* try { // try from 025c1e88 to 026c1ed3 has its CatchHandler @ 025c1e38 */
    UnityEngine_ComputeBuffer__SetData___Il2CppFullySharedGenericStructType__25c3e6c
              (*(long *)(param_5 + 0x2b8),*(long *)(lVar12 + 0xa8),*(ulong *)(lVar12 + 0xb0),0,0x400
               ,*(ulong *)(lVar12 + 0xb0) & 0xffffffff,*(undefined8 *)PTR_DAT_049c6f28);
    lVar12 = *(long *)(param_5 + 0xa0);
    *(undefined1 *)(param_5 + 0xb4) = 0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c1fd0 with catch @ 025c1fd8
                        */
      FUN_021f06a0();
    }
  }
  iVar17 = *(int *)(lVar12 + 0xcc);
  uVar19 = *(undefined4 *)(lVar12 + 0xd0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c1e80 with catch @ 025c1eb8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025c1e84 with catch @ 025c1ebc
                        */
  *(undefined4 *)(param_5 + 300) = 0x41400000;
  lVar12 = *(long *)puVar7;
  *(undefined4 *)(param_5 + 0x134) = 0x44800000;
  lVar16 = *(long *)(param_5 + 0x2d8);
                    /* try { // try from 025c1ed4 to 026c1eeb has its CatchHandler @ 025c1f1c */
  *(undefined4 *)(param_5 + 0x130) = uVar19;
  *(float *)(param_5 + 0x128) = (float)iVar17;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025c1eec to 026c1f0b has its CatchHandler @ 025c1e38 */
                    /* try { // try from 025c1f0c to 026c1f1b has its CatchHandler @ 025c1f1c */
  UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
            (*(undefined4 *)(param_5 + 0x128),*(undefined4 *)(param_5 + 300),
             *(undefined4 *)(param_5 + 0x130),*(undefined4 *)(param_5 + 0x134),lVar16,
             **(undefined4 **)(*(long *)puVar7 + 0xb8),0);
LAB_025c1f68:
  if (lVar11 != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample_3bc0df8(lVar11,0);
  }
  return;
}

