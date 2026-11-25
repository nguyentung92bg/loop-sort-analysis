/* IL2CPP: HomeLiveOpsSheet$$FindSlot
HomeLiveOpsSheet_Slot_o* HomeLiveOpsSheet__FindSlot (HomeLiveOpsSheet_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeLiveOpsSheet$$FindSlot
   HomeLiveOpsSheet_Slot_o* HomeLiveOpsSheet__FindSlot (HomeLiveOpsSheet_o* __this, int32_t liveOps,
   const MethodInfo* method); */

long HomeLiveOpsSheet__FindSlot_2560f84(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_58 [16];
  undefined4 uStack_44;
  
  puVar4 = PTR_DAT_049c41d8;
                    /* try { // try from 02660f94 to 02760f97 has its CatchHandler @ 02660fc8 */
                    /* try { // try from 02660fa8 to 02760fab has its CatchHandler @ 02660fc4 */
  if ((bRam0000000004f4c11e & 1) == 0) {
                    /* try { // try from 02660fbc to 02760fbf has its CatchHandler @ 02660fc0 */
    FUN_021f03f8(PTR_DAT_049c41a8);
                    /* catch() { ... } // from try @ 02660fbc with catch @ 02660fc0
                       try { // try from 02660fc0 to 02760ffb has its CatchHandler @ 02660d04 */
                    /* catch() { ... } // from try @ 02660fa8 with catch @ 02660fc4 */
                    /* catch() { ... } // from try @ 02660f94 with catch @ 02660fc8 */
    FUN_021f03f8(PTR_DAT_049c41b0);
                    /* catch() { ... } // from try @ 02660eb0 with catch @ 02660fcc */
                    /* catch() { ... } // from try @ 02660ef8 with catch @ 02660fd0 */
                    /* catch() { ... } // from try @ 02660ee8 with catch @ 02660fd4 */
    FUN_021f03f8(PTR_DAT_049c41b8);
                    /* catch() { ... } // from try @ 02660ed0 with catch @ 02660fd8 */
                    /* catch() { ... } // from try @ 02660f6c with catch @ 02660fdc */
                    /* catch() { ... } // from try @ 02660e98 with catch @ 02660fe0 */
    FUN_021f03f8(PTR_DAT_049cb9c0);
                    /* catch() { ... } // from try @ 02660e08 with catch @ 02660fe4 */
                    /* catch() { ... } // from try @ 02660e28 with catch @ 02660fe8 */
    FUN_021f03f8(PTR_DAT_049c41d8);
    bRam0000000004f4c11e = 1;
  }
  puVar5 = PTR_DAT_049cb9c0;
  puVar3 = PTR_DAT_049c41b8;
  puVar2 = PTR_DAT_049c41b0;
  puVar1 = PTR_DAT_049c41a8;
                    /* try { // try from 02660ffc to 02760fff has its CatchHandler @ 02661028 */
                    /* try { // try from 02661000 to 0276102b has its CatchHandler @ 02660d04 */
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  auStack_58 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                         (param_1,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 02660ffc with catch @ 02661028 */
                    /* try { // try from 0266102c to 02761033 has its CatchHandler @ 02661050 */
  do {
                    /* try { // try from 02661034 to 02761053 has its CatchHandler @ 02660d04 */
    uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                      (auStack_58,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      lVar7 = 0;
      break;
    }
    lVar7 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                      (auStack_58,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 0266102c with catch @ 02661050 */
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_44 = param_2;
    uVar6 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                      (*(long *)(lVar7 + 0x30),&uStack_44,*(undefined8 *)puVar5);
  } while ((uVar6 & 1) == 0);
  Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
            (auStack_58,*(undefined8 *)puVar1);
  return lVar7;
}

