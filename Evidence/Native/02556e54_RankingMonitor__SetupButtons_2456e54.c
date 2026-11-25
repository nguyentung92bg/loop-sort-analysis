/* IL2CPP: RankingMonitor$$SetupButtons
void RankingMonitor__SetupButtons (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$SetupButtons
   void RankingMonitor__SetupButtons (RankingMonitor_o* __this, const MethodInfo* method); */

void RankingMonitor__SetupButtons_2456e54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  long unaff_x25;
  
  puVar7 = PTR_DAT_049c4b38;
  puVar6 = PTR_DAT_049c4b30;
  puVar5 = PTR_DAT_049c4b28;
  puVar4 = PTR_DAT_049c4b20;
  puVar3 = PTR_DAT_049c4b18;
  puVar2 = PTR_DAT_049c4b10;
  puVar1 = PTR_DAT_049b8d80;
  if ((bRam0000000004f4b906 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4b30);
    FUN_021f03f8(PTR_DAT_049c4b38);
    FUN_021f03f8(PTR_DAT_049c4b20);
    FUN_021f03f8(PTR_DAT_049c4b28);
    FUN_021f03f8(PTR_DAT_049c4b10);
    FUN_021f03f8(PTR_DAT_049c4b18);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4b906 = 1;
  }
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar2,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x9147e155,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar3,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x175d5162,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar4,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x81330a8c,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar5,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x598fdb13,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar6,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
            (param_1,0x43a763b,uVar8,0);
  uVar8 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar8,param_1,*(undefined8 *)puVar7,0);
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51083 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0x39cfe44a,uVar8,0);
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
  uVar9 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(lVar13,0x39cfe44a);
  puVar3 = PTR_DAT_049fab68;
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  if ((uVar9 & 1) == 0) {
    uVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar11 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
    uVar11 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar11,0x39cfe44a);
    lVar10 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
        thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x20));
        uVar12 = UnityEngine_Object__get_name_3c232a8(lVar13,0);
        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar10 + 0x28) = uVar12;
          thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x28),uVar12);
          if (2 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_049fab70;
            thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x30));
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar10 + 0x38) = uVar11;
              thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x38),uVar11);
              if (4 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar11 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar8);
                if (5 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x48) = uVar11;
                  thunk_FUN_021f190c();
                  uVar11 = System_String__Concat_2f7dcb4(lVar10,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  puVar1 = PTR_DAT_049b3c58;
                  if ((bRam0000000004f56b86 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,uVar8,0);
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
                  lVar13 = *(long *)puVar1;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar13 = *(long *)puVar1;
                  }
                  plVar16 = *(long **)(*(long *)(lVar13 + 0xb8) + 8);
                  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar13 = *plVar16;
                  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_049ceff8) {
                        puVar14 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
                        goto LAB_03cd1428;
                      }
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar14)(plVar16,0,uVar11,uVar8,puVar14[1]);
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
    lVar10 = *(long *)(lVar13 + 0x30);
    if (lVar10 != 0) {
      iVar17 = 0;
      do {
        if (*(int *)(lVar10 + 0x18) <= iVar17) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar10,iVar17,&stack0xffffffffffffffc8,*(undefined8 *)puVar3);
        if (unaff_x25 == 0) break;
        if (*(int *)(unaff_x25 + 0x18) == 0x39cfe44a) {
          if (*(long *)(lVar13 + 0x30) == 0) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar13 + 0x30),iVar17,&stack0xffffffffffffffc8,*(undefined8 *)puVar3)
          ;
          if (((unaff_x25 == 0) || (*(long *)(unaff_x25 + 0x20) == 0)) ||
             (lVar10 = *(long *)(*(long *)(unaff_x25 + 0x20) + 0x100), lVar10 == 0)) break;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar10,uVar8,0);
        }
        lVar10 = *(long *)(lVar13 + 0x30);
        iVar17 = iVar17 + 1;
      } while (lVar10 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

