/* IL2CPP: LoopSortConflictResolver.<HandleResolve>d__13$$MoveNext
void LoopSortConflictResolver__HandleResolve_d__13__MoveNext (LoopSortConflictResolver__HandleResolve_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver.<HandleResolve>d__13$$MoveNext
   void LoopSortConflictResolver__HandleResolve_d__13__MoveNext
   (LoopSortConflictResolver__HandleResolve_d__13_o __this, const MethodInfo* method); */

void LoopSortConflictResolver__HandleResolve_d__13__MoveNext_223e330(int *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_64;
  undefined8 uStack_60;
  long lStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if ((bRam0000000004f49af2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5090);
    FUN_021f03f8(PTR_DAT_049b5098);
    FUN_021f03f8(PTR_DAT_049b5020);
    FUN_021f03f8(PTR_DAT_049b50a0);
    FUN_021f03f8(PTR_DAT_049b50a8);
    FUN_021f03f8(PTR_DAT_049b50b0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b50b8);
    FUN_021f03f8(PTR_DAT_049b50c0);
    FUN_021f03f8(PTR_DAT_049b50c8);
    FUN_021f03f8(PTR_DAT_049b50d0);
    FUN_021f03f8(PTR_DAT_049b50d8);
    FUN_021f03f8(PTR_DAT_049b50e0);
    FUN_021f03f8(PTR_DAT_049b50e8);
                    /* try { // try from 0233e400 to 0243e457 has its CatchHandler @ 0233e400
                       catch() { ... } // from try @ 0233e400 with catch @ 0233e400
                       catch() { ... } // from try @ 0233e474 with catch @ 0233e400 */
    FUN_021f03f8(PTR_DAT_049b50f0);
    FUN_021f03f8(PTR_DAT_049b50f8);
    bRam0000000004f49af2 = 1;
  }
  puVar4 = PTR_DAT_049b5020;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  auStack_90._8_8_ = 0;
  auStack_90._0_8_ = 0;
  auVar2 = ZEXT816(0);
  if (*param_1 == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x10);
    uStack_80 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar12 = *(long *)(param_1 + 10);
    if (cRam0000000004f49bf0 == '\0') {
                    /* try { // try from 0233e458 to 0243e473 has its CatchHandler @ 0233e4a0 */
      FUN_021f03f8(PTR_DAT_049b5018);
      cRam0000000004f49bf0 = '\x01';
    }
    puVar3 = PTR_DAT_049b5018;
                    /* try { // try from 0233e474 to 0243e4b3 has its CatchHandler @ 0233e400 */
    plVar9 = *(long **)(*(long *)PTR_DAT_049b5018 + 0xb8);
    if ((char)plVar9[1] == '\0') {
      uVar7 = LoopSortConflictResolver__TryBuildConflict_223deb0
                        (*(undefined8 *)(param_1 + 8),&lStack_58);
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
        uVar8 = *(undefined8 *)PTR_DAT_049b50e0;
      }
      else {
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar5 = CloudSaveConflict__get_CloudLevel_24ebb94(lStack_58,0);
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar6 = CloudSaveConflict__get_LocalLevel_24eba0c(lStack_58,0);
        puVar1 = (undefined8 *)PTR_DAT_049b50e0;
        if (iVar6 < iVar5) {
          puVar1 = (undefined8 *)PTR_DAT_049b50f0;
        }
        uVar8 = *puVar1;
        uVar10 = (uint)(iVar6 < iVar5);
      }
      uVar8 = System_String__Concat_2f7d424
                        (*(undefined8 *)PTR_DAT_049b50d8,uVar8,*(undefined8 *)PTR_DAT_049b50f8,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__Log_3bd0be4(uVar8,0);
      goto LAB_0233e964;
    }
    if (cRam0000000004f49bf1 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5018);
                    /* catch() { ... } // from try @ 0233e458 with catch @ 0233e4a0 */
      cRam0000000004f49bf1 = '\x01';
      plVar9 = *(long **)(*(long *)puVar3 + 0xb8);
    }
    if (*plVar9 == 0) {
      uVar7 = LoopSortConflictResolver__TryBuildConflict_223deb0
                        (*(undefined8 *)(param_1 + 8),&uStack_60);
      uVar8 = uStack_60;
      if ((uVar7 & 1) == 0) {
        uVar10 = 1;
        goto LAB_0233e964;
      }
      if (cRam0000000004f49bf2 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf2 = '\x01';
      }
      **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar8;
      uVar8 = thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar8);
      if (cRam0000000004f49bf1 == '\0') {
        uVar8 = FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf1 = '\x01';
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar7 = LoopSortConflictResolver__TryAutoResolve_223e26c
                        (uVar8,**(undefined8 **)(*(long *)puVar3 + 0xb8),&uStack_64);
      if ((uVar7 & 1) != 0) {
        if (cRam0000000004f49bf1 == '\0') {
          FUN_021f03f8(PTR_DAT_049b5018);
          cRam0000000004f49bf1 = '\x01';
        }
        uVar10 = uStack_64;
        if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        CloudSaveConflict__Resolve_24eb790(**(long **)(*(long *)puVar3 + 0xb8),uStack_64 == 1,0);
        uStack_50 = uVar10;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b50b0,&uStack_50);
        uVar8 = System_String__Format_2f7dfac
                          (*(undefined8 *)PTR_DAT_049b50d0,*(undefined8 *)PTR_DAT_049b50c8,uVar8,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__Log_3bd0be4(uVar8,0);
        goto LAB_0233e964;
      }
      if (cRam0000000004f49bf1 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf1 = '\x01';
      }
    }
    else if (*(char *)(*plVar9 + 0x10) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)PTR_DAT_049b50c0,0);
      uVar10 = 0;
      goto LAB_0233e964;
    }
    if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = CloudSaveConflict__PublishMessage_24eb7fc(**(long **)(*(long *)puVar3 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      if (cRam0000000004f49bf1 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf1 = '\x01';
      }
      if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar5 = CloudSaveConflict__get_CloudLevel_24ebb94(**(long **)(*(long *)puVar3 + 0xb8),0);
      if (cRam0000000004f49bf1 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf1 = '\x01';
      }
      if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar6 = CloudSaveConflict__get_LocalLevel_24eba0c(**(long **)(*(long *)puVar3 + 0xb8),0);
      uVar10 = (uint)(iVar6 < iVar5);
      if (cRam0000000004f49bf1 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5018);
        cRam0000000004f49bf1 = '\x01';
      }
      if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      CloudSaveConflict__Resolve_24eb790(**(long **)(*(long *)puVar3 + 0xb8),uVar10,0);
      uStack_50 = uVar10;
      uVar8 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b50b0,&uStack_50);
      uVar8 = System_String__Format_2f7dfac
                        (*(undefined8 *)PTR_DAT_049b50e8,*(undefined8 *)PTR_DAT_049b50c8,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogWarning_3bcf90c(uVar8,0);
      goto LAB_0233e964;
    }
    if (cRam0000000004f49bf1 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5018);
      cRam0000000004f49bf1 = '\x01';
    }
    if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_90 = CloudSaveConflict__OnConflictResolved_24eb8fc
                           (**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)(param_1 + 0xc),0);
    FUN_0235b0c0(auStack_90,&uStack_50,*(undefined8 *)PTR_DAT_049b50b8);
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    lVar11 = *(long *)PTR_DAT_049b50a8;
    uStack_78 = uStack_48;
    lVar12 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0x80));
    lVar12 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    iVar5 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    auVar2 = auStack_90;
    if (iVar5 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      *(undefined8 *)(param_1 + 0xe) = uStack_80;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25872a8
                (param_1 + 2,&uStack_80,param_1,*(undefined8 *)PTR_DAT_049b5090);
      return;
    }
  }
  auStack_90 = auVar2;
  FUN_0235b3fc(&uStack_80,&uStack_50,*(undefined8 *)PTR_DAT_049b50a0);
  uVar10 = (uint)(uStack_50 == 1);
LAB_0233e964:
  *param_1 = -2;
  puVar3 = PTR_DAT_049b5098;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_50 = uVar10;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___SetResult_27d0414
            (param_1 + 2,&uStack_50,*(undefined8 *)puVar3);
  return;
}

