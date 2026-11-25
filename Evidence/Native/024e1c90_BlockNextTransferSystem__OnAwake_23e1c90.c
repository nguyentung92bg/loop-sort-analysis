/* IL2CPP: BlockNextTransferSystem$$OnAwake
void BlockNextTransferSystem__OnAwake (BlockNextTransferSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockNextTransferSystem$$OnAwake
   void BlockNextTransferSystem__OnAwake (BlockNextTransferSystem_o* __this, const MethodInfo*
   method); */

void BlockNextTransferSystem__OnAwake_23e1c90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_049c16f0;
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4b5dd & 1) == 0) {
                    /* try { // try from 024e1cc0 to 025e1d07 has its CatchHandler @ 024e22a0 */
    FUN_021f03f8(PTR_DAT_049c1418);
    FUN_021f03f8(PTR_DAT_049c16f0);
    bRam0000000004f4b5dd = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_021f190c();
                    /* try { // try from 024e1d08 to 025e1d53 has its CatchHandler @ 024e19cc */
  uVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  puVar4 = (undefined8 *)(param_1 + 0x68);
  *puVar4 = uVar3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

