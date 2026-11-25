/* IL2CPP: WorldCanvasBase$$SetImage
void WorldCanvasBase__SetImage (WorldCanvasBase_o* __this, int32_t role, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$SetImage
   void WorldCanvasBase__SetImage (WorldCanvasBase_o* __this, int32_t role, UnityEngine_Sprite_o*
   sprite, const MethodInfo* method); */

void WorldCanvasBase__SetImage_2498838(long param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  int iVar13;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f51082 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,param_2,param_3,0);
    FUN_021f03f8(PTR_DAT_049fab90);
    FUN_021f03f8(PTR_DAT_049fab98);
    FUN_021f03f8(PTR_DAT_049fa600);
    FUN_021f03f8(PTR_DAT_049cbed0);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049fa848);
    FUN_021f03f8(PTR_DAT_049faba0);
    FUN_021f03f8(PTR_DAT_049fa858);
    bRam0000000004f51082 = 1;
  }
  uVar5 = StatefulUI_Runtime_Core_StatefulComponent__HasImage_334be04(lVar4,param_2 & 0xffffffff);
  puVar3 = PTR_DAT_049fab98;
  puVar2 = PTR_DAT_049fa600;
  puVar1 = PTR_DAT_049b4540;
  if ((uVar5 & 1) == 0) {
    uVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    uVar8 = StatefulUI_Runtime_Core_RoleUtils__get_ImageRoleType_3348398();
    uVar8 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar8,param_2 & 0xffffffff);
    lVar6 = FUN_021f04e4(*(undefined8 *)puVar1,6);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) != 0) {
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_049fa848;
        thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x20));
        uVar9 = UnityEngine_Object__get_name_3c232a8(lVar4,0);
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar6 + 0x28) = uVar9;
          thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x28),uVar9);
          if (2 < *(uint *)(lVar6 + 0x18)) {
            *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_049faba0;
            thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x30));
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar6 + 0x38) = uVar8;
              thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x38),uVar8);
              if (4 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_049fa858;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar8 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar7);
                if (5 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x48) = uVar8;
                  thunk_FUN_021f190c();
                  uVar8 = System_String__Concat_2f7dcb4(lVar6,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  puVar1 = PTR_DAT_049b3c58;
                  if ((bRam0000000004f56b86 & 1) == 0) {
                    FUN_021f03f8(PTR_DAT_049b3c58,uVar7,0);
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
                  lVar4 = *(long *)puVar1;
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar4 = *(long *)puVar1;
                  }
                  plVar12 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  lVar4 = *plVar12;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049ceff8) {
                        puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 6) * 0x10 + 0x138);
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
                  (*(code *)*puVar10)(plVar12,0,uVar8,uVar7,puVar10[1]);
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
    lVar6 = *(long *)(lVar4 + 0x68);
    if (lVar6 != 0) {
      iVar13 = 0;
      do {
        if (*(int *)(lVar6 + 0x18) <= iVar13) {
          return;
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar6,iVar13,&lStack_38,*(undefined8 *)puVar3);
        if (lStack_38 == 0) break;
        if (*(int *)(lStack_38 + 0x18) == (int)param_2) {
          if (*(long *)(lVar4 + 0x68) == 0) break;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar4 + 0x68),iVar13,&lStack_38,*(undefined8 *)puVar3);
          if ((lStack_38 == 0) || (*(long *)(lStack_38 + 0x20) == 0)) break;
          UnityEngine_UI_Image__set_sprite_3cee6e8(*(long *)(lStack_38 + 0x20),param_3,0);
        }
        lVar6 = *(long *)(lVar4 + 0x68);
        iVar13 = iVar13 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

