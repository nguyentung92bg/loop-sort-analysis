/* IL2CPP: AnalyticsLiveOpsEvent$$SetItemName
void AnalyticsLiveOpsEvent__SetItemName (AnalyticsLiveOpsEvent_o __this, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsLiveOpsEvent$$SetItemName
   void AnalyticsLiveOpsEvent__SetItemName (AnalyticsLiveOpsEvent_o __this, int32_t item, const
   MethodInfo* method); */

void AnalyticsLiveOpsEvent__SetItemName_2542734(long param_1,undefined4 param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long alStack_90 [3];
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
                    /* try { // try from 02642734 to 02742747 has its CatchHandler @ 026429e8 */
  puVar5 = PTR_DAT_049b6110;
                    /* try { // try from 0264274c to 02742753 has its CatchHandler @ 026429e4 */
                    /* try { // try from 02642758 to 0274275f has its CatchHandler @ 026429bc */
  if ((bRam0000000004f4bfde & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4df8);
                    /* try { // try from 0264276c to 02742773 has its CatchHandler @ 026429e0 */
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 02642778 to 0274277f has its CatchHandler @ 026429b4 */
    FUN_021f03f8(PTR_DAT_049bf540);
                    /* try { // try from 02642784 to 0274279f has its CatchHandler @ 026429f0 */
    bRam0000000004f4bfde = 1;
  }
  lVar8 = *(long *)(param_1 + 8);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  ppppuVar6 = (undefined8 ****)Extensions__ToAnalyticsName_24e74e4(param_2,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026427dc to 027427f3 has its CatchHandler @ 026429b0 */
    FUN_021f06a0();
  }
                    /* try { // try from 026427b8 to 027427c3 has its CatchHandler @ 02642964 */
  pppuStack_70 = *(undefined8 ****)PTR_DAT_049bf540;
  alStack_90[2] = tpidr_el0;
  lStack_68 = *(long *)(alStack_90[2] + 0x28);
  alStack_90[0] = *(long *)(*(long *)(*(long *)PTR_DAT_049b4df8 + 0x20) + 0xc0);
  lVar2 = *(long *)(alStack_90[0] + 0x78);
  uVar12 = (ulong)*(uint *)(*(long *)(alStack_90[0] + 0x70) + 0xfc);
  uVar9 = (ulong)*(uint *)(lVar2 + 0xfc);
  uVar7 = uVar12 + 0xf & 0x1fffffff0;
  plVar14 = (long *)((long)alStack_90 - uVar7);
  lVar10 = (long)plVar14 - uVar7;
  uVar7 = uVar9 + 0xf & 0x1fffffff0;
  plVar13 = (long *)(lVar10 - uVar7);
  lVar11 = (long)plVar13 - uVar7;
  iVar3 = *(int *)(*(long *)(alStack_90[0] + 0x70) + 0x28);
  ppppuVar1 = (undefined8 ****)pppuStack_70;
  if (-1 < iVar3) {
    ppppuVar1 = &pppuStack_70;
  }
  alStack_90[1] = lVar8;
  pppuStack_78 = ppppuVar6;
  func_0x04608620(plVar14,ppppuVar1,uVar12);
  iVar4 = *(int *)(lVar2 + 0x28);
  if (-1 < iVar4) {
    ppppuVar6 = &pppuStack_78;
  }
  func_0x04608620(plVar13,ppppuVar6,uVar9);
  if (iVar3 < 0) {
    func_0x04608620(lVar10,ppppuVar1,uVar12);
  }
  else {
    lVar10 = *plVar14;
  }
  if (iVar4 < 0) {
    func_0x04608620(lVar11,ppppuVar6,uVar9);
  }
  else {
    lVar11 = *plVar13;
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryInsert_282d6e4
            (alStack_90[1],lVar10,lVar11,1,*(undefined8 *)(alStack_90[0] + 0x118));
  if (*(long *)(alStack_90[2] + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

