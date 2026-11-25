/* IL2CPP: PlayingMonitor$$SetupGiveUp
void PlayingMonitor__SetupGiveUp (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$SetupGiveUp
   void PlayingMonitor__SetupGiveUp (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__SetupGiveUp_244fb10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lStack_38;
  
  puVar4 = PTR_DAT_049c4848;
  puVar3 = PTR_DAT_049c4840;
  puVar2 = PTR_DAT_049c4838;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b8c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4840);
    FUN_021f03f8(PTR_DAT_049c4838);
    FUN_021f03f8(PTR_DAT_049c4848);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b8c3 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar11,0x99f4e89d,uVar5,0);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar11,0xbb3ee9fe,uVar5,0);
  lVar12 = *(long *)(param_1 + 0x120);
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)puVar4,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51083 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0x4c676fd6,uVar5,0);
    FUN_021f03f8(PTR_DAT_049fab60);
    FUN_021f03f8(PTR_DAT_049fab68);
    FUN_021f03f8(PTR_DAT_049fa600);
    FUN_021f03f8(PTR_DAT_049cbed0);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049fa848);
    FUN_021f03f8(PTR_DAT_049fab70);
    FUN_021f03f8(PTR_DAT_049fa858);
    bRam0000000004f51083 = 1;
  }
  uVar6 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(lVar12,0x4c676fd6);
  puVar3 = PTR_DAT_049fab68;
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  if ((uVar6 & 1) == 0) {
    uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar12,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar11 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
    uVar11 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar11,0x4c676fd6);
    lVar7 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x20));
        uVar8 = UnityEngine_Object__get_name_3c232a8(lVar12,0);
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar7 + 0x28) = uVar8;
          thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x28),uVar8);
          if (2 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_049fab70;
            thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x30));
            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar7 + 0x38) = uVar11;
              thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x38),uVar11);
              if (4 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar11 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar5);
                if (5 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x48) = uVar11;
                  thunk_FUN_021f190c();
                  uVar11 = System_String__Concat_2f7dcb4(lVar7,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  puVar1 = PTR_DAT_049b3c58;
                  if ((bRam0000000004f56b86 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,uVar5,0);
                    FUN_021f03f8(PTR_DAT_049ceff8);
                    bRam0000000004f56b86 = 1;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (cRam0000000004f4c367 == '\0') {
                    FUN_021f03f8(PTR_DAT_049b3c58);
                    cRam0000000004f4c367 = '\x01';
                  }
                  lVar12 = *(long *)puVar1;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar12 = *(long *)puVar1;
                  }
                  plVar13 = *(long **)(*(long *)(lVar12 + 0xb8) + 8);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar12 = *plVar13;
                  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
                  if (uVar6 != 0) {
                    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ceff8) {
                        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                        goto LAB_03cd1428;
                      }
                      uVar6 = uVar6 - 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar9)(plVar13,0,uVar11,uVar5,puVar9[1]);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
  }
  else {
    lVar7 = *(long *)(lVar12 + 0x30);
    if (lVar7 != 0) {
      iVar14 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar14) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar7,iVar14,&lStack_38,*(undefined8 *)puVar3);
        if (lStack_38 == 0) break;
        if (*(int *)(lStack_38 + 0x18) == 0x4c676fd6) {
          if (*(long *)(lVar12 + 0x30) == 0) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar12 + 0x30),iVar14,&lStack_38,*(undefined8 *)puVar3);
          if (((lStack_38 == 0) || (*(long *)(lStack_38 + 0x20) == 0)) ||
             (lVar7 = *(long *)(*(long *)(lStack_38 + 0x20) + 0x100), lVar7 == 0)) break;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar7,uVar5,0);
        }
        lVar7 = *(long *)(lVar12 + 0x30);
        iVar14 = iVar14 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

