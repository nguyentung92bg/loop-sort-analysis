/* IL2CPP: HomeMonitor$$ReleaseHomeScene
void HomeMonitor__ReleaseHomeScene (HomeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$ReleaseHomeScene
   void HomeMonitor__ReleaseHomeScene (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__ReleaseHomeScene_24453ac(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b876 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4260);
    FUN_021f03f8(PTR_DAT_049c4268);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b876 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  if (iVar1 == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x178) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x178),0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    UnityEngine_Object__Destroy_3c24380(uVar5,0);
  }
  puVar2 = PTR_DAT_049c4260;
  *(undefined8 *)(param_1 + 0x178) = 0;
  thunk_FUN_021f190c(param_1 + 0x178,0);
  uVar3 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___IsValid_27cacc4
                    (param_1 + 0x160,*(undefined8 *)puVar2);
  if ((uVar3 & 1) != 0) {
    UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle___Il2CppFullySharedGenericType___Release_27caec8
              (param_1 + 0x160,*(undefined8 *)PTR_DAT_049c4268);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  return;
}

