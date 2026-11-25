/* IL2CPP: LifeModule$$IsUnlimited
bool LifeModule__IsUnlimited (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$IsUnlimited
   bool LifeModule__IsUnlimited (LifeModule_o* __this, const MethodInfo* method); */

uint LifeModule__IsUnlimited_2546110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049b5fc8;
  puVar2 = PTR_DAT_049b5fa8;
  if ((bRam0000000004f4c00a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c00a = 1;
  }
  puVar1 = PTR_DAT_049b5050;
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (param_1 + 0x68,&uStack_40,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_DateTimeOffset__op_GreaterThan_30e48c8
                    (uStack_40,uStack_38,auVar5._0_8_,auVar5._8_8_,0);
  return uVar4 & 1;
}

