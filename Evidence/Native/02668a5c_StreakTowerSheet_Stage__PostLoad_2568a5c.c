/* IL2CPP: StreakTowerSheet.Stage$$PostLoad
void StreakTowerSheet_Stage__PostLoad (StreakTowerSheet_Stage_o* __this, Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSheet.Stage$$PostLoad
   void StreakTowerSheet_Stage__PostLoad (StreakTowerSheet_Stage_o* __this,
   Cathei_BakingSheet_SheetConvertingContext_o* context, const MethodInfo* method); */

void StreakTowerSheet_Stage__PostLoad_2568a5c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_049cbd78;
  puVar3 = PTR_DAT_049cb430;
  puVar2 = PTR_DAT_049c2cf0;
  if ((bRam0000000004f4c17e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb430);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cbd78);
    bRam0000000004f4c17e = 1;
  }
  Cathei_BakingSheet_SheetRow___Il2CppFullySharedGenericType___PostLoad_2986178
            (param_1,param_2,*(undefined8 *)puVar3);
  plVar6 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar6[1] + 0xfc);
  uVar5 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar6 + 0x80));
  func_0x04608620(&uStack_60,uVar5,uVar1);
  uStack_34 = (undefined4)uStack_60;
  uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uVar5 = System_String__Format_2f73700(*(undefined8 *)puVar4,uVar5,0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  CloudPrefsBool___ctor_24eafb8(&uStack_60,uVar5,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = uStack_58;
  *(undefined8 *)(param_1 + 0x30) = uStack_60;
  *(undefined8 *)(param_1 + 0x48) = uStack_48;
  *(undefined8 *)(param_1 + 0x40) = uStack_50;
  thunk_FUN_021f190c(param_1 + 0x38,0);
  return;
}

