/* IL2CPP: HomeLiveOpsSheet.Slot$$IsLocked
bool HomeLiveOpsSheet_Slot__IsLocked (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet.Slot$$IsLocked
   bool HomeLiveOpsSheet_Slot__IsLocked (HomeLiveOpsSheet_Slot_o* __this, const MethodInfo* method);
    */

byte HomeLiveOpsSheet_Slot__IsLocked_25616a4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
                    /* try { // try from 026616a8 to 027616b7 has its CatchHandler @ 02661b84 */
  if ((bRam0000000004f4c123 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 026616c8 to 027616d3 has its CatchHandler @ 02661b90 */
    bRam0000000004f4c123 = 1;
  }
  uVar5 = LiveOpsDevFilter__get_IsActive_252260c(0);
  puVar2 = PTR_DAT_049b5310;
                    /* try { // try from 026616d8 to 027616f7 has its CatchHandler @ 02661bb4 */
  if ((uVar5 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    lVar7 = *(long *)PTR_DAT_049b5310;
                    /* try { // try from 02661708 to 02761713 has its CatchHandler @ 02661b74 */
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar2;
    }
                    /* try { // try from 02661718 to 02761737 has its CatchHandler @ 02661bbc */
    iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x60,0);
    bVar3 = iVar4 + 1 < iVar1;
  }
  else {
    uVar6 = HomeLiveOpsSheet_Slot__GetCurrent_25613cc(param_1);
    bVar3 = LiveOpsDevFilter__IsAllowed_2522614(uVar6,0);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3 & 1;
}

