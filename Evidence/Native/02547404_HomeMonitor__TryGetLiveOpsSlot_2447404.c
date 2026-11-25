/* IL2CPP: HomeMonitor$$TryGetLiveOpsSlot
bool HomeMonitor__TryGetLiveOpsSlot (HomeMonitor_o* __this, int32_t liveOps, HomeLiveOpsSlot_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$TryGetLiveOpsSlot
   bool HomeMonitor__TryGetLiveOpsSlot (HomeMonitor_o* __this, int32_t liveOps, HomeLiveOpsSlot_o*
   slot, const MethodInfo* method); */

uint HomeMonitor__TryGetLiveOpsSlot_2447404(long param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int aiStack_c8 [6];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  if ((bRam0000000004f4b86d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4390);
    FUN_021f03f8(PTR_DAT_049c4398);
    FUN_021f03f8(PTR_DAT_049c43a0);
    FUN_021f03f8(PTR_DAT_049c43a8);
    bRam0000000004f4b86d = 1;
  }
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[0] = 0;
  puVar6 = PTR_DAT_049c43a0;
  puVar5 = PTR_DAT_049c4398;
  puVar4 = PTR_DAT_049c4390;
  param_3[1] = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  iStack_60 = 0;
  if (*(long *)(param_1 + 0x1c0) == 0) {
    if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x1c0),&uStack_a0,*(undefined8 *)PTR_DAT_049c43a8);
    uStack_b0 = 0;
    puVar12 = (undefined8 *)((ulong)aiStack_c8 | 4);
    puStack_a8 = &uStack_a0;
    do {
      uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_a0,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) goto LAB_02547594;
      lVar11 = *(long *)puVar6;
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar9 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar8 = *(long *)(lVar11 + 0x20);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&uStack_a0,
                                  *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(aiStack_c8,uVar10,uVar1);
      uStack_68 = puVar12[1];
      uStack_70 = *puVar12;
      iStack_60 = *(int *)(puVar12 + 2);
    } while (aiStack_c8[0] != param_2);
    *param_3 = param_2;
    *(undefined8 *)(param_3 + 3) = uStack_68;
    *(undefined8 *)(param_3 + 1) = uStack_70;
    param_3[5] = iStack_60;
    thunk_FUN_021f190c(param_3 + 2,0);
LAB_02547594:
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_a0,*(undefined8 *)puVar4);
    if (*(long *)(lVar3 + 0x28) == lStack_58) {
      return uVar7 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

