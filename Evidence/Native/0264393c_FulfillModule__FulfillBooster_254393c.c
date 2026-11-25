/* IL2CPP: FulfillModule$$FulfillBooster
void FulfillModule__FulfillBooster (FulfillModule_o* __this, int32_t itemType, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule$$FulfillBooster
   void FulfillModule__FulfillBooster (FulfillModule_o* __this, int32_t itemType, double quantity,
   const MethodInfo* method); */

void FulfillModule__FulfillBooster_254393c(double param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_110 [80];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_049b5298;
  if ((bRam0000000004f4bfef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca6d8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5298);
    FUN_021f03f8(PTR_DAT_049c2ce8);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049c5ea8);
    FUN_021f03f8(PTR_DAT_049ca6e0);
    bRam0000000004f4bfef = 1;
  }
  uStack_b8 = *(undefined8 *)puVar3;
  uStack_b0 = 0xffffffffffffffff;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = param_3;
  lVar5 = System_Enum__ToString_3135e00(&uStack_b8,0);
  if ((lVar5 != 0) &&
     (lVar5 = System_String__ToLowerInvariant_2f81e54(lVar5,0), puVar4 = PTR_DAT_049ca6d8,
     puVar3 = PTR_DAT_049b3bd0, lVar5 != 0)) {
    uVar6 = System_String__Replace_2f7fb18
                      (lVar5,*(undefined8 *)PTR_DAT_049ca6e0,
                       **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
    if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(puVar3 + 0x98));
    }
    System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
              (uVar6,1,&uStack_c0,*(undefined8 *)puVar4);
    if ((*(long *)(param_2 + 0x18) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0x40), lVar5 != 0)) {
      lVar5 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                        (lVar5,&uStack_c0,*(undefined8 *)PTR_DAT_049c5ea8);
      puVar4 = PTR_DAT_049c2ce8;
      puVar3 = PTR_DAT_049b6110;
      lVar8 = *(long *)(param_2 + 0x10);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uVar1 = 0x80000000;
      if (param_1 != INFINITY) {
        uVar1 = (int)param_1;
      }
      lStack_80 = (ulong)uVar1 << 0x20;
      if (lVar5 != 0) {
        plVar7 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
        uVar2 = *(undefined4 *)(plVar7[1] + 0xfc);
        uVar6 = thunk_FUN_0224e54c(lVar5,*(undefined8 *)(*plVar7 + 0x80));
        func_0x04608620(&uStack_c0,uVar6,uVar2);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uStack_90 = Extensions__ToEconomyItem_24e5d5c(uStack_c0 & 0xffffffff,0);
        uStack_44 = *(undefined4 *)(param_2 + 0x60);
        uStack_c0 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_c0,&uStack_44,*(undefined8 *)puVar4);
        uStack_a0 = *(undefined8 *)(param_2 + 0x58);
        uStack_8c = (undefined4)uStack_c0;
        uStack_88 = (undefined4)(uStack_c0 >> 0x20);
        thunk_FUN_021f190c(&uStack_a0);
        if (lVar8 != 0) {
          func_0x04608620(auStack_110,&uStack_a0,0x50);
          EconomyModule__Add_25332a4(lVar8,auStack_110,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

