/* IL2CPP: ConveyorViewElement$$Setup
void ConveyorViewElement__Setup (ConveyorViewElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorViewElement$$Setup
   void ConveyorViewElement__Setup (ConveyorViewElement_o* __this, const MethodInfo* method); */

void ConveyorViewElement__Setup_24e2828(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  
  if ((bRam0000000004f4bc72 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1888);
    FUN_021f03f8(PTR_DAT_049c1870);
    FUN_021f03f8(PTR_DAT_049c6cc8);
    FUN_021f03f8(PTR_DAT_049c1890);
    FUN_021f03f8(PTR_DAT_049c1880);
    FUN_021f03f8(PTR_DAT_049c6cd0);
    FUN_021f03f8(PTR_DAT_049c1898);
    FUN_021f03f8(PTR_DAT_049c18a0);
    FUN_021f03f8(PTR_DAT_049c7a48);
    FUN_021f03f8(PTR_DAT_049c7a50);
    FUN_021f03f8(PTR_DAT_049c7a58);
                    /* try { // try from 025e28d0 to 026e28d7 has its CatchHandler @ 025e2ac8 */
    FUN_021f03f8(PTR_DAT_049c7a60);
    FUN_021f03f8(PTR_DAT_049c7a68);
    FUN_021f03f8(PTR_DAT_049c18b8);
                    /* try { // try from 025e28f0 to 026e293b has its CatchHandler @ 025e2ad0 */
    FUN_021f03f8(PTR_DAT_049c18c0);
    FUN_021f03f8(PTR_DAT_049c18c8);
    FUN_021f03f8(PTR_DAT_049c6ce8);
    bRam0000000004f4bc72 = 1;
  }
  ElementBase__Setup_2414158(param_1,0);
  puVar3 = PTR_DAT_049c7a48;
  puVar2 = PTR_DAT_049c1880;
  puVar1 = PTR_DAT_049c1870;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025e293c to 026e295b has its CatchHandler @ 025e27b8 */
  uVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_049c7a68);
                    /* try { // try from 025e295c to 026e295f has its CatchHandler @ 025e2aa4 */
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  thunk_FUN_021f190c();
  uVar11 = *(undefined8 *)(param_1 + 0x48);
                    /* try { // try from 025e2970 to 026e2977 has its CatchHandler @ 025e2ab0 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar3,0);
  lVar13 = *(long *)puVar2;
                    /* try { // try from 025e298c to 026e298f has its CatchHandler @ 025e2aa0 */
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
                    /* try { // try from 025e299c to 026e29a3 has its CatchHandler @ 025e2aa8 */
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 025e29b0 to 026e29bb has its CatchHandler @ 025e2ab4 */
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c7a50;
  puVar3 = PTR_DAT_049c18b8;
  puVar2 = PTR_DAT_049c18a0;
  puVar1 = PTR_DAT_049c1888;
                    /* try { // try from 025e29c0 to 026e29cb has its CatchHandler @ 025e2ac4 */
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
                    /* try { // try from 025e2a14 to 026e2a53 has its CatchHandler @ 025e2acc */
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar2;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 025e2a54 to 026e2a8b has its CatchHandler @ 025e27b8 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c7a58;
  puVar3 = PTR_DAT_049c6cd0;
  puVar2 = PTR_DAT_049c6cc8;
  puVar1 = PTR_DAT_049c18c0;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                    /* try { // try from 025e2a8c to 026e2a8f has its CatchHandler @ 025e2ac0 */
                    /* try { // try from 025e2a90 to 026e2a93 has its CatchHandler @ 025e2abc */
                    /* try { // try from 025e2a94 to 026e2a97 has its CatchHandler @ 025e2ab8 */
                    /* try { // try from 025e2a98 to 026e2a9b has its CatchHandler @ 025e2aac */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 025e2a9c to 026e2aeb has its CatchHandler @ 025e27b8 */
    lVar8 = FUN_02229718();
  }
                    /* catch() { ... } // from try @ 025e298c with catch @ 025e2aa0 */
                    /* catch() { ... } // from try @ 025e295c with catch @ 025e2aa4 */
                    /* catch() { ... } // from try @ 025e299c with catch @ 025e2aa8 */
                    /* catch() { ... } // from try @ 025e2a98 with catch @ 025e2aac */
                    /* catch() { ... } // from try @ 025e2970 with catch @ 025e2ab0 */
                    /* catch() { ... } // from try @ 025e29b0 with catch @ 025e2ab4 */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 025e2a94 with catch @ 025e2ab8 */
                    /* catch() { ... } // from try @ 025e2a90 with catch @ 025e2abc */
  uVar11 = *(undefined8 *)(param_1 + 0x58);
                    /* catch() { ... } // from try @ 025e2a8c with catch @ 025e2ac0 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 025e29c0 with catch @ 025e2ac4 */
                    /* catch() { ... } // from try @ 025e28d0 with catch @ 025e2ac8 */
                    /* catch() { ... } // from try @ 025e2a14 with catch @ 025e2acc */
                    /* catch() { ... } // from try @ 025e28f0 with catch @ 025e2ad0 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
                    /* try { // try from 025e2aec to 026e2aef has its CatchHandler @ 025e2b10 */
    lVar8 = *(long *)(lVar13 + 0x38);
  }
                    /* try { // try from 025e2af0 to 026e2b13 has its CatchHandler @ 025e27b8 */
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c7a60;
  puVar3 = PTR_DAT_049c6ce8;
  puVar2 = PTR_DAT_049c1898;
  puVar1 = PTR_DAT_049c1890;
                    /* catch() { ... } // from try @ 025e2aec with catch @ 025e2b10 */
                    /* try { // try from 025e2b14 to 026e2b1b has its CatchHandler @ 025e2b24 */
                    /* try { // try from 025e2b1c to 026e2b27 has its CatchHandler @ 025e27b8 */
                    /* catch() { ... } // from try @ 025e2b14 with catch @ 025e2b24 */
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  plVar12 = *(long **)(param_1 + 0x60);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar2;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c18c8;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar13 = *(long *)puVar1;
  uVar11 = **(undefined8 **)(lVar8 + 0xb8);
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar8 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar6 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar6,uVar5,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = **(long **)(lVar13 + 0x38);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  lVar13 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar12,lVar8,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar12,uVar6,uVar11,puVar7[1]);
  return;
}

