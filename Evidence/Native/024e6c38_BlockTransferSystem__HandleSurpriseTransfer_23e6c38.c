/* IL2CPP: BlockTransferSystem$$HandleSurpriseTransfer
void BlockTransferSystem__HandleSurpriseTransfer (BlockTransferSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HandleSurpriseTransfer
   void BlockTransferSystem__HandleSurpriseTransfer (BlockTransferSystem_o* __this,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void BlockTransferSystem__HandleSurpriseTransfer_23e6c38(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f4b5fa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1ac8);
    bRam0000000004f4b5fa = 1;
  }
  puVar3 = PTR_DAT_049c1558;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar12 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_2,iVar12,&lStack_88,*(undefined8 *)puVar3);
        if (lStack_88 == 0) goto LAB_024e6e68;
        uVar7 = Block__TryGetFeature_23dc908(lStack_88,0x20,&uStack_58);
        if ((uVar7 & 1) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (param_2,&lStack_88,*(undefined8 *)PTR_DAT_049c14f0);
          puVar6 = PTR_DAT_049c1ac8;
          puVar5 = PTR_DAT_049c14e8;
          puVar4 = PTR_DAT_049c14e0;
          puVar3 = PTR_DAT_049c1410;
          uStack_68 = plStack_80;
          lStack_70 = lStack_88;
          uStack_60 = uStack_78;
          plStack_80 = &lStack_70;
          lStack_88 = 0;
          while( true ) {
            uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&lStack_70,*(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&lStack_70,*(undefined8 *)PTR_DAT_049c14d8);
              return;
            }
            lVar11 = *(long *)puVar5;
            lVar8 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar8 + 0x135);
            lVar9 = lVar8;
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_02229718();
              lVar8 = *(long *)(lVar11 + 0x20);
              uVar2 = *(ushort *)(lVar8 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
            if ((uVar2 & 1) == 0) {
              lVar8 = FUN_02229718();
            }
            uVar10 = thunk_FUN_0224e54c(&lStack_70,
                                        *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_48,uVar10,uVar1);
            lVar9 = lStack_48;
            lVar8 = *(long *)(param_1 + 0xb0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar9 == 0) break;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_024f581c(lVar8,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_024e6e68;
        iVar12 = *(int *)(*(long *)(param_1 + 0x48) + 0x154) + iVar12;
      } while (iVar12 < *(int *)(param_2 + 0x18));
    }
    return;
  }
LAB_024e6e68:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

