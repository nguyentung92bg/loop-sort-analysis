/* IL2CPP: AreasMonitor.<PlayProgress>d__66$$MoveNext
void AreasMonitor__PlayProgress_d__66__MoveNext (AreasMonitor__PlayProgress_d__66_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253930c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: AreasMonitor.<PlayProgress>d__66$$MoveNext
   void AreasMonitor__PlayProgress_d__66__MoveNext (AreasMonitor__PlayProgress_d__66_o __this, const
   MethodInfo* method); */

void AreasMonitor__PlayProgress_d__66__MoveNext_2438680(uint *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_a8;
  uint *puStack_a0;
  long *plStack_98;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  uint uStack_54;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b80c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c3c48);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049b62e0);
    FUN_021f03f8(PTR_DAT_049c3c50);
    FUN_021f03f8(PTR_DAT_049c3c58);
    FUN_021f03f8(PTR_DAT_049c3c60);
    FUN_021f03f8(PTR_DAT_049c3c68);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b80c = 1;
  }
  uStack_54 = *param_1;
  lStack_60 = *(long *)(param_1 + 6);
  auStack_70._8_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_80._0_8_ = 0;
  uStack_88 = 0;
  if (3 < uStack_54) {
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3c68);
    System_Object___ctor_3142338(uVar6,0);
    puVar13 = param_1 + 0xc;
    *(undefined8 *)puVar13 = uVar6;
    thunk_FUN_021f190c(puVar13,uVar6);
    if (*(long *)puVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(*(long *)puVar13 + 0x10) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_021f190c();
    lVar9 = lStack_60;
    if (*(long *)puVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(uint *)(*(long *)puVar13 + 0x18) = param_1[8];
    uStack_a8 = 0;
    auStack_50._0_4_ = (float)(int)param_1[9];
    System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
              (&uStack_a8,auStack_50,*(undefined8 *)PTR_DAT_049b62e0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lVar9 + 0x118) = uStack_a8;
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UniTimer__Expire_3f0f24c(lStack_60 + 0x130,0);
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar5 = AreasMonitor__GetLastLevel_2437abc();
    if ((int)param_1[9] < iVar5) {
      if (*(long *)puVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar1 = *(int *)(*(long *)puVar13 + 0x18);
      *(bool *)(param_1 + 0xe) = iVar5 <= iVar1;
      if (iVar5 <= iVar1) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(undefined4 *)(lStack_60 + 0x120) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  lVar9 = lStack_60;
  puVar4 = PTR_DAT_049c20a8;
  puVar3 = PTR_DAT_049c2058;
  puVar2 = PTR_DAT_049b5138;
  puStack_a0 = &uStack_54;
  uStack_a8 = 0;
  plStack_98 = &lStack_60;
  if (1 < (int)uStack_54) {
    if (uStack_54 == 2) {
      auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      uStack_54 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_02538ec4;
    }
    if (uStack_54 != 3) goto LAB_025388c4;
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uStack_54 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_025390b0;
  }
  if (uStack_54 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uStack_54 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_02538a38;
  }
  if (uStack_54 == 1) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uStack_54 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_02538c74:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar6 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_70._0_8_;
      uVar15 = auStack_70._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_02538cf4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02538cf4:
                    /* try { // try from 02538d00 to 02638d27 has its CatchHandler @ 02538ea0 */
      (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
    }
    if ((char)param_1[0xe] != '\0') {
      auVar20 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa658,0);
      auStack_80 = auVar20;
      auVar20 = FUN_024f4e50(auStack_80,3,*(undefined8 *)PTR_DAT_049c1358);
      uVar16 = *(undefined8 *)(param_1 + 0xc);
      auStack_80 = auVar20;
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                    /* try { // try from 02538d64 to 02638d8f has its CatchHandler @ 02538e9c */
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,uVar16,*(undefined8 *)PTR_DAT_049c3c58,0);
      auVar20 = FUN_024f6d0c(auStack_80,uVar6,*(undefined8 *)puVar4);
      auVar20 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                          (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0)
      ;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_50 = auVar20;
      thunk_FUN_021f190c(auStack_50,0);
                    /* try { // try from 02538dc4 to 02638dd3 has its CatchHandler @ 02538e8c */
      auStack_70 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02538dd4 to 02638e6f has its CatchHandler @ 02538c04 */
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
      uVar6 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar9 = *(long *)auStack_70._0_8_;
        uVar15 = auStack_70._8_8_ & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02538eb0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02538eb0:
                    /* try { // try from 02538ebc to 02638ebf has its CatchHandler @ 02538ec8 */
        iVar5 = (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
        if (iVar5 == 0) {
          uStack_54 = 2;
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x10) = auStack_70;
          thunk_FUN_021f190c(param_1 + 0x10,0);
          FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c3c48);
          goto LAB_02539204;
        }
      }
LAB_02538ec4:
                    /* catch() { ... } // from try @ 02538ebc with catch @ 02538ec8 */
      if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02538ecc to 02638ed3 has its CatchHandler @ 02538edc */
                    /* try { // try from 02538ed4 to 02638edf has its CatchHandler @ 02538c04 */
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02538ecc with catch @ 02538edc
                        */
        cRam0000000004f49bf6 = '\x01';
      }
      uVar6 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar9 = *(long *)auStack_70._0_8_;
        uVar15 = auStack_70._8_8_ & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_02538f44;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02538f44:
        (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
      }
    }
    auVar20 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,_UNK_013aa3e4,0);
    uVar16 = *(undefined8 *)(param_1 + 0xc);
    auStack_80 = auVar20;
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar6,uVar16,*(undefined8 *)PTR_DAT_049c3c60,0);
    auVar20 = FUN_024f6d0c(auStack_80,uVar6,*(undefined8 *)puVar4);
    auVar20 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                        (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = auVar20;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar6 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_70._0_8_;
      uVar15 = auStack_70._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0253909c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0253909c:
      iVar5 = (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
      if (iVar5 == 0) {
        uStack_54 = 3;
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0x10) = auStack_70;
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c3c48);
        goto LAB_02539204;
      }
    }
