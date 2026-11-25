/* IL2CPP: CoinRushSheet.Row$$PostLoad
void CoinRushSheet_Row__PostLoad (CoinRushSheet_Row_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoinRushSheet.Row$$PostLoad
   void CoinRushSheet_Row__PostLoad (CoinRushSheet_Row_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void CoinRushSheet_Row__PostLoad_255cfc4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar5 = PTR_DAT_049cb6d8;
  puVar4 = PTR_DAT_049cb6d0;
  puVar2 = PTR_DAT_049cb430;
  puVar3 = PTR_DAT_049c2cf0;
  if ((bRam0000000004f4c0f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb430);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cb6d8);
    FUN_021f03f8(PTR_DAT_049cb6d0);
    bRam0000000004f4c0f0 = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar2);
  plVar7 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
  uVar6 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar7 + 0x80));
  func_0x04608620(&uStack_70,uVar6,uVar1);
  puVar2 = PTR_DAT_049b3bd0;
  uStack_44 = (undefined4)uStack_70;
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_44);
  uVar6 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar6,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  CloudPrefsBool___ctor_24eafb8(&uStack_70,uVar6,0,0,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_68;
  *(undefined8 *)(param_1 + 0x20) = uStack_70;
  *(undefined8 *)(param_1 + 0x38) = uStack_58;
  *(undefined8 *)(param_1 + 0x30) = uStack_60;
  thunk_FUN_021f190c(param_1 + 0x28,0);
  plVar7 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
  uVar6 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar7 + 0x80));
  func_0x04608620(&uStack_a0,uVar6,uVar1);
  uStack_74 = (undefined4)uStack_a0;
  uVar6 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_74);
  uVar6 = System_String__Format_2f73700(*(undefined8 *)puVar5,uVar6,0);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  CloudPrefsBool___ctor_24eafb8(&uStack_a0,uVar6,0,0,0);
  *(undefined8 *)(param_1 + 0x48) = uStack_98;
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  *(undefined8 *)(param_1 + 0x58) = uStack_88;
  *(undefined8 *)(param_1 + 0x50) = uStack_90;
  thunk_FUN_021f190c(param_1 + 0x48,0);
  return;
}

