/* IL2CPP: GlassCarrierSystem$$OnBlockTransferComplete
void GlassCarrierSystem__OnBlockTransferComplete (GlassCarrierSystem_o* __this, BlockTransferCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GlassCarrierSystem$$OnBlockTransferComplete
   void GlassCarrierSystem__OnBlockTransferComplete (GlassCarrierSystem_o* __this,
   BlockTransferCompleteMessage_o m, const MethodInfo* method); */

ulong GlassCarrierSystem__OnBlockTransferComplete_24a4bf8
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uStack_58;
  
  puVar1 = PTR_DAT_049c1410;
  if ((bRam0000000004f4bb02 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6698);
                    /* try { // try from 025a4c30 to 026a4cf7 has its CatchHandler @ 025a4c30
                       catch() { ... } // from try @ 025a4c30 with catch @ 025a4c30
                       catch() { ... } // from try @ 025a4d74 with catch @ 025a4c30
                       catch() { ... } // from try @ 025a4de8 with catch @ 025a4c30
                       catch() { ... } // from try @ 025a4e80 with catch @ 025a4c30
                       catch() { ... } // from try @ 025a4ed0 with catch @ 025a4c30 */
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c66a0);
    FUN_021f03f8(PTR_DAT_049c66a8);
    bRam0000000004f4bb02 = 1;
  }
  lVar8 = *(long *)(param_5 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((param_6 != 0) && (lVar8 != 0)) {
    uVar3 = FUN_024f5708(lVar8,*(undefined8 *)(param_6 + 0x60),*(undefined8 *)PTR_DAT_049c66a8);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(param_6 + 0x1e0) != 0) {
      if (0 < *(int *)(*(long *)(param_6 + 0x1e0) + 0x18)) {
        return uVar3;
      }
      lVar8 = *(long *)(param_5 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar8 != 0) {
        plVar4 = (long *)FUN_024f6008(lVar8,*(undefined8 *)(param_6 + 0x60),
                                      *(undefined8 *)PTR_DAT_049c66a0);
        lVar8 = *plVar4;
        if (lVar8 != 0) {
          if ((bRam0000000004f4bafe & 1) == 0) {
            FUN_021f03f8(PTR_DAT_049c1d58);
            bRam0000000004f4bafe = 1;
          }
          if (((*(long *)(lVar8 + 0xa8) != 0) &&
              (lVar2 = *(long *)(*(long *)(lVar8 + 0xa8) + 0x110), lVar2 != 0)) &&
             (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lVar2,0), lVar2 != 0)) {
            UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
            if (*(long *)(lVar8 + 0xa0) != 0) {
              lVar6 = *(long *)(lVar8 + 0x30);
              lVar7 = *(long *)(*(long *)(lVar8 + 0xa0) + 0x28);
              lVar2 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
              if (lVar2 != 0) {
                uVar9 = UnityEngine_Transform__get_position_3c2d540(lVar2,0);
                uVar11 = param_2;
                uVar12 = param_3;
                lVar8 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
                puVar1 = PTR_DAT_049c1d58;
                if (lVar8 != 0) {
                  uVar10 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar8,0);
                  lVar8 = *(long *)puVar1;
                  if (*(long *)(lVar8 + 0x38) == 0) {
                    FUN_02229774(lVar8);
                  }
                  if (((lVar7 != 0) &&
                      (uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0), lVar6 != 0))
                     && (lVar2 = PrefabModule__Rent_2537de8
                                           (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_4,lVar6
                                            ,uVar5,0), lVar2 != 0)) {
                    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                              (lVar2,&uStack_58,*(undefined8 *)(*(long *)(lVar8 + 0x38) + 8));
                    return uStack_58;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025a4d08 to 026a4d0b has its CatchHandler @ 025a4e8c */
  FUN_021f06a0();
}

