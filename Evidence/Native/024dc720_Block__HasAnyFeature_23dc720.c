/* IL2CPP: Block$$HasAnyFeature
bool Block__HasAnyFeature (Block_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$HasAnyFeature
   bool Block__HasAnyFeature (Block_o* __this, const MethodInfo* method); */

uint Block__HasAnyFeature_23dc720(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b5bd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13b8);
    FUN_021f03f8(PTR_DAT_049c13c0);
    FUN_021f03f8(PTR_DAT_049c13c8);
    FUN_021f03f8(PTR_DAT_049c13d0);
    FUN_021f03f8(PTR_DAT_049c13d8);
    bRam0000000004f4b5bd = 1;
  }
  puVar6 = PTR_DAT_049c13d0;
  puVar5 = PTR_DAT_049c13c8;
  puVar4 = PTR_DAT_049c13c0;
  puVar3 = PTR_DAT_049c13b8;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0xf0),&uStack_70,*(undefined8 *)PTR_DAT_049c13d8);
  do {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) break;
    lVar12 = *(long *)puVar5;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(auStack_50,uVar10,uVar1);
    if (*(long *)(param_1 + 0x170) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                       (*(long *)(param_1 + 0x170),auStack_50,*(undefined8 *)puVar6);
  } while ((uVar11 & 1) != 0);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_70,*(undefined8 *)puVar3);
  return uVar7 & 1;
}

