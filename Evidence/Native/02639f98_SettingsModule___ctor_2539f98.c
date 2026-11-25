/* IL2CPP: SettingsModule$$.ctor
void SettingsModule___ctor (SettingsModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsModule$$.ctor
   void SettingsModule___ctor (SettingsModule_o* __this, const MethodInfo* method); */

undefined1  [16] SettingsModule___ctor_2539f98(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02639fa8 to 02739fb3 has its CatchHandler @ 0263a180 */
  if ((bRam0000000004f4bf7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bf7d = 1;
  }
  lVar2 = *(long *)puVar1;
                    /* try { // try from 02639fd0 to 02739fdb has its CatchHandler @ 0263a17c */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02639fec to 02739ff7 has its CatchHandler @ 0263a178 */
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x2d8);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x2e0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x40,0);
                    /* try { // try from 0263a010 to 0273a01b has its CatchHandler @ 0263a16c */
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2e8);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2f0);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x50,0);
                    /* try { // try from 0263a02c to 0273a037 has its CatchHandler @ 0263a168 */
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2f8);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x300);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x60,0);
                    /* try { // try from 0263a03c to 0273a043 has its CatchHandler @ 0263a238 */
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x308);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x310);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x70,0);
                    /* try { // try from 0263a06c to 0273a073 has its CatchHandler @ 0263a254 */
  uVar3 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x318);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 800);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x80,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

