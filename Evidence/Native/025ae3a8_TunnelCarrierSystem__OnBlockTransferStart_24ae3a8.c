/* IL2CPP: TunnelCarrierSystem$$OnBlockTransferStart
void TunnelCarrierSystem__OnBlockTransferStart (TunnelCarrierSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnBlockTransferStart
   void TunnelCarrierSystem__OnBlockTransferStart (TunnelCarrierSystem_o* __this,
   BlockTransferStartMessage_o m, const MethodInfo* method); */

void TunnelCarrierSystem__OnBlockTransferStart_24ae3a8(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  if ((bRam0000000004f4bb4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69e8);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1568);
    bRam0000000004f4bb4b = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x70) + 0x30) == 0) {
      return;
    }
    if (param_2 != 0) {
      uVar5 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                        (param_2,&uStack_38,*(undefined8 *)PTR_DAT_049c69e8);
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar6 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0);
      Carrier__DisableTransfer_23fe290(param_2,uVar6,0);
      if (param_3 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (param_3,&lStack_68,*(undefined8 *)PTR_DAT_049c14f0);
        puVar4 = PTR_DAT_049c14e8;
        puVar3 = PTR_DAT_049c14e0;
        plStack_48 = plStack_60;
        lStack_50 = lStack_68;
        uStack_40 = uStack_58;
        lStack_68 = 0;
        plStack_60 = &lStack_50;
        while (uVar5 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                 (&lStack_50,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
          lVar9 = *(long *)puVar4;
          lVar7 = *(long *)(lVar9 + 0x20);
          uVar2 = *(ushort *)(lVar7 + 0x135);
          lVar8 = lVar7;
          if ((uVar2 & 1) == 0) {
            lVar8 = FUN_02229718();
            lVar7 = *(long *)(lVar9 + 0x20);
            uVar2 = *(ushort *)(lVar7 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_02229718();
          }
          uVar6 = thunk_FUN_0224e54c(&lStack_50,
                                     *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60
                                    );
          func_0x04608620(&lStack_28,uVar6,uVar1);
          if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lStack_28,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_GameObject__SetActive_3c1ce34(lVar8,1,0);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&lStack_50,*(undefined8 *)PTR_DAT_049c14d8);
        if ((((*(long *)(param_2 + 0x120) != 0) &&
             (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (*(long *)(param_2 + 0x120),0,&lStack_68,*(undefined8 *)PTR_DAT_049c1568),
             lStack_68 != 0)) &&
            (lVar8 = UnityEngine_Component__get_transform_3c18724(lStack_68,0), lVar8 != 0)) &&
           ((lVar8 = UnityEngine_Transform__get_parent_3c2d470(lVar8,0), lVar8 != 0 &&
            (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0), lVar8 != 0)))) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar8,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

