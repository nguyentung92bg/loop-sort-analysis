/* IL2CPP: BattlePassSheet.Row$$.ctor
void BattlePassSheet_Row___ctor (BattlePassSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSheet.Row$$.ctor
   void BattlePassSheet_Row___ctor (BattlePassSheet_Row_o* __this, const MethodInfo* method); */

undefined1  [16] BattlePassSheet_Row___ctor_2559930(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049cb460;
  puVar2 = PTR_DAT_049cb458;
  puVar1 = PTR_DAT_049cb450;
                    /* try { // try from 02659948 to 027599ab has its CatchHandler @ 02659fb4 */
  if ((bRam0000000004f4c0d1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb458);
    FUN_021f03f8(PTR_DAT_049cb450);
    FUN_021f03f8(PTR_DAT_049cb460);
    bRam0000000004f4c0d1 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x30),uVar4);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x38),uVar4);
  uVar4 = *(undefined8 *)puVar3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
                    /* try { // try from 026599e8 to 027599f3 has its CatchHandler @ 02659fb8 */
  return auVar5;
}

