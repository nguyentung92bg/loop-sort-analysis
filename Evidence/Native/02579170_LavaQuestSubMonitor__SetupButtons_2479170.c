/* IL2CPP: LavaQuestSubMonitor$$SetupButtons
void LavaQuestSubMonitor__SetupButtons (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$SetupButtons
   void LavaQuestSubMonitor__SetupButtons (LavaQuestSubMonitor_o* __this, const MethodInfo* method);
    */

void LavaQuestSubMonitor__SetupButtons_2479170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long unaff_x25;
  
  puVar8 = PTR_DAT_049c58c8;
  puVar7 = PTR_DAT_049c58c0;
  puVar6 = PTR_DAT_049c58b8;
  puVar5 = PTR_DAT_049c58b0;
  puVar4 = PTR_DAT_049c58a8;
  puVar3 = PTR_DAT_049c58a0;
  puVar2 = PTR_DAT_049c5898;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b9e7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c58a0);
    FUN_021f03f8(PTR_DAT_049c58b0);
    FUN_021f03f8(PTR_DAT_049c58a8);
    FUN_021f03f8(PTR_DAT_049c5898);
    FUN_021f03f8(PTR_DAT_049c58c0);
    FUN_021f03f8(PTR_DAT_049c58b8);
    FUN_021f03f8(PTR_DAT_049c58c8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b9e7 = 1;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0x99f4e89d,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0xb4ce0c4e,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0xa66c44de,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0x99f4e89d,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x70);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0x99f4e89d,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0xb4ce0c4e,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar7,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0x517db21a,uVar9,0);
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar8,0);
  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
            (uVar15,0x99f4e89d,uVar9,0);
  lVar16 = *(long *)(param_1 + 0x80);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar9,param_1,*(undefined8 *)puVar3,0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51083 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0xb4ce0c4e,uVar9,0);
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
  uVar10 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(lVar16,0xb4ce0c4e);
  puVar3 = PTR_DAT_049fab68;
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  if ((uVar10 & 1) == 0) {
    uVar9 = UnityEngine_Component__get_gameObject_3c187f4(lVar16,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
    uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,0xb4ce0c4e);
    lVar11 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
        thunk_FUN_021f190c((undefined8 *)(lVar11 + 0x20));
        uVar12 = UnityEngine_Object__get_name_3c232a8(lVar16,0);
        if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar11 + 0x28) = uVar12;
          thunk_FUN_021f190c((undefined8 *)(lVar11 + 0x28),uVar12);
          if (2 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_049fab70;
            thunk_FUN_021f190c((undefined8 *)(lVar11 + 0x30));
            if ((*(uint *)(lVar11 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar11 + 0x38) = uVar15;
              thunk_FUN_021f190c((undefined8 *)(lVar11 + 0x38),uVar15);
              if (4 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar15 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar9);
                if (5 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x48) = uVar15;
                  thunk_FUN_021f190c();
                  uVar15 = System_String__Concat_2f7dcb4(lVar11,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  puVar1 = PTR_DAT_049b3c58;
                  if ((bRam0000000004f56b86 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,uVar9,0);
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
                  lVar16 = *(long *)puVar1;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar16 = *(long *)puVar1;
                  }
                  plVar17 = *(long **)(*(long *)(lVar16 + 0xb8) + 8);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar16 = *plVar17;
                  uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar10 != 0) {
                    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049ceff8) {
                        puVar13 = (undefined8 *)(lVar16 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                        goto LAB_03cd1428;
                      }
                      uVar10 = uVar10 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar13 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar13)(plVar17,0,uVar15,uVar9,puVar13[1]);
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
    lVar11 = *(long *)(lVar16 + 0x30);
    if (lVar11 != 0) {
      iVar18 = 0;
      do {
        if (*(int *)(lVar11 + 0x18) <= iVar18) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar11,iVar18,&stack0xffffffffffffffc8,*(undefined8 *)puVar3);
        if (unaff_x25 == 0) break;
        if (*(int *)(unaff_x25 + 0x18) == -0x4b31f3b2) {
          if (*(long *)(lVar16 + 0x30) == 0) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar16 + 0x30),iVar18,&stack0xffffffffffffffc8,*(undefined8 *)puVar3)
          ;
          if (((unaff_x25 == 0) || (*(long *)(unaff_x25 + 0x20) == 0)) ||
             (lVar11 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0x100), lVar11 == 0)) break;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar11,uVar9,0);
        }
        lVar11 = *(long *)(lVar16 + 0x30);
        iVar18 = iVar18 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

