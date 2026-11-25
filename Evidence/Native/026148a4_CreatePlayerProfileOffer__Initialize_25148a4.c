/* IL2CPP: CreatePlayerProfileOffer$$Initialize
void CreatePlayerProfileOffer__Initialize (CreatePlayerProfileOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CreatePlayerProfileOffer$$Initialize
   void CreatePlayerProfileOffer__Initialize (CreatePlayerProfileOffer_o* __this, const MethodInfo*
   method); */

void CreatePlayerProfileOffer__Initialize_25148a4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 026148b8 to 027148c7 has its CatchHandler @ 02614bf4 */
  if ((bRam0000000004f4be08 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9308);
    bRam0000000004f4be08 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 026148e8 to 027148f3 has its CatchHandler @ 02614bf8 */
    uVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_049c9308);
                    /* try { // try from 026148f4 to 02714913 has its CatchHandler @ 02614628 */
    puVar2 = (undefined8 *)(param_1 + 0x38);
    *puVar2 = uVar1;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                   ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

