/* IL2CPP: SandFlowRenderer$$CreateReformJob
SandFlowRenderer_ReformJob_o SandFlowRenderer__CreateReformJob (SandFlowRenderer_o* __this, int32_t index, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$CreateReformJob
   SandFlowRenderer_ReformJob_o SandFlowRenderer__CreateReformJob (SandFlowRenderer_o* __this,
   int32_t index, SandFlowPacket_o* packet, const MethodInfo* method); */

void SandFlowRenderer__CreateReformJob_24c0754
               (undefined8 *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4bbcf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ec8);
    FUN_021f03f8(PTR_DAT_049c6ed0);
    FUN_021f03f8(PTR_DAT_049c6ed8);
    FUN_021f03f8(PTR_DAT_049c6ee0);
    FUN_021f03f8(PTR_DAT_049c6ee8);
    FUN_021f03f8(PTR_DAT_049c6ef0);
    FUN_021f03f8(PTR_DAT_049c6ef8);
    bRam0000000004f4bbcf = 1;
  }
  iVar14 = *(int *)(param_2 + 0x324);
  if (iVar14 < 0x21) {
    iVar14 = 0x20;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar5 = SandFlowRenderer__GetPileLayout_24c1528(param_2,param_3,param_4,iVar14);
  puVar1 = (undefined8 *)(param_2 + 0x238);
  if (*(long *)(param_2 + 0x238) != 0) {
    if (*(int *)(param_2 + 0x240) == iVar14) goto LAB_025c0870;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Dispose_28f47cc
              (puVar1,*(undefined8 *)PTR_DAT_049c6ed8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
            (&uStack_a0,iVar14,4,0,*(undefined8 *)PTR_DAT_049c6ee8);
  *(undefined8 *)(param_2 + 0x240) = uStack_98;
  *puVar1 = uStack_a0;
LAB_025c0870:
  puVar3 = PTR_DAT_049c6ed0;
  if (*(long *)(param_2 + 0x248) == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType____ctor_28f42d0
              (&uStack_a0,3,4,1,*(undefined8 *)PTR_DAT_049c6ee0);
    *(undefined8 *)(param_2 + 0x250) = uStack_98;
    *(undefined8 *)(param_2 + 0x248) = uStack_a0;
  }
  Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Copy_28f511c
            (uVar5,*(undefined8 *)(param_2 + 0x238),*(undefined8 *)(param_2 + 0x240),iVar14,
             *(undefined8 *)puVar3);
  SandFlowRenderer__EnsureSplit_24c1140(param_2);
  if (*(float *)(param_4 + 0x2c) <= 3.0) {
    iVar4 = SandFlowRenderer__SplitSlotOf_24c0f28(param_2,param_4);
  }
  else {
    iVar4 = SandFlowRenderer__PreviousSlotOf_24c10a0();
  }
  if (-1 < iVar4) {
    Unity_Collections_NativeArray___Il2CppFullySharedGenericStructType___Copy_28f51ec
              (*(undefined8 *)(param_2 + 0x290),*(undefined8 *)(param_2 + 0x298),
               *(int *)(param_2 + 0x2a8) * iVar4,*(undefined8 *)(param_2 + 600),
               *(undefined8 *)(param_2 + 0x260),0,iVar14,*(undefined8 *)PTR_DAT_049c6ec8);
  }
  uVar21 = *(undefined8 *)(param_2 + 0x240);
  uVar5 = *puVar1;
  uVar12 = *(undefined8 *)(param_2 + 0x260);
  uVar11 = *(undefined8 *)(param_2 + 600);
  uVar9 = *(undefined8 *)(param_2 + 0x250);
  uVar8 = *(undefined8 *)(param_2 + 0x248);
  uVar17 = *(undefined8 *)(param_2 + 0x268);
  uVar20 = NEON_fmov(0x3f800000,4);
  fVar15 = *(float *)(param_2 + 0xfc);
  fVar6 = *(float *)(param_2 + 0x100);
  fVar18 = *(float *)(param_4 + 0x80);
  param_1[5] = *(undefined8 *)(param_2 + 0x270);
  param_1[4] = uVar17;
  param_1[7] = uVar9;
  param_1[6] = uVar8;
  *(byte *)(param_1 + 8) = (byte)~(byte)((uint)iVar4 >> 0x18) >> 7;
  param_1[1] = uVar21;
  *param_1 = uVar5;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  fVar7 = _UNK_013aa94c;
  fVar10 = *(float *)(param_4 + 0x6c);
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  fVar13 = 1.0;
  if (1.0 <= fVar15) {
    fVar13 = fVar15;
  }
  uVar16 = *(ulong *)(param_2 + 0xf0);
  uVar19 = *(undefined4 *)(param_2 + 800);
  *(undefined2 *)((long)param_1 + 0x41) = 0;
  fVar15 = (float)(uVar16 >> 0x20);
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(int *)((long)param_1 + 0x6c) = iVar14;
  param_1[10] = 0;
  param_1[9] = 0;
  *(float *)((long)param_1 + 0x44) = fVar13;
  iVar14 = -(uint)((float)uVar16 < 0.0);
  iVar4 = -(uint)(fVar15 < 0.0);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  uVar16 = uVar16 ^ (uVar16 ^ uVar20) &
                    CONCAT44(-(uint)((float)(uVar20 >> 0x20) < fVar15),
                             -(uint)((float)uVar20 < (float)uVar16));
  fVar15 = *(float *)(param_4 + 0x18);
  fVar13 = fVar7;
  if (fVar7 <= fVar10) {
    fVar13 = fVar10;
  }
  fVar10 = *(float *)(param_2 + 0x318);
  *(int *)(param_1 + 0xe) = (int)fVar18;
  uVar21 = *(undefined8 *)(param_4 + 0x88);
  uVar2 = *(undefined1 *)(param_2 + 0x31c);
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  *(float *)((long)param_1 + 0x8c) = fVar13;
  *(undefined4 *)(param_1 + 0x12) = uVar19;
  fVar13 = fVar7;
  if (fVar7 <= fVar15) {
    fVar13 = fVar15;
  }
  *(undefined8 *)((long)param_1 + 0x94) = uVar21;
  *(undefined1 *)(param_1 + 0x17) = uVar2;
  *(ulong *)((long)param_1 + 0x84) =
       CONCAT17((byte)(uVar16 >> 0x38) & ~(byte)((uint)iVar4 >> 0x18),
                CONCAT16((byte)(uVar16 >> 0x30) & ~(byte)((uint)iVar4 >> 0x10),
                         CONCAT15((byte)(uVar16 >> 0x28) & ~(byte)((uint)iVar4 >> 8),
                                  CONCAT14((byte)(uVar16 >> 0x20) & ~(byte)iVar4,
                                           CONCAT13((byte)(uVar16 >> 0x18) &
                                                    ~(byte)((uint)iVar14 >> 0x18),
                                                    CONCAT12((byte)(uVar16 >> 0x10) &
                                                             ~(byte)((uint)iVar14 >> 0x10),
                                                             CONCAT11((byte)(uVar16 >> 8) &
                                                                      ~(byte)((uint)iVar14 >> 8),
                                                                      (byte)uVar16 & ~(byte)iVar14))
                                                   )))));
  uVar5 = NEON_rev64(uVar5,4);
  if (fVar7 <= fVar10) {
    fVar7 = fVar10;
  }
  uVar19 = *(undefined4 *)(param_4 + 0x3c);
  *(undefined4 *)((long)param_1 + 0xb9) = 0;
  *(float *)((long)param_1 + 0xa4) = fVar13;
  *(undefined4 *)(param_1 + 0x15) = uVar19;
  fVar13 = 0.0;
  if (0.0 <= fVar6) {
    fVar13 = fVar6;
  }
  *(undefined8 *)((long)param_1 + 0x9c) = uVar5;
  uVar19 = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = uVar19;
  *(float *)(param_1 + 0x16) = fVar7;
  *(float *)((long)param_1 + 0xb4) = fVar13;
  return;
}

