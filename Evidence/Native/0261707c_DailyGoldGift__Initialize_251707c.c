/* IL2CPP: DailyGoldGift$$Initialize
void DailyGoldGift__Initialize (DailyGoldGift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyGoldGift$$Initialize
   void DailyGoldGift__Initialize (DailyGoldGift_o* __this, const MethodInfo* method); */

void DailyGoldGift__Initialize_251707c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000004f4be22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c93b8);
    bRam0000000004f4be22 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_049c93b8);
                    /* try { // try from 026170cc to 027170df has its CatchHandler @ 0261792c */
    puVar2 = (undefined8 *)(param_1 + 0x28);
    *puVar2 = uVar1;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                   ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026170e4 to 027170eb has its CatchHandler @ 026178ec */
  FUN_021f06a0();
}

