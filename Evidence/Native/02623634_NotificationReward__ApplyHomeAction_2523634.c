/* IL2CPP: NotificationReward$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o NotificationReward__ApplyHomeAction (NotificationReward_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationReward$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o NotificationReward__ApplyHomeAction (NotificationReward_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined8 NotificationReward__ApplyHomeAction_2523634(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [8];
  
  puVar5 = PTR_DAT_049c98b8;
  if ((bRam0000000004f4be87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c2f20);
                    /* try { // try from 02623684 to 0272368b has its CatchHandler @ 02623880 */
    FUN_021f03f8(PTR_DAT_049c98c0);
    FUN_021f03f8(PTR_DAT_049c98c8);
    FUN_021f03f8(PTR_DAT_049c98d0);
                    /* try { // try from 026236a4 to 027236ef has its CatchHandler @ 02623884 */
    FUN_021f03f8(PTR_DAT_049c93c8);
    FUN_021f03f8(PTR_DAT_049c98d8);
    FUN_021f03f8(PTR_DAT_049c93d0);
    FUN_021f03f8(PTR_DAT_049c93d8);
    FUN_021f03f8(PTR_DAT_049c93e0);
    FUN_021f03f8(PTR_DAT_049c98e0);
                    /* try { // try from 026236f0 to 02723717 has its CatchHandler @ 02623590 */
    FUN_021f03f8(PTR_DAT_049c98b8);
    FUN_021f03f8(PTR_DAT_049c98e8);
    bRam0000000004f4be87 = 1;
  }
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
                    /* try { // try from 02623718 to 0272371b has its CatchHandler @ 02623858 */
  uStack_90 = 0;
                    /* try { // try from 0262371c to 0272372f has its CatchHandler @ 0262385c */
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  lStack_c0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  lVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar5);
  auVar16 = System_Object___ctor_3142338(lVar8,0);
  if (lVar8 != 0) {
                    /* try { // try from 02623740 to 02723743 has its CatchHandler @ 02623854 */
    *(long *)(lVar8 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar8 + 0x10),param_1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      return 0;
    }
                    /* try { // try from 02623760 to 02723767 has its CatchHandler @ 02623870 */
    *(undefined1 *)(param_1 + 0x20) = 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = extraout_x1;
    auVar16 = auVar16 << 0x40;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar9 = NotificationModule__TryGetRespondRewards_254cb00
                        (*(long *)(param_1 + 0x18),&lStack_58,0);
                    /* try { // try from 02623788 to 0272378f has its CatchHandler @ 02623860 */
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      auVar16 = ZEXT816(0);
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 02623794 to 027237a3 has its CatchHandler @ 02623864 */
        lVar10 = Monitors__Get_object__26889d0
                           (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_049c93e0);
        lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c93d8);
                    /* try { // try from 026237bc to 027237c3 has its CatchHandler @ 0262387c */
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar11,*(undefined8 *)PTR_DAT_049c93d0);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = extraout_x1_00;
        auVar16 = auVar3 << 0x40;
        if (lStack_58 != 0) {
                    /* try { // try from 026237e4 to 027237eb has its CatchHandler @ 02623874 */
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (lStack_58,&uStack_e8,*(undefined8 *)PTR_DAT_049c98d8);
          puVar7 = PTR_DAT_049c98d0;
          puVar6 = PTR_DAT_049c98c8;
          puVar5 = PTR_DAT_049c93c8;
                    /* try { // try from 026237fc to 0272380f has its CatchHandler @ 02623878 */
          puStack_98 = puStack_e0;
          uStack_a0 = uStack_e8;
          puStack_e0 = &uStack_a0;
                    /* try { // try from 02623810 to 02723847 has its CatchHandler @ 02623590 */
          uStack_90 = uStack_d8;
          uStack_e8 = 0;
          while (uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&uStack_a0,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
            lVar15 = *(long *)puVar7;
            lVar12 = *(long *)(lVar15 + 0x20);
            uVar2 = *(ushort *)(lVar12 + 0x135);
            lVar13 = lVar12;
            if ((uVar2 & 1) == 0) {
              lVar13 = FUN_02229718();
                    /* try { // try from 02623848 to 0272384b has its CatchHandler @ 0262386c */
              lVar12 = *(long *)(lVar15 + 0x20);
                    /* try { // try from 0262384c to 0272384f has its CatchHandler @ 02623868 */
                    /* try { // try from 02623850 to 0272389f has its CatchHandler @ 02623590 */
              uVar2 = *(ushort *)(lVar12 + 0x135);
                    /* catch() { ... } // from try @ 02623740 with catch @ 02623854 */
            }
                    /* catch() { ... } // from try @ 0262371c with catch @ 0262385c */
                    /* catch() { ... } // from try @ 02623788 with catch @ 02623860 */
                    /* catch() { ... } // from try @ 02623794 with catch @ 02623864 */
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
                    /* catch() { ... } // from try @ 0262384c with catch @ 02623868 */
            if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 02623848 with catch @ 0262386c */
              lVar12 = FUN_02229718();
            }
                    /* catch() { ... } // from try @ 02623760 with catch @ 02623870 */
                    /* catch() { ... } // from try @ 026237e4 with catch @ 02623874 */
                    /* catch() { ... } // from try @ 026237fc with catch @ 02623878 */
                    /* catch() { ... } // from try @ 026237bc with catch @ 0262387c */
                    /* catch() { ... } // from try @ 02623684 with catch @ 02623880 */
                    /* catch() { ... } // from try @ 026236a4 with catch @ 02623884 */
            uVar14 = thunk_FUN_0224e54c(&uStack_a0,
                                        *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(auStack_48,uVar14,uVar1);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* try { // try from 026238a0 to 027238a3 has its CatchHandler @ 026238bc */
                    /* try { // try from 026238a4 to 027238bf has its CatchHandler @ 02623590 */
            FUN_02333498(lVar11,auStack_48,*(undefined8 *)puVar5);
          }
                    /* catch() { ... } // from try @ 026238a0 with catch @ 026238bc */
                    /* try { // try from 026238c0 to 027238c7 has its CatchHandler @ 026238d0 */
                    /* try { // try from 026238c8 to 027238d3 has its CatchHandler @ 02623590 */
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_a0,*(undefined8 *)PTR_DAT_049c98c0);
                    /* catch() { ... } // from try @ 026238c0 with catch @ 026238d0 */
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          uStack_d0 = Phrase__get_NotificationRewardTitle_2523a6c();
          thunk_FUN_021f190c(&uStack_d0,uStack_d0);
          uStack_c8 = Phrase__get_NotificationRewardDesc_2523ae8();
          thunk_FUN_021f190c((ulong)&uStack_d0 | 8,uStack_c8);
          lStack_c0 = lVar11;
          thunk_FUN_021f190c(&lStack_c0,lVar11);
          uStack_b8 = *(undefined8 *)PTR_DAT_049c98e8;
          thunk_FUN_021f190c(&uStack_b8);
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          uStack_68 = uStack_b8;
          lStack_70 = lStack_c0;
          uStack_60 = uStack_b0;
          if (*(int *)(*(long *)PTR_DAT_049c2f20 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar14 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__Create_37c14c4(0);
          *(undefined8 *)(lVar8 + 0x18) = uVar14;
          auVar16 = thunk_FUN_021f190c();
          if (lVar10 != 0) {
            uStack_108 = uStack_78;
            uStack_110 = uStack_80;
            uStack_f8 = uStack_68;
            lStack_100 = lStack_70;
            uStack_f0 = uStack_60;
            RewardClaimMonitor__Show_245c954(lVar10,&uStack_110,0);
            uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4308);
            System_Action___ctor_306b98c(uVar14,lVar8,*(undefined8 *)PTR_DAT_049c98e0,0);
            RewardClaimMonitor__AddClaimListener_245cb98(lVar10,uVar14,0);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = extraout_x1_01;
            auVar16 = auVar4 << 0x40;
            if (*(long *)(lVar8 + 0x18) != 0) {
              uVar14 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__get_Task_37c1658
                                 (*(long *)(lVar8 + 0x18),0);
              return uVar14;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0(auVar16._0_8_,auVar16._8_8_);
}

