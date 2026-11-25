/* IL2CPP: ColorType$$ToString
System_String_o* ColorType__ToString (ColorType_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ColorType$$ToString
   System_String_o* ColorType__ToString (ColorType_o __this, const MethodInfo* method); */

void ColorType__ToString_24f57b0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bd40 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8408);
    FUN_021f03f8(PTR_DAT_049c8410);
    FUN_021f03f8(PTR_DAT_049ba8a8);
    bRam0000000004f4bd40 = 1;
  }
  puVar2 = PTR_DAT_049c8408;
  puVar1 = PTR_DAT_049ba8a8;
  if (param_1[1] == 0) {
    uStack_48 = *(undefined8 *)PTR_DAT_049c8408;
    uStack_38 = *param_1;
    uStack_40 = 0xffffffffffffffff;
    System_Enum__ToString_3135e00(&uStack_48,0);
  }
  else {
    uStack_48 = CONCAT44(uStack_48._4_4_,param_1[1]);
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c8410,&uStack_48);
    uStack_24 = *param_1;
    uVar4 = thunk_FUN_0222c66c(*(undefined8 *)puVar2,&uStack_24);
    System_String__Format_2f7dfac(*(undefined8 *)puVar1,uVar3,uVar4,0);
  }
  return;
}

