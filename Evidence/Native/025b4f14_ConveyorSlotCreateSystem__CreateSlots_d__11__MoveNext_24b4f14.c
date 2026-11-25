/* IL2CPP: ConveyorSlotCreateSystem.<CreateSlots>d__11$$MoveNext
void ConveyorSlotCreateSystem__CreateSlots_d__11__MoveNext (ConveyorSlotCreateSystem__CreateSlots_d__11_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlotCreateSystem.<CreateSlots>d__11$$MoveNext
   void ConveyorSlotCreateSystem__CreateSlots_d__11__MoveNext
   (ConveyorSlotCreateSystem__CreateSlots_d__11_o __this, const MethodInfo* method); */

void ConveyorSlotCreateSystem__CreateSlots_d__11__MoveNext_24b4f14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4bb8b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6c88);
    FUN_021f03f8(PTR_DAT_049c1b68);
    FUN_021f03f8(PTR_DAT_049c6c70);
    FUN_021f03f8(PTR_DAT_049c6c90);
    FUN_021f03f8(PTR_DAT_049c6c98);
    FUN_021f03f8(PTR_DAT_049c1940);
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025b4f90 to 026b4fb3 has its CatchHandler @ 025b505c */
    bRam0000000004f4bb8b = 1;
  }
  lVar14 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar14 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar14 + 0x40),0);
                    /* try { // try from 025b4fc0 to 026b4fe7 has its CatchHandler @ 025b5064 */
    if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar17 = (float)Conveyor__get_ActiveLength_24b03a0();
    param_1[6] = (int)fVar17;
    lVar11 = *(long *)(lVar14 + 0x30);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar8 = *(int *)(lVar11 + 0x158);
    iVar2 = *(int *)(lVar11 + 0x160);
    param_1[7] = iVar2 * iVar8;
    cVar6 = cRam0000000004f49d58;
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar18 = *(float *)(*(long *)(lVar14 + 0x38) + 0x5c);
    param_1[8] = (int)fVar18;
    if (cVar6 == '\0') {
                    /* try { // try from 025b500c to 026b5017 has its CatchHandler @ 025b5060 */
      FUN_021f03f8(PTR_DAT_049b8758);
                    /* try { // try from 025b5018 to 026b5053 has its CatchHandler @ 025b4f00 */
      cRam0000000004f49d58 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar17 = fVar17 / fVar18;
    iVar3 = *(int *)(*(long *)(lVar14 + 0x30) + 0x158);
                    /* try { // try from 025b5054 to 026b5057 has its CatchHandler @ 025b5064 */
                    /* try { // try from 025b5058 to 026b505b has its CatchHandler @ 025b5060 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b4f90 with catch @ 025b505c
                       try { // try from 025b505c to 026b507f has its CatchHandler @ 025b4f00 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b500c with catch @ 025b5060
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b5058 with catch @ 025b5060
                        */
    iVar1 = -0x80000000;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b4fc0 with catch @ 025b5064
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b5054 with catch @ 025b5064
                        */
    if ((float)(int)fVar17 != INFINITY) {
      iVar1 = (int)fVar17;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = iVar1 / iVar3;
    }
    iVar4 = iVar1 - iVar4 * iVar3;
    iVar3 = iVar3 - iVar4;
    if (iVar4 < iVar3) {
      iVar3 = -iVar4;
    }
    if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025b5080 to 026b5083 has its CatchHandler @ 025b508c */
                    /* catch() { ... } // from try @ 025b5080 with catch @ 025b508c */
    lVar11 = RemoteConfigModule__GetDataClassNew_object__26a494c
                       (*(long *)(lVar14 + 0x50),*(undefined8 *)PTR_DAT_049c1940);
                    /* try { // try from 025b5090 to 026b5097 has its CatchHandler @ 025b50a0 */
    if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025b5098 to 026b50a3 has its CatchHandler @ 025b4f00 */
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b5090 with catch @ 025b50a0
                        */
    fVar17 = *(float *)(*(long *)(lVar14 + 0x38) + 0x18);
    fVar18 = *(float *)(lVar11 + 0x10);
    FUN_0235c744(*(undefined8 *)(lVar14 + 0x58),auStack_60,*(undefined8 *)PTR_DAT_049c1b68);
    if (auStack_60._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar18 = fVar18 * (fVar17 + ((((float)(iVar3 + iVar1) / (float)iVar8) / (float)iVar2) * fVar17 -
                                fVar17) * 0.5);
    if (*(char *)(auStack_60._0_8_ + 0x2c0) != '\0') {
      fVar17 = (float)SandFlowSystem__get_ConveyorSpeedScale_24ce5fc(auStack_60._0_8_,0);
      fVar18 = fVar18 * fVar17;
    }
    lVar11 = *(long *)(lVar14 + 0x30);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(float *)(lVar11 + 0x13c) = fVar18;
    *(float *)(lVar11 + 0x140) = fVar18 * *(float *)(lVar11 + 0x144);
    Conveyor__UpdateSpeed_24b1114();
    if (0 < param_1[7]) {
      iVar8 = 0;
      do {
        ConveyorSlotCreateSystem__CreateConveyorSlot_24b4cc4(lVar14,uVar9);
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1[7]);
    }
    if (*(long *)(lVar14 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(lVar14 + 0x50),*(undefined8 *)PTR_DAT_049c6c98);
    *(undefined8 *)(param_1 + 10) = uVar9;
    thunk_FUN_021f190c();
    puVar5 = PTR_DAT_049b5138;
    uVar9 = *(undefined8 *)(lVar14 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* try { // try from 025b5190 to 026b525f has its CatchHandler @ 025b5190
                       catch() { ... } // from try @ 025b5190 with catch @ 025b5190
                       catch() { ... } // from try @ 025b52b0 with catch @ 025b5190
                       catch() { ... } // from try @ 025b5340 with catch @ 025b5190 */
      FUN_021f0574();
    }
    auStack_60 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar9,0,0);
    thunk_FUN_021f190c(auStack_60,0);
    uVar7 = auStack_60._8_8_;
    uVar9 = auStack_60._0_8_;
    auStack_70 = auStack_60;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar9 != (long *)0x0) {
      lVar11 = *(long *)uVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_025b5284;
          }
          uVar12 = uVar12 - 1;
                    /* try { // try from 025b5260 to 026b527b has its CatchHandler @ 025b530c */
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
LAB_025b5284:
                    /* try { // try from 025b528c to 026b5293 has its CatchHandler @ 025b5308 */
      iVar8 = (*(code *)*puVar10)(uVar9,uVar7 & 0xffffffff,puVar10[1]);
      if (iVar8 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_70;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c6c88);
        return;
      }
    }
  }
                    /* try { // try from 025b5298 to 026b52af has its CatchHandler @ 025b5304 */
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 025b52b0 to 026b5327 has its CatchHandler @ 025b5190 */
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_70._0_8_;
    uVar16 = auStack_70._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b5260 with catch @ 025b530c
                        */
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_025b531c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b5298 with catch @ 025b5304
                        */
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b528c with catch @ 025b5308
                        */
