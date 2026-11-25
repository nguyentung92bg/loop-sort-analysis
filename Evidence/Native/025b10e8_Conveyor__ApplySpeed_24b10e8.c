/* IL2CPP: Conveyor$$ApplySpeed
void Conveyor__ApplySpeed (Conveyor_o* __this, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$ApplySpeed
   void Conveyor__ApplySpeed (Conveyor_o* __this, float speed, const MethodInfo* method); */

void Conveyor__ApplySpeed_24b10e8(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined4 *)(param_2 + 0x140) = param_1;
  if ((bRam0000000004f4bb61 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6ac8);
    FUN_021f03f8(PTR_DAT_049c6ad0);
    FUN_021f03f8(PTR_DAT_049c6ad8);
    FUN_021f03f8(PTR_DAT_049c6ae0);
    bRam0000000004f4bb61 = 1;
  }
  puVar5 = PTR_DAT_049c6ad8;
  puVar4 = PTR_DAT_049c6ad0;
  puVar3 = PTR_DAT_049c6ac8;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_2 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
            (*(long *)(param_2 + 0x120),&uStack_50,*(undefined8 *)PTR_DAT_049c6ae0);
  while (uVar6 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                           (&uStack_50,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
    lVar10 = *(long *)puVar5;
    lVar7 = *(long *)(lVar10 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar8 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_50,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar9,uVar1);
    Conveyor__UpdateFollower_24b12bc(*(undefined4 *)(param_2 + 0x140),param_2,uStack_38);
  }
  System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
            (&uStack_50,*(undefined8 *)puVar3);
  return;
}

