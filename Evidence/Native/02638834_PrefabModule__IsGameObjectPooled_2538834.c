/* IL2CPP: PrefabModule$$IsGameObjectPooled
bool PrefabModule__IsGameObjectPooled (PrefabModule_o* __this, UnityEngine_GameObject_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabModule$$IsGameObjectPooled
   bool PrefabModule__IsGameObjectPooled (PrefabModule_o* __this, UnityEngine_GameObject_o*
   instance, const MethodInfo* method); */

uint PrefabModule__IsGameObjectPooled_2538834(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 ***pppuStack_60;
  long lStack_58;
  
  if ((bRam0000000004f4bf6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca310);
    bRam0000000004f4bf6c = 1;
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(*(long *)(*(long *)PTR_DAT_049ca310 + 0x20) + 0xc0);
  lVar6 = *(long *)(lVar11 + 0x70);
  uVar8 = (ulong)*(uint *)(lVar6 + 0xfc);
  uVar7 = uVar8 + 0xf & 0x1fffffff0;
  plVar10 = (long *)((long)&pppuStack_60 - uVar7);
  lVar9 = (long)plVar10 - uVar7;
  iVar2 = *(int *)(lVar6 + 0x28);
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
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return ~uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

