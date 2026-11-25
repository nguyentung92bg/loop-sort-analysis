/* IL2CPP: CloudPrefsString$$.ctor
void CloudPrefsString___ctor (CloudPrefsString_o __this, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$.ctor
   void CloudPrefsString___ctor (CloudPrefsString_o __this, System_String_o* key, System_String_o*
   defaultValue, const MethodInfo* method); */

void CloudPrefsString___ctor_24ea950(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c7f20;
  if ((bRam0000000004f4bcc0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049c7f88);
    bRam0000000004f4bcc0 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  PlayerPrefsString___ctor_3f0e250(&uStack_50,param_2,param_3,0);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  thunk_FUN_021f190c(param_1,0);
  param_1[2] = param_2;
  thunk_FUN_021f190c(param_1 + 2,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = CloudPrefsRegistry__IsRegistered_24e91dc(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_48 = param_1[1];
    uStack_50 = *param_1;
    uStack_40 = param_1[2];
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c7f88,&uStack_50);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    CloudPrefsRegistry__Register_24e925c(uVar3);
  }
  return;
}

