/* IL2CPP: TunnelCarrierSystem$$OnCarrierBlockCreateComplete
void TunnelCarrierSystem__OnCarrierBlockCreateComplete (TunnelCarrierSystem_o* __this, CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnCarrierBlockCreateComplete
   void TunnelCarrierSystem__OnCarrierBlockCreateComplete (TunnelCarrierSystem_o* __this,
   CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method); */

void TunnelCarrierSystem__OnCarrierBlockCreateComplete_24ae13c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((bRam0000000004f4bb50 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69d8);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c22d8);
    FUN_021f03f8(PTR_DAT_049c69e0);
    bRam0000000004f4bb50 = 1;
  }
  puVar5 = PTR_DAT_049c69e0;
  puVar4 = PTR_DAT_049c22d8;
  puVar3 = PTR_DAT_049c1558;
  uVar9 = *(ulong *)(param_4 + 0x70);
  uStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  if (uVar9 != 0) {
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_88 = (ulong)*(uint *)(uVar9 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_80,0);
    lStack_78 = *(long *)(uVar9 + 0x28);
    thunk_FUN_021f190c(&lStack_78);
    lStack_98 = lStack_80;
    uStack_a0 = lStack_88;
    lStack_90 = lStack_78;
    while( true ) {
      iVar8 = (int)uStack_a0 + -1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar8);
      if (iVar8 < 0) {
        uStack_a0._4_4_ = uStack_a0._4_4_ - 1;
        if ((int)uStack_a0._4_4_ < 0) {
          return;
        }
        lVar10 = *(long *)(lStack_90 + (ulong)uStack_a0._4_4_ * 8 + 0x20);
        lStack_98 = *(long *)(lVar10 + 0x18);
        uStack_a0._0_4_ = iVar8;
        thunk_FUN_021f190c((ulong)&uStack_a0 | 8);
        iVar8 = *(int *)(lVar10 + 0x30) + -1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar8);
      }
      if (*(long *)(param_4 + 0x60) == 0) break;
      uVar11 = *(undefined8 *)(lStack_98 + (long)iVar8 * 8 + 0x20);
      plVar6 = (long *)FUN_024f6008(*(long *)(param_4 + 0x60),uVar11,*(undefined8 *)puVar4);
      lVar10 = *plVar6;
      if ((lVar10 == 0) || (lVar12 = *(long *)(lVar10 + 0x1e0), lVar12 == 0)) break;
      if (0 < *(int *)(lVar12 + 0x18)) {
        iVar8 = 0;
        do {
          if (*(long *)(param_4 + 0x58) == 0) goto LAB_025ae3a4;
          iVar1 = *(int *)(*(long *)(param_4 + 0x58) + 0x154);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar8 / iVar1;
          }
          auVar14 = Carrier__GetBlockCoordinate_2408bc0(lVar10,iVar8 - iVar2 * iVar1,0);
          uVar9 = uVar9 & 0xffffffff00000000 | auVar14._8_8_ & 0xffffffff;
          uVar13 = Carrier__CoordinateToLocalPosition_2408cbc(lVar10,auVar14._0_8_,uVar9,0);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar12,iVar8,&lStack_88,*(undefined8 *)puVar3);
          if ((lStack_88 == 0) ||
             (lVar7 = UnityEngine_Component__get_transform_3c18724(lStack_88,0), lVar7 == 0))
          goto LAB_025ae3a4;
          UnityEngine_Transform__set_localPosition_3c2c450(uVar13,param_2,param_3,lVar7,0);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar12 + 0x18));
      }
      if (*(long *)(param_4 + 0x68) == 0) break;
      plVar6 = (long *)FUN_024f6008(*(long *)(param_4 + 0x68),uVar11,*(undefined8 *)puVar5);
      lVar12 = *plVar6;
      TunnelCarrierSystem__EnableNextTransferBlocks_24ae6e0(param_4,lVar10);
      if (lVar12 == 0) break;
      TunnelCarrier__UpdateView_24ad5dc(lVar12);
    }
  }
LAB_025ae3a4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

