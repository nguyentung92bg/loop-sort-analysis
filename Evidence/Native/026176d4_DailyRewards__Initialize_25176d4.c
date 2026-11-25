/* IL2CPP: DailyRewards$$Initialize
void DailyRewards__Initialize (DailyRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewards$$Initialize
   void DailyRewards__Initialize (DailyRewards_o* __this, const MethodInfo* method); */

void DailyRewards__Initialize_25176d4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000004f4be25 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c93b8);
    bRam0000000004f4be25 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c93b8);
    puVar2 = (undefined8 *)(param_1 + 0x40);
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

