/* IL2CPP: AreaCompletedMonitor.<Complete>d__10$$MoveNext
void AreaCompletedMonitor__Complete_d__10__MoveNext (AreaCompletedMonitor__Complete_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaCompletedMonitor.<Complete>d__10$$MoveNext
   void AreaCompletedMonitor__Complete_d__10__MoveNext (AreaCompletedMonitor__Complete_d__10_o
   __this, const MethodInfo* method); */

void AreaCompletedMonitor__Complete_d__10__MoveNext_24339a0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b7ed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39f8);
    FUN_021f03f8(PTR_DAT_049c3a00);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c3a08);
    FUN_021f03f8(PTR_DAT_049c3a10);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b7ed = 1;
  }
  puVar3 = PTR_DAT_049c3a10;
  puVar1 = PTR_DAT_049b5138;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  lVar15 = *(long *)(param_1 + 6);
  uStack_68 = 0;
  uStack_80 = 0;
  iStack_7c = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      iStack_7c = param_1[0xe];
      param_1[0xe] = 0;
      *param_1 = -1;
      uStack_80 = 0;
      auStack_60 = ZEXT816(0);
      goto LAB_02533e80;
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HomeMonitor__UpdateArea_2447670(*(long *)(lVar15 + 0xa0),0);
    *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_021f190c();
    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Additive_object__26888e8(*(long *)(lVar15 + 0x30),0,1,*(undefined8 *)PTR_DAT_049c3a08)
    ;
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar15,0x240695d9,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(2000,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar5 = auStack_50._8_8_;
    uVar11 = auStack_50._0_8_;
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar11 != (long *)0x0) {
      lVar12 = *(long *)uVar11;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02533bcc;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(uVar11,*(long *)PTR_DAT_049b54e0,0);
LAB_02533bcc:
      iVar8 = (*(code *)*puVar10)(uVar11,uVar5 & 0xffffffff,puVar10[1]);
      if (iVar8 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c3a00);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar12 = *(long *)auStack_60._0_8_;
    uVar16 = auStack_60._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_02533c64;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02533c64:
    (*(code *)*puVar10)(uVar11,uVar16,puVar10[1]);
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar15 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *(long *)(*(long *)(lVar15 + 0xa8) + 0x50);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(lVar12 + 0x48) == '\0') {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar11 = Extensions__ToLocalizedName_24e8258(uVar7,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar15,0x8ac5d12b,uVar11,0);
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = Areas__TryGetBackground_256fb40
                      (*(long *)(lVar15 + 0x98),*(undefined4 *)(*(long *)(param_1 + 8) + 0x20),
                       &uStack_78,0);
    lVar12 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                       (lVar15,0x3b77286f,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Behaviour__set_enabled_3c17eec(lVar12,uVar6 & 1,0);
    if ((uVar6 & 1) != 0) {
      StatefulUISupport_Scripts_Components_StatefulView__SetImage_3351a1c
                (lVar15,0x3b77286f,uStack_78,0);
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar15,0xcbb1848a,0);
  }
  else {
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar15,0x5f10e269,0);
    AreaCompletedMonitor__ShowJourneyUnlock_2433608(lVar15,*(undefined8 *)(param_1 + 8));
  }
  while( true ) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar15 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = Monitors__IsActive_object__2688ab4(*(long *)(lVar15 + 0x30),*(undefined8 *)puVar3);
    cVar4 = cRam0000000004f49bfa;
    if ((uVar9 & 1) == 0) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = Cysharp_Threading_Tasks_UniTask__Yield_37c7ff4(0);
    _uStack_80 = CONCAT44(iStack_7c,uVar7);
    iVar8 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter_37d3d44(&uStack_80,0);
    iStack_7c = iVar8;
    uVar9 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted_37d3d4c(&iStack_7c,0);
    puVar2 = PTR_DAT_049c39f8;
    if ((uVar9 & 1) == 0) {
      *param_1 = 1;
      uVar11 = *(undefined8 *)puVar2;
      param_1[0xe] = iStack_7c;
      FUN_0235c25c(param_1 + 2,&iStack_7c,param_1,uVar11);
      return;
    }
LAB_02533e80:
    Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult_37d3d54(&iStack_7c,0);
  }
  *param_1 = -2;
  if (cVar4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar14 = *(long **)(param_1 + 2);
  if (plVar14 != (long *)0x0) {
    lVar15 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_02533f5c;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049b56d0,2);
LAB_02533f5c:
    (*(code *)*puVar10)(plVar14,puVar10[1]);
  }
  return;
}

