/* IL2CPP: CoreStreakHomeElement$$Setup
void CoreStreakHomeElement__Setup (CoreStreakHomeElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreakHomeElement$$Setup
   void CoreStreakHomeElement__Setup (CoreStreakHomeElement_o* __this, const MethodInfo* method); */

void CoreStreakHomeElement__Setup_24186d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  
  puVar2 = PTR_DAT_049c2de0;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b746 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2de8);
    FUN_021f03f8(PTR_DAT_049c2df0);
    FUN_021f03f8(PTR_DAT_049c2de0);
    FUN_021f03f8(PTR_DAT_049c2df8);
    FUN_021f03f8(PTR_DAT_049c2e00);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b746 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x854128ce,uVar4,0);
  uVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                    (param_1,0x297c9509,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x40),uVar4);
  puVar3 = PTR_DAT_049c2df8;
  puVar2 = PTR_DAT_049c2df0;
  puVar1 = PTR_DAT_049c2de8;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  CoreStreak__UpdateBarView_2513184(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),0,0,0)
  ;
  plVar12 = *(long **)(param_1 + 0x38);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892ea0
            (uVar4,param_1,*(undefined8 *)puVar2,0);
  lVar11 = *(long *)puVar1;
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c2e00;
  lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718();
  }
  lVar11 = *(long *)puVar1;
  uVar7 = **(undefined8 **)(lVar8 + 0xb8);
  lVar8 = *(long *)(lVar11 + 0x38);
  if (lVar8 == 0) {
    FUN_02229774(lVar11);
    lVar8 = *(long *)(lVar11 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar8 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar5 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousAsyncMessageHandler___Il2CppFullySharedGenericType____ctor_27b2760
            (uVar5,uVar4,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = **(long **)(lVar11 + 0x38);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02229718(lVar8);
  }
  lVar11 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_027d6544;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar12,lVar8,0);
LAB_027d6544:
                    /* WARNING: Could not recover jumptable at 0x027d6560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar12,uVar5,uVar7,puVar6[1]);
  return;
}

