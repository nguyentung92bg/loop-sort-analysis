/* IL2CPP: ConnectedCarrierGroup$$OnLevelAnimationEnd
void ConnectedCarrierGroup__OnLevelAnimationEnd (ConnectedCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConnectedCarrierGroup$$OnLevelAnimationEnd
   void ConnectedCarrierGroup__OnLevelAnimationEnd (ConnectedCarrierGroup_o* __this, const
   MethodInfo* method); */

undefined1  [16] ConnectedCarrierGroup__OnLevelAnimationEnd_240f170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined2 uStack_38;
  undefined6 uStack_36;
  
  if ((bRam0000000004f4b70f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2ac0);
    bRam0000000004f4b70f = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar9 = *(undefined4 *)(lVar7 + 0xc);
  uVar10 = *(undefined4 *)(lVar7 + 0x10);
  uVar11 = *(undefined4 *)(lVar7 + 0x14);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__WithY_3f0d5ec(uVar9,uVar10,uVar11,0,0);
  puVar2 = PTR_DAT_049c2ac0;
  puVar1 = PTR_DAT_049b6110;
  if (lVar3 != 0) {
    UnityEngine_Transform__set_localScale_3c2ddfc(lVar3,0);
    auVar12 = LitMotion_LMotion__Create_2ea9f9c(0,0x3f800000,0x3e800000,0);
    uVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
    auVar12 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScaleY___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672670
                        (auVar12._0_8_,auVar12._8_8_,uVar4,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar12 = Extensions__AddTo_24d83f4(auVar12._0_8_,auVar12._8_8_ & 0xffffffff,param_1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar6 = auVar12._8_8_ & 0xffffffff;
    if ((bRam0000000004f4e5b1 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049dfe08,uVar6,uVar4,0);
      FUN_021f03f8(PTR_DAT_049b5138);
      bRam0000000004f4e5b1 = 1;
    }
    uVar5 = FUN_024f7208(auVar12._0_8_,uVar6,0);
    puVar1 = PTR_DAT_049b5138;
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)PTR_DAT_049b5138;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
      uStack_38 = (undefined2)uVar8;
      uStack_36 = (undefined6)((ulong)uVar8 >> 0x10);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_049dfe08 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = LitMotion_UniTaskMotionTaskSource__Create_2e92ddc
                        (auVar12._0_8_,uVar6,1,1,uVar4,&stack0xffffffffffffffdc);
      uStack_38 = 0;
      uStack_36 = 0;
      thunk_FUN_021f190c(&stack0xffffffffffffffc0,uVar4);
    }
    auVar12._8_2_ = uStack_38;
    auVar12._0_8_ = uVar4;
    auVar12._10_6_ = uStack_36;
    return auVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