LAB_025390b0:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar6 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_70._0_8_;
      uVar15 = auStack_70._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_02539170;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02539170:
      (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
    }
    uVar14 = 0x10;
  }
  else {
LAB_025388c4:
    if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_60 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(*(long *)(lStack_60 + 0x98) + 0x50);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = AreaSheet__GetArea_25579c0(lVar7,param_1[9],0);
    AreasMonitor__FocusLevel_24349b0(lVar9,uVar6);
    uVar6 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(400,0,8,uVar6,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
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
    uVar6 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ == (long *)0x0) {
LAB_02538a38:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar6 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar9 = *(long *)auStack_70._0_8_;
        uVar15 = auStack_70._8_8_ & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_02538ab8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02538ab8:
        (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
      }
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar5 = *(int *)(*(long *)(param_1 + 0xc) + 0x18);
      fVar17 = (float)(int)(iVar5 - param_1[9]) / 30.0;
      fVar18 = 2.5;
      if (fVar17 <= 2.5) {
        fVar18 = fVar17;
      }
      fVar19 = _UNK_013aa530;
      if (_UNK_013aa530 <= fVar17) {
        fVar19 = fVar18;
      }
      auStack_80 = LitMotion_LMotion__Create_2ea9f9c((float)(int)param_1[9],(float)iVar5,fVar19,0);
      auVar20 = FUN_024f4e50(auStack_80,3,*(undefined8 *)PTR_DAT_049c1358);
      uVar16 = *(undefined8 *)(param_1 + 0xc);
      auStack_80 = auVar20;
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar6,uVar16,*(undefined8 *)PTR_DAT_049c3c50,0);
      auVar20 = FUN_024f6d0c(auStack_80,uVar6,*(undefined8 *)puVar4);
      auVar20 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                          (auVar20._0_8_,auVar20._8_8_ & 0xffffffff,*(undefined8 *)(param_1 + 10),0)
      ;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_50 = auVar20;
      thunk_FUN_021f190c(auStack_50,0);
      auStack_70 = auStack_50;
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
      uVar6 = auStack_70._0_8_;
                    /* try { // try from 02538c04 to 02638cff has its CatchHandler @ 02538c04
                       catch() { ... } // from try @ 02538c04 with catch @ 02538c04
                       catch() { ... } // from try @ 02538dd4 with catch @ 02538c04
                       catch() { ... } // from try @ 02538e80 with catch @ 02538c04
                       catch() { ... } // from try @ 02538ed4 with catch @ 02538c04 */
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar9 = *(long *)auStack_70._0_8_;
        uVar15 = auStack_70._8_8_ & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02538c60;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02538c60:
        iVar5 = (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
        if (iVar5 == 0) {
          uStack_54 = 1;
                    /* try { // try from 02538e70 to 02638e77 has its CatchHandler @ 02538e98 */
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x10) = auStack_70;
                    /* try { // try from 02538e78 to 02638e7b has its CatchHandler @ 02538e94 */
                    /* try { // try from 02538e7c to 02638e7f has its CatchHandler @ 02538e90 */
                    /* try { // try from 02538e80 to 02638ebb has its CatchHandler @ 02538c04 */
          thunk_FUN_021f190c(param_1 + 0x10,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538dc4 with catch @ 02538e8c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538e7c with catch @ 02538e90
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538e78 with catch @ 02538e94
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538e70 with catch @ 02538e98
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538d64 with catch @ 02538e9c
                        */
          FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c3c48);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02538d00 with catch @ 02538ea0
                        */
          goto LAB_02539204;
        }
      }
      goto LAB_02538c74;
    }
    lVar9 = *(long *)auStack_70._0_8_;
    uVar15 = auStack_70._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02538a24;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02538a24:
    iVar5 = (*(code *)*puVar8)(uVar6,uVar15,puVar8[1]);
    if (iVar5 != 0) goto LAB_02538a38;
    uStack_54 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = auStack_70;
    thunk_FUN_021f190c(param_1 + 0x10,0);
    FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c3c48);
LAB_02539204:
    uVar14 = 0xb;
  }
  if (-1 < (int)uStack_54) {
LAB_02539240:
    if ((uVar14 | 0x10) == 0x10) {
      *param_1 = 0xfffffffe;
      puVar13 = param_1 + 0xc;
      puVar13[0] = 0;
      puVar13[1] = 0;
      thunk_FUN_021f190c(puVar13,0);
      if (cRam0000000004f49bfa == '\0') {
        FUN_021f03f8(PTR_DAT_049b56d0);
        cRam0000000004f49bfa = '\x01';
      }
      plVar12 = *(long **)(param_1 + 2);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b56d0) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_025392e8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b56d0,2);
LAB_025392e8:
        (*(code *)*puVar8)(plVar12,puVar8[1]);
      }
    }
    return;
  }
  if (*plStack_98 != 0) {
    *(undefined8 *)(*plStack_98 + 0x118) = 0;
    lVar9 = *plStack_98;
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x120) = 0x3f800000;
      AreasMonitor__RenderElements_2434c48(lVar9,0);
      goto LAB_02539240;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

