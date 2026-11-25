/* IL2CPP: LevelExitMonitor$$UpdateExitResultView
void LevelExitMonitor__UpdateExitResultView (LevelExitMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelExitMonitor$$UpdateExitResultView
   void LevelExitMonitor__UpdateExitResultView (LevelExitMonitor_o* __this, const MethodInfo*
   method); */

void LevelExitMonitor__UpdateExitResultView_244d05c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f4b8ab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3e70);
    FUN_021f03f8(PTR_DAT_049c3e78);
    FUN_021f03f8(PTR_DAT_049c3e80);
    FUN_021f03f8(PTR_DAT_049c4638);
    FUN_021f03f8(PTR_DAT_049c3e40);
    FUN_021f03f8(PTR_DAT_049c4640);
    FUN_021f03f8(PTR_DAT_049c3e88);
    FUN_021f03f8(PTR_DAT_049c4648);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4b8ab = 1;
  }
  puVar10 = PTR_DAT_049c4640;
  puVar9 = PTR_DAT_049c4638;
  puVar8 = PTR_DAT_049c3e80;
  puVar7 = PTR_DAT_049c3e78;
  puVar6 = PTR_DAT_049c3e70;
  puVar5 = PTR_DAT_049b5310;
  puVar4 = PTR_DAT_049b52a8;
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xb0),&uStack_98,*(undefined8 *)PTR_DAT_049c3e88);
    uStack_60 = uStack_88;
    puStack_68 = puStack_90;
    uStack_70 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_70;
    while (uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_70,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
      lVar18 = *(long *)puVar8;
      lVar13 = *(long *)(lVar18 + 0x20);
      uVar3 = *(ushort *)(lVar13 + 0x135);
      lVar14 = lVar13;
      if ((uVar3 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar13 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar13 = FUN_02229718();
      }
      uVar15 = thunk_FUN_0224e54c(&uStack_70,
                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_58,uVar15,uVar1);
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = UnityEngine_Component__get_gameObject_3c187f4(lStack_58,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar14,0,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_70,*(undefined8 *)puVar6);
    lVar14 = *(long *)(param_1 + 0xb0);
    if (lVar14 != 0) {
      lVar13 = *(long *)puVar10;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar12 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar12 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar2,0);
        }
      }
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      plVar19 = *(long **)(param_1 + 0xa0);
      uStack_78 = 0;
      thunk_FUN_021f190c(&uStack_80);
      uStack_78 = *(undefined8 *)(param_1 + 0xb0);
      thunk_FUN_021f190c(&uStack_78);
      uVar11 = uStack_78;
      uVar15 = uStack_80;
      if (plVar19 != (long *)0x0) {
        lVar14 = *plVar19;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar9) {
              puVar16 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0254d2f8;
            }
            uVar12 = uVar12 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)FUN_02229a4c(plVar19,*(long *)puVar9,0);
LAB_0254d2f8:
        (*(code *)*puVar16)(plVar19,uVar15,uVar11,puVar16[1]);
        if (*(long *)(param_1 + 0xb0) != 0) {
          if (*(int *)(*(long *)(param_1 + 0xb0) + 0x18) != 0) {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              FUN_021f0574();
            }
            PlayerPrefsBool__Set_3f0e92c(*(long *)(*(long *)puVar5 + 0xb8) + 0x660,1,0);
LAB_0254d398:
            *(undefined4 *)(param_1 + 0xa8) = 0;
            LevelExitMonitor__ShowNextExitResult_244d500(param_1);
            return;
          }
          lVar14 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                             (param_1,0xce15919c,0);
          if (lVar14 != 0) {
            uVar15 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar14,0);
            if (*(long *)(param_1 + 0xb0) != 0) {
              FUN_02333498(*(long *)(param_1 + 0xb0),uVar15,*(undefined8 *)PTR_DAT_049c3e40);
              goto LAB_0254d398;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

