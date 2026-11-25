/* IL2CPP: BootstrapScope$$.ctor
void BootstrapScope___ctor (BootstrapScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$.ctor
   void BootstrapScope___ctor (BootstrapScope_o* __this, const MethodInfo* method); */

undefined1  [16] BootstrapScope___ctor_24f09c4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_049c8158;
  puVar2 = PTR_DAT_049c8150;
  puVar1 = PTR_DAT_049c8148;
                    /* try { // try from 025f09dc to 026f09df has its CatchHandler @ 025f0bb8 */
                    /* try { // try from 025f09ec to 026f09f3 has its CatchHandler @ 025f0cb8 */
  if ((bRam0000000004f4bcf4 & 1) == 0) {
                    /* try { // try from 025f09fc to 026f0a07 has its CatchHandler @ 025f0cb4 */
    FUN_021f03f8(PTR_DAT_049c8158);
    FUN_021f03f8(PTR_DAT_049c8150);
    FUN_021f03f8(PTR_DAT_049c8148);
    bRam0000000004f4bcf4 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x68),uVar4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_04a3ab10;
  puVar1 = PTR_DAT_04a3ab08;
  if ((bRam0000000004f5c518 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a3ab10,0);
    FUN_021f03f8(PTR_DAT_04a3ab08);
    bRam0000000004f5c518 = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar4 = thunk_FUN_0222ca34(uVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x60),uVar4);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

