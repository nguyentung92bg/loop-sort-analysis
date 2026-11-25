/* IL2CPP: MetalBlockSystem.<PullPieceToMagnet>d__65$$MoveNext
void MetalBlockSystem__PullPieceToMagnet_d__65__MoveNext (MetalBlockSystem__PullPieceToMagnet_d__65_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem.<PullPieceToMagnet>d__65$$MoveNext
   void MetalBlockSystem__PullPieceToMagnet_d__65__MoveNext
   (MetalBlockSystem__PullPieceToMagnet_d__65_o __this, const MethodInfo* method); */

void MetalBlockSystem__PullPieceToMagnet_d__65__MoveNext_23f1c28
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
                    /* try { // try from 024f1c40 to 025f1c47 has its CatchHandler @ 024f1e18 */
                    /* try { // try from 024f1c48 to 025f1c8b has its CatchHandler @ 024f1a1c */
  if ((bRam0000000004f4b643 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c20d0);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c1358);
                    /* try { // try from 024f1c8c to 025f1c8f has its CatchHandler @ 024f1cbc */
    FUN_021f03f8(PTR_DAT_049c20e0);
                    /* try { // try from 024f1c9c to 025f1ca7 has its CatchHandler @ 024f1cc0 */
    FUN_021f03f8(PTR_DAT_049c20e8);
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 024f1cb0 to 025f1cb3 has its CatchHandler @ 024f1dd0 */
    bRam0000000004f4b643 = 1;
  }
                    /* try { // try from 024f1cb4 to 025f1cbb has its CatchHandler @ 024f1e18 */
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* catch() { ... } // from try @ 024f1c8c with catch @ 024f1cbc
                       try { // try from 024f1cbc to 025f1ce3 has its CatchHandler @ 024f1a1c */
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar16 = ZEXT816(0);
                    /* catch() { ... } // from try @ 024f1c9c with catch @ 024f1cc0 */
  if (*param_4 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_4 + 0x16);
    param_4[0x16] = 0;
    param_4[0x17] = 0;
    param_4[0x18] = 0;
    param_4[0x19] = 0;
    *param_4 = -1;
  }
  else {
    lVar12 = *(long *)(param_4 + 0x10);
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c20e8);
                    /* try { // try from 024f1ce4 to 025f1ce7 has its CatchHandler @ 024f1dc0 */
    System_Object___ctor_3142338(lVar4,0);
    plVar8 = (long *)(param_4 + 0x12);
                    /* try { // try from 024f1ce8 to 025f1dab has its CatchHandler @ 024f1a1c */
    *plVar8 = lVar4;
    thunk_FUN_021f190c(plVar8,lVar4);
    if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(*plVar8 + 0x10) = *(undefined8 *)(param_4 + 6);
    thunk_FUN_021f190c();
    lVar4 = *plVar8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = *(undefined8 *)(param_4 + 8);
    *(int *)(lVar4 + 0x20) = param_4[10];
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
    lVar4 = *(long *)(param_4 + 0x12);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = *(undefined8 *)(param_4 + 0xb);
    *(int *)(lVar4 + 0x38) = param_4[0xd];
    *(undefined8 *)(lVar4 + 0x30) = uVar6;
    if (*(long *)(param_4 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0xe) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(param_4 + 0x12);
    uVar6 = UnityEngine_Component__get_transform_3c18724(lVar4,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    puVar10 = (undefined8 *)(lVar9 + 0x40);
    *puVar10 = uVar6;
    thunk_FUN_021f190c(puVar10);
    lVar4 = *plVar8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar13 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar4 + 0x40),0);
    *(undefined4 *)(lVar4 + 0x24) = uVar13;
    *(undefined4 *)(lVar4 + 0x28) = param_2;
    *(undefined4 *)(lVar4 + 0x2c) = param_3;
    lVar4 = *plVar8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024f21bc to 025f21db has its CatchHandler @ 024f2408 */
      FUN_021f06a0();
    }
    if (*(long *)(lVar4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar13 = UnityEngine_Transform__get_localScale_3c2dd20(*(long *)(lVar4 + 0x40),0);
    *(undefined4 *)(lVar4 + 0x48) = uVar13;
    *(undefined4 *)(lVar4 + 0x4c) = param_2;
                    /* try { // try from 024f1dac to 025f1dbb has its CatchHandler @ 024f1dc0 */
    *(undefined4 *)(lVar4 + 0x50) = param_3;
    lVar4 = *plVar8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar15 = *(float *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 024f1ce4 with catch @ 024f1dc0
                       catch() { ... } // from try @ 024f1dac with catch @ 024f1dc0 */
                    /* try { // try from 024f1dc4 to 025f1dc7 has its CatchHandler @ 024f1f1c */
                    /* try { // try from 024f1dc8 to 025f1def has its CatchHandler @ 024f1a1c */
                    /* catch() { ... } // from try @ 024f1b54 with catch @ 024f1dcc */
    fVar14 = (float)UnityEngine_Random__Range_3c11c54(_UNK_013aa8fc,0x3f800000,0);
                    /* catch() { ... } // from try @ 024f1cb0 with catch @ 024f1dd0 */
    *(float *)(lVar4 + 0x3c) = *(float *)(&UNK_013a8130 + (ulong)(fVar15 < 0.0) * 4) * fVar14;
                    /* try { // try from 024f1df0 to 025f1df3 has its CatchHandler @ 024f1e00 */
                    /* catch() { ... } // from try @ 024f1df0 with catch @ 024f1e00 */
    auStack_70 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa734,0);
                    /* try { // try from 024f1e08 to 025f1e0f has its CatchHandler @ 024f1f1c */
                    /* try { // try from 024f1e10 to 025f1e33 has its CatchHandler @ 024f1a1c */
                    /* catch() { ... } // from try @ 024f1b24 with catch @ 024f1e14 */
                    /* catch() { ... } // from try @ 024f1ba8 with catch @ 024f1e18
                       catch() { ... } // from try @ 024f1c40 with catch @ 024f1e18
                       catch() { ... } // from try @ 024f1cb4 with catch @ 024f1e18 */
    auVar16 = FUN_024f4e50(auStack_70,7,*(undefined8 *)PTR_DAT_049c1358);
    auStack_70 = auVar16;
                    /* try { // try from 024f1e34 to 025f1e4b has its CatchHandler @ 024f1f0c */
    UnityEngine_Random__Range_3c11c54(0,_UNK_013aa698,0);
                    /* try { // try from 024f1e4c to 025f1efb has its CatchHandler @ 024f1a1c */
    auVar16 = FUN_024f6e90(auStack_70,0,1,*(undefined8 *)PTR_DAT_049c20d8);
    lVar4 = *plVar8;
    auStack_70 = auVar16;
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar6,lVar4,*(undefined8 *)PTR_DAT_049c20e0,0);
    auVar16 = FUN_024f6d0c(auStack_70,uVar6,*(undefined8 *)PTR_DAT_049c20a8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,*(undefined8 *)(lVar12 + 0x20),
                            0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    uVar2 = auStack_50._8_8_;
    uVar6 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 024f1efc to 025f1f0b has its CatchHandler @ 024f1f0c */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 024f1e34 with catch @ 024f1f0c
                       catch() { ... } // from try @ 024f1efc with catch @ 024f1f0c */
      cRam0000000004f49bf4 = '\x01';
    }
                    /* try { // try from 024f1f10 to 025f1f13 has its CatchHandler @ 024f1f1c */
                    /* try { // try from 024f1f14 to 025f1f1f has its CatchHandler @ 024f1a1c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 024f1dc4 with catch @ 024f1f1c
                       catch() { ... } // from try @ 024f1e08 with catch @ 024f1f1c
                       catch() { ... } // from try @ 024f1f10 with catch @ 024f1f1c */
      FUN_021f0574();
    }
    auVar16 = auStack_70;
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
      auVar16 = auStack_70;
    }
    if ((long *)uVar6 != (long *)0x0) {
      lVar4 = *(long *)uVar6;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_024f1fb8;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      auStack_70 = auVar16;
      puVar10 = (undefined8 *)FUN_02229a4c(uVar6,*(long *)PTR_DAT_049b54e0,0);
      auVar16 = auStack_70;
LAB_024f1fb8:
      auStack_70 = auVar16;
      iVar3 = (*(code *)*puVar10)(uVar6,uVar2 & 0xffffffff,puVar10[1]);
      auVar16 = auStack_70;
      if (iVar3 == 0) {
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 0x16) = auStack_60;
        thunk_FUN_021f190c(param_4 + 0x16,0);
        FUN_0235c25c(param_4 + 2,auStack_60,param_4,*(undefined8 *)PTR_DAT_049c20d0);
        return;
      }
    }
  }
  auStack_70 = auVar16;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_024f2050;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024f2050:
    (*(code *)*puVar10)(uVar6,uVar11,puVar10[1]);
  }
  lVar4 = *(long *)(param_4 + 0x12);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Transform__SetParent_3c2e060
            (*(long *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x10),1,0);
  lVar4 = *(long *)(param_4 + 0x14);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  *param_4 = -2;
  param_4[0x12] = 0;
  param_4[0x13] = 0;
  thunk_FUN_021f190c(param_4 + 0x12,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar8 = *(long **)(param_4 + 2);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar10 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_024f2134;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 024f2110 to 025f21bb has its CatchHandler @ 024f2110
                       catch() { ... } // from try @ 024f2110 with catch @ 024f2110
                       catch() { ... } // from try @ 024f22d0 with catch @ 024f2110
                       catch() { ... } // from try @ 024f23c4 with catch @ 024f2110
                       catch() { ... } // from try @ 024f2438 with catch @ 024f2110
                       catch() { ... } // from try @ 024f24b8 with catch @ 024f2110 */
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_024f2134:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  return;
}

