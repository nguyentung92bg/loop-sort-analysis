/* IL2CPP: WorldCanvasBase$$SetState
float WorldCanvasBase__SetState (WorldCanvasBase_o* __this, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$SetState
   float WorldCanvasBase__SetState (WorldCanvasBase_o* __this, int32_t role, const MethodInfo*
   method); */

undefined4 WorldCanvasBase__SetState_249876c(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  lVar10 = *(long *)(param_1 + 0xa0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5107c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,param_2,0);
    FUN_021f03f8(PTR_DAT_049fa588);
    FUN_021f03f8(PTR_DAT_049fa590);
    FUN_021f03f8(PTR_DAT_049fa598);
    FUN_021f03f8(PTR_DAT_049fa5a8);
    FUN_021f03f8(PTR_DAT_049fa600);
    FUN_021f03f8(PTR_DAT_049cbed0);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049fa848);
    FUN_021f03f8(PTR_DAT_049fa850);
    FUN_021f03f8(PTR_DAT_049fa858);
    bRam0000000004f5107c = 1;
  }
  puVar9 = PTR_DAT_049fa858;
  puVar8 = PTR_DAT_049fa850;
  puVar7 = PTR_DAT_049fa848;
  puVar6 = PTR_DAT_049fa600;
  puVar5 = PTR_DAT_049fa598;
  puVar4 = PTR_DAT_049fa590;
  puVar3 = PTR_DAT_049fa588;
  puVar2 = PTR_DAT_049b4540;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  if (*(long *)(lVar10 + 0x90) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar10 + 0x90),&uStack_a8,*(undefined8 *)PTR_DAT_049fa5a8);
    uStack_80 = uStack_98;
    puStack_88 = puStack_a0;
    uStack_90 = uStack_a8;
    uStack_a8 = 0;
    puStack_a0 = &uStack_90;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_90,*(undefined8 *)puVar4);
      if ((uVar11 & 1) == 0) break;
      lVar17 = *(long *)puVar5;
      lVar12 = *(long *)(lVar17 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar1 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar17 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
      }
      uVar18 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar14,uVar18);
      if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lStack_68 + 0x18) == (int)param_2) {
        uVar18 = StatefulUI_Runtime_Core_StatefulComponent__ApplyState_334a168(lVar10);
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar3);
        return uVar18;
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)puVar3);
    uVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar6);
    }
    uVar15 = StatefulUI_Runtime_Core_RoleUtils__get_StateRoleType_3342b50();
    uVar15 = StatefulUI_Runtime_Core_RoleUtils__GetName_3342bb0(uVar15,param_2 & 0xffffffff);
    lVar13 = FUN_021f04e4(*(undefined8 *)puVar2,6);
    if (lVar13 != 0) {
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar7;
        thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x20));
        uVar16 = UnityEngine_Object__get_name_3c232a8(lVar10,0);
        if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar13 + 0x28) = uVar16;
          thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x28),uVar16);
          if (2 < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)puVar8;
            thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x30));
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar13 + 0x38) = uVar15;
              thunk_FUN_021f190c((undefined8 *)(lVar13 + 0x38),uVar15);
              if (4 < *(uint *)(lVar13 + 0x18)) {
                *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)puVar9;
                thunk_FUN_021f190c();
                if (*(int *)(*(long *)PTR_DAT_049cbed0 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar15 = StatefulUI_Runtime_Core_StatefulUiUtils__GetScenePath_334aea0(uVar14);
                if (5 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x48) = uVar15;
                  thunk_FUN_021f190c();
                  uVar15 = System_String__Concat_2f7dcb4(lVar13,0);
                  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    FUN_021f0574(*(long *)PTR_DAT_049b3c58);
                  }
                  UnityEngine_Debug__LogError_3bd1338(uVar15,uVar14,0);
                  return 0;
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

