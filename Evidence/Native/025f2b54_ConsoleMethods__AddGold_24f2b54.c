/* IL2CPP: ConsoleMethods$$AddGold
void ConsoleMethods__AddGold (int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$AddGold
   void ConsoleMethods__AddGold (int32_t amount, const MethodInfo* method); */

void ConsoleMethods__AddGold_24f2b54(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
  if ((bRam0000000004f4bcfd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8258);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    bRam0000000004f4bcfd = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8258);
    if (lStack_28 != 0) {
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 1;
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      uStack_54 = param_1;
      EconomyModule__Add_25332a4(lStack_28,&uStack_78,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

