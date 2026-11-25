/* IL2CPP: EconomyModule$$Set
void EconomyModule__Set (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$Set
   void EconomyModule__Set (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const
   MethodInfo* method); */

void EconomyModule__Set_2524e30(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  if ((bRam0000000004f4bf33 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900);
    bRam0000000004f4bf33 = 1;
  }
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_34 = *(undefined4 *)(param_2 + 0x10);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x50),&uStack_34,&uStack_e0,*(undefined8 *)PTR_DAT_049c9900);
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uVar1 = CloudPrefsInt__get_Value_24e99c0(&uStack_60,0);
    CloudPrefsInt__Set_24e9aa8(&uStack_60,*(undefined4 *)(param_2 + 0x24),0);
    func_0x04608620(&uStack_c0,param_2,0x50);
    uStack_70 = 0;
    thunk_FUN_021f190c(&uStack_c0,0);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
    uVar1 = CloudPrefsInt__get_Value_24e99c0(&uStack_60,0);
    uStack_70 = CONCAT44(uVar1,(undefined4)uStack_70);
    func_0x04608620(auStack_138,&uStack_c0,0x58);
    EconomyModule__PublishEconomyUpdate_25331e4(param_1,auStack_138);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