LAB_025b531c:
                    /* try { // try from 025b5328 to 026b532b has its CatchHandler @ 025b5334 */
    (*(code *)*puVar10)(uVar9,uVar16,puVar10[1]);
  }
  lVar11 = *(long *)(param_1 + 10);
                    /* catch() { ... } // from try @ 025b5328 with catch @ 025b5334 */
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025b5338 to 026b533f has its CatchHandler @ 025b5348 */
                    /* try { // try from 025b5340 to 026b534b has its CatchHandler @ 025b5190 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b5338 with catch @ 025b5348
                        */
  fVar18 = (float)param_1[6] / (float)param_1[7];
                    /* try { // try from 025b534c to 026b554f has its CatchHandler @ 025b534c
                       catch() { ... } // from try @ 025b534c with catch @ 025b534c
                       catch() { ... } // from try @ 025b5b84 with catch @ 025b534c
                       catch() { ... } // from try @ 025b5c10 with catch @ 025b534c
                       catch() { ... } // from try @ 025b5c68 with catch @ 025b534c
                       catch() { ... } // from try @ 025b5d30 with catch @ 025b534c
                       catch() { ... } // from try @ 025b5d6c with catch @ 025b534c
                       catch() { ... } // from try @ 025b5df0 with catch @ 025b534c */
  fVar17 = fVar18;
  if ((*(char *)(lVar11 + 0x10) == '\0') &&
     (fVar17 = (float)param_1[8], fVar18 <= (float)param_1[8])) {
    fVar17 = fVar18;
  }
  param_1[8] = (int)fVar17;
  puVar5 = PTR_DAT_049c6c90;
  if (param_1[7] < 1) {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar8 = 0;
    do {
      if (*(long *)(lVar14 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = Dreamteck_Splines_SplineComputer__Travel_2349410
                        (0,(float)param_1[8] * (float)iVar8,*(long *)(lVar14 + 0x40),1,0);
      if (*(long *)(lVar14 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(lVar14 + 0x70),iVar8,auStack_60,*(undefined8 *)puVar5);
      if (auStack_60._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      ConveyorSlot__SetPercent_24b36ac(uVar9);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[7]);
  }
  if (*(long *)(lVar14 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(int *)(*(long *)(lVar14 + 0x30) + 0x138) = param_1[8];
  plVar15 = *(long **)(lVar14 + 0x68);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049c6c70) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_025b544c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar10 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049c6c70,0);
LAB_025b544c:
  (*(code *)*puVar10)(plVar15,0,puVar10[1]);
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  thunk_FUN_021f190c(param_1 + 10,0);
  FUN_0235afc8(param_1 + 2,0);
  return;
}

