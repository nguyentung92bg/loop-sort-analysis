/* IL2CPP: ReviveSystem$$OnAwake
void ReviveSystem__OnAwake (ReviveSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveSystem$$OnAwake
   void ReviveSystem__OnAwake (ReviveSystem_o* __this, const MethodInfo* method); */

void ReviveSystem__OnAwake_24e0b54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 025e0b54 to 026e0b6b has its CatchHandler @ 025e09ac */
  puVar1 = PTR_DAT_049c6750;
                    /* try { // try from 025e0b6c to 026e0b7b has its CatchHandler @ 025e0d8c */
  if ((bRam0000000004f4bc63 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c47e8);
                    /* try { // try from 025e0b84 to 026e0b93 has its CatchHandler @ 025e0da8 */
    FUN_021f03f8(PTR_DAT_049c6750);
    bRam0000000004f4bc63 = 1;
  }
                    /* try { // try from 025e0b98 to 026e0b9f has its CatchHandler @ 025e0d88 */
  SystemBase__OnAwake_2555e24(param_1,0);
                    /* try { // try from 025e0ba4 to 026e0bb3 has its CatchHandler @ 025e0da4 */
  uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
                    /* try { // try from 025e0bb8 to 026e0bbf has its CatchHandler @ 025e0d9c */
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x68),uVar2);
  if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 025e0bc8 to 026e0bd3 has its CatchHandler @ 025e0d64 */
    uVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x50),*(undefined8 *)PTR_DAT_049c47e8);
                    /* try { // try from 025e0bd8 to 026e0be3 has its CatchHandler @ 025e0d5c */
    puVar3 = (undefined8 *)(param_1 + 0x70);
    *puVar3 = uVar2;
                    /* try { // try from 025e0be8 to 026e0bf3 has its CatchHandler @ 025e0d84 */
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

