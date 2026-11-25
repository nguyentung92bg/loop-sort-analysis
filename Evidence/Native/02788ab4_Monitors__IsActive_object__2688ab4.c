/* IL2CPP: Monitors$$IsActive<object>
bool Monitors__IsActive_object_ (Monitors_o* __this, const MethodInfo_2688AB4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$IsActive<object>
   bool Monitors__IsActive_object_ (Monitors_o* __this, const MethodInfo_2688AB4* method); */

void Monitors__IsActive_object__2688ab4(long param_1,long param_2)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_021f03f8(PTR_DAT_049cbfd8);
    puVar5 = *(undefined8 **)(param_2 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_02229774(param_2);
      puVar5 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  pppuStack_60 = (undefined8 ***)Monitors__Get_object__26889d0(param_1,*puVar5);
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_049cbfd8 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar12 + 0x48);
  uVar9 = (ulong)*(uint *)(lVar7 + 0xfc);
  uVar8 = uVar9 + 0xf & 0x1fffffff0;
  plVar11 = (long *)((long)&pppuStack_60 - uVar8);
  lVar10 = (long)plVar11 - uVar8;
  if (*(int *)(lVar6 + 0x18) == 0) {
    bVar3 = false;
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x28);
    ppppuVar1 = (undefined8 ****)pppuStack_60;
    if (-1 < iVar4) {
      ppppuVar1 = &pppuStack_60;
    }
    func_0x04608620(plVar11,ppppuVar1,uVar9);
    if (iVar4 < 0) {
      func_0x04608620(lVar10,ppppuVar1,uVar9);
    }
    else {
      lVar10 = *plVar11;
    }
    iVar4 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                      (lVar6,lVar10,*(undefined8 *)(lVar12 + 0xd0));
    bVar3 = iVar4 != -1;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}

