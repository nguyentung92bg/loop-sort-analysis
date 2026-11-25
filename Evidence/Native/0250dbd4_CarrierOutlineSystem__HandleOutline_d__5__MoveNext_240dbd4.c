/* IL2CPP: CarrierOutlineSystem.<HandleOutline>d__5$$MoveNext
void CarrierOutlineSystem__HandleOutline_d__5__MoveNext (CarrierOutlineSystem__HandleOutline_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarrierOutlineSystem.<HandleOutline>d__5$$MoveNext
   void CarrierOutlineSystem__HandleOutline_d__5__MoveNext
   (CarrierOutlineSystem__HandleOutline_d__5_o __this, const MethodInfo* method); */

void CarrierOutlineSystem__HandleOutline_d__5__MoveNext_240dbd4(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4b703 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2a58);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b703 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_TimeSpan__FromSeconds_311711c(_UNK_013a77f0,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar4,0,8,0,0,0);
    thunk_FUN_021f190c(auStack_40,0);
    uVar2 = auStack_40._8_8_;
    uVar4 = auStack_40._0_8_;
    auStack_50 = auStack_40;
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
    if ((long *)uVar4 != (long *)0x0) {
      lVar6 = *(long *)uVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0250dd70;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar4,*(long *)PTR_DAT_049b54e0,0);
LAB_0250dd70:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar2 & 0xffffffff,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 4) = auStack_50;
        thunk_FUN_021f190c(param_1 + 4,0);
        FUN_0235c420(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c2a58);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_50._0_8_;
    uVar9 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0250de08;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0250de08:
    (*(code *)*puVar5)(uVar4,uVar9,puVar5[1]);
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

