/* IL2CPP: SandFlowSystem$$IntakeSignature
int32_t SandFlowSystem__IntakeSignature (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$IntakeSignature
   int32_t SandFlowSystem__IntakeSignature (SandFlowSystem_o* __this, const MethodInfo* method); */

int SandFlowSystem__IntakeSignature_24ce244(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4bbe8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7358);
    FUN_021f03f8(PTR_DAT_049c7360);
    FUN_021f03f8(PTR_DAT_049c7368);
    FUN_021f03f8(PTR_DAT_049c7378);
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4bbe8 = 1;
  }
  puVar6 = PTR_DAT_049c7368;
  puVar5 = PTR_DAT_049c7360;
  puVar4 = PTR_DAT_049c7358;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x260) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x260),&lStack_90,*(undefined8 *)PTR_DAT_049c7378);
  iVar11 = 0x11;
  uStack_68 = uStack_88;
  lStack_70 = lStack_90;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&lStack_70,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_70,*(undefined8 *)puVar4);
      return iVar11;
    }
    lVar12 = *(long *)puVar6;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar3 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar3 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar3 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar3 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&lStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_90,uVar10,uVar1);
    lVar9 = lStack_90;
    if (lStack_90 == 0) break;
    bVar2 = *(byte *)(lStack_90 + 0x1b0);
    uVar7 = Carrier__CanBeginTransferEnter_23fad1c(lStack_90,0);
    uVar13 = 2;
    if ((uVar7 & 1) == 0) {
      uVar13 = 0;
    }
    lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar8,0);
    lVar9 = *(long *)(lVar9 + 0x1e0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar14 = 4;
    if ((uVar7 & 1) == 0) {
      iVar14 = 0;
    }
    iVar11 = (uVar13 | bVar2) + iVar11 * 0x1f + iVar14 + *(int *)(lVar9 + 0x18) * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

