/* IL2CPP: HomeMonitor.<LoadHomeScene>d__71$$MoveNext
void HomeMonitor__LoadHomeScene_d__71__MoveNext (HomeMonitor__LoadHomeScene_d__71_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor.<LoadHomeScene>d__71$$MoveNext
   void HomeMonitor__LoadHomeScene_d__71__MoveNext (HomeMonitor__LoadHomeScene_d__71_o __this, const
   MethodInfo* method); */

void HomeMonitor__LoadHomeScene_d__71__MoveNext_2448ef8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b884 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4488);
    FUN_021f03f8(PTR_DAT_049bb9e0);
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049c4268);
    FUN_021f03f8(PTR_DAT_049c4490);
    FUN_021f03f8(PTR_DAT_049c4498);
    FUN_021f03f8(PTR_DAT_049c44a0);
    FUN_021f03f8(PTR_DAT_049c44a8);
    FUN_021f03f8(PTR_DAT_049c44b0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c43b8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c44b8);
    bRam0000000004f4b884 = 1;
  }
  puVar3 = PTR_DAT_049c4490;
  puVar2 = PTR_DAT_049b5138;
  puVar1 = PTR_DAT_049b3b98;
  lVar12 = *(long *)(param_1 + 4);
  uStack_38 = 0;
  iStack_34 = 0;
  uStack_48 = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[0x10];
    param_1[0x10] = 0;
    *param_1 = -1;
    uStack_38 = 0;
    goto LAB_02549130;
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar7 = *(int *)(lVar12 + 0x180) + 1;
  *(int *)(lVar12 + 0x180) = iVar7;
  param_1[8] = iVar7;
  if (*(long *)(lVar12 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(*(long *)(lVar12 + 0xe0) + 0x28);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
            (lVar8,param_1[6],&plStack_70,*(undefined8 *)PTR_DAT_049c43b8);
  if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar9 = (**(code **)(*plStack_70 + 0x198))(plStack_70,*(undefined8 *)(*plStack_70 + 0x1a0));
  if (*(int *)(*(long *)PTR_DAT_049bb9e0 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_AddressableAssets_Addressables__LoadAssetAsync___Il2CppFullySharedGenericType__2595bbc
            (&plStack_88,uVar9,*(undefined8 *)PTR_DAT_049c4488);
  uStack_68 = uStack_80;
  plStack_70 = plStack_88;
  uStack_60 = uStack_78;
  *(undefined8 *)(param_1 + 0xc) = uStack_80;
  *(long **)(param_1 + 10) = plStack_88;
  *(undefined8 *)(param_1 + 0xe) = uStack_78;
  thunk_FUN_021f190c(param_1 + 10,0);
  while (uVar10 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_IsDone_27cac18
                            (param_1 + 10,*(undefined8 *)puVar3), (uVar10 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_38 = CONCAT44(iStack_34,uVar6);
    iVar7 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
    iStack_34 = iVar7;
    uVar10 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0);
    puVar4 = PTR_DAT_049c44b0;
    if ((uVar10 & 1) == 0) {
      *param_1 = 0;
      uVar9 = *(undefined8 *)puVar4;
      param_1[0x10] = iStack_34;
      FUN_0235c420(param_1 + 2,&iStack_34,param_1,uVar9);
      return;
    }
LAB_02549130:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = UnityEngine_Object__op_Equality_3c1eeb4(lVar12,0,0);
  if ((uVar10 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (param_1[8] == *(int *)(lVar12 + 0x180)) {
      iVar7 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_Status_27cb088
                        (param_1 + 10,*(undefined8 *)PTR_DAT_049c44a8);
      if (iVar7 == 1) {
        uVar11 = *(undefined8 *)(param_1 + 0xc);
        uVar9 = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(lVar12 + 0x170) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(lVar12 + 0x168) = uVar11;
        *(undefined8 *)(lVar12 + 0x160) = uVar9;
        thunk_FUN_021f190c(lVar12 + 0x160,0);
        UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_Result_27caf4c
                  (param_1 + 10,&plStack_70,*(undefined8 *)PTR_DAT_049c44a0);
        plVar5 = plStack_70;
        lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (lVar12,0x3b77286f,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar9 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar8,0);
        if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar9 = HomeSceneView__Create_242c860(plVar5,uVar9,0);
        *(undefined8 *)(lVar12 + 0x178) = uVar9;
        thunk_FUN_021f190c(lVar12 + 0x178);
        if (*(long *)(lVar12 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(byte *)(*(long *)(lVar12 + 0x178) + 0x78) = *(byte *)(lVar12 + 0x184) ^ 1;
      }
      else {
        plStack_70 = (long *)CONCAT44(plStack_70._4_4_,param_1[7]);
        uVar9 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c39c0,&plStack_70);
        uVar11 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___get_OperationException_27cad34
                           (param_1 + 10,*(undefined8 *)PTR_DAT_049c4498);
        uVar9 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049c44b8,uVar9,uVar11,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__LogError_3bd1230(uVar9,0);
        UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___Release_27caec8
                  (param_1 + 10,*(undefined8 *)PTR_DAT_049c4268);
        lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                          (lVar12,0x3b77286f,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Behaviour__set_enabled_3c17eec(lVar8,1,0);
        HomeMonitor__SetAreaBackground_2447e50(lVar12,param_1[7]);
      }
      goto LAB_0254928c;
    }
  }
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___Release_27caec8
            (param_1 + 10,*(undefined8 *)PTR_DAT_049c4268);
LAB_0254928c:
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

