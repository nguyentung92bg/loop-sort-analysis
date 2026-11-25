/* IL2CPP: BattlePass$$OnWeeklyMissionsMilestoneCreate
void BattlePass__OnWeeklyMissionsMilestoneCreate (BattlePass_o* __this, WeeklyMissionsMilestoneCreateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePass$$OnWeeklyMissionsMilestoneCreate
   void BattlePass__OnWeeklyMissionsMilestoneCreate (BattlePass_o* __this,
   WeeklyMissionsMilestoneCreateMessage_o m, const MethodInfo* method); */

void BattlePass__OnWeeklyMissionsMilestoneCreate_250cbc8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long alStack_38 [2];
  
  if ((bRam0000000004f4bdd8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9130);
                    /* try { // try from 0260cbf4 to 0270cc0b has its CatchHandler @ 0260cc68 */
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4bdd8 = 1;
  }
                    /* try { // try from 0260cc0c to 0270cc43 has its CatchHandler @ 0260c868 */
  if ((int)param_2[2] == 0x12) {
    if ((param_2[1] == 0) || (*(long *)(param_1 + 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0260cb88 with catch @ 0260cca0
                       catch() { ... } // from try @ 0260cc60 with catch @ 0260cca0 */
      FUN_021f06a0();
    }
    uVar4 = WeeklyMissions__IsCompleted_252ad88
                      (*(long *)(param_1 + 0x40),*(undefined8 *)(param_2[1] + 0x28),0);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0260cc44 to 0270cc47 has its CatchHandler @ 0260ccb8 */
                    /* try { // try from 0260cc48 to 0270cc4b has its CatchHandler @ 0260cc88 */
                    /* try { // try from 0260cc4c to 0270cc4f has its CatchHandler @ 0260cc80 */
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (*param_2,0xa66c44de,0);
                    /* try { // try from 0260cc50 to 0270cc53 has its CatchHandler @ 0260cc7c */
                    /* try { // try from 0260cc54 to 0270cc57 has its CatchHandler @ 0260cca4 */
                    /* try { // try from 0260cc58 to 0270cc5b has its CatchHandler @ 0260cc74 */
      lVar11 = *param_2;
                    /* try { // try from 0260cc5c to 0270cc5f has its CatchHandler @ 0260cc70 */
                    /* try { // try from 0260cc60 to 0270cc63 has its CatchHandler @ 0260cca0 */
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
                    /* catch() { ... } // from try @ 0260cbbc with catch @ 0260cc64
                       try { // try from 0260cc64 to 0270ccd7 has its CatchHandler @ 0260c868 */
                    /* catch() { ... } // from try @ 0260cbf4 with catch @ 0260cc68 */
                    /* catch() { ... } // from try @ 0260cb9c with catch @ 0260cc6c */
                    /* catch() { ... } // from try @ 0260cc5c with catch @ 0260cc70 */
                    /* catch() { ... } // from try @ 0260cc58 with catch @ 0260cc74 */
                    /* catch() { ... } // from try @ 0260cb6c with catch @ 0260cc78 */
                    /* catch() { ... } // from try @ 0260cc50 with catch @ 0260cc7c */
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar5,param_1,*(undefined8 *)PTR_DAT_049c9130,0)
      ;
                    /* catch() { ... } // from try @ 0260cc4c with catch @ 0260cc80 */
                    /* catch() { ... } // from try @ 0260cb08 with catch @ 0260cc84 */
                    /* catch() { ... } // from try @ 0260cc48 with catch @ 0260cc88 */
                    /* catch() { ... } // from try @ 0260caf4 with catch @ 0260cc8c */
                    /* catch() { ... } // from try @ 0260caec with catch @ 0260cc90 */
                    /* catch() { ... } // from try @ 0260cb44 with catch @ 0260cc94 */
                    /* catch() { ... } // from try @ 0260cad8 with catch @ 0260cc98 */
                    /* catch() { ... } // from try @ 0260cac8 with catch @ 0260cc9c */
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if ((bRam0000000004f51083 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b3c58,0xa66c44de,uVar5,0);
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
      uVar4 = StatefulUI_Runtime_Core_StatefulComponent__HasButton_334c2c0(lVar11,0xa66c44de);
      puVar3 = PTR_DAT_049fab68;
      puVar2 = PTR_DAT_049fa600;
      puVar1 = PTR_DAT_049b4540;
      if ((uVar4 & 1) == 0) {
        uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar11,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574(*(long *)puVar2);
        }
        uVar7 = StatefulUI_Runtime_Core_RoleUtils__get_ButtonRoleType_3348278();
        uVar7 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar7,0xa66c44de);
        lVar6 = FUN_021f04e4(*(undefined8 *)puVar1,6);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
            thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x20));
            uVar8 = UnityEngine_Object__get_name_3c232a8(lVar11,0);
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
                    uVar7 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar5);
                    if (5 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x48) = uVar7;
                      thunk_FUN_021f190c();
                      uVar7 = System_String__Concat_2f7dcb4(lVar6,0);
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
                      lVar11 = *(long *)puVar1;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        FUN_021f0574();
                        lVar11 = *(long *)puVar1;
                      }
                      plVar12 = *(long **)(*(long *)(lVar11 + 0xb8) + 8);
                      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_021f06a0();
                      }
                      lVar11 = *plVar12;
                      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar4 != 0) {
                        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ceff8) {
                            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                            goto LAB_03cd1428;
                          }
                          uVar4 = uVar4 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar9)(plVar12,0,uVar7,uVar5,puVar9[1]);
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
        lVar6 = *(long *)(lVar11 + 0x30);
        if (lVar6 != 0) {
          iVar13 = 0;
          do {
            if (*(int *)(lVar6 + 0x18) <= iVar13) {
              return;
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar6,iVar13,alStack_38,*(undefined8 *)puVar3);
            if (alStack_38[0] == 0) break;
            if (*(int *)(alStack_38[0] + 0x18) == -0x5993bb22) {
              if (*(long *)(lVar11 + 0x30) == 0) break;
              System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                        (*(long *)(lVar11 + 0x30),iVar13,alStack_38,*(undefined8 *)puVar3);
              if (((alStack_38[0] == 0) || (*(long *)(alStack_38[0] + 0x20) == 0)) ||
                 (lVar6 = *(long *)(*(long *)(alStack_38[0] + 0x20) + 0x100), lVar6 == 0)) break;
              UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar6,uVar5,0);
            }
            lVar6 = *(long *)(lVar11 + 0x30);
            iVar13 = iVar13 + 1;
          } while (lVar6 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

