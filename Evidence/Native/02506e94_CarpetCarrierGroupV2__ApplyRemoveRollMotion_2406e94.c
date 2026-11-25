/* IL2CPP: CarpetCarrierGroupV2$$ApplyRemoveRollMotion
void CarpetCarrierGroupV2__ApplyRemoveRollMotion (CarpetCarrierGroupV2_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarpetCarrierGroupV2$$ApplyRemoveRollMotion
   void CarpetCarrierGroupV2__ApplyRemoveRollMotion (CarpetCarrierGroupV2_o* __this, float delay,
   const MethodInfo* method); */

void CarpetCarrierGroupV2__ApplyRemoveRollMotion_2406e94(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [16];
  
  if ((bRam0000000004f4b6ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4b6ba = 1;
  }
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  puVar5 = PTR_DAT_049c2808;
  puVar4 = PTR_DAT_049c1680;
  puVar3 = PTR_DAT_049c1670;
  puVar2 = PTR_DAT_049bbf90;
  puVar1 = PTR_DAT_049b6110;
  puVar6 = *(undefined4 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  uVar8 = puVar6[3];
  uVar9 = puVar6[4];
  uVar10 = puVar6[5];
  if (cRam0000000004f4a233 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a233 = '\x01';
    puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  }
  auStack_80 = LitMotion_LMotion__Create_2eaa1b4
                         (uVar8,uVar9,uVar10,*puVar6,puVar6[1],puVar6[2],0x3e800000,0);
  auVar11 = FUN_024f6e90(param_1,auStack_80,0,1,*(undefined8 *)puVar5);
  auStack_80 = auVar11;
  auVar11 = FUN_024f4e50(auStack_80,0x19,*(undefined8 *)puVar4);
  auVar11 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                      (auVar11._0_8_,auVar11._8_8_,uVar7,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__AddTo_24d83f4(auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_2,0);
  return;
}

