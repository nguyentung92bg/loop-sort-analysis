/* IL2CPP: VoodooAdjustProvider$$UseBooster
void VoodooAdjustProvider__UseBooster (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$UseBooster
   void VoodooAdjustProvider__UseBooster (const MethodInfo* method); */

void VoodooAdjustProvider__UseBooster_2251e3c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5f70;
                    /* try { // try from 02351e50 to 02451e5b has its CatchHandler @ 02351e70 */
  if ((bRam0000000004f49b9b & 1) == 0) {
                    /* try { // try from 02351e5c to 02451e83 has its CatchHandler @ 02351e2c */
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b9b = 1;
  }
                    /* catch() { ... } // from try @ 02351e50 with catch @ 02351e70 */
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  iVar3 = CloudPrefsInt__get_Value_24e99c0(lVar7 + 0x28,0);
  CloudPrefsInt__set_Value_24e9a2c(lVar7 + 0x28,iVar3 + 1,0);
  uVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(*(long *)puVar1 + 0xb8) + 0x28,0);
  if (lVar5 != 0) {
    uVar6 = AdjustEventSheet__TryGetBoostersUsed_255718c(lVar5,uVar4,&uStack_28,0);
    uVar2 = uStack_28;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02351ef4 to 02451f1f has its CatchHandler @ 02351ef4
                       catch() { ... } // from try @ 02351ef4 with catch @ 02351ef4
                       catch() { ... } // from try @ 02351f2c with catch @ 02351ef4 */
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

