/* IL2CPP: FulfillModule$$FulfillLife
void FulfillModule__FulfillLife (FulfillModule_o* __this, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillLife
   void FulfillModule__FulfillLife (FulfillModule_o* __this, double quantity, const MethodInfo*
   method); */

void FulfillModule__FulfillLife_2543ba8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 aauStack_60 [2] [16];
  
  puVar2 = PTR_DAT_049b6128;
  if ((bRam0000000004f4bff0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4bff0 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_TimeSpan__FromMinutes_311700c(param_1,0);
  puVar2 = PTR_DAT_049b5fc8;
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    if ((bRam0000000004f4c00c & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049b5fa0);
      FUN_021f03f8(PTR_DAT_049b5fa8);
      FUN_021f03f8(PTR_DAT_049b5050);
      FUN_021f03f8(PTR_DAT_049b5fc8);
      FUN_021f03f8(PTR_DAT_049b6128);
      bRam0000000004f4c00c = 1;
    }
    puVar3 = PTR_DAT_049b5fa8;
    puVar1 = PTR_DAT_049b5050;
    auStack_70._0_8_ = 0;
    auStack_70._8_8_ = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    puVar2 = PTR_DAT_049b6128;
    auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
    CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
              (lVar7 + 0x68,aauStack_60,*(undefined8 *)puVar3);
    uStack_78 = aauStack_60[0]._8_8_;
    uStack_80 = aauStack_60[0]._0_8_;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = System_DateTimeOffset__Subtract_30e2d84(&uStack_80,auVar9._0_8_,auVar9._8_8_,0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574(lVar8);
      lVar8 = *(long *)puVar2;
    }
    uVar6 = System_TimeSpan__op_GreaterThan_3117960(uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
    if ((uVar6 & 1) != 0) {
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (lVar7 + 0x68,aauStack_60,*(undefined8 *)puVar3);
      auVar9._8_8_ = aauStack_60[0]._8_8_;
      auVar9._0_8_ = aauStack_60[0]._0_8_;
    }
    puVar2 = PTR_DAT_049b5fa0;
    auStack_70 = auVar9;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    aauStack_60[0] = System_DateTimeOffset__Add_30e166c(auStack_70,uVar4,0);
    CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
              (lVar7 + 0x68,aauStack_60,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

