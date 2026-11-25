/* IL2CPP: WinStandartVariant$$ApplyGoldMotion
void WinStandartVariant__ApplyGoldMotion (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$ApplyGoldMotion
   void WinStandartVariant__ApplyGoldMotion (WinStandartVariant_o* __this, const MethodInfo*
   method); */

void WinStandartVariant__ApplyGoldMotion_2494ed4(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4ba96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3eb8);
    FUN_021f03f8(PTR_DAT_049c3ef0);
    FUN_021f03f8(PTR_DAT_049c2288);
    bRam0000000004f4ba96 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                    (*(undefined8 *)(param_1 + 200),0x9927ed9b,0);
  puVar4 = PTR_DAT_049c3ef0;
  puVar3 = PTR_DAT_049c3eb8;
  puVar2 = PTR_DAT_049c2288;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x38);
    auStack_40 = LitMotion_LMotion__Create_2eaa070(0x3e800000,uVar1,0,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    auVar7 = FUN_02526574(auStack_40,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                          *(undefined8 *)puVar4);
    LitMotion_Extensions_LitMotionTextMeshProExtensions__BindToText___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__266f34c
              (auVar7._0_8_,auVar7._8_8_,uVar6,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

