/* IL2CPP: Carrier$$EndTransfer
void Carrier__EndTransfer (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Carrier$$EndTransfer
   void Carrier__EndTransfer (Carrier_o* __this, const MethodInfo* method); */

long Carrier__EndTransfer_2408b78(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  lVar3 = param_1;
  if ((bRam0000000004f4b6c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    lVar3 = FUN_021f03f8(PTR_DAT_049c2688);
    bRam0000000004f4b6c2 = 1;
  }
  if (*(char *)(param_1 + 0x1b6) != '\0') {
    return lVar3;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0xb0),0);
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar3 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0xd0),0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar3 != 0) {
        lVar5 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar9 = *(undefined4 *)(lVar5 + 0x10);
        uVar10 = *(undefined4 *)(lVar5 + 0x14);
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (*(undefined4 *)(lVar5 + 0xc),uVar9,uVar10,lVar3,0);
        lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
        if (lVar3 != 0) {
          uVar8 = UnityEngine_Transform__get_position_3c2d540(lVar3,0);
          lVar7 = *(long *)PTR_DAT_049c2688;
          lVar6 = *(long *)(lVar7 + 0x20);
          uVar2 = *(ushort *)(lVar6 + 0x135);
          lVar5 = lVar6;
          if ((uVar2 & 1) == 0) {
            lVar6 = FUN_02229718(lVar6);
            lVar5 = *(long *)(lVar7 + 0x20);
            uVar2 = *(ushort *)(lVar5 + 0x135);
          }
          uVar1 = *(undefined4 *)(**(long **)(lVar6 + 0xc0) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar5 = FUN_02229718(lVar5);
          }
          uVar4 = thunk_FUN_0224e54c(param_1 + 0x1c0,
                                     *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x20
                                    );
          func_0x04608620(&uStack_4c,uVar4,uVar1);
          auVar11 = LitMotion_LMotion__Create_2eaa1b4
                              (uVar8,uVar9,uVar10,uStack_4c,uStack_48,uStack_44,_UNK_013aa62c,0);
          auVar11 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                              (auVar11._0_8_,auVar11._8_8_,lVar3,*(undefined8 *)PTR_DAT_049c20a0);
          if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auVar11 = Extensions__AddTo_24d83f4(auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_1,0);
          if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          LitMotion_CompositeMotionHandle__Add_2e8b150
                    (*(long *)(param_1 + 0xb0),auVar11._0_8_,auVar11._8_8_ & 0xffffffff,0);
          return auVar11._0_8_;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

