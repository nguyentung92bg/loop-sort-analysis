/* IL2CPP: GameDebugger$$.ctor
void GameDebugger___ctor (GameDebugger_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameDebugger$$.ctor
   void GameDebugger___ctor (GameDebugger_o* __this, const MethodInfo* method); */

undefined1  [16] GameDebugger___ctor_2240a2c(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02340a40 to 02440a4b has its CatchHandler @ 02340ad4 */
  if ((bRam0000000004f49b0d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f49b0d = 1;
  }
  lVar2 = *(long *)puVar1;
                    /* try { // try from 02340a64 to 02440a6b has its CatchHandler @ 02340adc */
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02340a8c to 02440a97 has its CatchHandler @ 02340ad0 */
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x3a8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x3b0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x40,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
                    /* try { // try from 02340aa8 to 02440ab3 has its CatchHandler @ 02340ac8 */
  return auVar4;
}

