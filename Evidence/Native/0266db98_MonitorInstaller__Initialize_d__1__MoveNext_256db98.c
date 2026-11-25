/* IL2CPP: MonitorInstaller.<Initialize>d__1$$MoveNext
void MonitorInstaller__Initialize_d__1__MoveNext (MonitorInstaller__Initialize_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MonitorInstaller.<Initialize>d__1$$MoveNext
   void MonitorInstaller__Initialize_d__1__MoveNext (MonitorInstaller__Initialize_d__1_o __this,
   const MethodInfo* method); */

void MonitorInstaller__Initialize_d__1__MoveNext_256db98(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4c1a4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbf78);
    FUN_021f03f8(PTR_DAT_049cbf80);
    FUN_021f03f8(PTR_DAT_049cbf88);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049cbf90);
    FUN_021f03f8(PTR_DAT_049cbf98);
    bRam0000000004f4c1a4 = 1;
  }
  lVar8 = *(long *)(param_1 + 6);
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_30 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar2 = UnityEngine_Resources__LoadAsync_object__26a751c
                      (*(undefined8 *)PTR_DAT_049cbf98,*(undefined8 *)PTR_DAT_049cbf90);
    auStack_30 = Cysharp_Threading_Tasks_UnityAsyncExtensions__GetAwaiter_3804b04(uVar2,0);
    uVar3 = Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__get_IsCompleted_380a738
                      (auStack_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = auStack_30;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c25c(param_1 + 2,auStack_30,param_1,*(undefined8 *)PTR_DAT_049cbf78);
      return;
    }
  }
  plVar4 = (long *)Cysharp_Threading_Tasks_UnityAsyncExtensions_ResourceRequestAwaiter__GetResult_380a750
                             (auStack_30,0);
  if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_049cbf80)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(plVar4);
  }
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = UnityEngine_Object__Instantiate_object__2695910(plVar4,*(undefined8 *)PTR_DAT_049cbf88);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar4 = (long *)(lVar8 + 0x10);
  *plVar4 = lVar5;
  thunk_FUN_021f190c(plVar4);
  if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar2 = UnityEngine_Component__get_gameObject_3c187f4(*plVar4,0);
  UnityEngine_Object__DontDestroyOnLoad_3c246bc(uVar2,0);
  cVar1 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar4 = *(long **)(param_1 + 2);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0266dda8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049b56d0,2);
LAB_0266dda8:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}

