/* IL2CPP: MainPlaySession$$get_Label
System_String_o* MainPlaySession__get_Label (MainPlaySession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainPlaySession$$get_Label
   System_String_o* MainPlaySession__get_Label (MainPlaySession_o* __this, const MethodInfo*
   method); */

void MainPlaySession__get_Label_24fbbf8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iStack_14;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd51 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bd51 = 1;
  }
  uVar2 = Phrase__get_Level_252ee24(0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574(lVar4);
    lVar4 = *(long *)puVar1;
  }
  iStack_14 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60);
  iStack_14 = iStack_14 + 1;
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_14);
  System_String__Format_2f73700(uVar2,uVar3,0);
  return;
}

