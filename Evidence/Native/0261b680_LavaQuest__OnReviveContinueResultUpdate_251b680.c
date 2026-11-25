/* IL2CPP: LavaQuest$$OnReviveContinueResultUpdate
void LavaQuest__OnReviveContinueResultUpdate (LavaQuest_o* __this, ReviveContinueResultUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$OnReviveContinueResultUpdate
   void LavaQuest__OnReviveContinueResultUpdate (LavaQuest_o* __this,
   ReviveContinueResultUpdateMessage_o m, const MethodInfo* method); */

void LavaQuest__OnReviveContinueResultUpdate_251b680
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar4 = PTR_DAT_049b5310;
                    /* try { // try from 0261b68c to 0271b6a3 has its CatchHandler @ 0261ba00 */
  if ((bRam0000000004f4be43 & 1) == 0) {
                    /* try { // try from 0261b6b0 to 0271b6b3 has its CatchHandler @ 0261b9fc */
    FUN_021f03f8(PTR_DAT_049c9560);
                    /* try { // try from 0261b6b4 to 0271b7bb has its CatchHandler @ 0261a990 */
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be43 = 1;
  }
  puVar5 = PTR_DAT_049c9560;
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar4;
  }
  uVar7 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                    (*(long *)(lVar6 + 0xb8) + 0x628,*(undefined8 *)puVar5);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                    (param_2,0x950a4e36,0);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) ||
     (pppuStack_70 = (undefined8 ***)
                     StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                               (*(long *)(lVar6 + 0x20),0), param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)PTR_DAT_049c3e40;
  lVar6 = tpidr_el0;
  lStack_68 = *(long *)(lVar6 + 0x28);
  lVar12 = *(long *)(*(long *)(lVar8 + 0x20) + 0xc0);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar12 + 0x48) + 0xfc);
  uVar7 = uVar10 + 0xf & 0x1fffffff0;
  plVar9 = (long *)((long)&pppuStack_70 - uVar7);
  lVar11 = (long)plVar9 - uVar7;
  plVar13 = *(long **)(param_3 + 0x10);
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  if (plVar13 == (long *)0x0) {
    if (*(long *)(lVar6 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar3 = *(uint *)(param_3 + 0x18);
    if (uVar3 < *(uint *)(plVar13 + 3)) {
      *(uint *)(param_3 + 0x18) = uVar3 + 1;
      ppppuVar1 = (undefined8 ****)pppuStack_70;
      if (-1 < *(int *)(*(long *)(lVar12 + 0x48) + 0x28)) {
        ppppuVar1 = &pppuStack_70;
      }
      func_0x04608620(plVar9,ppppuVar1,uVar10);
      func_0x04608650((long)plVar13 + (ulong)*(uint *)(*plVar13 + 0x104) * (long)(int)uVar3 + 0x20,
                      ppppuVar1,uVar10);
      lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02229718();
      }
      if (*(uint *)(plVar13 + 3) <= uVar3) {
        if (*(long *)(lVar6 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar8,(long)plVar13 +
                         (ulong)*(uint *)(*plVar13 + 0x104) * (long)(int)uVar3 + 0x20,plVar9);
    }
    else {
      iVar2 = *(int *)(*(long *)(lVar12 + 0x48) + 0x28);
      ppppuVar1 = (undefined8 ****)pppuStack_70;
      if (-1 < iVar2) {
        ppppuVar1 = &pppuStack_70;
      }
      func_0x04608620(plVar9,ppppuVar1,uVar10);
      if (iVar2 < 0) {
        func_0x04608620(lVar11,ppppuVar1,uVar10);
      }
      else {
        lVar11 = *plVar9;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (param_3,lVar11,*(undefined8 *)(lVar12 + 0x70));
    }
    if (*(long *)(lVar6 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

