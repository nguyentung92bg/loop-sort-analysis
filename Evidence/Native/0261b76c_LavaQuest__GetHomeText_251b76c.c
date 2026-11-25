/* IL2CPP: LavaQuest$$GetHomeText
System_String_o* LavaQuest__GetHomeText (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$GetHomeText
   System_String_o* LavaQuest__GetHomeText (LavaQuest_o* __this, const MethodInfo* method); */

undefined8 LavaQuest__GetHomeText_251b76c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f4be44 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 0261b7bc to 0271b7c7 has its CatchHandler @ 0261b90c */
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* try { // try from 0261b7d4 to 0271b7e3 has its CatchHandler @ 0261b908 */
    bRam0000000004f4be44 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar6 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0xc,0);
    puVar2 = PTR_DAT_049b5310;
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 0261b810 to 0271b81f has its CatchHandler @ 0261b900 */
      lVar8 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574();
        lVar8 = *(long *)puVar2;
      }
      puVar4 = PTR_DAT_049c5888;
      lVar8 = *(long *)(lVar8 + 0xb8);
                    /* try { // try from 0261b830 to 0271b83b has its CatchHandler @ 0261b8ec */
      uStack_88 = *(undefined8 *)(lVar8 + 0x678);
      uStack_90 = *(undefined8 *)(lVar8 + 0x670);
      uStack_78 = *(undefined8 *)(lVar8 + 0x688);
      uStack_80 = *(undefined8 *)(lVar8 + 0x680);
      uStack_68 = *(undefined8 *)(lVar8 + 0x698);
      uStack_70 = *(undefined8 *)(lVar8 + 0x690);
                    /* try { // try from 0261b848 to 0271b857 has its CatchHandler @ 0261b8e8 */
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_90,&uStack_60,*(undefined8 *)PTR_DAT_049c5888);
      uVar5 = uStack_58;
      uVar7 = uStack_60;
      puVar3 = PTR_DAT_049b5fc8;
      if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
      puVar1 = PTR_DAT_049b5050;
                    /* try { // try from 0261b880 to 0271b883 has its CatchHandler @ 0261b9f8 */
                    /* try { // try from 0261b884 to 0271b887 has its CatchHandler @ 0261ba28 */
                    /* try { // try from 0261b888 to 0271b88b has its CatchHandler @ 0261b9f4 */
                    /* try { // try from 0261b88c to 0271b88f has its CatchHandler @ 0261b9ec */
                    /* try { // try from 0261b890 to 0271b893 has its CatchHandler @ 0261b9e8 */
      if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                    /* try { // try from 0261b894 to 0271b897 has its CatchHandler @ 0261ba24 */
        FUN_021f0574();
      }
                    /* try { // try from 0261b898 to 0271b89b has its CatchHandler @ 0261b9e0 */
                    /* try { // try from 0261b89c to 0271b89f has its CatchHandler @ 0261ba38 */
                    /* try { // try from 0261b8a0 to 0271b8a3 has its CatchHandler @ 0261b9c8 */
                    /* try { // try from 0261b8a4 to 0271b8a7 has its CatchHandler @ 0261ba34 */
                    /* try { // try from 0261b8a8 to 0271b8ab has its CatchHandler @ 0261b9b4 */
                    /* try { // try from 0261b8ac to 0271b8af has its CatchHandler @ 0261ba1c */
      uVar6 = System_DateTimeOffset__op_GreaterThan_30e48c8(uVar7,uVar5,auVar9._0_8_,auVar9._8_8_,0)
      ;
                    /* try { // try from 0261b8b0 to 0271b8b3 has its CatchHandler @ 0261b974 */
      if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 0261b8bc with catch @ 0261b970 */
                    /* catch() { ... } // from try @ 0261b8b0 with catch @ 0261b974 */
        uVar7 = Phrase__get_JoinUpper_252518c(0);
      }
      else {
                    /* try { // try from 0261b8b4 to 0271b8b7 has its CatchHandler @ 0261ba30 */
        lVar8 = *(long *)puVar2;
                    /* try { // try from 0261b8b8 to 0271b8bb has its CatchHandler @ 0261ba18 */
                    /* try { // try from 0261b8bc to 0271b8bf has its CatchHandler @ 0261b970 */
        if (*(int *)(lVar8 + 0xe4) == 0) {
                    /* try { // try from 0261b8c0 to 0271b8c3 has its CatchHandler @ 0261ba14 */
          FUN_021f0574();
                    /* try { // try from 0261b8c4 to 0271b8c7 has its CatchHandler @ 0261b958 */
          lVar8 = *(long *)puVar2;
        }
                    /* try { // try from 0261b8c8 to 0271b8cb has its CatchHandler @ 0261b998 */
        lVar8 = *(long *)(lVar8 + 0xb8);
                    /* try { // try from 0261b8cc to 0271b8cf has its CatchHandler @ 0261b994 */
                    /* try { // try from 0261b8d0 to 0271b8d3 has its CatchHandler @ 0261b954 */
                    /* try { // try from 0261b8d4 to 0271b8d7 has its CatchHandler @ 0261b988 */
                    /* try { // try from 0261b8d8 to 0271b8db has its CatchHandler @ 0261b984 */
        uStack_b8 = *(undefined8 *)(lVar8 + 0x678);
        uStack_c0 = *(undefined8 *)(lVar8 + 0x670);
                    /* try { // try from 0261b8dc to 0271b8df has its CatchHandler @ 0261b97c */
        uStack_a8 = *(undefined8 *)(lVar8 + 0x688);
        uStack_b0 = *(undefined8 *)(lVar8 + 0x680);
                    /* try { // try from 0261b8e0 to 0271b8e3 has its CatchHandler @ 0261b978 */
        uStack_98 = *(undefined8 *)(lVar8 + 0x698);
        uStack_a0 = *(undefined8 *)(lVar8 + 0x690);
                    /* try { // try from 0261b8e4 to 0271b8e7 has its CatchHandler @ 0261b940 */
                    /* catch() { ... } // from try @ 0261b848 with catch @ 0261b8e8
                       try { // try from 0261b8e8 to 0271ba53 has its CatchHandler @ 0261a990 */
                    /* catch() { ... } // from try @ 0261b830 with catch @ 0261b8ec */
        CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                  (&uStack_c0,&uStack_60,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 0261ad40 with catch @ 0261b8f0 */
                    /* catch() { ... } // from try @ 0261acc0 with catch @ 0261b8f4 */
                    /* catch() { ... } // from try @ 0261ac78 with catch @ 0261b8f8 */
                    /* catch() { ... } // from try @ 0261ac40 with catch @ 0261b8fc */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0261b810 with catch @ 0261b900 */
          FUN_021f0574();
        }
                    /* catch() { ... } // from try @ 0261b7f8 with catch @ 0261b904 */
                    /* catch() { ... } // from try @ 0261b7d4 with catch @ 0261b908 */
        auVar9 = TimeProvider__get_UtcNow_24f95ec(0);
                    /* catch() { ... } // from try @ 0261b7bc with catch @ 0261b90c */
                    /* catch() { ... } // from try @ 0261afe0 with catch @ 0261b910 */
                    /* catch() { ... } // from try @ 0261afb0 with catch @ 0261b914 */
                    /* catch() { ... } // from try @ 0261af18 with catch @ 0261b918 */
                    /* catch() { ... } // from try @ 0261b460 with catch @ 0261b91c */
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0261b430 with catch @ 0261b920 */
          FUN_021f0574();
        }
                    /* catch() { ... } // from try @ 0261b344 with catch @ 0261b924 */
                    /* catch() { ... } // from try @ 0261b29c with catch @ 0261b928 */
                    /* catch() { ... } // from try @ 0261b238 with catch @ 0261b92c */
                    /* catch() { ... } // from try @ 0261ad64 with catch @ 0261b930 */
                    /* catch() { ... } // from try @ 0261ad44 with catch @ 0261b934 */
                    /* catch() { ... } // from try @ 0261ad20 with catch @ 0261b938 */
        uVar7 = System_DateTimeOffset__op_Subtraction_30e4594
                          (uStack_60,uStack_58,auVar9._0_8_,auVar9._8_8_,0);
                    /* catch() { ... } // from try @ 0261ad04 with catch @ 0261b93c */
                    /* catch() { ... } // from try @ 0261b8e4 with catch @ 0261b940 */
                    /* catch() { ... } // from try @ 0261acec with catch @ 0261b944 */
                    /* catch() { ... } // from try @ 0261acdc with catch @ 0261b948 */
                    /* catch() { ... } // from try @ 0261ac8c with catch @ 0261b94c */
                    /* catch() { ... } // from try @ 0261abd0 with catch @ 0261b950 */
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0261b8d0 with catch @ 0261b954 */
                    /* catch() { ... } // from try @ 0261b8c4 with catch @ 0261b958 */
          FUN_021f0574(*(long *)PTR_DAT_049b6110);
        }
                    /* catch() { ... } // from try @ 0261b660 with catch @ 0261b95c */
                    /* catch() { ... } // from try @ 0261b61c with catch @ 0261b960 */
                    /* catch() { ... } // from try @ 0261b5e4 with catch @ 0261b964 */
                    /* catch() { ... } // from try @ 0261afe8 with catch @ 0261b968 */
        uVar7 = Extensions__ToReadableString_24e7038(uVar7,2,0);
                    /* catch() { ... } // from try @ 0261afb4 with catch @ 0261b96c */
      }
    }
    else {
                    /* try { // try from 0261b7f8 to 0271b803 has its CatchHandler @ 0261b904 */
      uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
                    /* catch() { ... } // from try @ 0261ac2c with catch @ 0261b978
                       catch() { ... } // from try @ 0261b8e0 with catch @ 0261b978 */
                    /* catch() { ... } // from try @ 0261ac1c with catch @ 0261b97c
                       catch() { ... } // from try @ 0261b8dc with catch @ 0261b97c */
                    /* catch() { ... } // from try @ 0261abf8 with catch @ 0261b980 */
                    /* catch() { ... } // from try @ 0261abd4 with catch @ 0261b984
                       catch() { ... } // from try @ 0261b8d8 with catch @ 0261b984 */
                    /* catch() { ... } // from try @ 0261abac with catch @ 0261b988
                       catch() { ... } // from try @ 0261b8d4 with catch @ 0261b988 */
                    /* catch() { ... } // from try @ 0261ab94 with catch @ 0261b98c */
                    /* catch() { ... } // from try @ 0261ab70 with catch @ 0261b990 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0261ab4c with catch @ 0261b994
                       catch() { ... } // from try @ 0261b8cc with catch @ 0261b994 */
  FUN_021f06a0();
}

