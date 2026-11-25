/* IL2CPP: PrefabReturnerOnDisable.<ReturnPrefabAfterDelay>d__2$$MoveNext
void PrefabReturnerOnDisable__ReturnPrefabAfterDelay_d__2__MoveNext (PrefabReturnerOnDisable__ReturnPrefabAfterDelay_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PrefabReturnerOnDisable.<ReturnPrefabAfterDelay>d__2$$MoveNext
   void PrefabReturnerOnDisable__ReturnPrefabAfterDelay_d__2__MoveNext
   (PrefabReturnerOnDisable__ReturnPrefabAfterDelay_d__2_o __this, const MethodInfo* method); */

void PrefabReturnerOnDisable__ReturnPrefabAfterDelay_d__2__MoveNext_249c414(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  if ((bRam0000000004f4babf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c63a8);
    FUN_021f03f8(PTR_DAT_049b5190);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6398);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4babf = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  lVar9 = *(long *)(param_1 + 4);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8448(0);
    thunk_FUN_021f190c(auStack_50,0);
    uVar2 = auStack_50._8_8_;
    uVar5 = auStack_50._0_8_;
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
    if ((long *)uVar5 != (long *)0x0) {
      lVar6 = *(long *)uVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0259c5a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(uVar5,*(long *)PTR_DAT_049b54e0,0);
LAB_0259c5a0:
      iVar3 = (*(code *)*puVar4)(uVar5,uVar2 & 0xffffffff,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_60;
        thunk_FUN_021f190c(param_1 + 6,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c63a8);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0259c638;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0259c638:
    (*(code *)*puVar4)(uVar5,uVar10,puVar4[1]);
  }
  if (*(int *)(*(long *)PTR_DAT_049b3bf8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uStack_38 = UnityEngine_Application__get_exitCancellationToken_3bc9208(0);
  if (*(int *)(*(long *)PTR_DAT_049b5190 + 0xe4) == 0) {
    FUN_021f0574(*(long *)PTR_DAT_049b5190);
  }
  uVar7 = System_Threading_CancellationToken__get_IsCancellationRequested_316293c(&uStack_38,0);
  puVar1 = PTR_DAT_049b3b98;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(lVar9,0,0);
    if ((uVar7 & 1) == 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
      if ((uVar7 & 1) == 0) {
        PrefabReturnerOnDisable__ResolvePrefabModule_249c2f4();
        lVar6 = **(long **)(*(long *)PTR_DAT_049c6398 + 0xb8);
        if (lVar6 != 0) {
          uVar5 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
          PrefabModule__Return_2537164(lVar6,uVar5,0);
        }
      }
    }
  }
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

