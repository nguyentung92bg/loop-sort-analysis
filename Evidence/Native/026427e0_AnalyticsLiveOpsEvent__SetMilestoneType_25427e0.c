/* IL2CPP: AnalyticsLiveOpsEvent$$SetMilestoneType
void AnalyticsLiveOpsEvent__SetMilestoneType (AnalyticsLiveOpsEvent_o __this, System_String_o* milestoneType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetMilestoneType
   void AnalyticsLiveOpsEvent__SetMilestoneType (AnalyticsLiveOpsEvent_o __this, System_String_o*
   milestoneType, const MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetMilestoneType_25427e0(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long alStack_90 [3];
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bfdf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
                    /* try { // try from 02642810 to 02742813 has its CatchHandler @ 02642960 */
    FUN_021f03f8(PTR_DAT_049ca598);
    bRam0000000004f4bfdf = 1;
  }
  alStack_90[1] = *(long *)(param_1 + 8);
  if (alStack_90[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0264282c to 02742833 has its CatchHandler @ 026429ac */
  pppuStack_70 = *(undefined8 ****)PTR_DAT_049ca598;
  alStack_90[2] = tpidr_el0;
  lStack_68 = *(long *)(alStack_90[2] + 0x28);
  alStack_90[0] = *(long *)(*(long *)(*(long *)PTR_DAT_049b4df8 + 0x20) + 0xc0);
  lVar2 = *(long *)(alStack_90[0] + 0x78);
  uVar9 = (ulong)*(uint *)(*(long *)(alStack_90[0] + 0x70) + 0xfc);
  uVar6 = (ulong)*(uint *)(lVar2 + 0xfc);
  uVar5 = uVar9 + 0xf & 0x1fffffff0;
  plVar11 = (long *)((long)alStack_90 - uVar5);
  lVar7 = (long)plVar11 - uVar5;
  uVar5 = uVar6 + 0xf & 0x1fffffff0;
  plVar10 = (long *)(lVar7 - uVar5);
  lVar8 = (long)plVar10 - uVar5;
  iVar3 = *(int *)(*(long *)(alStack_90[0] + 0x70) + 0x28);
  ppppuVar1 = (undefined8 ****)pppuStack_70;
                    /* try { // try from 02642844 to 0274284f has its CatchHandler @ 026429a8 */
  if (-1 < iVar3) {
    ppppuVar1 = &pppuStack_70;
  }
  pppuStack_78 = param_2;
  func_0x04608620(plVar11,ppppuVar1,uVar9);
  iVar4 = *(int *)(lVar2 + 0x28);
  if (-1 < iVar4) {
    param_2 = &pppuStack_78;
  }
  func_0x04608620(plVar10,param_2,uVar6);
  if (iVar3 < 0) {
    func_0x04608620(lVar7,ppppuVar1,uVar9);
  }
  else {
    lVar7 = *plVar11;
  }
  if (iVar4 < 0) {
    func_0x04608620(lVar8,param_2,uVar6);
  }
  else {
    lVar8 = *plVar10;
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryInsert_282d6e4
            (alStack_90[1],lVar7,lVar8,1,*(undefined8 *)(alStack_90[0] + 0x118));
  if (*(long *)(alStack_90[2] + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

