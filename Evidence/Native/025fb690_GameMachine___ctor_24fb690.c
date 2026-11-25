/* IL2CPP: GameMachine$$.ctor
void GameMachine___ctor (GameMachine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameMachine$$.ctor
   void GameMachine___ctor (GameMachine_o* __this, const MethodInfo* method); */

void GameMachine___ctor_24fb690(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined1 auStack_6c [4];
  long lStack_68;
  
  puVar2 = PTR_DAT_049d1580;
  if ((bRam0000000004f5c3a6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a39a28);
    FUN_021f03f8(PTR_DAT_049d1580);
    bRam0000000004f5c3a6 = 1;
  }
  puVar3 = PTR_DAT_04a39a28;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = *(long *)puVar3;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(*(long *)(lVar5 + 0x20) + 0xc0);
  lVar9 = *(long *)(lVar8 + 0x30);
  uVar13 = (ulong)*(uint *)(lVar9 + 0xfc);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar8 + 0x58) + 0xfc);
  uVar7 = uVar13 + 0xf & 0x1fffffff0;
  plVar6 = (long *)((long)&lStack_80 - uVar7);
  lVar12 = (long)plVar6 - uVar7;
  lVar11 = lVar12 - (uVar10 + 0xf & 0x1fffffff0);
  func_0x04608670(plVar6,0,uVar13);
  func_0x04608670(lVar11,0,uVar10);
  if (*(int *)(lVar9 + 0x28) < 0) {
    func_0x04608670(lVar12,0,uVar13);
  }
  else {
    lVar12 = *plVar6;
  }
  auStack_6c[0] = 0;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (lVar11,lVar12,auStack_6c,*(undefined8 *)(lVar8 + 0x60));
  FUN_021f0420(param_1,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80) + 0x60,lVar11,
               uVar10);
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar4 = thunk_FUN_0222ca34();
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
  FUN_0200ffd0(param_1,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80) + 0xc0,uVar4);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  plVar6 = *(long **)(*(long *)(lVar5 + 0x20) + 0xc0);
  lVar8 = plVar6[0x10];
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
    plVar6 = *(long **)(*(long *)(lVar5 + 0x20) + 0xc0);
  }
  FUN_0200ffd0(param_1,*(long *)(*plVar6 + 0x80) + 0x100,**(undefined8 **)(lVar8 + 0xb8));
  plVar6 = *(long **)(*(long *)(lVar5 + 0x20) + 0xc0);
  lVar8 = plVar6[0x10];
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
    plVar6 = *(long **)(*(long *)(lVar5 + 0x20) + 0xc0);
  }
  FUN_0200ffd0(param_1,*(long *)(*plVar6 + 0x80) + 0x120,
               *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8));
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x78) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar4 = thunk_FUN_0222ca34();
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x98));
  FUN_0200ffd0(param_1,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80) + 0x140,uVar4);
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x90) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar4 = thunk_FUN_0222ca34();
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0xa0));
  FUN_0200ffd0(param_1,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80) + 0x160,uVar4);
  UnityHFSM_StateBase___Il2CppFullySharedGenericType____ctor_29a65c4
            (param_1,uStack_78 & 1,uStack_74 & 1,
             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0xa8));
  FUN_0201359c(param_1,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80) + 0xa0,
               uStack_70 & 1);
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

