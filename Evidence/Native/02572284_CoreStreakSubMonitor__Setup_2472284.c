/* IL2CPP: CoreStreakSubMonitor$$Setup
void CoreStreakSubMonitor__Setup (CoreStreakSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreakSubMonitor$$Setup
   void CoreStreakSubMonitor__Setup (CoreStreakSubMonitor_o* __this, const MethodInfo* method); */

void CoreStreakSubMonitor__Setup_2472284(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  long lStack_38;
  
  puVar2 = PTR_DAT_049c55f0;
  puVar1 = PTR_DAT_049b8d80;
                    /* try { // try from 02572294 to 026722a3 has its CatchHandler @ 025723e8 */
                    /* try { // try from 025722ac to 026722b7 has its CatchHandler @ 025723ec */
  if ((bRam0000000004f4b9af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55f0);
                    /* try { // try from 025722bc to 026722c7 has its CatchHandler @ 025723c8 */
    FUN_021f03f8(PTR_DAT_049b8d80);
                    /* try { // try from 025722c8 to 02672393 has its CatchHandler @ 02571df8 */
    bRam0000000004f4b9af = 1;
  }
  SubMonitorBase__Setup_2481334(param_1,0);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_Events_UnityAction___ctor_3c32934(uVar4,param_1,*(undefined8 *)puVar2,0);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51083 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0x99f4e89d,uVar4,0);
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
  uVar5 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(lVar9,0x99f4e89d);
  puVar3 = PTR_DAT_049fab68;
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  if ((uVar5 & 1) == 0) {
    uVar4 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar7,0x99f4e89d);
    lVar6 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
        thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x20));
        uVar8 = UnityEngine_Object__get_name_3c232a8(lVar9,0);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar8;
          thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x28),uVar8);
          if (2 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_049fab70;
            thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x30));
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar6 + 0x38) = uVar7;
              thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x38),uVar7);
              if (4 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar7 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar4);
                if (5 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x48) = uVar7;
                  thunk_FUN_021f190c();
                  uVar7 = System_String__Concat_2f7dcb4(lVar6,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  puVar1 = PTR_DAT_049b3c58;
                  if ((bRam0000000004f56b86 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,uVar4,0);
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
                  lVar9 = *(long *)puVar1;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar9 = *(long *)puVar1;
                  }
                  plVar12 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar9 = *plVar12;
                  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar5 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049ceff8) {
                        puVar10 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                        goto LAB_03cd1428;
                      }
                      uVar5 = uVar5 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar10)(plVar12,0,uVar7,uVar4,puVar10[1]);
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
    lVar6 = *(long *)(lVar9 + 0x30);
    if (lVar6 != 0) {
      iVar13 = 0;
      do {
        if (*(int *)(lVar6 + 0x18) <= iVar13) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar6,iVar13,&lStack_38,*(undefined8 *)puVar3);
        if (lStack_38 == 0) break;
        if (*(int *)(lStack_38 + 0x18) == -0x660b1763) {
          if (*(long *)(lVar9 + 0x30) == 0) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar9 + 0x30),iVar13,&lStack_38,*(undefined8 *)puVar3);
          if (((lStack_38 == 0) || (*(long *)(lStack_38 + 0x20) == 0)) ||
             (lVar6 = *(long *)(*(long *)(lStack_38 + 0x20) + 0x100), lVar6 == 0)) break;
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar6,uVar4,0);
        }
        lVar6 = *(long *)(lVar9 + 0x30);
        iVar13 = iVar13 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

