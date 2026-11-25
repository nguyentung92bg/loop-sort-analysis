/* IL2CPP: BattlePassSubMonitor$$CreateProgressElement
void BattlePassSubMonitor__CreateProgressElement (BattlePassSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, BattlePassSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$CreateProgressElement
   void BattlePassSubMonitor__CreateProgressElement (BattlePassSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, BattlePassSheet_Row_o* data, const MethodInfo*
   method); */

void BattlePassSubMonitor__CreateProgressElement_246e020
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_68;
  int iStack_64;
  
  puVar7 = PTR_DAT_049c54e8;
  if ((bRam0000000004f4b993 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5490);
    FUN_021f03f8(PTR_DAT_049c54c8);
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049c54f0);
    FUN_021f03f8(PTR_DAT_049c54f8);
    FUN_021f03f8(PTR_DAT_049c54e8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b993 = 1;
  }
  iStack_68 = 0;
  lVar11 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
  System_Object___ctor_3142338(lVar11,0);
  if (lVar11 == 0) goto LAB_0256e668;
  *(long *)(lVar11 + 0x10) = param_1;
  thunk_FUN_021f190c((long *)(lVar11 + 0x10),param_1);
  plVar16 = (long *)(lVar11 + 0x20);
  *plVar16 = param_3;
  thunk_FUN_021f190c(plVar16,param_3);
  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0256e668;
  iVar9 = BattlePass__GetCurrentKeyCount_250c138(*(long *)(param_1 + 0x50),0);
  puVar7 = PTR_DAT_049c2cf0;
  if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0256e668;
  plVar15 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xa0),*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&iStack_64,uVar12,uVar2);
  iVar10 = iStack_64;
  if (*plVar16 == 0) goto LAB_0256e668;
  plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(*plVar16,*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&iStack_64,uVar12,uVar2);
  bVar1 = iVar10 <= iStack_64;
  if (iStack_64 < iVar10) {
    lVar13 = *plVar16;
LAB_0256e228:
    if (lVar13 == 0) goto LAB_0256e668;
  }
  else {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0256e668;
    plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
    uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar12 = thunk_FUN_0224e54c(*(long *)(param_1 + 0xa0),*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&iStack_64,uVar12,uVar2);
    iVar10 = iStack_64;
    if (*plVar16 == 0) goto LAB_0256e668;
    plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
    uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar12 = thunk_FUN_0224e54c(*plVar16,*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&iStack_64,uVar12,uVar2);
    lVar13 = *plVar16;
    if (iVar10 != iStack_64) goto LAB_0256e228;
    if (lVar13 == 0) goto LAB_0256e668;
    bVar1 = iVar9 < *(int *)(lVar13 + 0x28);
  }
  plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(lVar13,*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&iStack_64,uVar12,uVar2);
  *(int *)(lVar11 + 0x28) = iStack_64 + 1;
  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_0256e668;
  plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(*(long *)(lVar11 + 0x20),*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&iStack_64,uVar12,uVar2);
  iVar9 = iStack_64;
  if ((*(long *)(param_1 + 0x58) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x58) + 0xb0), lVar13 == 0)) goto LAB_0256e668;
  iVar10 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                     (lVar13,*(undefined8 *)PTR_DAT_049c54c8);
  uVar2 = 0x39740faf;
  if (!bVar1) {
    uVar2 = 0xcbb1848a;
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (param_2,uVar2,0);
  if (*plVar16 == 0) goto LAB_0256e668;
  plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
  uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
  uVar12 = thunk_FUN_0224e54c(*plVar16,*(undefined8 *)(*plVar15 + 0x80));
  func_0x04608620(&iStack_64,uVar12,uVar2);
  if (iStack_64 == 0) {
    uVar12 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  }
  else {
    if (*plVar16 == 0) goto LAB_0256e668;
    plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
    uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar12 = thunk_FUN_0224e54c(*plVar16,*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&iStack_64,uVar12,uVar2);
    iStack_68 = iStack_64;
    uVar12 = System_Int32__ToString_30fbaa0(&iStack_68,0);
  }
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
            (param_2,0x6d8b1339,uVar12,0);
  uVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                     (param_2,0xc614fb00,0);
  puVar17 = (undefined8 *)(lVar11 + 0x18);
  *puVar17 = uVar12;
  thunk_FUN_021f190c(puVar17,uVar12);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar17,0x5f10e269,0);
  if (!bVar1) {
    lVar13 = *plVar16;
    if (lVar13 == 0) goto LAB_0256e668;
    uStack_88 = *(undefined8 *)(lVar13 + 0x48);
    uStack_90 = *(undefined8 *)(lVar13 + 0x40);
    uStack_78 = *(undefined8 *)(lVar13 + 0x58);
    uStack_80 = *(undefined8 *)(lVar13 + 0x50);
    uVar12 = *puVar17;
    uVar14 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_90,0);
    uVar2 = 0x240695d9;
    if ((uVar14 & 1) == 0) {
      uVar2 = 0x39cfe44a;
    }
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar12,uVar2,0);
  }
  puVar8 = PTR_DAT_049c54f0;
  puVar6 = PTR_DAT_049b8d80;
  if (*plVar16 == 0) goto LAB_0256e668;
  BattlePassSubMonitor__CreateProgressRewardElement_246e6f0
            (param_1,*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(*plVar16 + 0x30),
             *(undefined8 *)(param_1 + 0x40),0);
  uVar18 = *(undefined8 *)(lVar11 + 0x18);
  uVar12 = thunk_FUN_0222ca34(*(undefined8 *)puVar6);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar12,lVar11,*(undefined8 *)puVar8,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__ReplaceButtonListener_335173c
            (uVar18,0x39cfe44a,uVar12,0);
  uVar12 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                     (param_2,0x2d6d479c,0);
  puVar17 = (undefined8 *)(lVar11 + 0x30);
  *puVar17 = uVar12;
  thunk_FUN_021f190c(puVar17,uVar12);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
            (*puVar17,0x5f10e269,0);
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 == 0) goto LAB_0256e668;
  uStack_a8 = *(undefined8 *)(lVar13 + 0x70);
  uStack_b0 = *(undefined8 *)(lVar13 + 0x68);
  uStack_98 = *(undefined8 *)(lVar13 + 0x80);
  uStack_a0 = *(undefined8 *)(lVar13 + 0x78);
  uVar14 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_b0,0);
  if ((uVar14 & 1) == 0) {
    uVar12 = *puVar17;
    uVar2 = 0x39740faf;
LAB_0256e534:
    StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
              (uVar12,uVar2,0);
  }
  else if (!bVar1) {
    lVar13 = *plVar16;
    if (lVar13 == 0) goto LAB_0256e668;
    uStack_c8 = *(undefined8 *)(lVar13 + 0x68);
    uStack_d0 = *(undefined8 *)(lVar13 + 0x60);
    uStack_b8 = *(undefined8 *)(lVar13 + 0x78);
    uStack_c0 = *(undefined8 *)(lVar13 + 0x70);
    uVar12 = *puVar17;
    uVar14 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_d0,0);
    uVar2 = 0x240695d9;
    if ((uVar14 & 1) == 0) {
      uVar2 = 0x39cfe44a;
    }
    goto LAB_0256e534;
  }
  if (*plVar16 != 0) {
    lVar13 = *(long *)(param_1 + 0x48);
    plVar15 = *(long **)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0);
    uVar2 = *(undefined4 *)(plVar15[1] + 0xfc);
    uVar12 = thunk_FUN_0224e54c(*plVar16,*(undefined8 *)(*plVar15 + 0x80));
    func_0x04608620(&iStack_64,uVar12,uVar2);
    puVar8 = PTR_DAT_049c54f8;
    puVar7 = PTR_DAT_049c5490;
    if ((*(long *)(param_1 + 0x48) != 0) && (lVar13 != 0)) {
      iVar3 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = iStack_64 / iVar3;
      }
      uVar4 = iStack_64 - iVar5 * iVar3;
      if (*(uint *)(lVar13 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      if (*plVar16 != 0) {
        BattlePassSubMonitor__CreateProgressRewardElement_246e6f0
                  (param_1,*(undefined8 *)(lVar11 + 0x30),*(undefined8 *)(*plVar16 + 0x38),
                   *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20),iVar9 == iVar10 + -1);
        uVar18 = *(undefined8 *)(lVar11 + 0x30);
        uVar12 = thunk_FUN_0222ca34(*(undefined8 *)puVar6);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar12,lVar11,*(undefined8 *)puVar8,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__ReplaceButtonListener_335173c
                  (uVar18,0x39cfe44a,uVar12,0);
        uVar18 = *(undefined8 *)(lVar11 + 0x30);
        uVar12 = thunk_FUN_0222ca34(*(undefined8 *)puVar6);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar12,param_1,*(undefined8 *)puVar7,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__ReplaceButtonListener_335173c
                  (uVar18,0x928b68a9,uVar12,0);
        return;
      }
    }
  }
LAB_0256e668:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

