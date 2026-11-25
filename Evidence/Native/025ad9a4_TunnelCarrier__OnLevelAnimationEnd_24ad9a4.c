/* IL2CPP: TunnelCarrier$$OnLevelAnimationEnd
void TunnelCarrier__OnLevelAnimationEnd (TunnelCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TunnelCarrier$$OnLevelAnimationEnd
   void TunnelCarrier__OnLevelAnimationEnd (TunnelCarrier_o* __this, const MethodInfo* method); */

undefined1  [16] TunnelCarrier__OnLevelAnimationEnd_24ad9a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined2 uStack_38;
  undefined6 uStack_36;
  
  if ((bRam0000000004f4bb47 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    bRam0000000004f4bb47 = 1;
  }
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
  }
  puVar3 = PTR_DAT_049c1670;
  puVar2 = PTR_DAT_049bbf90;
  puVar1 = PTR_DAT_049b6110;
  puVar8 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar10 = *puVar8;
  uVar11 = puVar8[1];
  uVar12 = puVar8[2];
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
    puVar8 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  }
  auVar13 = LitMotion_LMotion__Create_2eaa1b4
                      (uVar10,uVar11,uVar12,puVar8[3],puVar8[4],puVar8[5],0x3e800000,0);
  uVar4 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar13._0_8_,auVar13._8_8_,uVar4,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar13 = Extensions__AddTo_24d83f4(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,param_1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  uVar7 = auVar13._8_8_ & 0xffffffff;
  if ((bRam0000000004f4e5b1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049dfe08,uVar7,uVar4,0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4e5b1 = 1;
  }
  uVar5 = FUN_024f7208(auVar13._0_8_,uVar7,0);
  puVar1 = PTR_DAT_049b5138;
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_049b5138;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    uStack_38 = (undefined2)uVar9;
    uStack_36 = (undefined6)((ulong)uVar9 >> 0x10);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049dfe08 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = LitMotion_UniTaskMotionTaskSource__Create_2e92ddc
                      (auVar13._0_8_,uVar7,1,1,uVar4,&stack0xffffffffffffffdc);
    uStack_38 = 0;
    uStack_36 = 0;
    thunk_FUN_021f190c(&stack0xffffffffffffffc0,uVar4);
  }
  auVar13._8_2_ = uStack_38;
  auVar13._0_8_ = uVar4;
  auVar13._10_6_ = uStack_36;
  return auVar13;
}

