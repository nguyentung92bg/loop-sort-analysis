/* IL2CPP: BoosterBase.<HandleCameraBlend>d__8$$MoveNext
void BoosterBase__HandleCameraBlend_d__8__MoveNext (BoosterBase__HandleCameraBlend_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025e5460) */
/* IL2CPP: BoosterBase.<HandleCameraBlend>d__8$$MoveNext
   void BoosterBase__HandleCameraBlend_d__8__MoveNext (BoosterBase__HandleCameraBlend_d__8_o __this,
   const MethodInfo* method); */

void BoosterBase__HandleCameraBlend_d__8__MoveNext_24e4e34(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [16];
  long **pplStack_b0;
  long lStack_a8;
  int *piStack_a0;
  int **ppiStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined1 auStack_80 [16];
  long *plStack_70;
  undefined8 uStack_68;
  long **pplStack_60;
  long lStack_58;
  int iStack_4c;
  int *piStack_48;
  long lStack_38;
  
  piStack_48 = param_1;
  if ((bRam0000000004f4bc7d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7ab0);
    FUN_021f03f8(PTR_DAT_049c7ab8);
    FUN_021f03f8(PTR_DAT_049c7ac0);
    FUN_021f03f8(PTR_DAT_049c7ac8);
    FUN_021f03f8(PTR_DAT_049c7ad0);
    FUN_021f03f8(PTR_DAT_049c7ad8);
    FUN_021f03f8(PTR_DAT_049c7ae0);
    FUN_021f03f8(PTR_DAT_049c7ae8);
    FUN_021f03f8(PTR_DAT_049b5240);
    FUN_021f03f8(PTR_DAT_049c7af0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7af8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bc7d = 1;
  }
  puVar3 = PTR_DAT_049b3b98;
  pplStack_60 = (long **)0x0;
  lStack_58 = 0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  iStack_4c = *param_1;
  lVar16 = *(long *)(param_1 + 4);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  iStack_88 = 0;
  if (iStack_4c == 0) {
LAB_025e50b8:
    ppiStack_98 = &piStack_48;
    piStack_a0 = &iStack_4c;
    lStack_a8 = 0;
    iStack_4c = -1;
    auStack_80 = *(undefined1 (*) [16])(piStack_48 + 10);
    piStack_48[10] = 0;
    piStack_48[0xb] = 0;
    piStack_48[0xc] = 0;
    piStack_48[0xd] = 0;
    *piStack_48 = -1;
    goto LAB_025e50d4;
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = *(undefined8 *)(lVar16 + 0xb0);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar12,0,0);
  if ((uVar7 & 1) != 0) goto LAB_025e53ac;
  if (*(int *)(*(long *)PTR_DAT_049c7ac8 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar17 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                      (&lStack_58,*(undefined8 *)PTR_DAT_049c7ac0);
  *(undefined1 (*) [16])(piStack_48 + 6) = auVar17;
  thunk_FUN_021f190c((undefined1 (*) [16])(piStack_48 + 6),0);
  piStack_a0 = &iStack_4c;
  lStack_a8 = 0;
  ppiStack_98 = &piStack_48;
  if (iStack_4c == 0) goto LAB_025e50b8;
  if (*(long *)(lVar16 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_Component__GetComponents___Il2CppFullySharedGenericType__25c21b0
            (*(long *)(lVar16 + 0xb0),lStack_58,*(undefined8 *)PTR_DAT_049c7ad0);
                    /* try { // try from 025e4fcc to 026e5223 has its CatchHandler @ 025e4fcc
                       catch() { ... } // from try @ 025e4fcc with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5470 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5508 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5594 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e56a8 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5750 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e57d8 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e58fc with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5960 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e59b4 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5a64 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5b24 with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5b8c with catch @ 025e4fcc
                       catch() { ... } // from try @ 025e5bb8 with catch @ 025e4fcc */
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_58,auStack_c0,*(undefined8 *)PTR_DAT_049c7af0);
  puVar5 = PTR_DAT_049c7ae8;
  puVar4 = PTR_DAT_049c7ae0;
  pplStack_60 = pplStack_b0;
  uStack_68 = auStack_c0._8_8_;
  plStack_70 = (long *)auStack_c0._0_8_;
  auStack_c0._0_8_ = 0;
  pplStack_b0 = &plStack_70;
  auStack_c0._8_8_ = &iStack_4c;
  while (uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&plStack_70,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
    lVar13 = *(long *)puVar5;
    lVar8 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar12 = thunk_FUN_0224e54c(&plStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_38,uVar12,uVar1);
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Behaviour__set_enabled_3c17eec(lStack_38,1,0);
  }
  if (iStack_4c < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (pplStack_b0,*(undefined8 *)PTR_DAT_049c7ad8);
  }
  lVar9 = *(long *)(lVar16 + 0xb0);
  uVar12 = Unity_Cinemachine_PrioritySettings__op_Implicit_38bcb18(0xffffffff,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lVar9 + 0x20) = uVar12;
  if (*(long *)(lVar16 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar16 + 0xb0),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025e5470 to 026e54a3 has its CatchHandler @ 025e4fcc */
    FUN_021f06a0();
  }
  UnityEngine_Transform__set_parent_3c2ded4(lVar9,0,0);
  uVar15 = *(undefined8 *)(lVar16 + 0xb0);
  uVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5240);
  System_Func___Il2CppFullySharedGenericType____ctor_289217c
            (uVar12,uVar15,*(undefined8 *)PTR_DAT_049c7ab8,0);
  puVar4 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_c0 = Cysharp_Threading_Tasks_UniTask__WaitWhile_37cb838(uVar12,8,0,0,0);
  thunk_FUN_021f190c(auStack_c0,0);
  uVar15 = auStack_c0._8_8_;
  uVar12 = auStack_c0._0_8_;
                    /* try { // try from 025e5224 to 026e528b has its CatchHandler @ 025e5a78 */
  auStack_80 = auStack_c0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  if ((long *)uVar12 == (long *)0x0) {
LAB_025e50d4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar12 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_80._0_8_;
      uVar14 = auStack_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_025e52cc;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025e52cc:
      (*(code *)*puVar10)(uVar12,uVar14,puVar10[1]);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025e52e4 to 026e52ef has its CatchHandler @ 025e5ae0 */
    uVar12 = *(undefined8 *)(lVar16 + 0xb0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar16 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lVar16 + 0xb0),0);
                    /* try { // try from 025e531c to 026e5323 has its CatchHandler @ 025e5adc */
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 025e532c to 026e533f has its CatchHandler @ 025e5ad0 */
      UnityEngine_Object__Destroy_3c24380(uVar12,0);
    }
    iVar6 = 4;
  }
  else {
    lVar9 = *(long *)uVar12;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_025e53ec;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(uVar12,*(long *)PTR_DAT_049b54e0,0);
LAB_025e53ec:
    iVar6 = (*(code *)*puVar10)(uVar12,uVar15 & 0xffffffff,puVar10[1]);
                    /* try { // try from 025e53fc to 026e5403 has its CatchHandler @ 025e5abc */
    if (iVar6 != 0) goto LAB_025e50d4;
    iStack_4c = 0;
    *piStack_48 = 0;
    *(undefined1 (*) [16])(piStack_48 + 10) = auStack_80;
    thunk_FUN_021f190c(piStack_48 + 10,0);
                    /* try { // try from 025e5424 to 026e546f has its CatchHandler @ 025e5aec */
    FUN_0235c420(piStack_48 + 2,auStack_80,piStack_48,*(undefined8 *)PTR_DAT_049c7ab0);
    iVar6 = 10;
  }
  if (*piStack_a0 < 0) {
                    /* try { // try from 025e5360 to 026e536f has its CatchHandler @ 025e5acc */
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppiStack_98 + 6,*(undefined8 *)PTR_DAT_049c7af8);
  }
  if (lStack_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar6 != 4) {
    if (iVar6 != 0) {
      return;
    }
    uVar12 = (&uStack_90)[iStack_88 + -1];
    *piStack_48 = -2;
                    /* try { // try from 025e539c to 026e53a7 has its CatchHandler @ 025e5a94 */
    piStack_48[6] = 0;
    piStack_48[7] = 0;
    piStack_48[8] = 0;
    piStack_48[9] = 0;
    FUN_0235aea8(piStack_48 + 2,uVar12,0);
    return;
  }
LAB_025e53ac:
                    /* try { // try from 025e53b8 to 026e53bb has its CatchHandler @ 025e5a74 */
  *piStack_48 = -2;
  piStack_48[6] = 0;
  piStack_48[7] = 0;
  piStack_48[8] = 0;
  piStack_48[9] = 0;
                    /* try { // try from 025e53c4 to 026e53cb has its CatchHandler @ 025e5a68 */
  FUN_0235afc8(piStack_48 + 2,0);
  return;
}

