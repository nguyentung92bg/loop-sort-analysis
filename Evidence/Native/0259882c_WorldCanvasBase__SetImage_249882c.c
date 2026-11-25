/* IL2CPP: WorldCanvasBase$$SetImage
void WorldCanvasBase__SetImage (WorldCanvasBase_o* __this, int32_t role, System_String_o* spritePath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$SetImage
   void WorldCanvasBase__SetImage (WorldCanvasBase_o* __this, int32_t role, System_String_o*
   spritePath, const MethodInfo* method); */

void WorldCanvasBase__SetImage_249882c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = param_2 & 0xffffffff;
  if ((bRam0000000004f51085 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,param_2,param_3,0);
    FUN_021f03f8(PTR_DAT_049fa600);
    FUN_021f03f8(PTR_DAT_049cbed0);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049fa848);
    FUN_021f03f8(PTR_DAT_049fabe8);
    FUN_021f03f8(PTR_DAT_049faba0);
    FUN_021f03f8(PTR_DAT_049fabf0);
    FUN_021f03f8(PTR_DAT_049fa858);
    bRam0000000004f51085 = 1;
  }
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  uStack_38 = 0;
  uVar4 = StatefulUI_Runtime_Core_StatefulComponent__HasImage_334be04(lVar3,uVar12);
  if ((uVar4 & 1) == 0) {
    uVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574(lVar9);
    }
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__get_ImageRoleType_3348398();
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar7,uVar12);
    lVar9 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar9 == 0) goto LAB_0344cb74;
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
      thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x20));
      uVar5 = UnityEngine_Object__get_name_3c232a8(lVar3,0);
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar9 + 0x28) = uVar5;
        thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x28),uVar5);
        if (2 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_049faba0;
          thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x30));
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar9 + 0x38) = uVar7;
            thunk_FUN_021f190c((undefined8 *)(lVar9 + 0x38),uVar7);
            if (4 < *(uint *)(lVar9 + 0x18)) {
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
              thunk_FUN_021f190c();
              if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar7 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar6);
              if (5 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x48) = uVar7;
                thunk_FUN_021f190c();
                uVar7 = System_String__Concat_2f7dcb4(lVar9,0);
                if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                  FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                }
                puVar1 = PTR_DAT_049b3c58;
                if ((bRam0000000004f56b86 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_049b3c58,uVar6,0);
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
                lVar3 = *(long *)puVar1;
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar3 = *(long *)puVar1;
                }
                plVar11 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                lVar3 = *plVar11;
                uVar12 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar12 != 0) {
                  piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ceff8) {
                      puVar8 = (undefined8 *)(lVar3 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                      goto LAB_03cd1428;
                    }
                    uVar12 = uVar12 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049ceff8,6);
LAB_03cd1428:
                    /* WARNING: Could not recover jumptable at 0x03cd1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar8)(plVar11,0,uVar7,uVar6,puVar8[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar4 = StatefulUI_Runtime_Core_ResourceManagerExt__TryLoadSprite_3347d50(param_3,&uStack_38);
    if ((uVar4 & 1) != 0) {
      StatefulUI_Runtime_Core_StatefulComponent__SetImageByRawRole_334bb18(lVar3,uVar12,uStack_38);
      return;
    }
    uVar6 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574(lVar3);
    }
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__get_ImageRoleType_3348398();
    uVar7 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar7,uVar12);
    lVar3 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar3 == 0) {
LAB_0344cb74:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_049fabf0;
      thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = param_3;
        thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x28),param_3);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_049fabe8;
          thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = uVar7;
            thunk_FUN_021f190c((undefined8 *)(lVar3 + 0x38),uVar7);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
              thunk_FUN_021f190c();
              if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar7 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar6);
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = uVar7;
                thunk_FUN_021f190c();
                uVar7 = System_String__Concat_2f7dcb4(lVar3,0);
                if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                  FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                }
                UnityEngine_Debug__LogError_3bd1338(uVar7,uVar6,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

