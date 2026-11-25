/* IL2CPP: MonitorBase.<AddSubMonitor>d__37$$MoveNext
void MonitorBase__AddSubMonitor_d__37__MoveNext (MonitorBase__AddSubMonitor_d__37_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorBase.<AddSubMonitor>d__37$$MoveNext
   void MonitorBase__AddSubMonitor_d__37__MoveNext (MonitorBase__AddSubMonitor_d__37_o __this, const
   MethodInfo* method); */

void MonitorBase__AddSubMonitor_d__37__MoveNext_256d138(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f4c19f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c41e8);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049cbf20);
    FUN_021f03f8(PTR_DAT_049c41f0);
    FUN_021f03f8(PTR_DAT_049cbf28);
    FUN_021f03f8(PTR_DAT_049cbf30);
    FUN_021f03f8(PTR_DAT_049c4690);
    FUN_021f03f8(PTR_DAT_049c5a50);
    FUN_021f03f8(PTR_DAT_049c3a30);
    FUN_021f03f8(PTR_DAT_049cbf38);
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c3bd8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c19f = 1;
  }
  puVar9 = PTR_DAT_049cbf38;
  puVar7 = PTR_DAT_049cbf28;
  puVar6 = PTR_DAT_049cbf20;
  puVar5 = PTR_DAT_049c5a50;
  puVar4 = PTR_DAT_049c3bd8;
  puVar3 = PTR_DAT_049c3958;
  puVar2 = PTR_DAT_049b5138;
  puVar1 = PTR_DAT_049b3b98;
  lVar20 = *(long *)(param_1 + 8);
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  iStack_a4 = 0;
  uStack_b0 = 0;
  if (*param_1 == 0) {
    iStack_a4 = param_1[0xc];
    param_1[0xc] = 0;
    *param_1 = -1;
    uStack_a8 = 0;
    goto LAB_0266d3d0;
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  MonitorBase__RemoveSubMonitor_256d028(lVar20);
  plVar12 = *(long **)(param_1 + 10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar13 = (**(code **)(*plVar12 + 0x198))(plVar12,*(undefined8 *)(*plVar12 + 0x1a0));
  if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_AddressableAssets_Addressables__LoadAssetAsync___Il2CppFullySharedGenericType__2595bbc
            (&lStack_d0,uVar13,*(undefined8 *)PTR_DAT_049c41e8);
  uStack_78 = uStack_c8;
  lStack_80 = lStack_d0;
  uStack_70 = uStack_c0;
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___op_Implicit_27c9920
            (&lStack_e8,&lStack_80,*(undefined8 *)PTR_DAT_049c41f0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  uStack_c0 = uStack_d8;
  *(undefined8 *)(lVar20 + 0x88) = uStack_e0;
  *(long *)(lVar20 + 0x80) = lStack_e8;
  *(undefined8 *)(lVar20 + 0x90) = uStack_d8;
  thunk_FUN_021f190c(lVar20 + 0x80,0);
  if (*(long *)(lVar20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_f8 = *(undefined8 *)(lVar20 + 0x88);
  uStack_100 = *(undefined8 *)(lVar20 + 0x80);
  uStack_f0 = *(undefined8 *)(lVar20 + 0x90);
  AssetModule__AddAssetHandle_252fad8(*(long *)(lVar20 + 0x40),&uStack_100,0);
  while (uVar14 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__get_IsDone_3aab230
                            (lVar20 + 0x80,0), (uVar14 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar10 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_a8 = CONCAT44(iStack_a4,uVar10);
    iVar11 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_a8,0);
    iStack_a4 = iVar11;
    uVar14 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_a4,0);
    puVar8 = PTR_DAT_049cbf30;
    if ((uVar14 & 1) == 0) {
      *param_1 = 0;
      uVar13 = *(undefined8 *)puVar8;
      param_1[0xc] = iStack_a4;
      FUN_0235bb44(param_1 + 2,&iStack_a4,param_1,uVar13);
      return;
    }
LAB_0266d3d0:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_a4,0);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle__Convert___Il2CppFullySharedGenericType__25b1d1c
            (&lStack_80,lVar20 + 0x80,*(undefined8 *)puVar7);
  uStack_98 = uStack_78;
  lStack_a0 = lStack_80;
  uStack_90 = uStack_70;
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_Result_27caf4c
            (&lStack_a0,&lStack_80,*(undefined8 *)puVar6);
  lVar15 = lStack_80;
  uVar13 = UnityEngine_Component__get_transform_3c18724(lVar20,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar15 = UnityEngine_Object__Instantiate_object__2695b80(lVar15,uVar13,*(undefined8 *)puVar4);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
            (lVar15,&lStack_80,*(undefined8 *)puVar9);
  plVar12 = (long *)(lVar20 + 0x78);
  *plVar12 = lStack_80;
  thunk_FUN_021f190c(plVar12);
  if (*(long *)(lVar20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
            (*(long *)(lVar20 + 0x30),&lStack_80,*(undefined8 *)puVar5);
  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar21 = *(long **)(lStack_80 + 0x50);
  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar18 = *plVar21;
  lVar22 = *plVar12;
  uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar14 != 0) {
    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_049b6750) {
        puVar16 = (undefined8 *)(lVar18 + (long)(*piVar19 + 7) * 0x10 + 0x138);
        goto LAB_0266d520;
      }
      uVar14 = uVar14 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar14 != 0);
  }
  puVar16 = (undefined8 *)FUN_02229a4c(plVar21,*(long *)PTR_DAT_049b6750,7);
LAB_0266d520:
  (*(code *)*puVar16)(plVar21,lVar22,puVar16[1]);
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
  lVar18 = *(long *)puVar3;
  lVar22 = *(long *)(lVar20 + 0x30);
  uVar13 = *(undefined8 *)(lVar20 + 0x78);
  if (*(int *)(lVar18 + 0xe4) == 0) {
    FUN_021f0574();
    lVar18 = *(long *)puVar3;
  }
  lStack_d0 = CONCAT71(lStack_d0._1_7_,**(undefined1 **)(lVar18 + 0xb8));
  uVar17 = thunk_FUN_0222c66c(lVar18,&lStack_d0);
  if (lVar22 != 0) {
    Monitors__ApplyActivateMonitorTransition_256d6f4(lVar22,uVar13,uVar17);
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar15,&lStack_80,*(undefined8 *)PTR_DAT_049c3a30);
    *param_1 = -2;
    FUN_0235bed4(param_1 + 2,lStack_80,*(undefined8 *)PTR_DAT_049c4690);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

