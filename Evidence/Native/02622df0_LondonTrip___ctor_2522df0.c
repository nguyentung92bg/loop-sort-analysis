/* IL2CPP: LondonTrip$$.ctor
void LondonTrip___ctor (LondonTrip_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTrip$$.ctor
   void LondonTrip___ctor (LondonTrip_o* __this, const MethodInfo* method); */

undefined1  [16] LondonTrip___ctor_2522df0(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 02622e00 to 02722e0f has its CatchHandler @ 02622e98 */
  if ((bRam0000000004f4be80 & 1) == 0) {
                    /* try { // try from 02622e10 to 02722e1f has its CatchHandler @ 02622e8c */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be80 = 1;
  }
                    /* try { // try from 02622e24 to 02722e37 has its CatchHandler @ 02622e94 */
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
                    /* try { // try from 02622e38 to 02722e67 has its CatchHandler @ 02622c04 */
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 600);
  uVar4 = *(undefined8 *)(lVar2 + 0x270);
  uVar3 = *(undefined8 *)(lVar2 + 0x268);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x260);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x38,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

