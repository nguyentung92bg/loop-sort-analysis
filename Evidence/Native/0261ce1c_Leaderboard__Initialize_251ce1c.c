/* IL2CPP: Leaderboard$$Initialize
void Leaderboard__Initialize (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$Initialize
   void Leaderboard__Initialize (Leaderboard_o* __this, const MethodInfo* method); */

void Leaderboard__Initialize_251ce1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  if ((bRam0000000004f4be52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9428);
    FUN_021f03f8(PTR_DAT_049c4278);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c4280);
    FUN_021f03f8(PTR_DAT_049c9438);
    FUN_021f03f8(PTR_DAT_049c95e8);
    FUN_021f03f8(PTR_DAT_049c95f0);
    FUN_021f03f8(PTR_DAT_049c95f8);
    FUN_021f03f8(PTR_DAT_049c4b08);
    FUN_021f03f8(PTR_DAT_049c9440);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c42d0);
    FUN_021f03f8(PTR_DAT_049c9600);
    bRam0000000004f4be52 = 1;
  }
  LiveOpsBase__Initialize_2521c88(param_1,0);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_0261d1ac:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                    (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_049c4b08);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x58),uVar5);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0261d1ac;
  AnalyticsModule__GetUserInfo_253fc84(auStack_68,*(long *)(param_1 + 0x28),0);
  if (lStack_48 == 0) goto LAB_0261d1ac;
  lVar6 = System_String__ToLowerInvariant_2f81e54(lStack_48,0);
  plVar8 = (long *)(param_1 + 0x60);
  *plVar8 = lVar6;
  thunk_FUN_021f190c(plVar8,lVar6);
  uVar7 = System_String__IsNullOrEmpty_2f7c924(*plVar8,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar8 == 0) goto LAB_0261d1ac;
    if (*(int *)(*plVar8 + 0x10) < 3) goto LAB_0261cf9c;
  }
  *plVar8 = *(long *)PTR_DAT_049c9600;
  thunk_FUN_021f190c(plVar8);
LAB_0261cf9c:
  puVar2 = PTR_DAT_049c95f8;
  puVar1 = PTR_DAT_049c4280;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c4278);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar2,0);
  lVar10 = *(long *)puVar1;
  lVar6 = *(long *)(lVar10 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar10);
    lVar6 = *(long *)(lVar10 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c95f0;
  puVar3 = PTR_DAT_049c42d0;
  puVar2 = PTR_DAT_049c2c18;
  puVar1 = PTR_DAT_049c2c08;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar9,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar10 = *(long *)puVar2;
  lVar6 = *(long *)(lVar10 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar10);
    lVar6 = *(long *)(lVar10 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c95e8;
  puVar3 = PTR_DAT_049c9438;
  puVar2 = PTR_DAT_049c9428;
  puVar1 = PTR_DAT_049c2c60;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar9,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar10 = *(long *)puVar3;
  lVar6 = *(long *)(lVar10 + 0x38);
  if (lVar6 == 0) {
    FUN_02229774(lVar10);
    lVar6 = *(long *)(lVar10 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c9440;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar9,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar1);
  return;
}

