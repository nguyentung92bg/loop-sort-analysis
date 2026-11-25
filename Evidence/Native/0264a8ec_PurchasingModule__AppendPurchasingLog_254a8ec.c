/* IL2CPP: PurchasingModule$$AppendPurchasingLog
void PurchasingModule__AppendPurchasingLog (PurchasingModule_o* __this, System_String_o* line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$AppendPurchasingLog
   void PurchasingModule__AppendPurchasingLog (PurchasingModule_o* __this, System_String_o* line,
   const MethodInfo* method); */

void PurchasingModule__AppendPurchasingLog_254a8ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_049c5120;
                    /* try { // try from 0264a8f0 to 0274a8ff has its CatchHandler @ 0264a9a0 */
                    /* try { // try from 0264a904 to 0274a90b has its CatchHandler @ 0264a9b4 */
  if ((bRam0000000004f4c031 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
                    /* try { // try from 0264a920 to 0274a923 has its CatchHandler @ 0264a998 */
                    /* try { // try from 0264a924 to 0274a937 has its CatchHandler @ 0264a9bc */
    FUN_021f03f8(PTR_DAT_049ca968);
    bRam0000000004f4c031 = 1;
  }
  puVar2 = PTR_DAT_049ca968;
                    /* try { // try from 0264a93c to 0274a947 has its CatchHandler @ 0264a9b0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0264a948 to 0274a983 has its CatchHandler @ 0264a59c */
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsString__get_Value_3f0e288(param_1 + 0x60,0);
  lVar5 = System_String__Concat_2f7d424(uVar4,param_2,*(undefined8 *)puVar2,0);
  while( true ) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0264a93c with catch @ 0264a9b0 */
      FUN_021f06a0();
    }
                    /* try { // try from 0264a984 to 0274a987 has its CatchHandler @ 0264a9ac */
                    /* try { // try from 0264a988 to 0274a98b has its CatchHandler @ 0264a9a8 */
                    /* try { // try from 0264a98c to 0274a98f has its CatchHandler @ 0264a9a4 */
                    /* try { // try from 0264a990 to 0274a9df has its CatchHandler @ 0264a59c */
                    /* catch() { ... } // from try @ 0264a8c0 with catch @ 0264a994 */
    if ((*(int *)(lVar5 + 0x10) < 0xfa1) ||
       (uVar3 = System_String__IndexOf_2f82474(lVar5,0x3b,0), 0x7ffffffe < uVar3)) break;
                    /* catch() { ... } // from try @ 0264a920 with catch @ 0264a998 */
                    /* catch() { ... } // from try @ 0264a8c4 with catch @ 0264a99c */
                    /* catch() { ... } // from try @ 0264a8f0 with catch @ 0264a9a0 */
                    /* catch() { ... } // from try @ 0264a98c with catch @ 0264a9a4 */
    lVar5 = System_String__Substring_2f81c00(lVar5,uVar3 + 1,0);
                    /* catch() { ... } // from try @ 0264a988 with catch @ 0264a9a8 */
                    /* catch() { ... } // from try @ 0264a984 with catch @ 0264a9ac */
  }
                    /* catch() { ... } // from try @ 0264a904 with catch @ 0264a9b4 */
                    /* catch() { ... } // from try @ 0264a8e0 with catch @ 0264a9b8 */
                    /* catch() { ... } // from try @ 0264a924 with catch @ 0264a9bc */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0264a834 with catch @ 0264a9c0 */
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 0264a854 with catch @ 0264a9c4 */
  puVar1 = PTR_DAT_049c5120;
  if ((bRam0000000004f5c3ea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9d88,lVar5,0);
    FUN_021f03f8(PTR_DAT_049c5120);
    bRam0000000004f5c3ea = 1;
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar1;
  }
  if (**(long **)(lVar8 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (**(long **)(lVar8 + 0xb8),*(undefined8 *)(param_1 + 0x68),lVar5,
               *(undefined8 *)PTR_DAT_049b9d88);
    uVar6 = UnityEngine_PlayerPrefs__TrySetSetString_3c0f86c
                      (*(undefined8 *)(param_1 + 0x68),lVar5,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
    thunk_FUN_02256840(PTR_DAT_04a264f8);
    uVar4 = thunk_FUN_0222ca34();
    uVar7 = thunk_FUN_02256840(PTR_DAT_04a26500);
    UnityEngine_PlayerPrefsException___ctor_3c0f474(uVar4,uVar7);
    uVar7 = thunk_FUN_02256840(PTR_DAT_04a26518);
                    /* WARNING: Subroutine does not return */
    FUN_021f0564(uVar4,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

