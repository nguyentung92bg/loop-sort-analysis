/* IL2CPP: TransitionMonitor$$Setup
void TransitionMonitor__Setup (TransitionMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TransitionMonitor$$Setup
   void TransitionMonitor__Setup (TransitionMonitor_o* __this, const MethodInfo* method); */

void TransitionMonitor__Setup_2466a4c(long param_1)

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
  
  puVar3 = PTR_DAT_049c5338;
  puVar2 = PTR_DAT_049c5330;
  puVar1 = PTR_DAT_049c5328;
  if ((bRam0000000004f4b969 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5338);
    FUN_021f03f8(PTR_DAT_049c5340);
    FUN_021f03f8(PTR_DAT_049c5328);
    FUN_021f03f8(PTR_DAT_049c5348);
    FUN_021f03f8(PTR_DAT_049c5350);
    FUN_021f03f8(PTR_DAT_049c5358);
    FUN_021f03f8(PTR_DAT_049c5360);
    FUN_021f03f8(PTR_DAT_049c5330);
    bRam0000000004f4b969 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar11 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
            (uVar5,param_1,*(undefined8 *)puVar2,0);
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
  puVar4 = PTR_DAT_049c5360;
  puVar3 = PTR_DAT_049c5358;
  puVar2 = PTR_DAT_049c5348;
  puVar1 = PTR_DAT_049c5340;
  lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d647c
            (uVar11,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)puVar3);
  plVar12 = *(long **)(param_1 + 200);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
            (uVar5,param_1,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar1;
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
  puVar1 = PTR_DAT_049c5350;
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
  MessagePipe_AnonymousAsyncMessageHandler___Il2CppFullySharedGenericType____ctor_27b2760
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
        goto LAB_027d6544;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_02229a4c(plVar12,lVar8,0);
LAB_027d6544:
                    /* WARNING: Could not recover jumptable at 0x027d6560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(plVar12,uVar6,uVar11,puVar7[1]);
  return;
}

