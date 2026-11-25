/* IL2CPP: WeeklyMissions$$Initialize
void WeeklyMissions__Initialize (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$Initialize
   void WeeklyMissions__Initialize (WeeklyMissions_o* __this, const MethodInfo* method); */

void WeeklyMissions__Initialize_252a18c(long param_1)

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
  
  puVar3 = PTR_DAT_049c9ad8;
  puVar2 = PTR_DAT_049c2c18;
  puVar1 = PTR_DAT_049c2c08;
  if ((bRam0000000004f4bec2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ae0);
    FUN_021f03f8(PTR_DAT_049c9ae8);
    FUN_021f03f8(PTR_DAT_049c2c20);
    FUN_021f03f8(PTR_DAT_049c7998);
    FUN_021f03f8(PTR_DAT_049c9af0);
    FUN_021f03f8(PTR_DAT_049c70e8);
    FUN_021f03f8(PTR_DAT_049c3dc8);
    FUN_021f03f8(PTR_DAT_049c9af8);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c3de0);
    FUN_021f03f8(PTR_DAT_049c9b00);
    FUN_021f03f8(PTR_DAT_049c4a88);
    FUN_021f03f8(PTR_DAT_049c2c30);
    FUN_021f03f8(PTR_DAT_049c4a90);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c3dd8);
    FUN_021f03f8(PTR_DAT_049c3df0);
    FUN_021f03f8(PTR_DAT_049c9b08);
    FUN_021f03f8(PTR_DAT_049c79a8);
    FUN_021f03f8(PTR_DAT_049c9b10);
    FUN_021f03f8(PTR_DAT_049c70f8);
    FUN_021f03f8(PTR_DAT_049c9b18);
    FUN_021f03f8(PTR_DAT_049c9b20);
    FUN_021f03f8(PTR_DAT_049c9b28);
    FUN_021f03f8(PTR_DAT_049c7140);
    FUN_021f03f8(PTR_DAT_049c3e10);
    FUN_021f03f8(PTR_DAT_049c3e18);
    FUN_021f03f8(PTR_DAT_049c9b30);
    FUN_021f03f8(PTR_DAT_049c2c58);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c9b38);
    FUN_021f03f8(PTR_DAT_049c9b40);
    FUN_021f03f8(PTR_DAT_049c9b48);
    FUN_021f03f8(PTR_DAT_049c4ac0);
    FUN_021f03f8(PTR_DAT_049c79b0);
    FUN_021f03f8(PTR_DAT_049c9b50);
    FUN_021f03f8(PTR_DAT_049c9b58);
    FUN_021f03f8(PTR_DAT_049c9b60);
    FUN_021f03f8(PTR_DAT_049c9b68);
    FUN_021f03f8(PTR_DAT_049c9b70);
    FUN_021f03f8(PTR_DAT_049c9b78);
    FUN_021f03f8(PTR_DAT_049c9ad8);
    FUN_021f03f8(PTR_DAT_049c9b80);
    FUN_021f03f8(PTR_DAT_049c9b88);
    FUN_021f03f8(PTR_DAT_049c9b90);
    FUN_021f03f8(PTR_DAT_049c9b98);
    FUN_021f03f8(PTR_DAT_049c9ba0);
    FUN_021f03f8(PTR_DAT_049c9ba8);
    bRam0000000004f4bec2 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar3,0);
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
  puVar4 = PTR_DAT_049c9b78;
  puVar3 = PTR_DAT_049c2c60;
  puVar2 = PTR_DAT_049c2c30;
  puVar1 = PTR_DAT_049c2c20;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
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
  puVar4 = PTR_DAT_049c9b58;
  puVar3 = PTR_DAT_049c70f8;
  puVar2 = PTR_DAT_049c70e8;
  puVar1 = PTR_DAT_049c2c58;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                    /* try { // try from 0262a540 to 0272a547 has its CatchHandler @ 0262aeac */
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
                    /* try { // try from 0262a560 to 0272a5ab has its CatchHandler @ 0262aeb4 */
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
                    /* try { // try from 0262a5ac to 0272a60b has its CatchHandler @ 0262a0f8 */
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9b68;
  puVar3 = PTR_DAT_049c7140;
  puVar2 = PTR_DAT_049c3df0;
  puVar1 = PTR_DAT_049c3de0;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 0262a60c to 0272a63b has its CatchHandler @ 0262af18 */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar2;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
                    /* try { // try from 0262a63c to 0272a6ef has its CatchHandler @ 0262a0f8 */
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9b60;
  puVar3 = PTR_DAT_049c3e18;
  puVar2 = PTR_DAT_049c3dd8;
  puVar1 = PTR_DAT_049c3dc8;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
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
                    /* try { // try from 0262a6f0 to 0272a6f7 has its CatchHandler @ 0262aeb0 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9ba0;
  puVar3 = PTR_DAT_049c79a8;
  puVar2 = PTR_DAT_049c7998;
  puVar1 = PTR_DAT_049c3e10;
                    /* try { // try from 0262a718 to 0272a763 has its CatchHandler @ 0262aebc */
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 0262a764 to 0272a78f has its CatchHandler @ 0262a0f8 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
  lVar8 = *(long *)(lVar13 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar13);
    lVar8 = *(long *)(lVar13 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
                    /* try { // try from 0262a790 to 0272a797 has its CatchHandler @ 0262aea8 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
                    /* try { // try from 0262a7a4 to 0272a7b3 has its CatchHandler @ 0262aea4 */
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9b70;
  puVar3 = PTR_DAT_049c9b08;
  puVar2 = PTR_DAT_049c9af0;
  puVar1 = PTR_DAT_049c79b0;
                    /* try { // try from 0262a7b4 to 0272a7d3 has its CatchHandler @ 0262aeb8 */
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                    /* try { // try from 0262a7d4 to 0272ae97 has its CatchHandler @ 0262a0f8 */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
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
  puVar4 = PTR_DAT_049c9b90;
  puVar3 = PTR_DAT_049c9b30;
  puVar2 = PTR_DAT_049c9b20;
  puVar1 = PTR_DAT_049c9ae0;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
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
  puVar4 = PTR_DAT_049c9ba8;
  puVar3 = PTR_DAT_049c9b48;
  puVar2 = PTR_DAT_049c9b28;
  puVar1 = PTR_DAT_049c9b00;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
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
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9b98;
  puVar3 = PTR_DAT_049c9b50;
  puVar2 = PTR_DAT_049c4a90;
  puVar1 = PTR_DAT_049c4a88;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
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
  puVar4 = PTR_DAT_049c9b80;
  puVar3 = PTR_DAT_049c9b18;
  puVar2 = PTR_DAT_049c9af8;
  puVar1 = PTR_DAT_049c4ac0;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar3;
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
  puVar4 = PTR_DAT_049c9b88;
  puVar3 = PTR_DAT_049c9b38;
  puVar2 = PTR_DAT_049c9b10;
  puVar1 = PTR_DAT_049c9ae8;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  plVar12 = *(long **)(param_1 + 0x68);
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
  puVar1 = PTR_DAT_049c9b40;
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

