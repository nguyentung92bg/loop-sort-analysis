/* IL2CPP: LoopSortSaveStore$$SetString
void LoopSortSaveStore__SetString (LoopSortSaveStore_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$SetString
   void LoopSortSaveStore__SetString (LoopSortSaveStore_o* __this, System_String_o* key,
   System_String_o* value, const MethodInfo* method); */

void LoopSortSaveStore__SetString_223fb20
               (long param_1,undefined8 ****param_2,undefined8 ****param_3)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  int iVar3;
  long lVar4;
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
  
  if ((bRam0000000004f49afe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51e8);
    bRam0000000004f49afe = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c66d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9d88,param_2,param_3,*(undefined8 *)PTR_DAT_049b51e8);
    bRam0000000004f4c66d = 1;
  }
  alStack_90[1] = *(long *)(lVar4 + 0x30);
  if (alStack_90[1] != 0) {
    alStack_90[2] = tpidr_el0;
    lStack_68 = *(long *)(alStack_90[2] + 0x28);
    alStack_90[0] = *(long *)(*(long *)(*(long *)PTR_DAT_049b9d88 + 0x20) + 0xc0);
    lVar4 = *(long *)(alStack_90[0] + 0x78);
    uVar9 = (ulong)*(uint *)(*(long *)(alStack_90[0] + 0x70) + 0xfc);
    uVar6 = (ulong)*(uint *)(lVar4 + 0xfc);
    uVar5 = uVar9 + 0xf & 0x1fffffff0;
    plVar11 = (long *)((long)alStack_90 - uVar5);
    lVar7 = (long)plVar11 - uVar5;
    uVar5 = uVar6 + 0xf & 0x1fffffff0;
    plVar10 = (long *)(lVar7 - uVar5);
    lVar8 = (long)plVar10 - uVar5;
    iVar2 = *(int *)(*(long *)(alStack_90[0] + 0x70) + 0x28);
    ppppuVar1 = param_2;
    if (-1 < iVar2) {
      ppppuVar1 = &pppuStack_70;
    }
    pppuStack_78 = param_3;
    pppuStack_70 = param_2;
    func_0x04608620(plVar11,ppppuVar1,uVar9);
    iVar3 = *(int *)(lVar4 + 0x28);
    if (-1 < iVar3) {
      param_3 = &pppuStack_78;
    }
    func_0x04608620(plVar10,param_3,uVar6);
    if (iVar2 < 0) {
      func_0x04608620(lVar7,ppppuVar1,uVar9);
    }
    else {
      lVar7 = *plVar11;
    }
    if (iVar3 < 0) {
      func_0x04608620(lVar8,param_3,uVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

