/* IL2CPP: TagCarrier$$ApplyCompleteMotion
void TagCarrier__ApplyCompleteMotion (TagCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$ApplyCompleteMotion
   void TagCarrier__ApplyCompleteMotion (TagCarrier_o* __this, const MethodInfo* method); */

void TagCarrier__ApplyCompleteMotion_24ac9e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4bb3c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c1670);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c1680);
    FUN_021f03f8(PTR_DAT_049c1690);
    bRam0000000004f4bb3c = 1;
  }
  puVar4 = PTR_DAT_049c1690;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar6 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0);
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    puVar5 = PTR_DAT_049c2808;
    puVar3 = PTR_DAT_049c1680;
    puVar2 = PTR_DAT_049c1670;
    puVar1 = PTR_DAT_049b6110;
    lVar7 = *(long *)puVar4;
    lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    uVar10 = *(undefined4 *)(lVar8 + 0xc);
    uVar11 = *(undefined4 *)(lVar8 + 0x10);
    uVar12 = *(undefined4 *)(lVar8 + 0x14);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar4;
    }
    puVar9 = *(undefined4 **)(lVar7 + 0xb8);
    auStack_70 = LitMotion_LMotion__Create_2eaa1b4
                           (uVar10,uVar11,uVar12,*puVar9,puVar9[1],puVar9[2],0x3f000000,0);
    auVar13 = FUN_024f6e90(0x3e800000,auStack_70,0,1,*(undefined8 *)puVar5);
    auStack_70 = auVar13;
    auVar13 = FUN_024f4e50(auStack_70,0x19,*(undefined8 *)puVar3);
    auVar13 = LitMotion_Extensions_LitMotionTransformExtensions__BindToLocalScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672040
                        (auVar13._0_8_,auVar13._8_8_,uVar6,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Extensions__AddTo_24d83f4(auVar13._0_8_,auVar13._8_8_ & 0xffffffff,param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

