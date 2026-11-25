/* IL2CPP: EconomyModule.<PublishEconomyUpdate>d__20$$MoveNext
void EconomyModule__PublishEconomyUpdate_d__20__MoveNext (EconomyModule__PublishEconomyUpdate_d__20_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule.<PublishEconomyUpdate>d__20$$MoveNext
   void EconomyModule__PublishEconomyUpdate_d__20__MoveNext
   (EconomyModule__PublishEconomyUpdate_d__20_o __this, const MethodInfo* method); */

void EconomyModule__PublishEconomyUpdate_d__20__MoveNext_2534668(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_118 [96];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 aauStack_98 [5] [16];
  
  if ((bRam0000000004f4bf42 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca110);
    FUN_021f03f8(PTR_DAT_049c2f20);
    FUN_021f03f8(PTR_DAT_049ca118);
    FUN_021f03f8(PTR_DAT_049ca120);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bf42 = 1;
  }
  lVar11 = *(long *)(param_1 + 4);
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  uStack_b8 = 0;
  if (*param_1 == 0) {
    auStack_b0 = *(undefined1 (*) [16])(param_1 + 0x1c);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar11 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    CloudSaveModule__MarkDirty_24ed184(*(long *)(lVar11 + 0x20),0);
    if (*(char *)(lVar11 + 0x48) == '\0') goto LAB_02634908;
    if (*(int *)(*(long *)PTR_DAT_049c2f20 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar5 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__Create_37c14c4(0);
    if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    aauStack_98[0]._0_4_ = param_1[10];
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(lVar11 + 0x78),aauStack_98,lVar5,*(undefined8 *)PTR_DAT_049ca118);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar13 = Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__get_Task_37c1658(lVar5,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    aauStack_98[0] = auVar13;
    thunk_FUN_021f190c(aauStack_98,0);
    uVar3 = aauStack_98[0]._8_8_;
    uVar2 = aauStack_98[0]._0_8_;
    auStack_b0 = aauStack_98[0];
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
    if ((long *)uVar2 != (long *)0x0) {
      lVar5 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0263485c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_0263485c:
      iVar4 = (*(code *)*puVar6)(uVar2,uVar3 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x1c) = auStack_b0;
        thunk_FUN_021f190c(param_1 + 0x1c,0);
        FUN_0235c420(param_1 + 2,auStack_b0,param_1,*(undefined8 *)PTR_DAT_049ca110);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_b0._0_8_;
  if ((long *)auStack_b0._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_b0._0_8_;
    uVar10 = auStack_b0._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_026348f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_b0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_026348f4:
    (*(code *)*puVar6)(uVar2,uVar10,puVar6[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02634908:
  plVar9 = *(long **)(lVar11 + 0x38);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = *(long *)PTR_DAT_049ca120;
  func_0x04608620(auStack_118,param_1 + 6,0x58);
  lVar11 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0263497c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar9,lVar5,0);
LAB_0263497c:
  pcVar12 = (code *)*puVar6;
  func_0x04608620(aauStack_98,auStack_118,0x58);
  (*pcVar12)(plVar9,aauStack_98,puVar6[1]);
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

