/* IL2CPP: CoreStreakPlayingElement.<ApplyItemMotion>d__4$$MoveNext
void CoreStreakPlayingElement__ApplyItemMotion_d__4__MoveNext (CoreStreakPlayingElement__ApplyItemMotion_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreakPlayingElement.<ApplyItemMotion>d__4$$MoveNext
   void CoreStreakPlayingElement__ApplyItemMotion_d__4__MoveNext
   (CoreStreakPlayingElement__ApplyItemMotion_d__4_o __this, const MethodInfo* method); */

void CoreStreakPlayingElement__ApplyItemMotion_d__4__MoveNext_2418ecc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4b74b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2e28);
    FUN_021f03f8(PTR_DAT_049c2e30);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c2e38);
    bRam0000000004f4b74b = 1;
  }
  puVar2 = PTR_DAT_049b5138;
  iStack_34 = 0;
  lVar15 = *(long *)(param_1 + 6);
  uStack_38 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    iStack_34 = param_1[8];
    param_1[8] = 0;
    *param_1 = -1;
    goto LAB_02519174;
  }
  if (*param_1 == 1) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar12 = CoreStreak__IsUnlocked_2512e64(*(long *)(lVar15 + 0x28),0);
    if ((uVar12 & 1) == 0) goto LAB_0251936c;
    if (*(long *)(lVar15 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar6 = CoreStreak__GetCurrentItemCount_2513268(*(long *)(lVar15 + 0x28),0);
    *(int *)(lVar15 + 0x38) = iVar6;
    if (iVar6 < 1) goto LAB_0251936c;
    lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar15,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar8,1,0);
    if (*(int *)(lVar15 + 0x38) < 1) {
      uVar9 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    }
    else {
      auStack_50._0_4_ = *(int *)(lVar15 + 0x38);
      uVar9 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),auStack_50);
      uVar9 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c2e38,uVar9,0);
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar15,0x5cac0bbb,uVar9,0);
    lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                      (lVar15,0x2516c3ab,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_GameObject__get_transform_3c1ca74(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0);
    iVar6 = 0;
    iVar1 = iVar7 + -1;
    if (*(int *)(lVar15 + 0x38) <= iVar7 + -1) {
      iVar1 = *(int *)(lVar15 + 0x38);
    }
    for (; iVar7 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar8,0), iVar6 < iVar7;
        iVar6 = iVar6 + 1) {
      lVar10 = UnityEngine_Transform__GetChild_3c2f8bc(lVar8,iVar6,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar10,iVar1 == iVar6,0);
    }
    while( true ) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar8 = UnityEngine_Component__get_gameObject_3c187f4(lVar15,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar8,0);
      iVar6 = *(int *)(*(long *)puVar2 + 0xe4);
      if ((uVar12 & 1) == 0) break;
      if (iVar6 == 0) {
        FUN_021f0574();
      }
      uStack_38 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
      iStack_34 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_38,0);
      uVar12 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_34,0)
      ;
      puVar3 = PTR_DAT_049c2e28;
      if ((uVar12 & 1) == 0) {
        *param_1 = 0;
        uVar9 = *(undefined8 *)puVar3;
        param_1[8] = iStack_34;
        FUN_0235c25c(param_1 + 2,&iStack_34,param_1,uVar9);
        return;
      }
LAB_02519174:
      Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_34,0);
    }
    if (iVar6 == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(0x4e2,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar5 = auStack_50._8_8_;
    uVar9 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar9 != (long *)0x0) {
      lVar15 = *(long *)uVar9;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_025192c4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar11 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
LAB_025192c4:
      iVar6 = (*(code *)*puVar11)(uVar9,uVar5 & 0xffffffff,puVar11[1]);
      if (iVar6 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c2e30);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_60._0_8_;
    uVar16 = auStack_60._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0251935c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0251935c:
    (*(code *)*puVar11)(uVar9,uVar16,puVar11[1]);
  }
LAB_0251936c:
  cVar4 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar14 = *(long **)(param_1 + 2);
  if (plVar14 != (long *)0x0) {
    lVar15 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_025193f4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049b56d0,2);
LAB_025193f4:
    (*(code *)*puVar11)(plVar14,puVar11[1]);
  }
  return;
}

