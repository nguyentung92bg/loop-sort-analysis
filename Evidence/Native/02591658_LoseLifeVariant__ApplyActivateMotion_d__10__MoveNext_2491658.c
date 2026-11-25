/* IL2CPP: LoseLifeVariant.<ApplyActivateMotion>d__10$$MoveNext
void LoseLifeVariant__ApplyActivateMotion_d__10__MoveNext (LoseLifeVariant__ApplyActivateMotion_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LoseLifeVariant.<ApplyActivateMotion>d__10$$MoveNext
   void LoseLifeVariant__ApplyActivateMotion_d__10__MoveNext
   (LoseLifeVariant__ApplyActivateMotion_d__10_o __this, const MethodInfo* method); */

void LoseLifeVariant__ApplyActivateMotion_d__10__MoveNext_2491658(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4ba72 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5f20);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4ba72 = 1;
  }
  lVar10 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Behaviour__set_enabled_3c17eec(*(long *)(lVar10 + 0x58),1,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8448(0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar3 = auStack_50._8_8_;
    uVar2 = auStack_50._0_8_;
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
    if ((long *)uVar2 != (long *)0x0) {
      lVar6 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_025917c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar2,*(long *)PTR_DAT_049b54e0,0);
LAB_025917c8:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c5f20);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar2 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar9 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02591860;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02591860:
    (*(code *)*puVar5)(uVar2,uVar9,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar10 + 0x58) != 0) {
    UnityEngine_Behaviour__set_enabled_3c17eec(*(long *)(lVar10 + 0x58),0,0);
    UIMotionExtensions__ApplyOrderedOpen_2412d28
              (_UNK_013aa734,*(undefined8 *)(lVar10 + 0x20),0x95f4723c,0,0);
    *param_1 = -2;
    FUN_0235afc8(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

