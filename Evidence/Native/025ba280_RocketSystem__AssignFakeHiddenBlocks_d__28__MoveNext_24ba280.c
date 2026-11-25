/* IL2CPP: RocketSystem.<AssignFakeHiddenBlocks>d__28$$MoveNext
void RocketSystem__AssignFakeHiddenBlocks_d__28__MoveNext (RocketSystem__AssignFakeHiddenBlocks_d__28_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025ba6a4) */
/* WARNING: Removing unreachable block (ram,0x025ba79c) */
/* WARNING: Removing unreachable block (ram,0x025ba6e0) */
/* WARNING: Removing unreachable block (ram,0x025ba6e4) */
/* IL2CPP: RocketSystem.<AssignFakeHiddenBlocks>d__28$$MoveNext
   void RocketSystem__AssignFakeHiddenBlocks_d__28__MoveNext
   (RocketSystem__AssignFakeHiddenBlocks_d__28_o __this, const MethodInfo* method); */

void RocketSystem__AssignFakeHiddenBlocks_d__28__MoveNext_24ba280(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auStack_c8 [16];
  undefined1 *puStack_b8;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined1 auStack_68 [16];
  int iStack_54;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bbb2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6de0);
    FUN_021f03f8(PTR_DAT_049c2588);
    FUN_021f03f8(PTR_DAT_049c2598);
    FUN_021f03f8(PTR_DAT_049c6db0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c25c8);
    FUN_021f03f8(PTR_DAT_049c6de8);
    FUN_021f03f8(PTR_DAT_049c6df0);
    FUN_021f03f8(PTR_DAT_049c25e8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bbb2 = 1;
  }
  iStack_54 = *param_1;
  lVar12 = *(long *)(param_1 + 4);
  auStack_68._0_8_ = 0;
  auStack_68._8_8_ = 0;
  auStack_80._8_8_ = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  auStack_80._0_8_ = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_a8 = 0;
  if (iStack_54 == 0) {
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    iStack_54 = -1;
    *param_1 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar12 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar7 = CoreStreak__GetCurrentItemCount_2513268(*(long *)(lVar12 + 0x68),0);
    param_1[6] = iVar7;
    puVar2 = PTR_DAT_049b5138;
    if (iVar7 < 1) goto LAB_025ba710;
    uVar13 = *(undefined8 *)(lVar12 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_c8 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar13,0,0);
    thunk_FUN_021f190c(auStack_c8,0);
    uVar6 = auStack_c8._8_8_;
    uVar13 = auStack_c8._0_8_;
    auStack_a0 = auStack_c8;
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
    if ((long *)uVar13 != (long *)0x0) {
      lVar9 = *(long *)uVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_025ba480;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar13,*(long *)PTR_DAT_049b54e0,0);
LAB_025ba480:
      iVar7 = (*(code *)*puVar8)(uVar13,uVar6 & 0xffffffff,puVar8[1]);
      if (iVar7 == 0) {
        iStack_54 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_a0;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,auStack_a0,param_1,*(undefined8 *)PTR_DAT_049c6de0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar13 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_a0._0_8_;
    uVar14 = auStack_a0._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_025ba518;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025ba518:
    (*(code *)*puVar8)(uVar13,uVar14,puVar8[1]);
  }
  puVar2 = PTR_DAT_049c2598;
  if (*(int *)(*(long *)PTR_DAT_049c2598 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049c2588;
  auStack_68 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_70,*(undefined8 *)PTR_DAT_049c2588);
  auStack_c8._8_8_ = &iStack_54;
  auStack_c8._0_8_ = 0;
  puStack_b8 = auStack_68;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  RocketSystem__CollectHiddenBlockGroups_24b8c18(lVar12,lStack_70);
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar7 = param_1[6];
  iVar1 = *(int *)(lStack_70 + 0x18);
  RocketSystem__ReleaseGroups_24b8d60();
  iVar7 = iVar7 - iVar1;
  if (0 < iVar7) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                           (&lStack_88,*(undefined8 *)puVar3);
    RocketSystem__CollectFakeHiddenCandidateGroups_24b91cc(lVar12,lStack_88);
    puVar5 = PTR_DAT_049c6de8;
    puVar4 = PTR_DAT_049c6db0;
    puVar3 = PTR_DAT_049c25c8;
    puVar2 = PTR_DAT_049b5480;
    do {
      lVar9 = lStack_88;
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lStack_88 + 0x18) < 1) break;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
                (lVar9,&uStack_48,*(undefined8 *)puVar4);
      uVar13 = uStack_48;
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                (lStack_88,uStack_48,*(undefined8 *)puVar5);
      if (*(long *)(lVar12 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(*(long *)(lVar12 + 0xa8),uVar13,*(undefined8 *)puVar3);
      RocketSystem__ApplyFakeHiddenMaterial_24b88e4(lVar12,uVar13);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    RocketSystem__ReleaseGroups_24b8d60(lStack_88);
    if (iStack_54 < 0) {
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (auStack_80,*(undefined8 *)PTR_DAT_049c25e8);
    }
  }
  if (*(int *)auStack_c8._8_8_ < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (puStack_b8,*(undefined8 *)PTR_DAT_049c25e8);
  }
  if (auStack_c8._0_8_ != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
LAB_025ba710:
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

