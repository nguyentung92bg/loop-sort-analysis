/* IL2CPP: CameraTransitionSystem.<HandleLevelExit>d__13$$MoveNext
void CameraTransitionSystem__HandleLevelExit_d__13__MoveNext (CameraTransitionSystem__HandleLevelExit_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025d7618) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: CameraTransitionSystem.<HandleLevelExit>d__13$$MoveNext
   void CameraTransitionSystem__HandleLevelExit_d__13__MoveNext
   (CameraTransitionSystem__HandleLevelExit_d__13_o __this, const MethodInfo* method); */

void CameraTransitionSystem__HandleLevelExit_d__13__MoveNext_24d71a0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_58;
  undefined1 auStack_50 [16];
  int iStack_24;
  
  if ((bRam0000000004f4bc3f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7798);
    FUN_021f03f8(PTR_DAT_049c7788);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c3d48);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bc3f = 1;
  }
  iStack_24 = *param_1;
  lStack_58 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar14 = ZEXT816(0);
  if (iStack_24 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    iStack_24 = -1;
    *param_1 = -1;
    goto LAB_025d7490;
  }
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar1 = ZEXT816(0);
  if ((*(char *)(lStack_58 + 0x69) != '\0') ||
     (*(undefined1 *)(lStack_58 + 0x69) = 1, auVar1 = ZEXT816(0),
     *(char *)(lStack_58 + 0x41) == '\0')) goto LAB_025d7584;
  if (*(long *)(lStack_58 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  InteractionModule__EnableRestriction_2535cc8(*(long *)(lStack_58 + 0x48),lStack_58,0);
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *(long *)(lStack_58 + 0x38);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = *(undefined4 *)(lVar5 + 0x38);
  uVar13 = *(undefined4 *)(lVar5 + 0x3c);
  if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar11 = uVar13;
  uVar10 = Extensions__AddX_3f0cd84(uVar12,uVar13,0xbf800000,0);
                    /* catch() { ... } // from try @ 025d7310 with catch @ 025d72e4
                       catch() { ... } // from try @ 025d7330 with catch @ 025d72e4
                       catch() { ... } // from try @ 025d7364 with catch @ 025d72e4
                       catch() { ... } // from try @ 025d73dc with catch @ 025d72e4 */
  auStack_80 = LitMotion_LMotion__Create_2eaa148(uVar12,uVar13,uVar10,uVar11,0x3f000000,0);
  auVar14 = FUN_024f4e50(auStack_80,3,*(undefined8 *)PTR_DAT_049c2d70);
                    /* try { // try from 025d730c to 026d730f has its CatchHandler @ 025d7334 */
                    /* try { // try from 025d7310 to 026d7327 has its CatchHandler @ 025d72e4 */
  auStack_80 = auVar14;
                    /* try { // try from 025d7328 to 026d732b has its CatchHandler @ 025d7330 */
  auVar14 = FUN_024f6e90(0x3fc00000,auStack_80,0,1,*(undefined8 *)PTR_DAT_049c3d28);
                    /* try { // try from 025d732c to 026d732f has its CatchHandler @ 025d7334 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d7328 with catch @ 025d7330
                       try { // try from 025d7330 to 026d734b has its CatchHandler @ 025d72e4 */
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d730c with catch @ 025d7334
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025d732c with catch @ 025d7334
                        */
  uVar9 = *(undefined8 *)(lStack_58 + 0x38);
                    /* try { // try from 025d734c to 026d7363 has its CatchHandler @ 025d73d4 */
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025d7364 to 026d73c3 has its CatchHandler @ 025d72e4 */
  auVar14 = Extensions__BindToCenterOffset___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee4b8
                      (auVar14._0_8_,auVar14._8_8_,uVar9,*(undefined8 *)PTR_DAT_049c7788);
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                         (auVar14._0_8_,auVar14._8_8_ & 0xffffffff,*(undefined8 *)(lStack_58 + 0x20)
                          ,0);
  puVar2 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  thunk_FUN_021f190c(auStack_50,0);
                    /* try { // try from 025d73c4 to 026d73d3 has its CatchHandler @ 025d73d4 */
  auStack_70 = auStack_50;
  if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 025d734c with catch @ 025d73d4
                       catch() { ... } // from try @ 025d73c4 with catch @ 025d73d4 */
                    /* try { // try from 025d73d8 to 026d73db has its CatchHandler @ 025d73e4 */
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025d73dc to 026d73e7 has its CatchHandler @ 025d72e4 */
    cRam0000000004f49bf4 = '\x01';
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d73d8 with catch @ 025d73e4
                        */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar9 = auStack_70._0_8_;
  auVar14 = auStack_80;
  if ((long *)auStack_70._0_8_ == (long *)0x0) {
LAB_025d7490:
    auStack_80 = auVar14;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar9 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_70._0_8_;
      uVar8 = auStack_70._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025d7514;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025d7514:
      (*(code *)*puVar4)(uVar9,uVar8,puVar4[1]);
    }
    iVar3 = 0xb;
  }
  else {
    lVar5 = *(long *)auStack_70._0_8_;
    uVar8 = auStack_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025d75bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025d75bc:
    iVar3 = (*(code *)*puVar4)(uVar9,uVar8,puVar4[1]);
    auVar14 = auStack_80;
    if (iVar3 != 0) goto LAB_025d7490;
    iStack_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 6) = auStack_70;
    thunk_FUN_021f190c(param_1 + 6,0);
    FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c7798);
    iVar3 = 7;
  }
  if (iStack_24 < 0) {
    if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x48) == 0)) {
LAB_025d7610:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    InteractionModule__DisableRestriction_2535d30(*(long *)(lStack_58 + 0x48),lStack_58,0);
    if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x30) == 0)) goto LAB_025d7610;
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(lStack_58 + 0x30),*(undefined8 *)PTR_DAT_049c3d48);
  }
  auVar14 = auStack_80;
  auVar1 = auStack_70;
  if ((iVar3 != 0) && (iVar3 != 0xb)) {
    return;
  }
LAB_025d7584:
  *param_1 = -2;
  auStack_80 = auVar14;
  auStack_70 = auVar1;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

