/* IL2CPP: HomeReturnOffer$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o HomeReturnOffer__ApplyHomeAction (HomeReturnOffer_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeReturnOffer$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o HomeReturnOffer__ApplyHomeAction (HomeReturnOffer_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] HomeReturnOffer__ApplyHomeAction_2519bc4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint auStack_38 [6];
  
  if ((bRam0000000004f4be34 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c94d0);
    FUN_021f03f8(PTR_DAT_049c94d8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c94e0);
    FUN_021f03f8(PTR_DAT_049c94e8);
    FUN_021f03f8(PTR_DAT_049c4ff8);
    bRam0000000004f4be34 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(char *)(param_1 + 0x48) == '\0') goto LAB_02619e08;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x98);
    if (lVar4 != 0) {
                    /* try { // try from 02619c7c to 02719d03 has its CatchHandler @ 02619e60 */
      auStack_38[0] = iVar2 + 1U;
      uVar5 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                        (lVar4,auStack_38,*(undefined8 *)PTR_DAT_049c94d8);
      if ((uVar5 & 1) == 0) goto LAB_02619e08;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x98), lVar4 != 0)) {
        auStack_38[0] = iVar2 + 1U;
        lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___get_Item_298659c
                          (lVar4,auStack_38,*(undefined8 *)PTR_DAT_049c94e8);
        if ((lVar4 != 0) &&
           ((*(long *)(lVar4 + 0x18) != 0 &&
            (lVar4 = System_String__Split_2f802dc(*(long *)(lVar4 + 0x18),0x5f,0,0), lVar4 != 0))))
        {
          if (*(int *)(lVar4 + 0x18) == 0) {
LAB_02619e24:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02619ddc with catch @ 02619e24
                       try { // try from 02619e24 to 02719eb3 has its CatchHandler @ 02619848 */
            FUN_021f06a8();
          }
                    /* try { // try from 02619d04 to 02719dc3 has its CatchHandler @ 02619848 */
          uVar5 = System_String__Equals_2f7b554
                            (*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_049c4ff8,3,0);
          if ((uVar5 & 1) == 0) {
            if (*(uint *)(lVar4 + 0x18) == 0) goto LAB_02619e24;
            uVar6 = *(undefined8 *)(lVar4 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar6,1,auStack_38,*(undefined8 *)PTR_DAT_049c94d0);
            uVar3 = auStack_38[0];
          }
          else {
            if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_02619e24;
            uVar3 = System_Int32__Parse_30fbdd0(*(undefined8 *)(lVar4 + 0x28),0);
            if ((*(long *)(param_1 + 0x18) == 0) ||
               (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x90), lVar4 == 0)) goto LAB_02619e20;
            auStack_38[0] = uVar3;
            lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                              (lVar4,auStack_38,*(undefined8 *)PTR_DAT_049c94e0);
            if (lVar4 == 0) goto LAB_02619e08;
            uVar3 = HomeLiveOpsSheet_Slot__GetCurrent_25613cc(lVar4,0);
          }
          if (uVar3 == 3) {
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_02619e20;
            if (*(char *)(*(long *)(param_1 + 0x50) + 0x10) == '\0') {
              uVar3 = 3;
            }
            else {
                    /* try { // try from 02619dc4 to 02719dcf has its CatchHandler @ 02619e28 */
              uVar3 = HomeReturnOffer__GetOpenAreaOffer_2519e28(param_1);
            }
          }
          if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 02619ddc to 02719deb has its CatchHandler @ 02619e24 */
            uVar5 = LiveOpsModule__CanShowPopup_2547858(*(long *)(param_1 + 0x30),uVar3,0);
            if ((uVar5 & 1) != 0) {
                    /* try { // try from 02619df0 to 02719df3 has its CatchHandler @ 02619e78 */
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_02619e20;
                    /* try { // try from 02619df4 to 02719df7 has its CatchHandler @ 02619e4c */
                    /* try { // try from 02619df8 to 02719dfb has its CatchHandler @ 02619e74 */
                    /* try { // try from 02619dfc to 02719dff has its CatchHandler @ 02619e44 */
                    /* try { // try from 02619e00 to 02719e07 has its CatchHandler @ 02619e58 */
              LiveOpsModule__Show_253e230(auStack_38,*(long *)(param_1 + 0x30),uVar3,1,0);
            }
LAB_02619e08:
                    /* try { // try from 02619e08 to 02719e0b has its CatchHandler @ 02619e54 */
                    /* try { // try from 02619e0c to 02719e0f has its CatchHandler @ 02619e70 */
                    /* try { // try from 02619e10 to 02719e13 has its CatchHandler @ 02619e6c */
                    /* try { // try from 02619e14 to 02719e17 has its CatchHandler @ 02619e68 */
                    /* try { // try from 02619e18 to 02719e1b has its CatchHandler @ 02619e50 */
                    /* try { // try from 02619e1c to 02719e1f has its CatchHandler @ 02619e38 */
            return ZEXT816(0);
          }
        }
      }
    }
  }
LAB_02619e20:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02619e20 to 02719e23 has its CatchHandler @ 02619e64 */
  FUN_021f06a0();
}

