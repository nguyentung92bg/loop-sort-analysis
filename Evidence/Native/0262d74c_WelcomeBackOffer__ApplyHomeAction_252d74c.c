/* IL2CPP: WelcomeBackOffer$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o WelcomeBackOffer__ApplyHomeAction (WelcomeBackOffer_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0262d968) */
/* WARNING: Removing unreachable block (ram,0x0262da6c) */
/* IL2CPP: WelcomeBackOffer$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o WelcomeBackOffer__ApplyHomeAction (WelcomeBackOffer_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] WelcomeBackOffer__ApplyHomeAction_252d74c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  long lStack_58;
  undefined1 auStack_50 [16];
  uint uStack_34;
  
  if ((bRam0000000004f4bede & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9c38);
    FUN_021f03f8(PTR_DAT_049c9c40);
    FUN_021f03f8(PTR_DAT_049c41a8);
    FUN_021f03f8(PTR_DAT_049c41b0);
    FUN_021f03f8(PTR_DAT_049c41b8);
    FUN_021f03f8(PTR_DAT_049c91e0);
    FUN_021f03f8(PTR_DAT_049c9c48);
    FUN_021f03f8(PTR_DAT_049c9c50);
    FUN_021f03f8(PTR_DAT_049c9c58);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049c41d8);
    bRam0000000004f4bede = 1;
  }
  puVar3 = PTR_DAT_049c9c40;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_68._8_8_ = 0;
  lStack_58 = 0;
  auStack_68._0_8_ = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_58,*(undefined8 *)PTR_DAT_049c9c38);
    puStack_70 = auStack_50;
    lStack_78 = 0;
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_68 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar9,*(undefined8 *)PTR_DAT_049c41d8);
    puVar6 = PTR_DAT_049c91e0;
    puVar5 = PTR_DAT_049c41b8;
    puVar4 = PTR_DAT_049c41b0;
    puVar3 = PTR_DAT_049c2c68;
    puStack_b0 = auStack_68;
    uStack_b8 = 0;
    while (uVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                              (auStack_68,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
      lVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_68,*(undefined8 *)puVar5);
                    /* try { // try from 0262d8b8 to 0272d8bf has its CatchHandler @ 0262dc3c */
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar9,0);
      if ((uVar10 & 1) == 0) {
                    /* try { // try from 0262d8d8 to 0272d923 has its CatchHandler @ 0262dcc0 */
        uVar7 = HomeLiveOpsSheet_Slot__GetCurrent_25613cc(lVar9,0);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x88);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_34 = uVar7;
        lVar9 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar9,&uStack_34,*(undefined8 *)puVar3);
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x20) != '\0')) {
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0262da54 to 0272da5b has its CatchHandler @ 0262dc34 */
            FUN_021f06a0();
          }
          uVar10 = LiveOpsModule__CanShowPopup_2547858(*(long *)(param_1 + 0x30),uVar7,0);
          if ((uVar10 & 1) != 0) {
                    /* try { // try from 0262d924 to 0272d93b has its CatchHandler @ 0262d740 */
            if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uStack_34 = uVar7;
            FUN_02333498(lStack_58,&uStack_34,*(undefined8 *)puVar6);
                    /* try { // try from 0262d93c to 0272d943 has its CatchHandler @ 0262dc30 */
          }
        }
      }
    }
                    /* try { // try from 0262d944 to 0272d983 has its CatchHandler @ 0262d740 */
    Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
              (auStack_68,*(undefined8 *)PTR_DAT_049c41a8);
    lVar9 = lStack_58;
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0262da74 to 0272dabf has its CatchHandler @ 0262dc40 */
      FUN_021f06a0();
    }
    if (*(int *)(lStack_58 + 0x18) != 0) {
      uStack_98 = *(undefined8 *)(param_1 + 0x48);
      uStack_a0 = *(undefined8 *)(param_1 + 0x40);
      uStack_88 = *(undefined8 *)(param_1 + 0x58);
      uStack_90 = *(undefined8 *)(param_1 + 0x50);
                    /* try { // try from 0262d984 to 0272d98b has its CatchHandler @ 0262dc38 */
      iVar8 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_a0,0);
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar1 = *(int *)(lStack_58 + 0x18);
                    /* try { // try from 0262d9a4 to 0272d9ef has its CatchHandler @ 0262dc84 */
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar8 / iVar1;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar9,iVar8 - iVar2 * iVar1,&uStack_b8,*(undefined8 *)PTR_DAT_049c9c50);
      uVar10 = uStack_b8;
      iVar8 = CloudPrefsInt__get_Value_24e99c0(param_1 + 0x40,0);
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar1 = *(int *)(lStack_58 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (iVar8 + 1) / iVar1;
      }
      CloudPrefsInt__set_Value_24e9a2c(param_1 + 0x40,(iVar8 + 1) - iVar2 * iVar1,0);
                    /* try { // try from 0262d9f0 to 0272da07 has its CatchHandler @ 0262d740 */
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 0262da08 to 0272da0b has its CatchHandler @ 0262dc28 */
      LiveOpsModule__Show_253e230(&uStack_b8,*(long *)(param_1 + 0x30),uVar10 & 0xffffffff,1,0);
    }
                    /* try { // try from 0262da0c to 0272da53 has its CatchHandler @ 0262d740 */
    lVar9 = lStack_78;
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_70,*(undefined8 *)PTR_DAT_049c9c58);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar9);
    }
  }
  return ZEXT816(0);
}

