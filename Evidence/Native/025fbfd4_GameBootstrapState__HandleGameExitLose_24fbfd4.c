/* IL2CPP: GameBootstrapState$$HandleGameExitLose
void GameBootstrapState__HandleGameExitLose (GameBootstrapState_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameBootstrapState$$HandleGameExitLose
   void GameBootstrapState__HandleGameExitLose (GameBootstrapState_o* __this, const MethodInfo*
   method); */

void GameBootstrapState__HandleGameExitLose_24fbfd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c8a38);
    FUN_021f03f8(PTR_DAT_049c5130);
    FUN_021f03f8(PTR_DAT_049c5138);
    FUN_021f03f8(PTR_DAT_049c8a40);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd56 = 1;
  }
  puVar2 = PTR_DAT_049c3d90;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c5138;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsT___Il2CppFullySharedGenericStructType___HasValue_291186c
                    (*(long *)(*(long *)puVar1 + 0xb8) + 0x958,*(undefined8 *)puVar3);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsT___Il2CppFullySharedGenericStructType___get_Value_2910aa0
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x958,&uStack_40,*(undefined8 *)PTR_DAT_049c8a40)
    ;
    PlayerPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_29115c4
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x958,*(undefined8 *)PTR_DAT_049c5130);
    if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_DateTimeOffset__op_Equality_30e4638(uStack_40,uStack_38,0,0,0);
    if ((uVar4 & 1) == 0) {
      plVar8 = *(long **)(param_1 + 0x78);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c8a38) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025fc190;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049c8a38,0);
LAB_025fc190:
      (*(code *)*puVar5)(plVar8,uStack_40,uStack_38,puVar5[1]);
    }
  }
  return;
}

