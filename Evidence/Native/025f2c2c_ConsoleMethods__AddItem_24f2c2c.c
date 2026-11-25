/* IL2CPP: ConsoleMethods$$AddItem
void ConsoleMethods__AddItem (System_String_o* itemName, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$AddItem
   void ConsoleMethods__AddItem (System_String_o* itemName, int32_t amount, const MethodInfo*
   method); */

void ConsoleMethods__AddItem_24f2c2c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  long lStack_28;
  
  if ((bRam0000000004f4bcfe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5a50);
    FUN_021f03f8(PTR_DAT_049c8258);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4bcfe = 1;
  }
  puVar1 = PTR_DAT_049b5a50;
  uStack_2c = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                    (param_1,1,&uStack_2c,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_049b5f80;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8258),
     lStack_28 != 0)) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = uStack_2c;
    uStack_64 = 0;
    uStack_6c = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_38 = 0;
    uStack_5c = param_2;
    EconomyModule__Add_25332a4(lStack_28,&uStack_80,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

