/* IL2CPP: Extensions$$GetPrefs
CloudPrefsInt_o Extensions__GetPrefs (int32_t item, int32_t defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$GetPrefs
   CloudPrefsInt_o Extensions__GetPrefs (int32_t item, int32_t defaultValue, const MethodInfo*
   method); */

void Extensions__GetPrefs_24e7680(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_049c7cf0;
  if ((bRam0000000004f4bc99 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7cf0);
    bRam0000000004f4bc99 = 1;
  }
  uStack_34 = param_2;
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uVar2 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar2,0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  CloudPrefsInt___ctor_24e98a8(param_1,uVar2,param_3,0,0);
  return;
}

