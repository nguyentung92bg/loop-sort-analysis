/* IL2CPP: SandPileField$$Step
void SandPileField__Step (SandPileField_o* __this, float deltaTime, float settleSpeed, float travel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField$$Step
   void SandPileField__Step (SandPileField_o* __this, float deltaTime, float settleSpeed, float
   travel, const MethodInfo* method); */

void SandPileField__Step_24d43e0(float param_1,float param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1b0 [128];
  undefined1 uStack_130;
  undefined2 uStack_12f;
  undefined1 uStack_12d;
  int iStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined2 uStack_e4;
  undefined1 uStack_e2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* try { // try from 025d4400 to 026d4427 has its CatchHandler @ 025d4478 */
  if ((bRam0000000004f4bc30 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c76c0);
                    /* try { // try from 025d4428 to 026d4493 has its CatchHandler @ 025d434c */
    FUN_021f03f8(PTR_DAT_049c6ef0);
    bRam0000000004f4bc30 = 1;
  }
  if ((0.0 < param_1) && (iVar1 = *(int *)(param_4 + 0xcc), iVar1 != 0)) {
    uStack_e0 = *(undefined8 *)(param_4 + 0x30);
    uStack_d8 = *(undefined8 *)(param_4 + 0x38);
    uStack_c8 = *(undefined8 *)(param_4 + 0x90);
    uStack_d0 = *(undefined8 *)(param_4 + 0x88);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d43d4 with catch @ 025d4474
                        */
    uStack_b8 = *(undefined8 *)(param_4 + 0x50);
    uStack_c0 = *(undefined8 *)(param_4 + 0x48);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4400 with catch @ 025d4478
                        */
    uStack_b0 = *(undefined8 *)(param_4 + 0x58);
    uStack_a8 = *(undefined8 *)(param_4 + 0x60);
    uStack_98 = *(undefined8 *)(param_4 + 0x70);
    uStack_a0 = *(undefined8 *)(param_4 + 0x68);
    uStack_78 = *(undefined8 *)(param_4 + 0xb0);
    uStack_80 = *(undefined8 *)(param_4 + 0xa8);
                    /* try { // try from 025d4494 to 026d4497 has its CatchHandler @ 025d44a4 */
    uStack_88 = *(undefined8 *)(param_4 + 0x80);
    uStack_90 = *(undefined8 *)(param_4 + 0x78);
                    /* catch() { ... } // from try @ 025d4494 with catch @ 025d44a4 */
    uVar3 = *(undefined1 *)(param_4 + 200);
                    /* try { // try from 025d44a8 to 026d44af has its CatchHandler @ 025d44b8 */
    uStack_e4 = 0;
    fVar9 = 0.0;
    if (0.0 <= *(float *)(param_4 + 0x24)) {
      fVar9 = *(float *)(param_4 + 0x24);
    }
                    /* try { // try from 025d44b0 to 026d44bb has its CatchHandler @ 025d434c */
    uStack_68 = *(undefined8 *)(param_4 + 0xa0);
    uStack_70 = *(undefined8 *)(param_4 + 0x98);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d44a8 with catch @ 025d44b8
                        */
    uStack_e2 = 0;
                    /* try { // try from 025d44bc to 026d4543 has its CatchHandler @ 025d44bc
                       catch() { ... } // from try @ 025d44bc with catch @ 025d44bc
                       catch() { ... } // from try @ 025d456c with catch @ 025d44bc
                       catch() { ... } // from try @ 025d45e0 with catch @ 025d44bc */
    fVar10 = (float)NEON_fminnm(param_1,_UNK_013aa810);
    if (*(long *)(param_4 + 0x88) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_4 + 0xb8);
    }
    iVar2 = *(int *)(param_4 + 0x18);
    uVar17 = *(undefined4 *)(param_4 + 0xbc);
    fVar14 = *(float *)(param_4 + 0xd0);
    if (7 < iVar2) {
      iVar2 = 8;
    }
    uVar16 = *(undefined8 *)(param_4 + 0xc0);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar11 = _UNK_013aa810;
    if (_UNK_013aa810 <= param_2) {
      fVar11 = param_2;
    }
    fVar10 = (float)FUN_04608770(-(fVar11 * fVar10),fVar10);
                    /* try { // try from 025d4544 to 026d454f has its CatchHandler @ 025d45ac */
    fVar18 = *(float *)(param_4 + 0x14);
    fVar15 = fVar14 * _UNK_013aa8ac;
    fVar11 = *(float *)(param_4 + 0x1c);
                    /* try { // try from 025d4568 to 026d456b has its CatchHandler @ 025d45a8 */
                    /* try { // try from 025d456c to 026d45c7 has its CatchHandler @ 025d44bc */
    fVar12 = *(float *)(param_4 + 0x20);
    fStack_108 = _UNK_013aa688;
    if (_UNK_013aa688 <= *(float *)(param_4 + 0x10)) {
      fStack_108 = *(float *)(param_4 + 0x10);
    }
    fVar13 = *(float *)(param_4 + 0x28);
    auVar7._4_4_ = -(uint)(fVar11 < 0.0);
    auVar7._0_4_ = -(uint)(fVar9 < fVar15);
    auVar7._12_4_ = -(uint)(fVar13 < 0.0);
    auVar7._8_4_ = -(uint)(fVar12 < 0.0);
    fVar5 = 0.25;
    if (fVar18 <= 0.25) {
      fVar5 = fVar18;
    }
    fVar19 = _UNK_013aa688;
    if (_UNK_013aa688 <= fVar18) {
      fVar19 = fVar5;
    }
    auVar4._4_4_ = fVar11;
    auVar4._0_4_ = fVar15;
    auVar4._8_4_ = fVar12;
    auVar4._12_4_ = fVar13;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4568 with catch @ 025d45a8
                        */
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar15;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = fVar13;
    auVar8 = auVar8 ^ (auVar4 ^ ZEXT416((uint)fVar9)) & auVar7;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4544 with catch @ 025d45ac
                        */
    func_0x04608620(auStack_1b0,&uStack_e0,0x80);
                    /* try { // try from 025d45c8 to 026d45cb has its CatchHandler @ 025d45d4 */
    uStack_12f = uStack_e4;
                    /* catch() { ... } // from try @ 025d45c8 with catch @ 025d45d4 */
    uStack_12d = uStack_e2;
                    /* try { // try from 025d45d8 to 026d45df has its CatchHandler @ 025d45e8 */
                    /* try { // try from 025d45e0 to 026d45eb has its CatchHandler @ 025d44bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d45d8 with catch @ 025d45e8
                        */
    uStack_ec = 0;
    uStack_130 = uVar3;
    iStack_12c = iVar1;
    uStack_128 = uVar6;
    iStack_124 = iVar2;
    uStack_120 = CONCAT44(fVar14,uVar17);
    uStack_118 = uVar16;
    uStack_110 = param_3;
    fStack_10c = 1.0 - fVar10;
    fStack_104 = fVar19;
    fStack_100 = fVar9;
    uStack_fc = auVar8._0_8_;
    uStack_f4 = auVar8._8_8_;
    Unity_Jobs_IJobExtensions__Run___Il2CppFullySharedGenericStructType__2643b3c
              (auStack_1b0,*(undefined8 *)PTR_DAT_049c76c0);
    *(undefined1 *)(param_4 + 200) = 0;
    *(undefined4 *)(param_4 + 0xd4) = **(undefined4 **)(param_4 + 0x98);
    *(bool *)(param_4 + 0xc9) = 0.5 < (float)(*(undefined4 **)(param_4 + 0x98))[1];
  }
  return;
}

