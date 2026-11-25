/* IL2CPP: TunnelCarrierSystem$$OnBlockTransferComplete
void TunnelCarrierSystem__OnBlockTransferComplete (TunnelCarrierSystem_o* __this, BlockTransferCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrierSystem$$OnBlockTransferComplete
   void TunnelCarrierSystem__OnBlockTransferComplete (TunnelCarrierSystem_o* __this,
   BlockTransferCompleteMessage_o m, const MethodInfo* method); */

void TunnelCarrierSystem__OnBlockTransferComplete_24ae64c(long param_1,long param_2)

{
  ulong uVar1;
  long lStack_28;
  
  if ((bRam0000000004f4bb4c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c69e8);
    bRam0000000004f4bb4c = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x70) + 0x30) != 0) {
      if (param_2 == 0) goto LAB_025ae6dc;
                    /* try { // try from 025ae698 to 026ae6f3 has its CatchHandler @ 025ae698
                       catch() { ... } // from try @ 025ae698 with catch @ 025ae698
                       catch() { ... } // from try @ 025ae7a4 with catch @ 025ae698
                       catch() { ... } // from try @ 025ae7c0 with catch @ 025ae698
                       catch() { ... } // from try @ 025ae7dc with catch @ 025ae698
                       catch() { ... } // from try @ 025ae830 with catch @ 025ae698
                       catch() { ... } // from try @ 025ae8a8 with catch @ 025ae698 */
      uVar1 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                        (param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c69e8);
      if ((uVar1 & 1) != 0) {
        TunnelCarrierSystem__EnableNextTransferBlocks_24ae6e0(param_1,param_2);
        if (lStack_28 == 0) goto LAB_025ae6dc;
        TunnelCarrier__UpdateView_24ad5dc();
      }
    }
    return;
  }
LAB_025ae6dc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

