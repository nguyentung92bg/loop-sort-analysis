/* IL2CPP: AreaOffer$$GetTitle
System_String_o* AreaOffer__GetTitle (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$GetTitle
   System_String_o* AreaOffer__GetTitle (AreaOffer_o* __this, const MethodInfo* method); */

void AreaOffer__GetTitle_250a0e8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_24;
  
  puVar1 = PTR_DAT_049c39c0;
  if ((bRam0000000004f4bdba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c9028);
    bRam0000000004f4bdba = 1;
  }
  uStack_38 = AreaOffer__get_Area_25096b8(param_1);
  uStack_48 = *(undefined8 *)puVar1;
  uStack_40 = 0xffffffffffffffff;
  lVar3 = System_Enum__ToString_3135e00(&uStack_48,0);
  puVar2 = PTR_DAT_049c9028;
  puVar1 = PTR_DAT_049c2ea8;
  if (lVar3 != 0) {
    uVar4 = System_String__ToLowerInvariant_2f81e54(lVar3,0);
    iStack_24 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    iStack_24 = iStack_24 + -0x1d;
    uVar5 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_24);
    uVar4 = System_String__Format_2f7dfac(*(undefined8 *)puVar2,uVar4,uVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Localization__Get_252dbe0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

