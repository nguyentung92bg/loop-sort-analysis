/* IL2CPP: GameStateBase$$OnExitRequest
void GameStateBase__OnExitRequest (GameStateBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameStateBase$$OnExitRequest
   void GameStateBase__OnExitRequest (GameStateBase_o* __this, const MethodInfo* method); */

void GameStateBase__OnExitRequest_2503bd0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_049c8ce0;
  if ((bRam0000000004f4bd76 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ce8);
    FUN_021f03f8(PTR_DAT_049c8ce0);
    bRam0000000004f4bd76 = 1;
  }
  UnityHFSM_State___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___OnExitRequest_29afccc
            (param_1,*(undefined8 *)puVar1);
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c8ce8) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02603c78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c8ce8,0);
LAB_02603c78:
                    /* WARNING: Could not recover jumptable at 0x02603c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}

