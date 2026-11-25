/* IL2CPP: GameSettingsState$$OnExit
void GameSettingsState__OnExit (GameSettingsState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameSettingsState$$OnExit
   void GameSettingsState__OnExit (GameSettingsState_o* __this, const MethodInfo* method); */

void GameSettingsState__OnExit_25029f8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  GameStateBase__OnExit_24fe228();
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bfb1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8,0);
    bRam0000000004f4bfb1 = 1;
  }
  plVar5 = *(long **)(lVar1 + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_0263f900;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,5);
LAB_0263f900:
                    /* WARNING: Could not recover jumptable at 0x0263f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}

