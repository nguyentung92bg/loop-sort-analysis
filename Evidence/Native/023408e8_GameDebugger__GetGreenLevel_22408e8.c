/* IL2CPP: GameDebugger$$GetGreenLevel
bool GameDebugger__GetGreenLevel (GameDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$GetGreenLevel
   bool GameDebugger__GetGreenLevel (GameDebugger_o* __this, const MethodInfo* method); */

uint GameDebugger__GetGreenLevel_22408e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_049b52a8;
  if ((bRam0000000004f49b0b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    bRam0000000004f49b0b = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b52a8;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  if ((bRam0000000004f5c3f6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,uVar2,0);
    bRam0000000004f5c3f6 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsBool__get_Value_3f0e6dc(&uStack_30);
  return uVar4 & 1;
}

