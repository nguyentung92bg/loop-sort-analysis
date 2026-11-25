/* IL2CPP: CollectItems$$.ctor
void CollectItems___ctor (CollectItems_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$.ctor
   void CollectItems___ctor (CollectItems_o* __this, const MethodInfo* method); */

void CollectItems___ctor_250ecb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049c91d8;
  puVar1 = PTR_DAT_049c91d0;
  if ((bRam0000000004f4bdee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c91e0);
    FUN_021f03f8(PTR_DAT_049c91d8);
    FUN_021f03f8(PTR_DAT_049c3e50);
    FUN_021f03f8(PTR_DAT_049c91d0);
    FUN_021f03f8(PTR_DAT_049c3e58);
    bRam0000000004f4bdee = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar4,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_049c91e0;
  puVar2 = PTR_DAT_049c3e58;
  puVar1 = PTR_DAT_049c3e50;
  if (lVar4 != 0) {
    uStack_38 = 10;
                    /* try { // try from 0260ed70 to 0270ed73 has its CatchHandler @ 0260ed78 */
    FUN_02333498(lVar4,&uStack_38,*(undefined8 *)PTR_DAT_049c91e0);
                    /* try { // try from 0260ed74 to 0270ed9f has its CatchHandler @ 0260e5e0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260ed70 with catch @ 0260ed78
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260e784 with catch @ 0260ed7c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260e7a4 with catch @ 0260ed80
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0260e800 with catch @ 0260ed84
                        */
    uStack_34 = 0x16;
    FUN_02333498(lVar4,&uStack_34,*(undefined8 *)puVar3);
    *(long *)(param_1 + 0x20) = lVar4;
    thunk_FUN_021f190c((long *)(param_1 + 0x20),lVar4);
                    /* try { // try from 0260eda0 to 0270eda3 has its CatchHandler @ 0260edbc */
    uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 0260eda4 to 0270edbf has its CatchHandler @ 0260e5e0 */
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (uVar5,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
                    /* catch() { ... } // from try @ 0260eda0 with catch @ 0260edbc */
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x28),uVar5);
                    /* try { // try from 0260edc0 to 0270edc7 has its CatchHandler @ 0260edd0 */
                    /* try { // try from 0260edc8 to 0270edd3 has its CatchHandler @ 0260e5e0 */
    LiveOpsBase___ctor_2521d54(param_1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0260edc0 with catch @ 0260edd0
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

