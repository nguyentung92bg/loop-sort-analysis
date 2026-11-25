/* IL2CPP: DataFlags$$Contains
bool DataFlags__Contains (DataFlags_o __this, System_String_o* flag, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DataFlags$$Contains
   bool DataFlags__Contains (DataFlags_o __this, System_String_o* flag, const MethodInfo* method);
    */

void DataFlags__Contains_24fb124(long *param_1,undefined8 ****param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
                    /* try { // try from 025fb13c to 026fb143 has its CatchHandler @ 025fb22c */
  if ((bRam0000000004f4bd48 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bef48);
    bRam0000000004f4bd48 = 1;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_049bef48 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar10 + 0x48);
  uVar7 = (ulong)*(uint *)(lVar5 + 0xfc);
  uVar6 = uVar7 + 0xf & 0x1fffffff0;
  plVar9 = (long *)((long)&pppuStack_60 - uVar6);
  lVar8 = (long)plVar9 - uVar6;
  pppuStack_60 = param_2;
  if (*(int *)(lVar4 + 0x18) == 0) {
    bVar2 = false;
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x28);
    if (-1 < iVar3) {
      param_2 = &pppuStack_60;
    }
    func_0x04608620(plVar9,param_2,uVar7);
    if (iVar3 < 0) {
      func_0x04608620(lVar8,param_2,uVar7);
    }
    else {
      lVar8 = *plVar9;
    }
    iVar3 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                      (lVar4,lVar8,*(undefined8 *)(lVar10 + 0xd0));
    bVar2 = iVar3 != -1;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

