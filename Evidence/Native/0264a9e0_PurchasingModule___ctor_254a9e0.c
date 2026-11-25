/* IL2CPP: PurchasingModule$$.ctor
void PurchasingModule___ctor (PurchasingModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$.ctor
   void PurchasingModule___ctor (PurchasingModule_o* __this, const MethodInfo* method); */

void PurchasingModule___ctor_254a9e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = PTR_DAT_049ca988;
  puVar4 = PTR_DAT_049ca980;
  puVar3 = PTR_DAT_049ca978;
  puVar2 = PTR_DAT_049ca970;
  puVar1 = PTR_DAT_049c52a8;
                    /* try { // try from 0264a9e0 to 0274a9e3 has its CatchHandler @ 0264aa04 */
                    /* try { // try from 0264a9e4 to 0274aa07 has its CatchHandler @ 0264a59c */
                    /* catch() { ... } // from try @ 0264a9e0 with catch @ 0264aa04 */
                    /* try { // try from 0264aa08 to 0274aa0f has its CatchHandler @ 0264aa18 */
                    /* try { // try from 0264aa10 to 0274aa1b has its CatchHandler @ 0264a59c */
                    /* catch() { ... } // from try @ 0264aa08 with catch @ 0264aa18 */
  if ((bRam0000000004f4c032 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca988);
    FUN_021f03f8(PTR_DAT_049ca978);
    FUN_021f03f8(PTR_DAT_049ca970);
    FUN_021f03f8(PTR_DAT_049ca980);
    FUN_021f03f8(PTR_DAT_049c52a8);
    bRam0000000004f4c032 = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar6);
  uStack_50 = 0;
  uStack_48 = 0;
  PlayerPrefsString___ctor_3f0e250(&uStack_50,*(undefined8 *)puVar1,0,0);
  *(undefined8 *)(param_1 + 0x68) = uStack_48;
  *(undefined8 *)(param_1 + 0x60) = uStack_50;
  thunk_FUN_021f190c(param_1 + 0x60,0);
  ModuleBase___ctor_252fad0(param_1,0);
  return;
}

