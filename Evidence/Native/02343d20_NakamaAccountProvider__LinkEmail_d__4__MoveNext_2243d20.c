/* IL2CPP: NakamaAccountProvider.<LinkEmail>d__4$$MoveNext
void NakamaAccountProvider__LinkEmail_d__4__MoveNext (NakamaAccountProvider__LinkEmail_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaAccountProvider.<LinkEmail>d__4$$MoveNext
   void NakamaAccountProvider__LinkEmail_d__4__MoveNext (NakamaAccountProvider__LinkEmail_d__4_o
   __this, const MethodInfo* method); */

void NakamaAccountProvider__LinkEmail_d__4__MoveNext_2243d20(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_40;
  long *plStack_38;
  uint uStack_24;
  
  if ((bRam0000000004f49b31 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b55e8);
    FUN_021f03f8(PTR_DAT_049b55b8);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b55c0);
    FUN_021f03f8(PTR_DAT_049b55c8);
    FUN_021f03f8(PTR_DAT_049b55d0);
    bRam0000000004f49b31 = 1;
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
    uVar5 = NakamaServices__TryGetApi_2243784(&plStack_38);
    plVar4 = plStack_38;
    if ((uVar5 & 1) == 0) {
      uStack_24 = 1;
      goto LAB_02343e9c;
    }
    if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plStack_38;
                    /* catch() { ... } // from try @ 02343d0c with catch @ 02343dbc */
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 10);
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x2e) * 0x10 + 0x138);
          goto LAB_02343e30;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plStack_38,*(long *)PTR_DAT_049b5578,0x2e);
LAB_02343e30:
    lVar7 = (*(code *)*puVar6)(plVar4,uVar1,0,uVar2,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_40 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                          (lVar7,*(undefined8 *)PTR_DAT_049b55d0);
    uVar5 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                      (&uStack_40,*(undefined8 *)PTR_DAT_049b55c8);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049b55e8);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_40,&uStack_24,*(undefined8 *)PTR_DAT_049b55c0);
  if (3 < uStack_24) {
    uStack_24 = 1;
  }
LAB_02343e9c:
  puVar3 = PTR_DAT_049b55b8;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_24,*(undefined8 *)puVar3);
  return;
}

