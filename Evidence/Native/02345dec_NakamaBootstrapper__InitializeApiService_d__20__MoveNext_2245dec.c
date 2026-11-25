/* IL2CPP: NakamaBootstrapper.<InitializeApiService>d__20$$MoveNext
void NakamaBootstrapper__InitializeApiService_d__20__MoveNext (NakamaBootstrapper__InitializeApiService_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0234627c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: NakamaBootstrapper.<InitializeApiService>d__20$$MoveNext
   void NakamaBootstrapper__InitializeApiService_d__20__MoveNext
   (NakamaBootstrapper__InitializeApiService_d__20_o __this, const MethodInfo* method); */

void NakamaBootstrapper__InitializeApiService_d__20__MoveNext_2245dec(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
  if ((bRam0000000004f49b46 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5738);
    FUN_021f03f8(PTR_DAT_049b5740);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5748);
    FUN_021f03f8(PTR_DAT_049b5750);
    FUN_021f03f8(PTR_DAT_049b5758);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b46 = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 4);
  uStack_50 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (iStack_24 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    iStack_24 = -1;
    *param_1 = -1;
LAB_02345f98:
    System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
              (&uStack_50,auStack_40,*(undefined8 *)PTR_DAT_049b5748);
                    /* try { // try from 02345fb4 to 02446027 has its CatchHandler @ 02345fb4
                       catch() { ... } // from try @ 02345fb4 with catch @ 02345fb4
                       catch() { ... } // from try @ 02346034 with catch @ 02345fb4 */
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    NakamaBootstrapper__UnsubscribeFromNakamaInit_2245040();
    lVar5 = lStack_48;
    auStack_60 = UniTimer__CreateFromSeconds_3f0f2f4(0x41700000,0);
    auVar10 = UniTimer__SetUnscaled_3f0f260(auStack_60,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 (*) [16])(lVar5 + 0x30) = auVar10;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 023462d0 with catch @ 02346288 */
      FUN_021f06a0();
    }
    auStack_40 = NakamaBootstrapper__FinalizeNakamaInit_2245420(lStack_48,auStack_40._0_8_);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02346028 to 02446033 has its CatchHandler @ 02346064 */
    thunk_FUN_021f190c(auStack_40,0);
                    /* try { // try from 02346034 to 0244607f has its CatchHandler @ 02345fb4 */
    auStack_70 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 02346028 with catch @ 02346064 */
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02346080 to 0244617b has its CatchHandler @ 02346080
                       catch() { ... } // from try @ 02346080 with catch @ 02346080
                       catch() { ... } // from try @ 02346188 with catch @ 02346080 */
      cRam0000000004f49bf5 = '\x01';
    }
    uVar3 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_70._0_8_;
      uVar9 = auStack_70._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02346120;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02346120:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
      if (iVar2 == 0) {
                    /* try { // try from 023461d4 to 02446247 has its CatchHandler @ 023461d4
                       catch() { ... } // from try @ 023461d4 with catch @ 023461d4
                       catch() { ... } // from try @ 0234625c with catch @ 023461d4 */
        iStack_24 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049b5738);
        goto LAB_0234620c;
      }
    }
  }
  else {
    if (iStack_24 != 1) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_48 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar8 = *(long **)(lStack_48 + 0x20);
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(lStack_48 + 0x28),0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x13) * 0x10 + 0x138);
            goto LAB_02345f58;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b5578,0x13);
LAB_02345f58:
      lVar5 = (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_50 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                            (lVar5,*(undefined8 *)PTR_DAT_049b5758);
      uVar6 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                        (&uStack_50,*(undefined8 *)PTR_DAT_049b5750);
      if ((uVar6 & 1) != 0) goto LAB_02345f98;
      iStack_24 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 6) = uStack_50;
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049b5740);
LAB_0234620c:
      iVar2 = 5;
      goto LAB_02346210;
    }
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    iStack_24 = -1;
    *param_1 = -1;
    auStack_60 = ZEXT816(0);
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_70._0_8_;
    uVar9 = auStack_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 0234617c to 02446187 has its CatchHandler @ 023461b8 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 02346188 to 024461d3 has its CatchHandler @ 02346080 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_023461b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_023461b8:
                    /* catch() { ... } // from try @ 0234617c with catch @ 023461b8 */
    (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
  }
  iVar2 = 10;
LAB_02346210:
  if (iStack_24 < 0) {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(char *)(lStack_48 + 0x49) == '\0') {
      *(undefined1 *)(lStack_48 + 0x49) = 1;
      SceneManagerH__LoadNextScene_3f0d808(0);
    }
  }
                    /* try { // try from 02346248 to 0244625b has its CatchHandler @ 02346270 */
  if ((iVar2 == 0) || (iVar2 == 10)) {
                    /* try { // try from 0234625c to 02446287 has its CatchHandler @ 023461d4 */
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
  }
                    /* catch() { ... } // from try @ 02346248 with catch @ 02346270 */
  return;
}

