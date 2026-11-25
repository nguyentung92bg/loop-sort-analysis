/* IL2CPP: LiveOpsDeepLink.<ApplyHomeAction>d__8$$MoveNext
void LiveOpsDeepLink__ApplyHomeAction_d__8__MoveNext (LiveOpsDeepLink__ApplyHomeAction_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsDeepLink.<ApplyHomeAction>d__8$$MoveNext
   void LiveOpsDeepLink__ApplyHomeAction_d__8__MoveNext (LiveOpsDeepLink__ApplyHomeAction_d__8_o
   __this, const MethodInfo* method); */

void LiveOpsDeepLink__ApplyHomeAction_d__8__MoveNext_25222e0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam0000000004f4be7b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9850);
    FUN_021f03f8(PTR_DAT_049c9858);
    FUN_021f03f8(PTR_DAT_049c9860);
    FUN_021f03f8(PTR_DAT_049c9868);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4be7b = 1;
  }
  puVar3 = PTR_DAT_049c9858;
  puVar1 = PTR_DAT_049b5138;
  lVar14 = *(long *)(param_1 + 6);
  uStack_28 = 0;
  iStack_24 = 0;
  if (*param_1 == 0) {
    iStack_24 = param_1[8];
    param_1[8] = 0;
    *param_1 = -1;
    uStack_28 = 0;
    goto LAB_02622454;
  }
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_049c9860 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  pcVar8 = (char *)thunk_FUN_0224e54c(lVar14 + 0x40,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar8 == '\0') {
LAB_02622468:
    cVar4 = cRam0000000004f49bfa;
    *param_1 = -2;
    if (cVar4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar13 = *(long **)(param_1 + 2);
    if (plVar13 != (long *)0x0) {
      lVar14 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0262251c;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049b56d0,2);
LAB_0262251c:
      (*(code *)*puVar10)(plVar13,puVar10[1]);
    }
  }
  else {
    System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
              (lVar14 + 0x40,&uStack_40,*(undefined8 *)PTR_DAT_049c9868);
    LiveOpsDeepLink__HandleDeepLink_2521efc(lVar14,uStack_40,uStack_38);
    *(undefined8 *)(lVar14 + 0x40) = 0;
    *(undefined8 *)(lVar14 + 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x50) = 0;
    while( true ) {
      if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = Monitors__IsActive_object__2688ab4(*(long *)(lVar14 + 0x28),*(undefined8 *)puVar3);
      if ((uVar9 & 1) == 0) goto LAB_02622468;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
      _uStack_28 = CONCAT44(iStack_24,uVar5);
      iVar6 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_28,0);
      iStack_24 = iVar6;
      uVar9 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_24,0);
      puVar2 = PTR_DAT_049c9850;
      if ((uVar9 & 1) == 0) break;
LAB_02622454:
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_24,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    *param_1 = 0;
    uVar11 = *(undefined8 *)puVar2;
    param_1[8] = iStack_24;
    FUN_0235c25c(param_1 + 2,&iStack_24,param_1,uVar11);
  }
  return;
}

