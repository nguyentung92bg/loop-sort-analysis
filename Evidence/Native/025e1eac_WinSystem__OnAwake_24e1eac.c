/* IL2CPP: WinSystem$$OnAwake
void WinSystem__OnAwake (WinSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinSystem$$OnAwake
   void WinSystem__OnAwake (WinSystem_o* __this, const MethodInfo* method); */

void WinSystem__OnAwake_24e1eac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_049c1948;
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4bc6e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1948);
    FUN_021f03f8(PTR_DAT_049c1418);
                    /* try { // try from 025e1ef4 to 026e1eff has its CatchHandler @ 025e2224 */
    bRam0000000004f4bc6e = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
                    /* try { // try from 025e1f08 to 026e1f13 has its CatchHandler @ 025e2218 */
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  thunk_FUN_021f190c();
                    /* try { // try from 025e1f28 to 026e1f2f has its CatchHandler @ 025e221c */
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = uVar3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

