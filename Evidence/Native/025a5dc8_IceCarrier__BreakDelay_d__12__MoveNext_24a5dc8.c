/* IL2CPP: IceCarrier.<BreakDelay>d__12$$MoveNext
void IceCarrier__BreakDelay_d__12__MoveNext (IceCarrier__BreakDelay_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrier.<BreakDelay>d__12$$MoveNext
   void IceCarrier__BreakDelay_d__12__MoveNext (IceCarrier__BreakDelay_d__12_o __this, const
   MethodInfo* method); */

void IceCarrier__BreakDelay_d__12__MoveNext_24a5dc8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if ((bRam0000000004f4bb15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6748);
    FUN_021f03f8(PTR_DAT_049c1d58);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bb15 = 1;
  }
  lVar7 = *(long *)(param_5 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*param_5 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_5 + 6);
    param_5[6] = 0;
    param_5[7] = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    *param_5 = -1;
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *(long *)(lVar7 + 0xb8);
    uVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar3,uVar3);
    }
    Carrier__EnableTransfer_23fe4dc(lVar8,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = System_TimeSpan__FromSeconds_311711c(0x3ff0000000000000,0);
    puVar1 = PTR_DAT_049b5138;
    uVar9 = *(undefined8 *)(lVar7 + 0x98);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar3,0,8,uVar9,0,0);
    thunk_FUN_021f190c(auStack_60,0);
    uVar9 = auStack_60._8_8_;
    uVar3 = auStack_60._0_8_;
    auStack_70 = auStack_60;
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
    if ((long *)uVar3 != (long *)0x0) {
      lVar8 = *(long *)uVar3;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_025a5fa8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(uVar3,*(long *)PTR_DAT_049b54e0,0);
LAB_025a5fa8:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar9 & 0xffffffff,puVar4[1]);
      if (iVar2 == 0) {
        *param_5 = 0;
        *(undefined1 (*) [16])(param_5 + 6) = auStack_70;
        thunk_FUN_021f190c(param_5 + 6,0);
        FUN_0235c420(param_5 + 2,auStack_70,param_5,*(undefined8 *)PTR_DAT_049c6748);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_70._0_8_;
    uVar10 = auStack_70._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_025a6040;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a6040:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar8 = *(long *)(lVar7 + 0xb8);
  *(undefined1 *)(lVar7 + 0xc0) = 1;
  uVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar3,uVar3);
  }
  Carrier__EnableInteraction_2404130(lVar8,uVar3,0);
  if (*(long *)(lVar7 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar7 + 0xa0),0,0);
  if (*(long *)(lVar7 + 0xb0) != 0) {
    if (*(long *)(lVar7 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = *(undefined8 *)(lVar7 + 0x30);
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb0) + 0x20);
    uVar11 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar7 + 0xa8),0);
    if (*(long *)(lVar7 + 0xa8) != 0) {
      uVar13 = param_2;
      uVar14 = param_3;
      uVar12 = UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar7 + 0xa8),0);
      PrefabModuleExtensions__Rent_object__269ee8c
                (uVar11,param_2,param_3,uVar12,uVar13,uVar14,param_4,uVar3,uVar9,
                 *(undefined8 *)PTR_DAT_049c1d58);
      *param_5 = -2;
      FUN_0235afc8(param_5 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

