/* IL2CPP: ElevatorHoleSystem$$.ctor
void ElevatorHoleSystem___ctor (ElevatorHoleSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHoleSystem$$.ctor
   void ElevatorHoleSystem___ctor (ElevatorHoleSystem_o* __this, const MethodInfo* method); */

undefined1  [16] ElevatorHoleSystem___ctor_24a4340(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = PTR_DAT_049c6668;
  puVar3 = PTR_DAT_049c6660;
  puVar2 = PTR_DAT_049c6658;
  puVar1 = PTR_DAT_049c6650;
                    /* try { // try from 025a4358 to 026a435b has its CatchHandler @ 025a4364 */
                    /* catch() { ... } // from try @ 025a4358 with catch @ 025a4364 */
                    /* try { // try from 025a4368 to 026a436f has its CatchHandler @ 025a4378 */
                    /* try { // try from 025a4370 to 026a437b has its CatchHandler @ 025a41d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a4368 with catch @ 025a4378
                        */
  if ((bRam0000000004f4bafb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6668);
    FUN_021f03f8(PTR_DAT_049c6660);
    FUN_021f03f8(PTR_DAT_049c6658);
    FUN_021f03f8(PTR_DAT_049c6650);
    bRam0000000004f4bafb = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x98),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa0),uVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

