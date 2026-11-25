/* IL2CPP: LoopSortAccountMergeHandler$$PublishMessage
void LoopSortAccountMergeHandler__PublishMessage (LoopSortAccountMergeHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortAccountMergeHandler$$PublishMessage
   void LoopSortAccountMergeHandler__PublishMessage (LoopSortAccountMergeHandler_o* __this, const
   MethodInfo* method); */

void LoopSortAccountMergeHandler__PublishMessage_223d400(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 0233d3dc with catch @ 0233d408 */
  if ((bRam0000000004f49ae5 & 1) == 0) {
                    /* try { // try from 0233d424 to 0243d497 has its CatchHandler @ 0233d424
                       catch() { ... } // from try @ 0233d424 with catch @ 0233d424
                       catch() { ... } // from try @ 0233d4ac with catch @ 0233d424 */
    FUN_021f03f8(PTR_DAT_049b4f88);
    FUN_021f03f8(PTR_DAT_049b4f90);
    FUN_021f03f8(PTR_DAT_049b4f98);
    FUN_021f03f8(PTR_DAT_049b4fa0);
    bRam0000000004f49ae5 = 1;
  }
  uStack_28 = 0;
  uVar3 = MessagePipe_GlobalMessagePipe__get_IsInitialized_2f2e684(0);
  puVar2 = PTR_DAT_049b4f98;
  puVar1 = PTR_DAT_049b4f88;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b4f90 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___Create_27df7e4
                      (*(undefined8 *)puVar1);
                    /* try { // try from 0233d498 to 0243d4ab has its CatchHandler @ 0233d4c0 */
    puVar8 = (undefined8 *)(param_1 + 0x10);
    *puVar8 = uVar4;
    thunk_FUN_021f190c(puVar8,uVar4);
    plVar5 = (long *)MessagePipe_GlobalMessagePipe__GetPublisher___Il2CppFullySharedGenericType__261c5e8
                               (*(undefined8 *)puVar2);
                    /* try { // try from 0233d4ac to 0243d4d7 has its CatchHandler @ 0233d424 */
    if (plVar5 != (long *)0x0) {
      uStack_28 = *puVar8;
                    /* catch() { ... } // from try @ 0233d498 with catch @ 0233d4c0 */
      thunk_FUN_021f190c(&uStack_28);
      uVar4 = uStack_28;
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b4fa0) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0233d51c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b4fa0,0);
LAB_0233d51c:
      (*(code *)*puVar8)(plVar5,uVar4,puVar8[1]);
    }
  }
  return;
}

