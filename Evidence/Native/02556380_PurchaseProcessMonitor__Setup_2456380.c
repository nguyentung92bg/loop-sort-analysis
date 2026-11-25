/* IL2CPP: PurchaseProcessMonitor$$Setup
void PurchaseProcessMonitor__Setup (PurchaseProcessMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseProcessMonitor$$Setup
   void PurchaseProcessMonitor__Setup (PurchaseProcessMonitor_o* __this, const MethodInfo* method);
    */

void PurchaseProcessMonitor__Setup_2456380(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_049c4a70;
  puVar4 = PTR_DAT_049c4a68;
  puVar3 = PTR_DAT_049c4a60;
  puVar2 = PTR_DAT_049c4a58;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b8f3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4a78);
    FUN_021f03f8(PTR_DAT_049c4a80);
    FUN_021f03f8(PTR_DAT_049c4a60);
    FUN_021f03f8(PTR_DAT_049c4a88);
    FUN_021f03f8(PTR_DAT_049c4a90);
    FUN_021f03f8(PTR_DAT_049c4a70);
    FUN_021f03f8(PTR_DAT_049c4a98);
    FUN_021f03f8(PTR_DAT_049c4aa0);
    FUN_021f03f8(PTR_DAT_049c4a58);
    FUN_021f03f8(PTR_DAT_049c4aa8);
    FUN_021f03f8(PTR_DAT_049c4a68);
    FUN_021f03f8(PTR_DAT_049c4ab0);
    FUN_021f03f8(PTR_DAT_049c4ab8);
    FUN_021f03f8(PTR_DAT_049c4ac0);
    FUN_021f03f8(PTR_DAT_049c4ac8);
    FUN_021f03f8(PTR_DAT_049c4ad0);
    FUN_021f03f8(PTR_DAT_049c4ad8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b8f3 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x99f4e89d,uVar6,0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar6,0);
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
  lVar14 = *(long *)puVar5;
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c4ac8;
  puVar3 = PTR_DAT_049c4aa8;
  puVar2 = PTR_DAT_049c4a90;
  puVar1 = PTR_DAT_049c4a88;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar6,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar3,0);
  lVar14 = *(long *)puVar2;
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c4ac0;
  puVar3 = PTR_DAT_049c4ab8;
  puVar2 = PTR_DAT_049c4aa0;
  puVar1 = PTR_DAT_049c4a78;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar6,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar4);
  uVar12 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar3,0);
  lVar14 = *(long *)puVar2;
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c4ad8;
  puVar3 = PTR_DAT_049c4ab0;
  puVar2 = PTR_DAT_049c4a98;
  puVar1 = PTR_DAT_049c4a80;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar12,uVar6,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar4);
  plVar13 = *(long **)(param_1 + 0xb0);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar3,0);
  lVar14 = *(long *)puVar2;
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c4ad0;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718();
  }
  lVar14 = *(long *)puVar1;
  uVar12 = **(undefined8 **)(lVar9 + 0xb8);
  lVar9 = *(long *)(lVar14 + 0x38);
  if (lVar9 == 0) {
    FUN_02229774(lVar14);
    lVar9 = *(long *)(lVar14 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar9 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar7 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar7,uVar6,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x18));
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = **(long **)(lVar14 + 0x38);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718(lVar9);
  }
  lVar14 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar9) {
        puVar8 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02229a4c(plVar13,lVar9,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar13,uVar7,uVar12,puVar8[1]);
  return;
}

