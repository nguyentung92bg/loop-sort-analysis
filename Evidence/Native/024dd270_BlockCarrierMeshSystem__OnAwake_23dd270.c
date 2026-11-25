/* IL2CPP: BlockCarrierMeshSystem$$OnAwake
void BlockCarrierMeshSystem__OnAwake (BlockCarrierMeshSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$OnAwake
   void BlockCarrierMeshSystem__OnAwake (BlockCarrierMeshSystem_o* __this, const MethodInfo*
   method); */

void BlockCarrierMeshSystem__OnAwake_23dd270(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_049c1418;
  if ((bRam0000000004f4b5c7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1420);
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4b5c7 = 1;
  }
  SystemBase__OnAwake_2555e24(param_1,0);
  BlockCarrierMeshSystem__RegisterRules_23dd318(param_1);
  uVar2 = FUN_024f5544(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x78),uVar2);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar2 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_049c1420);
                    /* try { // try from 024dd2fc to 025dd323 has its CatchHandler @ 024dd518 */
    puVar3 = (undefined8 *)(param_1 + 0x88);
    *puVar3 = uVar2;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                   ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

