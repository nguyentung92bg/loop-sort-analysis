/* IL2CPP: ParisOffer$$Initialize
void ParisOffer__Initialize (ParisOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ParisOffer$$Initialize
   void ParisOffer__Initialize (ParisOffer_o* __this, const MethodInfo* method); */

void ParisOffer__Initialize_2523ba4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000004f4be88 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9008);
    bRam0000000004f4be88 = 1;
  }
                    /* try { // try from 02623bd4 to 02723bef has its CatchHandler @ 02623a48 */
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c9008);
    puVar2 = (undefined8 *)(param_1 + 0x18);
    *puVar2 = uVar1;
                    /* try { // try from 02623bf0 to 02723bf3 has its CatchHandler @ 02623e0c */
                    /* try { // try from 02623bfc to 02723c07 has its CatchHandler @ 02623e28 */
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                   ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

