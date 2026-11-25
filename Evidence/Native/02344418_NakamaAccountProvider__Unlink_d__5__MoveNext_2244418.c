/* IL2CPP: NakamaAccountProvider.<Unlink>d__5$$MoveNext
void NakamaAccountProvider__Unlink_d__5__MoveNext (NakamaAccountProvider__Unlink_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<Unlink>d__5$$MoveNext
   void NakamaAccountProvider__Unlink_d__5__MoveNext (NakamaAccountProvider__Unlink_d__5_o __this,
   const MethodInfo* method); */

void NakamaAccountProvider__Unlink_d__5__MoveNext_2244418(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  long *plStack_38;
  char acStack_24 [4];
  
  if ((bRam0000000004f49b35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5630);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5580);
    FUN_021f03f8(PTR_DAT_049b5588);
    FUN_021f03f8(PTR_DAT_049b5590);
    bRam0000000004f49b35 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = NakamaServices__TryGetApi_2243784(&plStack_38);
    plVar2 = plStack_38;
    if ((uVar4 & 1) == 0) {
      acStack_24[0] = false;
      goto LAB_0234459c;
    }
    uVar3 = Extensions__ToNakamaType_223d864(param_1[8]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar2;
    uVar8 = *(undefined8 *)(param_1 + 10);
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
          goto LAB_02344534;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049b5578,0x1d);
LAB_02344534:
    lVar6 = (*(code *)*puVar5)(plVar2,uVar3,uVar8,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 02344650 with catch @ 0234454c */
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar6,*(undefined8 *)PTR_DAT_049b5590);
    uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b5588);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 023445dc to 024445e7 has its CatchHandler @ 02344690 */
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b5630);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,acStack_24,*(undefined8 *)PTR_DAT_049b5580);
  acStack_24[0] = acStack_24[0] != '\0';
LAB_0234459c:
  puVar1 = PTR_DAT_049b5570;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,acStack_24,*(undefined8 *)puVar1);
  return;
}

