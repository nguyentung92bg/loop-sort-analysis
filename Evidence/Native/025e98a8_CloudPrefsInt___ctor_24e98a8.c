/* IL2CPP: CloudPrefsInt$$.ctor
void CloudPrefsInt___ctor (CloudPrefsInt_o __this, System_String_o* key, int32_t defaultValue, bool monotonic, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsInt$$.ctor
   void CloudPrefsInt___ctor (CloudPrefsInt_o __this, System_String_o* key, int32_t defaultValue,
   bool monotonic, const MethodInfo* method); */

void CloudPrefsInt___ctor_24e98a8
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,byte param_4)

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
  if ((bRam0000000004f4bcaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f78);
    FUN_021f03f8(PTR_DAT_049c7f20);
    bRam0000000004f4bcaf = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  PlayerPrefsInt___ctor_3f0d944(&uStack_60,param_2,param_3,0);
                    /* try { // try from 025e9924 to 026e9a63 has its CatchHandler @ 025e9924
                       catch() { ... } // from try @ 025e9924 with catch @ 025e9924
                       catch() { ... } // from try @ 025e9a88 with catch @ 025e9924
                       catch() { ... } // from try @ 025e9abc with catch @ 025e9924
                       catch() { ... } // from try @ 025e9ae4 with catch @ 025e9924
                       catch() { ... } // from try @ 025e9b10 with catch @ 025e9924 */
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  thunk_FUN_021f190c(param_1 + 1,0);
  param_1[3] = param_2;
  *(byte *)(param_1 + 2) = param_4 & 1;
  thunk_FUN_021f190c(param_1 + 3,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = CloudPrefsRegistry__IsRegistered_24e91dc(param_2);
  if ((uVar2 & 1) == 0) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    uVar3 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c7f78,&uStack_60);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574(lVar4);
    }
    CloudPrefsRegistry__Register_24e925c(uVar3);
  }
  return;
}

