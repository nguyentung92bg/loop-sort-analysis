/* IL2CPP: LoopSortSaveStore$$HasKey
bool LoopSortSaveStore__HasKey (LoopSortSaveStore_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortSaveStore$$HasKey
   bool LoopSortSaveStore__HasKey (LoopSortSaveStore_o* __this, System_String_o* key, const
   MethodInfo* method); */

uint LoopSortSaveStore__HasKey_223fa14(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
  if ((bRam0000000004f49afb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b51d0);
    bRam0000000004f49afb = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c674 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cfae0,param_2,*(undefined8 *)PTR_DAT_049b51d0);
    FUN_021f03f8(PTR_DAT_049b4228);
    FUN_021f03f8(PTR_DAT_049badc0);
    FUN_021f03f8(PTR_DAT_049cfae8);
    bRam0000000004f4c674 = 1;
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                      (*(long *)(lVar5 + 0x30),param_2,*(undefined8 *)PTR_DAT_049b4228);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    if (*(long *)(lVar5 + 0x38) != 0) {
      uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                        (*(long *)(lVar5 + 0x38),param_2,*(undefined8 *)PTR_DAT_049badc0);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      if (*(long *)(lVar5 + 0x40) != 0) {
        uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                          (*(long *)(lVar5 + 0x40),param_2,*(undefined8 *)PTR_DAT_049cfae0);
        if ((uVar6 & 1) != 0) {
          return 1;
        }
        lVar5 = *(long *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          lVar3 = tpidr_el0;
          lStack_58 = *(long *)(lVar3 + 0x28);
          lVar11 = *(long *)(*(long *)(*(long *)PTR_DAT_049cfae8 + 0x20) + 0xc0);
          lVar7 = *(long *)(lVar11 + 0x70);
          uVar8 = (ulong)*(uint *)(lVar7 + 0xfc);
          uVar6 = uVar8 + 0xf & 0x1fffffff0;
          plVar10 = (long *)((long)&pppuStack_60 - uVar6);
          lVar9 = (long)plVar10 - uVar6;
          iVar2 = *(int *)(lVar7 + 0x28);
          ppppuVar1 = param_2;
          if (-1 < iVar2) {
            ppppuVar1 = &pppuStack_60;
          }
          pppuStack_60 = param_2;
          func_0x04608620(plVar10,ppppuVar1,uVar8);
          if (iVar2 < 0) {
            func_0x04608620(lVar9,ppppuVar1,uVar8);
          }
          else {
            lVar9 = *plVar10;
          }
          uVar4 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___FindEntry_282cdbc
                            (lVar5,lVar9,*(undefined8 *)(lVar11 + 0x110));
          if (*(long *)(lVar3 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return ~uVar4 >> 0x1f;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

