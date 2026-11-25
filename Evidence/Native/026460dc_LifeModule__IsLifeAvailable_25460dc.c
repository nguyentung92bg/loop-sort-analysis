/* IL2CPP: LifeModule$$IsLifeAvailable
bool LifeModule__IsLifeAvailable (LifeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifeModule$$IsLifeAvailable
   bool LifeModule__IsLifeAvailable (LifeModule_o* __this, const MethodInfo* method); */

uint LifeModule__IsLifeAvailable_25460dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar4 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x18,0);
  puVar3 = PTR_DAT_049b5fc8;
  puVar2 = PTR_DAT_049b5fa8;
  if (0 < iVar4) {
    return 1;
  }
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
  auVar6 = TimeProvider__get_UtcNow_24f95ec(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar5 = System_DateTimeOffset__op_GreaterThan_30e48c8
                    (uStack_40,uStack_38,auVar6._0_8_,auVar6._8_8_,0);
  return uVar5 & 1;
}

