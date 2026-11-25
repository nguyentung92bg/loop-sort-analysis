/* IL2CPP: BlockPhysicsSystem$$OnUpdate
void BlockPhysicsSystem__OnUpdate (BlockPhysicsSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockPhysicsSystem$$OnUpdate
   void BlockPhysicsSystem__OnUpdate (BlockPhysicsSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void BlockPhysicsSystem__OnUpdate_23e43a8
               (undefined4 param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uStack_d4;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  
                    /* try { // try from 024e43b0 to 025e43cf has its CatchHandler @ 024e50a4 */
  if ((bRam0000000004f4b5ee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c18f8);
                    /* try { // try from 024e43f8 to 025e4403 has its CatchHandler @ 024e50bc */
    FUN_021f03f8(PTR_DAT_049c1900);
    bRam0000000004f4b5ee = 1;
  }
  uStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_d4 = 0;
  SystemBase__OnUpdate_2555ef8(param_1,param_4,0);
  puVar5 = PTR_DAT_049c1900;
  lVar14 = *(long *)(param_4 + 0x60);
                    /* try { // try from 024e4428 to 025e442b has its CatchHandler @ 024e50d8 */
  if (lVar14 == 0) {
LAB_024e49d0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_b8 = (ulong)*(uint *)(lVar14 + 0x30) << 0x20;
  thunk_FUN_021f190c(&lStack_b0,0);
  lStack_a8 = *(long *)(lVar14 + 0x28);
  thunk_FUN_021f190c(&lStack_a8);
  puVar4 = PTR_DAT_049bbf90;
  puVar3 = PTR_DAT_049b8758;
  fVar2 = _UNK_013aa920;
  fVar1 = _UNK_013aa534;
                    /* try { // try from 024e446c to 025e4493 has its CatchHandler @ 024e50d4 */
  lStack_c0 = lStack_a8;
  lStack_c8 = lStack_b0;
  uStack_d0 = lStack_b8;
LAB_024e44b0:
  do {
    iVar8 = (int)uStack_d0 + -1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar8);
    if (iVar8 < 0) {
      uStack_d0._4_4_ = uStack_d0._4_4_ - 1;
      if ((int)uStack_d0._4_4_ < 0) {
                    /* try { // try from 024e49a4 to 025e49af has its CatchHandler @ 024e4e1c */
        return;
      }
      lVar14 = *(long *)(lStack_c0 + (ulong)uStack_d0._4_4_ * 8 + 0x20);
      lStack_c8 = *(long *)(lVar14 + 0x18);
      uStack_d0._0_4_ = iVar8;
      thunk_FUN_021f190c((ulong)&uStack_d0 | 8);
      iVar8 = *(int *)(lVar14 + 0x30) + -1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar8);
    }
    if (*(long *)(param_4 + 0x68) == 0) goto LAB_024e49d0;
                    /* try { // try from 024e4508 to 025e452f has its CatchHandler @ 024e5100 */
    plVar6 = (long *)FUN_024f6008(*(long *)(param_4 + 0x68),
                                  *(undefined8 *)(lStack_c8 + (long)iVar8 * 8 + 0x20),
                                  *(undefined8 *)puVar5);
    lVar14 = *plVar6;
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x140) == 0)) goto LAB_024e49d0;
    uVar7 = UnityEngine_Rigidbody__get_isKinematic_3c8a708(*(long *)(lVar14 + 0x140),0);
  } while ((uVar7 & 1) != 0);
  if (*(long *)(lVar14 + 0x140) == 0) goto LAB_024e49d0;
  fVar15 = (float)UnityEngine_Rigidbody__get_position_3c8aa08(*(long *)(lVar14 + 0x140),0);
  fVar19 = param_2;
  fVar21 = param_3;
  fVar16 = (float)BlockPhysicsSystem__GetTargetForcePosition_23e3a18(param_4,&uStack_d4);
  if (-1 < (int)uStack_d4) {
    lVar11 = *(long *)(param_4 + 0x70);
                    /* try { // try from 024e456c to 025e4593 has its CatchHandler @ 024e50fc */
    if (lVar11 == 0) goto LAB_024e49d0;
    if (*(uint *)(lVar11 + 0x18) <= uStack_d4) {
LAB_024e49d4:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar12 = *(long *)(param_4 + 0x80);
    if (lVar12 == 0) goto LAB_024e49d0;
    if (*(uint *)(lVar12 + 0x18) <= uStack_d4) goto LAB_024e49d4;
    lVar13 = *(long *)(param_4 + 0x88);
    if (lVar13 == 0) goto LAB_024e49d0;
    if (*(uint *)(lVar13 + 0x18) <= uStack_d4) goto LAB_024e49d4;
    lVar12 = lVar12 + (ulong)uStack_d4 * 0xc;
    lVar13 = lVar13 + (ulong)uStack_d4 * 0xc;
                    /* try { // try from 024e45b8 to 025e45ff has its CatchHandler @ 024e5104 */
    lVar11 = lVar11 + (ulong)uStack_d4 * 0xc;
    fVar22 = *(float *)(lVar12 + 0x20);
    fVar23 = *(float *)(lVar12 + 0x24);
    fVar24 = *(float *)(lVar12 + 0x28);
    fVar30 = *(float *)(lVar13 + 0x24);
    fVar34 = *(float *)(lVar13 + 0x28);
    fVar33 = *(float *)(lVar13 + 0x20);
    fVar17 = *(float *)(lVar11 + 0x20);
    fVar18 = *(float *)(lVar11 + 0x24);
    fVar25 = fVar15 - fVar17;
    fVar26 = param_2 - fVar18;
    fVar20 = *(float *)(lVar11 + 0x28);
    fVar35 = param_3 - fVar20;
    fVar38 = fVar23 * fVar34 - fVar24 * fVar30;
                    /* try { // try from 024e4600 to 025e4653 has its CatchHandler @ 024e41b0 */
    fVar27 = fVar24 * fVar33 - fVar22 * fVar34;
    fVar28 = fVar22 * fVar30 - fVar23 * fVar33;
    fVar32 = fVar35 * fVar34 + fVar25 * fVar33 + fVar26 * fVar30;
    fVar29 = fVar35 * fVar28 + fVar25 * fVar38 + fVar26 * fVar27;
    if ((fVar1 < fVar32) || (_UNK_013aa4f4 < ABS(fVar29))) {
      if (*(long *)(lVar14 + 0x140) == 0) goto LAB_024e49d0;
                    /* try { // try from 024e48c8 to 025e48e7 has its CatchHandler @ 024e41b0 */
      fVar19 = _UNK_013aa8fc;
      if (fVar29 <= _UNK_013aa8fc) {
        fVar19 = fVar29;
      }
      fVar21 = _UNK_013aa41c;
      if (_UNK_013aa41c <= fVar29) {
        fVar21 = fVar19;
      }
      fVar19 = _UNK_013aa8a8;
      if (fVar32 <= _UNK_013aa8a8) {
        fVar19 = fVar32;
      }
                    /* try { // try from 024e48e8 to 025e48f3 has its CatchHandler @ 024e4df4 */
      fVar15 = 0.0;
      if (0.0 <= fVar32) {
        fVar15 = fVar19;
      }
                    /* try { // try from 024e490c to 025e490f has its CatchHandler @ 024e4de0 */
      UnityEngine_Rigidbody__set_position_3c8aae4
                (fVar33 * fVar15 + fVar17 + fVar38 * fVar21,
                 fVar30 * fVar15 + fVar18 + fVar27 * fVar21,
                 fVar34 * fVar15 + fVar20 + fVar28 * fVar21,*(long *)(lVar14 + 0x140),0);
      lVar11 = *(long *)(lVar14 + 0x140);
      if (cRam0000000004f4a233 == '\0') {
                    /* try { // try from 024e4930 to 025e4933 has its CatchHandler @ 024e4dd0 */
        FUN_021f03f8(puVar4);
        cRam0000000004f4a233 = '\x01';
      }
      if (lVar11 == 0) goto LAB_024e49d0;
      puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                    /* try { // try from 024e4954 to 025e4973 has its CatchHandler @ 024e4df0 */
      UnityEngine_Rigidbody__set_linearVelocity_3c8a154(*puVar10,puVar10[1],puVar10[2],lVar11,0);
      lVar14 = *(long *)(lVar14 + 0x140);
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(puVar4);
        cRam0000000004f4a233 = '\x01';
      }
      if (lVar14 == 0) goto LAB_024e49d0;
                    /* try { // try from 024e4988 to 025e4997 has its CatchHandler @ 024e4ddc */
      puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
      param_2 = (float)puVar10[1];
      param_3 = (float)puVar10[2];
      UnityEngine_Rigidbody__set_angularVelocity_3c8a304(*puVar10,lVar14,0);
      goto LAB_024e44b0;
    }
                    /* try { // try from 024e4654 to 025e468f has its CatchHandler @ 024e5108 */
    fVar36 = _UNK_013aa8fc;
    if (fVar29 <= _UNK_013aa8fc) {
      fVar36 = fVar29;
    }
    fVar31 = _UNK_013aa41c;
    if (_UNK_013aa41c <= fVar29) {
      fVar31 = fVar36;
    }
    fVar36 = _UNK_013aa8a8;
    if (fVar32 <= _UNK_013aa8a8) {
      fVar36 = fVar32;
    }
    fVar37 = 0.0;
    if (0.0 <= fVar32) {
      fVar37 = fVar36;
    }
    if ((fVar37 != fVar32) || (fVar31 != fVar29)) {
      if (*(long *)(lVar14 + 0x140) == 0) goto LAB_024e49d0;
                    /* try { // try from 024e46b8 to 025e46ff has its CatchHandler @ 024e4e38 */
      fVar25 = fVar35 * fVar24 + fVar25 * fVar22 + fVar26 * fVar23;
                    /* try { // try from 024e4700 to 025e471b has its CatchHandler @ 024e41b0 */
      fVar20 = fVar34 * fVar37 + fVar20 + fVar24 * fVar25 + fVar28 * fVar31;
      fVar18 = fVar30 * fVar37 + fVar18 + fVar23 * fVar25 + fVar27 * fVar31;
      UnityEngine_Rigidbody__set_position_3c8aae4
                (fVar33 * fVar37 + fVar17 + fVar22 * fVar25 + fVar38 * fVar31,fVar18,fVar20,
                 *(long *)(lVar14 + 0x140),0);
      if (*(long *)(lVar14 + 0x140) == 0) goto LAB_024e49d0;
                    /* try { // try from 024e471c to 025e4723 has its CatchHandler @ 024e4e0c */
      uVar7 = UnityEngine_Rigidbody__get_linearVelocity_3c8a078(*(long *)(lVar14 + 0x140),0);
      if (fVar31 != fVar29) {
                    /* try { // try from 024e473c to 025e4787 has its CatchHandler @ 024e4e34 */
        fVar17 = fVar28 * fVar20 + fVar38 * (float)uVar7 + fVar27 * fVar18;
        uVar7 = (ulong)(uint)((float)uVar7 - fVar38 * fVar17);
        fVar18 = fVar18 - fVar27 * fVar17;
        fVar20 = fVar20 - fVar28 * fVar17;
      }
      if (fVar37 != fVar32) {
        uVar7 = (ulong)(uint)((float)uVar7 -
                             fVar33 * (fVar34 * fVar20 + fVar30 * fVar18 + fVar33 * (float)uVar7));
                    /* try { // try from 024e4788 to 025e47a7 has its CatchHandler @ 024e41b0 */
      }
      if (*(long *)(lVar14 + 0x140) == 0) goto LAB_024e49d0;
      UnityEngine_Rigidbody__set_linearVelocity_3c8a154(uVar7,*(long *)(lVar14 + 0x140),0);
    }
  }
                    /* try { // try from 024e47a8 to 025e47bf has its CatchHandler @ 024e4e30 */
  if (cRam0000000004f4a55c == '\0') {
    FUN_021f03f8(puVar3);
    cRam0000000004f4a55c = '\x01';
  }
                    /* try { // try from 024e47dc to 025e4827 has its CatchHandler @ 024e4e10 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar21 = fVar21 - param_3;
  fVar16 = fVar16 - fVar15;
  fVar19 = fVar19 - param_2;
                    /* try { // try from 024e4828 to 025e4847 has its CatchHandler @ 024e41b0 */
  fVar15 = SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar19 * fVar19);
  if (fVar15 <= fVar2) {
                    /* try { // try from 024e4848 to 025e484b has its CatchHandler @ 024e4de8 */
                    /* try { // try from 024e484c to 025e4863 has its CatchHandler @ 024e4dfc */
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(puVar4);
      cRam0000000004f4a233 = '\x01';
    }
    pfVar9 = *(float **)(*(long *)puVar4 + 0xb8);
    fVar16 = *pfVar9;
    fVar19 = pfVar9[1];
    fVar21 = pfVar9[2];
  }
  else {
    fVar16 = fVar16 / fVar15;
    fVar19 = fVar19 / fVar15;
    fVar21 = fVar21 / fVar15;
  }
                    /* try { // try from 024e487c to 025e48c7 has its CatchHandler @ 024e4df8 */
  if (((*(long *)(param_4 + 0x30) == 0) || (*(long *)(param_4 + 0x40) == 0)) ||
     (*(long *)(lVar14 + 0x140) == 0)) goto LAB_024e49d0;
  fVar15 = *(float *)(*(long *)(param_4 + 0x30) + 0x60) *
           *(float *)(*(long *)(param_4 + 0x40) + 0x140);
  param_3 = fVar21 * fVar15;
  param_2 = fVar19 * fVar15;
  UnityEngine_Rigidbody__AddForce_3c8b190(fVar16 * fVar15,*(long *)(lVar14 + 0x140),0);
  goto LAB_024e44b0;
}

