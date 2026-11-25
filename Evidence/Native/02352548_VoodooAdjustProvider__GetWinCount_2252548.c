/* IL2CPP: VoodooAdjustProvider$$GetWinCount
CloudPrefsInt_o VoodooAdjustProvider__GetWinCount (int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$GetWinCount
   CloudPrefsInt_o VoodooAdjustProvider__GetWinCount (int32_t cap, const MethodInfo* method); */

void VoodooAdjustProvider__GetWinCount_2252548(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iStack_24;
  
  if ((bRam0000000004f49b9e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6000);
    FUN_021f03f8(PTR_DAT_049b6008);
    bRam0000000004f49b9e = 1;
  }
  puVar1 = PTR_DAT_049b6000;
  if (param_2 == 0x32) {
    uVar2 = *(undefined8 *)PTR_DAT_049b6008;
  }
  else {
    iStack_24 = param_2;
    uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_24);
    uVar2 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar2,0);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  CloudPrefsInt___ctor_24e98a8(param_1,uVar2,0,0,0);
  return;
}

