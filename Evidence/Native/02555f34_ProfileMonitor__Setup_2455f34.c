/* IL2CPP: ProfileMonitor$$Setup
void ProfileMonitor__Setup (ProfileMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileMonitor$$Setup
   void ProfileMonitor__Setup (ProfileMonitor_o* __this, const MethodInfo* method); */

void ProfileMonitor__Setup_2455f34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  
  puVar6 = PTR_DAT_049c4a48;
  puVar5 = PTR_DAT_049c4a40;
  puVar4 = PTR_DAT_049c4a38;
  puVar3 = PTR_DAT_049c4280;
  puVar2 = PTR_DAT_049c4278;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b8f1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4278);
    FUN_021f03f8(PTR_DAT_049c4280);
    FUN_021f03f8(PTR_DAT_049c4a38);
    FUN_021f03f8(PTR_DAT_049c4a40);
    FUN_021f03f8(PTR_DAT_049c4a48);
    FUN_021f03f8(PTR_DAT_049c42d0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b8f1 = 1;
  }
  MonitorBase__Setup_256c4e8(param_1,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0xb4ce0c4e,uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x7e599452,uVar7,0);
  plVar15 = *(long **)(param_1 + 0xa8);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar6,0);
  lVar14 = *(long *)puVar3;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c42d0;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718();
  }
  lVar14 = *(long *)puVar1;
  uVar10 = **(undefined8 **)(lVar11 + 0xb8);
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02229774(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  if ((*(ushort *)(*(long *)(lVar11 + 0x10) + 0x135) & 1) == 0) {
    FUN_02229718();
  }
  uVar8 = thunk_FUN_0222ca34();
  MessagePipe_AnonymousMessageHandler___Il2CppFullySharedGenericType____ctor_27b286c
            (uVar8,uVar7,*(undefined8 *)(*(long *)(lVar14 + 0x38) + 0x18));
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar11 = **(long **)(lVar14 + 0x38);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718(lVar11);
  }
  lVar14 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar11) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_027d671c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_02229a4c(plVar15,lVar11,0);
LAB_027d671c:
                    /* WARNING: Could not recover jumptable at 0x027d6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar15,uVar8,uVar10,puVar9[1]);
  return;
}

