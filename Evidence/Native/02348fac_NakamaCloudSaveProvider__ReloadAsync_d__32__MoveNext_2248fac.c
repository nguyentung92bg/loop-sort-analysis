/* IL2CPP: NakamaCloudSaveProvider.<ReloadAsync>d__32$$MoveNext
void NakamaCloudSaveProvider__ReloadAsync_d__32__MoveNext (NakamaCloudSaveProvider__ReloadAsync_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider.<ReloadAsync>d__32$$MoveNext
   void NakamaCloudSaveProvider__ReloadAsync_d__32__MoveNext
   (NakamaCloudSaveProvider__ReloadAsync_d__32_o __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__ReloadAsync_d__32__MoveNext_2248fac(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f49b5f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5920);
    FUN_021f03f8(PTR_DAT_049b5928);
                    /* try { // try from 02348fec to 02448ff7 has its CatchHandler @ 02349038 */
    FUN_021f03f8(PTR_DAT_049b5190);
                    /* try { // try from 02348ff8 to 02449053 has its CatchHandler @ 02348ef4 */
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b5f = 1;
  }
  lVar10 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar1 = ZEXT816(0);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
                    /* try { // try from 02349054 to 02449243 has its CatchHandler @ 02349054
                       catch() { ... } // from try @ 02349054 with catch @ 02349054
                       catch() { ... } // from try @ 02349290 with catch @ 02349054 */
  }
  else {
    if (*param_1 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
                    /* catch() { ... } // from try @ 02348fec with catch @ 02349038 */
      *param_1 = -1;
      auStack_70 = ZEXT816(0);
      auStack_60 = ZEXT816(0);
      goto LAB_02349214;
    }
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_37cb170(0,0);
    auStack_60 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_37d5a6c
                           (auStack_70,0);
    uVar8 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_37d5ab4
                      (auStack_60,0);
    auVar1 = auStack_70;
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049b5920);
      return;
    }
  }
  auStack_70 = auVar1;
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_37d5b64(auStack_60,0);
  if (*(int *)(*(long *)PTR_DAT_049b5190 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_Threading_CancellationToken__get_None_3162934(0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar5,uVar5);
  }
  auStack_50 = NakamaCloudSaveProvider__LoadSave_2247a4c(lVar10);
  puVar2 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  thunk_FUN_021f190c(auStack_50,0);
  uVar3 = auStack_50._8_8_;
  uVar5 = auStack_50._0_8_;
  auStack_80 = auStack_50;
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
  if ((long *)uVar5 != (long *)0x0) {
    lVar7 = *(long *)uVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02349200;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(uVar5,*(long *)PTR_DAT_049b54e0,0);
LAB_02349200:
    iVar4 = (*(code *)*puVar6)(uVar5,uVar3 & 0xffffffff,puVar6[1]);
    if (iVar4 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049b5928);
      return;
    }
  }
LAB_02349214:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_80._0_8_;
                    /* try { // try from 02349244 to 0244924f has its CatchHandler @ 02349430 */
    uVar11 = auStack_80._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02349290 to 02449457 has its CatchHandler @ 02349054 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02349298;
        }
                    /* try { // try from 0234926c to 02449277 has its CatchHandler @ 02349424 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* try { // try from 02349284 to 0244928f has its CatchHandler @ 02349430 */
LAB_02349298:
    (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
  }
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x30);
    if (lVar10 != 0) {
      (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
    }
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

