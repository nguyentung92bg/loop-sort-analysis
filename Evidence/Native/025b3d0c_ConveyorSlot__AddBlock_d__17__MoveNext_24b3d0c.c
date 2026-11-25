/* IL2CPP: ConveyorSlot.<AddBlock>d__17$$MoveNext
void ConveyorSlot__AddBlock_d__17__MoveNext (ConveyorSlot__AddBlock_d__17_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot.<AddBlock>d__17$$MoveNext
   void ConveyorSlot__AddBlock_d__17__MoveNext (ConveyorSlot__AddBlock_d__17_o __this, const
   MethodInfo* method); */

void ConveyorSlot__AddBlock_d__17__MoveNext_24b3d0c(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
                    /* try { // try from 025b3d18 to 026b3d1f has its CatchHandler @ 025b42e4 */
                    /* try { // try from 025b3d20 to 026b3d23 has its CatchHandler @ 025b3efc */
                    /* try { // try from 025b3d24 to 026b3e47 has its CatchHandler @ 025b3784 */
  if ((bRam0000000004f4bb7f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6c00);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c6c08);
    FUN_021f03f8(PTR_DAT_049c6c10);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c6c18);
    FUN_021f03f8(PTR_DAT_049c2960);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bb7f = 1;
  }
  puVar2 = PTR_DAT_049b5138;
  auStack_e0._0_8_ = 0;
  auStack_e0._8_8_ = 0;
  uStack_e8 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  iVar17 = *param_1;
  lVar12 = *(long *)(param_1 + 8);
  uStack_f8 = 0;
  lStack_f0 = 0;
  lStack_100 = 0;
  uStack_108 = 0;
  if (iVar17 == 0) {
    auStack_e0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_025b4164:
                    /* try { // try from 025b4168 to 026b416b has its CatchHandler @ 025b42a0 */
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 025b416c to 026b4187 has its CatchHandler @ 025b429c */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar6 = auStack_e0._0_8_;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_e0._0_8_;
                    /* try { // try from 025b4190 to 026b41a3 has its CatchHandler @ 025b4294 */
      uVar15 = auStack_e0._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
                    /* try { // try from 025b41a4 to 026b41ab has its CatchHandler @ 025b4290 */
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
                    /* try { // try from 025b41ac to 026b41bf has its CatchHandler @ 025b4288 */
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_025b41e4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 025b41c8 to 026b41cb has its CatchHandler @ 025b4284 */
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* try { // try from 025b41d0 to 026b41eb has its CatchHandler @ 025b4298 */
LAB_025b41e4:
                    /* try { // try from 025b41f0 to 026b4207 has its CatchHandler @ 025b4280 */
      (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
    }
    fVar18 = (float)param_1[0xb];
                    /* try { // try from 025b4208 to 026b420b has its CatchHandler @ 025b427c */
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                    /* try { // try from 025b420c to 026b422f has its CatchHandler @ 025b4278 */
      FUN_021f0574();
    }
    uVar6 = System_TimeSpan__FromSeconds_311711c((double)fVar18,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar14 = *(undefined8 *)(lVar12 + 0x98);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 025b4234 to 026b4277 has its CatchHandler @ 025b428c */
      FUN_021f0574();
    }
    auVar26 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar6,0,4,uVar14,0,0);
    auStack_150 = auVar26;
    thunk_FUN_021f190c(auStack_150,0);
    auStack_e0 = auStack_150;
    if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 025b420c with catch @ 025b4278 */
                    /* catch() { ... } // from try @ 025b4208 with catch @ 025b427c */
                    /* catch() { ... } // from try @ 025b41f0 with catch @ 025b4280 */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 025b41c8 with catch @ 025b4284 */
                    /* catch() { ... } // from try @ 025b41ac with catch @ 025b4288 */
      cRam0000000004f49bf4 = '\x01';
    }
                    /* catch() { ... } // from try @ 025b4234 with catch @ 025b428c */
                    /* catch() { ... } // from try @ 025b41a4 with catch @ 025b4290 */
                    /* catch() { ... } // from try @ 025b4190 with catch @ 025b4294 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025b41d0 with catch @ 025b4298 */
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 025b416c with catch @ 025b429c */
                    /* catch() { ... } // from try @ 025b4168 with catch @ 025b42a0 */
                    /* catch() { ... } // from try @ 025b4158 with catch @ 025b42a4 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* catch() { ... } // from try @ 025b40d8 with catch @ 025b42a8 */
                    /* catch() { ... } // from try @ 025b4138 with catch @ 025b42ac */
                    /* catch() { ... } // from try @ 025b4118 with catch @ 025b42b0 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 025b40b8 with catch @ 025b42b4 */
                    /* catch() { ... } // from try @ 025b40b0 with catch @ 025b42b8 */
      cRam0000000004f49bf5 = '\x01';
    }
                    /* catch() { ... } // from try @ 025b4078 with catch @ 025b42bc
                       catch() { ... } // from try @ 025b40dc with catch @ 025b42bc
                       catch() { ... } // from try @ 025b4108 with catch @ 025b42bc */
    uVar6 = auStack_e0._0_8_;
    if ((long *)auStack_e0._0_8_ != (long *)0x0) {
                    /* try { // try from 025b42c4 to 026b42d7 has its CatchHandler @ 025b42e0 */
      lVar8 = *(long *)auStack_e0._0_8_;
                    /* catch() { ... } // from try @ 025b405c with catch @ 025b42cc */
      uVar15 = auStack_e0._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 025b42d8 to 026b42ef has its CatchHandler @ 025b3784 */
      if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 025b3fa8 with catch @ 025b42e0
                       catch() { ... } // from try @ 025b42c4 with catch @ 025b42e0 */
                    /* catch() { ... } // from try @ 025b3970 with catch @ 025b42e4
                       catch() { ... } // from try @ 025b3b3c with catch @ 025b42e4
                       catch() { ... } // from try @ 025b3c08 with catch @ 025b42e4
                       catch() { ... } // from try @ 025b3d18 with catch @ 025b42e4
                       catch() { ... } // from try @ 025b3e48 with catch @ 025b42e4 */
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_025b431c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b431c:
      iVar17 = (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
      if (iVar17 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x16) = auStack_e0;
        thunk_FUN_021f190c(param_1 + 0x16,0);
        FUN_0235c25c(param_1 + 2,auStack_e0,param_1,*(undefined8 *)PTR_DAT_049c6c00);
        return;
      }
    }
  }
  else {
    if (iVar17 != 1) {
      if (iVar17 == 2) {
        auStack_e0 = *(undefined1 (*) [16])(param_1 + 0x16);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        *param_1 = -1;
        goto LAB_025b461c;
      }
                    /* try { // try from 025b3e48 to 026b3e4b has its CatchHandler @ 025b42e4 */
                    /* try { // try from 025b3e4c to 026b3e6b has its CatchHandler @ 025b3784 */
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Block__SetContainer_23dc64c(*(long *)(param_1 + 6),lVar12,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar12 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025b3e6c to 026b3e6f has its CatchHandler @ 025b4008 */
                    /* try { // try from 025b3e70 to 026b3e87 has its CatchHandler @ 025b3fe4 */
      FUN_02333498(*(long *)(lVar12 + 0xf8),*(undefined8 *)(param_1 + 6),
                   *(undefined8 *)PTR_DAT_049c1c80);
      uVar1 = param_1[10];
                    /* try { // try from 025b3e88 to 026b3ea7 has its CatchHandler @ 025b3f1c */
      if (cRam0000000004f4a632 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
      }
      puVar3 = PTR_DAT_049bbf90;
      lVar8 = *(long *)(lVar12 + 0xa0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025b3ea8 to 026b3eef has its CatchHandler @ 025b3ff8 */
      lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar18 = -*(float *)(lVar8 + 0x58);
      if ((uVar1 & 1) != 0) {
        fVar18 = *(float *)(lVar8 + 0x58);
      }
      fVar20 = *(float *)(lVar9 + 0x40);
      fVar19 = *(float *)(lVar9 + 0x44);
      fVar21 = *(float *)(lVar9 + 0x3c);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        lVar8 = *(long *)(lVar12 + 0xa0);
                    /* try { // try from 025b3ef0 to 026b3ef3 has its CatchHandler @ 025b3fd8 */
        cRam0000000004f4a55e = '\x01';
                    /* try { // try from 025b3ef4 to 026b3ef7 has its CatchHandler @ 025b3ff0 */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      puVar4 = PTR_DAT_049c1410;
                    /* try { // try from 025b3ef8 to 026b3efb has its CatchHandler @ 025b3f0c */
                    /* catch() { ... } // from try @ 025b3d20 with catch @ 025b3efc
                       try { // try from 025b3efc to 026b3f4b has its CatchHandler @ 025b3784 */
                    /* catch() { ... } // from try @ 025b3aa0 with catch @ 025b3f00 */
                    /* catch() { ... } // from try @ 025b3ca8 with catch @ 025b3f04 */
      fVar24 = *(float *)(lVar8 + 0x58);
                    /* catch() { ... } // from try @ 025b3c60 with catch @ 025b3f08 */
      lVar9 = *(long *)(lVar12 + 0xf0);
                    /* catch() { ... } // from try @ 025b3ef8 with catch @ 025b3f0c */
      lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                    /* catch() { ... } // from try @ 025b3aec with catch @ 025b3f10 */
      lVar16 = *(long *)(param_1 + 6);
                    /* catch() { ... } // from try @ 025b3cf8 with catch @ 025b3f14 */
                    /* catch() { ... } // from try @ 025b3be4 with catch @ 025b3f18 */
      fVar23 = *(float *)(lVar8 + 0x1c);
      fVar22 = *(float *)(lVar8 + 0x20);
                    /* catch() { ... } // from try @ 025b3e88 with catch @ 025b3f1c */
      fVar25 = *(float *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 025b3ad4 with catch @ 025b3f20 */
                    /* catch() { ... } // from try @ 025b3ac8 with catch @ 025b3f24 */
      if (*(int *)(*(long *)PTR_DAT_049c1410 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = FUN_024f5708(lVar9,*(undefined8 *)(lVar16 + 0x60),*(undefined8 *)PTR_DAT_049c2960);
                    /* try { // try from 025b3f4c to 026b3f4f has its CatchHandler @ 025b3fa0 */
      if ((uVar10 & 1) == 0) {
        lVar8 = *(long *)(lVar12 + 0xf0);
        lVar9 = *(long *)(param_1 + 6);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025b3f6c to 026b3f6f has its CatchHandler @ 025b3f9c */
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 025b3f70 to 026b3f87 has its CatchHandler @ 025b3784 */
        FUN_024f5bd0(lVar8,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)PTR_DAT_049c6c18);
      }
                    /* try { // try from 025b3f88 to 026b3f97 has its CatchHandler @ 025b3fa0 */
      lVar8 = UnityEngine_Component__get_transform_3c18724(lVar12,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch() { ... } // from try @ 025b3f6c with catch @ 025b3f9c */
                    /* catch() { ... } // from try @ 025b3f4c with catch @ 025b3fa0
                       catch() { ... } // from try @ 025b3f88 with catch @ 025b3fa0 */
      UnityEngine_Transform__get_localToWorldMatrix_3c2cf18(auStack_150,lVar8,0);
                    /* try { // try from 025b3fa8 to 026b3fab has its CatchHandler @ 025b42e0 */
                    /* try { // try from 025b3fac to 026b405b has its CatchHandler @ 025b3784 */
                    /* catch() { ... } // from try @ 025b3a44 with catch @ 025b3fb0 */
                    /* catch() { ... } // from try @ 025b3a10 with catch @ 025b3fb4 */
                    /* catch() { ... } // from try @ 025b39bc with catch @ 025b3fb8 */
      fVar18 = fVar18 * 0.5;
                    /* catch() { ... } // from try @ 025b39a4 with catch @ 025b3fbc */
                    /* catch() { ... } // from try @ 025b3cd4 with catch @ 025b3fc0 */
                    /* catch() { ... } // from try @ 025b3c78 with catch @ 025b3fc4 */
      uStack_c8 = auStack_150._8_8_;
      plStack_d0 = (long *)auStack_150._0_8_;
      uStack_b8 = uStack_138;
      uStack_c0 = uStack_140;
                    /* catch() { ... } // from try @ 025b3b24 with catch @ 025b3fc8 */
                    /* catch() { ... } // from try @ 025b3a60 with catch @ 025b3fcc */
                    /* catch() { ... } // from try @ 025b3ce0 with catch @ 025b3fd0 */
                    /* catch() { ... } // from try @ 025b3c34 with catch @ 025b3fd4 */
                    /* catch() { ... } // from try @ 025b3ef0 with catch @ 025b3fd8 */
      fVar20 = fVar20 * fVar18 + fVar23 * fVar24 * 0.5;
      fVar19 = fVar19 * fVar18 + fVar22 * fVar24 * 0.5;
                    /* catch() { ... } // from try @ 025b3e70 with catch @ 025b3fe4 */
                    /* catch() { ... } // from try @ 025b3a1c with catch @ 025b3fe8 */
      uStack_a8 = uStack_128;
      uStack_b0 = uStack_130;
      uStack_98 = uStack_118;
      uStack_a0 = uStack_120;
                    /* catch() { ... } // from try @ 025b3998 with catch @ 025b3fec */
                    /* catch() { ... } // from try @ 025b39d4 with catch @ 025b3ff0
                       catch() { ... } // from try @ 025b3ef4 with catch @ 025b3ff0 */
                    /* catch() { ... } // from try @ 025b3be8 with catch @ 025b3ff4 */
      iVar17 = UnityEngine_Matrix4x4__MultiplyPoint3x4_3c07a0c
                         (fVar21 * fVar18 + fVar25 * fVar24 * 0.5,&plStack_d0,0);
                    /* catch() { ... } // from try @ 025b3ea8 with catch @ 025b3ff8 */
                    /* catch() { ... } // from try @ 025b3bcc with catch @ 025b3ffc */
      param_1[0xd] = iVar17;
      param_1[0xe] = (int)fVar20;
      cVar5 = cRam0000000004f4a191;
      param_1[0xf] = (int)fVar19;
                    /* catch() { ... } // from try @ 025b3e6c with catch @ 025b4008 */
      if (cVar5 == '\0') {
                    /* catch() { ... } // from try @ 025b3ba4 with catch @ 025b400c */
        FUN_021f03f8(PTR_DAT_049bc158);
                    /* catch() { ... } // from try @ 025b393c with catch @ 025b401c */
        cRam0000000004f4a191 = '\x01';
      }
                    /* catch() { ... } // from try @ 025b3b70 with catch @ 025b402c */
      uVar6 = **(undefined8 **)(*(long *)PTR_DAT_049bc158 + 0xb8);
      *(undefined8 *)(param_1 + 0x12) = (*(undefined8 **)(*(long *)PTR_DAT_049bc158 + 0xb8))[1];
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(int *)(lVar12 + 0xe8) = *(int *)(lVar12 + 0xe8) + 1;
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 6),0);
                    /* try { // try from 025b405c to 026b405f has its CatchHandler @ 025b42cc */
      *(undefined8 *)(param_1 + 0x14) = uVar6;
                    /* try { // try from 025b4060 to 026b4077 has its CatchHandler @ 025b3784 */
      thunk_FUN_021f190c();
      uVar6 = *(undefined8 *)(lVar12 + 0x98);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 025b4078 to 026b408f has its CatchHandler @ 025b42bc */
      auStack_150 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar6,0,0);
      thunk_FUN_021f190c(auStack_150,0);
      auStack_e0 = auStack_150;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025b40b0 to 026b40b3 has its CatchHandler @ 025b42b8 */
        FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025b40b8 to 026b40d3 has its CatchHandler @ 025b42b4 */
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 025b40d8 to 026b40db has its CatchHandler @ 025b42a8 */
      if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025b40dc to 026b40f3 has its CatchHandler @ 025b42bc */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar6 = auStack_e0._0_8_;
                    /* try { // try from 025b40f4 to 026b4107 has its CatchHandler @ 025b3784 */
      if ((long *)auStack_e0._0_8_ != (long *)0x0) {
        lVar8 = *(long *)auStack_e0._0_8_;
        uVar15 = auStack_e0._8_8_ & 0xffff;
                    /* try { // try from 025b4108 to 026b4117 has its CatchHandler @ 025b42bc */
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
                    /* try { // try from 025b4118 to 026b4133 has its CatchHandler @ 025b42b0 */
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_025b4150;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
                    /* try { // try from 025b4138 to 026b414f has its CatchHandler @ 025b42ac */
        puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b4150:
                    /* try { // try from 025b4158 to 026b415f has its CatchHandler @ 025b42a4 */
        iVar17 = (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
        if (iVar17 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x16) = auStack_e0;
          thunk_FUN_021f190c(param_1 + 0x16,0);
          FUN_0235c25c(param_1 + 2,auStack_e0,param_1,*(undefined8 *)PTR_DAT_049c6c00);
          return;
        }
      }
      goto LAB_025b4164;
    }
    auStack_e0 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_e0._0_8_;
    uVar15 = auStack_e0._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_025b43b0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b43b0:
    (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
  }
  if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__set_parent_3c2ded4(*(long *)(param_1 + 0x14),0,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar13 = *(long **)(lVar12 + 0xe0);
  uStack_e8 = 0;
  lStack_f0 = lVar12;
  thunk_FUN_021f190c(&lStack_f0,lVar12);
  uStack_e8 = *(undefined8 *)(param_1 + 6);
  thunk_FUN_021f190c(&uStack_e8);
  uVar6 = uStack_e8;
  lVar8 = lStack_f0;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c6c10) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_025b445c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049c6c10,0);
LAB_025b445c:
  (*(code *)*puVar7)(plVar13,lVar8,uVar6,puVar7[1]);
  lVar8 = *(long *)(param_1 + 0x14);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  if (*(long *)(lVar12 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar18 = *(float *)(*(long *)(lVar12 + 0xc0) + 0x34);
  lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  UnityEngine_Transform__set_localScale_3c2ddfc
            (fVar18 * *(float *)(lVar9 + 0xc),fVar18 * *(float *)(lVar9 + 0x10),
             *(float *)(lVar9 + 0x14) * fVar18,lVar8,0);
  if (*(long *)(lVar12 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Block__SetMesh_23dc584(*(long *)(param_1 + 6),*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
  if ((char)param_1[0xc] != '\0') {
    if (*(long *)(lVar12 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlaySoft_2535438(*(long *)(lVar12 + 0xb0),0);
  }
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar26 = Block__ApplyMoveToSlotMotion_23dbe84
                      (param_1[0xd],param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],
                       param_1[0x12],param_1[0x13],*(long *)(param_1 + 6),0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_150 = auVar26;
  thunk_FUN_021f190c(auStack_150,0);
  auStack_e0 = auStack_150;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar6 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_e0._0_8_;
    uVar15 = auStack_e0._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_025b4608;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b4608:
    iVar17 = (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
    if (iVar17 == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x16) = auStack_e0;
      thunk_FUN_021f190c(param_1 + 0x16,0);
      FUN_0235c25c(param_1 + 2,auStack_e0,param_1,*(undefined8 *)PTR_DAT_049c6c00);
      return;
    }
  }
LAB_025b461c:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_e0._0_8_;
  if ((long *)auStack_e0._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_e0._0_8_;
    uVar15 = auStack_e0._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_025b469c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_e0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b469c:
    (*(code *)*puVar7)(uVar6,uVar15,puVar7[1]);
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(int *)(lVar12 + 0xe8) = *(int *)(lVar12 + 0xe8) + -1;
  if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Block__CompleteContainer_23dcb18(*(long *)(param_1 + 6),0);
  plVar13 = *(long **)(lVar12 + 0xd0);
  uStack_f8 = 0;
  lStack_100 = lVar12;
  thunk_FUN_021f190c(&lStack_100,lVar12);
  uStack_f8 = *(undefined8 *)(param_1 + 6);
  thunk_FUN_021f190c(&uStack_f8);
  uVar6 = uStack_f8;
  lVar12 = lStack_100;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049c6c08) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_025b4750;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049c6c08,0);
LAB_025b4750:
  (*(code *)*puVar7)(plVar13,lVar12,uVar6,puVar7[1]);
  *param_1 = -2;
  piVar11 = param_1 + 0x14;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_021f190c(piVar11,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar12 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_025b47fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,2);
LAB_025b47fc:
    (*(code *)*puVar7)(plVar13,puVar7[1]);
  }
  return;
}

