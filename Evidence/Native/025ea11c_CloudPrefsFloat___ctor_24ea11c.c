/* IL2CPP: CloudPrefsFloat$$.ctor
void CloudPrefsFloat___ctor (CloudPrefsFloat_o __this, System_String_o* key, float defaultValue, bool monotonic, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsFloat$$.ctor
   void CloudPrefsFloat___ctor (CloudPrefsFloat_o __this, System_String_o* key, float defaultValue,
   bool monotonic, const MethodInfo* method); */

void CloudPrefsFloat___ctor_24ea11c
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049c7f20;
  if ((bRam0000000004f4bcb8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f80);
    FUN_021f03f8(PTR_DAT_049c7f20);
    bRam0000000004f4bcb8 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  PlayerPrefsFloat___ctor_3f0ddcc(param_1,&uStack_60,param_3,0);
  param_2[1] = uStack_58;
  *param_2 = uStack_60;
  thunk_FUN_021f190c(param_2 + 1,0);
  param_2[3] = param_3;
  *(byte *)(param_2 + 2) = param_4 & 1;
  thunk_FUN_021f190c(param_2 + 3,param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = CloudPrefsRegistry__IsRegistered_24e91dc(param_3);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 025ea1d8 to 026ea36f has its CatchHandler @ 025ea1d8
                       catch() { ... } // from try @ 025ea1d8 with catch @ 025ea1d8
                       catch() { ... } // from try @ 025ea3dc with catch @ 025ea1d8
                       catch() { ... } // from try @ 025ea448 with catch @ 025ea1d8
                       catch() { ... } // from try @ 025ea5d0 with catch @ 025ea1d8
                       catch() { ... } // from try @ 025ea618 with catch @ 025ea1d8
                       catch() { ... } // from try @ 025ea63c with catch @ 025ea1d8 */
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c7f80,&uStack_60);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    CloudPrefsRegistry__Register_24e925c(uVar3);
  }
  return;
}

