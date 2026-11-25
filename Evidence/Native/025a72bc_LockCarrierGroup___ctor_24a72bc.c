/* IL2CPP: LockCarrierGroup$$.ctor
void LockCarrierGroup___ctor (LockCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroup$$.ctor
   void LockCarrierGroup___ctor (LockCarrierGroup_o* __this, const MethodInfo* method); */

undefined1  [16] LockCarrierGroup___ctor_24a72bc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar3 = PTR_DAT_049c26d8;
  puVar2 = PTR_DAT_049c26d0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a71a0 with catch @ 025a72bc
                        */
  puVar1 = PTR_DAT_049c1410;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a713c with catch @ 025a72c0
                        */
                    /* try { // try from 025a72dc to 026a72df has its CatchHandler @ 025a72e8 */
                    /* catch() { ... } // from try @ 025a72dc with catch @ 025a72e8 */
                    /* try { // try from 025a72ec to 026a72f3 has its CatchHandler @ 025a72fc */
  if ((bRam0000000004f4bb1e & 1) == 0) {
                    /* try { // try from 025a72f4 to 026a72ff has its CatchHandler @ 025a7014 */
    FUN_021f03f8(PTR_DAT_049c1410);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a72ec with catch @ 025a72fc
                        */
    FUN_021f03f8(PTR_DAT_049c26d8);
    FUN_021f03f8(PTR_DAT_049c26d0);
    bRam0000000004f4bb1e = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  thunk_FUN_021f190c(param_1 + 0x100,uVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c8510;
  puVar3 = PTR_DAT_049c8508;
  puVar2 = PTR_DAT_049c8500;
  puVar1 = PTR_DAT_049c84f8;
  if ((bRam0000000004f4bd27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8510,0);
    FUN_021f03f8(PTR_DAT_049c8500);
    FUN_021f03f8(PTR_DAT_049c8508);
    FUN_021f03f8(PTR_DAT_049c84f8);
    bRam0000000004f4bd27 = 1;
  }
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),uVar5);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar5,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar5);
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f581a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98,0);
    bRam0000000004f581a2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

