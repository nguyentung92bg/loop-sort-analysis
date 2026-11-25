/* IL2CPP: LavaQuest$$Initialize
void LavaQuest__Initialize (LavaQuest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuest$$Initialize
   void LavaQuest__Initialize (LavaQuest_o* __this, const MethodInfo* method); */

void LavaQuest__Initialize_2519efc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_049c94f0;
  puVar2 = PTR_DAT_049c2c18;
  puVar1 = PTR_DAT_049c2c08;
                    /* try { // try from 02619f04 to 02719f53 has its CatchHandler @ 02619848 */
  if ((bRam0000000004f4be36 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c20);
    FUN_021f03f8(PTR_DAT_049c9250);
                    /* try { // try from 02619f54 to 02719f63 has its CatchHandler @ 02619f64 */
    FUN_021f03f8(PTR_DAT_049c90d0);
    FUN_021f03f8(PTR_DAT_049c2c08);
                    /* catch() { ... } // from try @ 02619eec with catch @ 02619f64
                       catch() { ... } // from try @ 02619f54 with catch @ 02619f64 */
                    /* try { // try from 02619f68 to 02719f6b has its CatchHandler @ 02619f74 */
                    /* try { // try from 02619f6c to 02719f77 has its CatchHandler @ 02619848 */
    FUN_021f03f8(PTR_DAT_049c2c30);
                    /* catch() { ... } // from try @ 02619ecc with catch @ 02619f74
                       catch() { ... } // from try @ 02619f68 with catch @ 02619f74 */
    FUN_021f03f8(PTR_DAT_049c2c18);
                    /* try { // try from 02619f84 to 0271a093 has its CatchHandler @ 02619f84
                       catch() { ... } // from try @ 02619f84 with catch @ 02619f84
                       catch() { ... } // from try @ 0261a118 with catch @ 02619f84
                       catch() { ... } // from try @ 0261a258 with catch @ 02619f84
                       catch() { ... } // from try @ 0261a72c with catch @ 02619f84
                       catch() { ... } // from try @ 0261a7fc with catch @ 02619f84
                       catch() { ... } // from try @ 0261a90c with catch @ 02619f84
                       catch() { ... } // from try @ 0261a978 with catch @ 02619f84 */
    FUN_021f03f8(PTR_DAT_049c90d8);
    FUN_021f03f8(PTR_DAT_049c9258);
    FUN_021f03f8(PTR_DAT_049c94f8);
    FUN_021f03f8(PTR_DAT_049c94f0);
    FUN_021f03f8(PTR_DAT_049c9500);
    FUN_021f03f8(PTR_DAT_049c9508);
    FUN_021f03f8(PTR_DAT_049c9510);
    FUN_021f03f8(PTR_DAT_049c9518);
    FUN_021f03f8(PTR_DAT_049c2c58);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c9270);
    FUN_021f03f8(PTR_DAT_049c90f0);
    bRam0000000004f4be36 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar3,0);
  lVar9 = *(long *)puVar2;
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c94f8;
  puVar3 = PTR_DAT_049c2c60;
  puVar2 = PTR_DAT_049c2c30;
  puVar1 = PTR_DAT_049c2c20;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 0261a094 to 0271a0a3 has its CatchHandler @ 0261a8dc */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
                    /* try { // try from 0261a0b8 to 0271a0bf has its CatchHandler @ 0261a8ac */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar3);
                    /* try { // try from 0261a0c8 to 0271a0d3 has its CatchHandler @ 0261a8a8 */
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 0261a0d4 to 0271a0df has its CatchHandler @ 0261a8a4 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar9 = *(long *)puVar2;
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0261a110 to 0271a117 has its CatchHandler @ 0261a8a0 */
    lVar6 = FUN_02229718();
  }
                    /* try { // try from 0261a118 to 0271a127 has its CatchHandler @ 02619f84 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9500;
  puVar3 = PTR_DAT_049c9258;
  puVar2 = PTR_DAT_049c9250;
  puVar1 = PTR_DAT_049c2c58;
                    /* try { // try from 0261a128 to 0271a13b has its CatchHandler @ 0261a86c */
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 0261a144 to 0271a157 has its CatchHandler @ 0261a868 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
                    /* try { // try from 0261a160 to 0271a16b has its CatchHandler @ 0261a89c */
                    /* try { // try from 0261a16c to 0271a177 has its CatchHandler @ 0261a864 */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 0261a178 to 0271a18b has its CatchHandler @ 0261a860 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar9 = *(long *)puVar3;
                    /* try { // try from 0261a194 to 0271a1a3 has its CatchHandler @ 0261a898 */
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar9);
                    /* try { // try from 0261a1a4 to 0271a1af has its CatchHandler @ 0261a85c */
    lVar6 = *(long *)(lVar9 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
                    /* try { // try from 0261a1c0 to 0271a1cb has its CatchHandler @ 0261a810 */
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9508;
  puVar3 = PTR_DAT_049c9270;
  puVar2 = PTR_DAT_049c90d8;
  puVar1 = PTR_DAT_049c90d0;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 0261a1fc to 0271a207 has its CatchHandler @ 0261a894 */
    lVar6 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar3);
                    /* try { // try from 0261a21c to 0271a22f has its CatchHandler @ 0261a858 */
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar9 = *(long *)puVar2;
  lVar6 = *(long *)(lVar9 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar9);
    lVar6 = *(long *)(lVar9 + 0x38);
  }
                    /* try { // try from 0261a250 to 0271a257 has its CatchHandler @ 0261a850 */
  lVar6 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 0261a258 to 0271a27f has its CatchHandler @ 02619f84 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c90f0;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 0261a280 to 0271a28b has its CatchHandler @ 0261a890 */
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
                    /* try { // try from 0261a290 to 0271a29b has its CatchHandler @ 0261a84c */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar8,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar1);
  if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 0261a2b4 to 0271a2d7 has its CatchHandler @ 0261a874 */
    uVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049c9510);
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0xa0),uVar5);
                    /* try { // try from 0261a2d8 to 0271a2e3 has its CatchHandler @ 0261a848 */
    if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 0261a2e4 to 0271a2fb has its CatchHandler @ 0261a844 */
      uVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                        (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_049c9518);
      puVar7 = (undefined8 *)(param_1 + 0xa8);
      *puVar7 = uVar5;
                    /* try { // try from 0261a2fc to 0271a30f has its CatchHandler @ 0261a88c */
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                     ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

