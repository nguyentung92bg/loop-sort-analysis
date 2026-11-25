/* IL2CPP: WeeklyMissionProgressSheet.Row$$.ctor
void WeeklyMissionProgressSheet_Row___ctor (WeeklyMissionProgressSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionProgressSheet.Row$$.ctor
   void WeeklyMissionProgressSheet_Row___ctor (WeeklyMissionProgressSheet_Row_o* __this, const
   MethodInfo* method); */

undefined1  [16] WeeklyMissionProgressSheet_Row___ctor_25690b4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049cb460;
  puVar2 = PTR_DAT_049c5b78;
  puVar1 = PTR_DAT_049b6378;
  if ((bRam0000000004f4c183 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
    FUN_021f03f8(PTR_DAT_049cb460);
    bRam0000000004f4c183 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x48),uVar4);
  uVar4 = *(undefined8 *)puVar3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

