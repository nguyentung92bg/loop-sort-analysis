/* IL2CPP: LiveOpsMonitor.<Show>d__8$$MoveNext
void LiveOpsMonitor__Show_d__8__MoveNext (LiveOpsMonitor__Show_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsMonitor.<Show>d__8$$MoveNext
   void LiveOpsMonitor__Show_d__8__MoveNext (LiveOpsMonitor__Show_d__8_o __this, const MethodInfo*
   method); */

void LiveOpsMonitor__Show_d__8__MoveNext_244d9b0(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_dc [4];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4b8b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4688);
    FUN_021f03f8(PTR_DAT_049c4690);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c4668);
    FUN_021f03f8(PTR_DAT_049c46a8);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b8b0 = 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  if (*param_1 == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0xe);
    uStack_60 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar6 + 0xb8) != 0) {
      uStack_d8 = *(undefined8 *)(lVar6 + 0xc0);
      goto LAB_0254dc6c;
    }
    iVar2 = param_1[10];
    *(int *)(lVar6 + 0xb8) = iVar2;
    if (*(long *)(lVar6 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(lVar6 + 0x98);
    uVar3 = SkinModule__get_Active_253a090(*(long *)(lVar6 + 0xa0),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsData__GetData_256ff6c(&uStack_d8,lVar7,iVar2,uVar3,0);
    uVar3 = uStack_d8;
    puVar1 = PTR_DAT_049c3958;
    lVar8 = *(long *)(lVar6 + 0x30);
    lVar7 = *(long *)PTR_DAT_049c3958;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    auStack_dc[0] = **(undefined1 **)(lVar7 + 0xb8);
    uVar4 = thunk_FUN_0222c66c(lVar7,auStack_dc);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar4,uVar4);
    }
    Monitors__Additive_object__26888e8(lVar8,uVar4,1,*(undefined8 *)PTR_DAT_049c46a8);
    MonitorBase__AddSubMonitor_256cefc(&uStack_d8,lVar6,uVar3,0);
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    uStack_70 = uStack_c8;
    FUN_0235b0c0(&uStack_80,&uStack_d8,*(undefined8 *)PTR_DAT_049c46b0);
    lVar8 = *(long *)PTR_DAT_049c46a0;
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    uStack_50 = uStack_c8;
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_58;
      *(undefined8 *)(param_1 + 0xc) = uStack_60;
      *(undefined8 *)(param_1 + 0x10) = uStack_50;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c4688);
      return;
    }
  }
  FUN_0235b3fc(&uStack_60,&uStack_d8,*(undefined8 *)PTR_DAT_049c4698);
  uVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__HasButton_3351194
                    (uStack_d8,0xb4ce0c4e,0);
  if ((uVar5 & 1) != 0) {
    uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
    UnityEngine_Events_UnityAction___ctor_3c32934(uVar3,lVar6,*(undefined8 *)PTR_DAT_049c4668,0);
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
              (uStack_d8,0xb4ce0c4e,uVar3,0);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lVar6 + 0xc0) = uStack_d8;
  thunk_FUN_021f190c((undefined8 *)(lVar6 + 0xc0),uStack_d8);
LAB_0254dc6c:
  puVar1 = PTR_DAT_049c4690;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,uStack_d8,*(undefined8 *)puVar1);
  return;
}

