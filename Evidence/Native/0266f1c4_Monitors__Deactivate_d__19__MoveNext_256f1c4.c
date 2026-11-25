/* IL2CPP: Monitors.<Deactivate>d__19$$MoveNext
void Monitors__Deactivate_d__19__MoveNext (Monitors__Deactivate_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors.<Deactivate>d__19$$MoveNext
   void Monitors__Deactivate_d__19__MoveNext (Monitors__Deactivate_d__19_o __this, const MethodInfo*
   method); */

void Monitors__Deactivate_d__19__MoveNext_256f1c4(int *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  long lStack_38;
  
  if ((bRam0000000004f4c1b9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc070);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049cbf40);
    FUN_021f03f8(PTR_DAT_049cbf48);
    FUN_021f03f8(PTR_DAT_049cbf50);
    FUN_021f03f8(PTR_DAT_049cbf58);
    FUN_021f03f8(PTR_DAT_049ca6b0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c1b9 = 1;
  }
  lVar12 = *(long *)(param_1 + 8);
  lStack_38 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0266f384:
                    /* try { // try from 0266f388 to 0276f39f has its CatchHandler @ 0266f4dc */
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar1 = auStack_60._0_8_;
                    /* try { // try from 0266f3a8 to 0276f3cf has its CatchHandler @ 0266f4e4 */
    auVar3 = auStack_60;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar9 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
                    /* try { // try from 0266f3d0 to 0276f4b7 has its CatchHandler @ 0266f0bc */
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_0266f408;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0266f408:
      (*(code *)*puVar8)(uVar1,uVar11,puVar8[1]);
      auVar3 = auStack_60;
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 4);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar3 = ZEXT816(0);
    if (*(char *)(lVar9 + 0x28) != '\0') goto LAB_0266f458;
    auVar3 = ZEXT816(0);
    if (*(long *)(param_1 + 6) != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(lVar12 + 0x28),lVar9,&lStack_38,*(undefined8 *)PTR_DAT_049cbf48);
      if ((uVar6 & 1) != 0) {
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Threading_CancellationTokenSource__Cancel_31658dc(lStack_38,0);
        if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 0266f2c8 to 0276f2cf has its CatchHandler @ 0266f4e0 */
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(lVar12 + 0x28),*(undefined8 *)(param_1 + 4),
                   *(undefined8 *)PTR_DAT_049cbf40);
      }
      lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
                    /* try { // try from 0266f2e8 to 0276f333 has its CatchHandler @ 0266f4e8 */
      System_Threading_CancellationTokenSource___ctor_3165668(lVar9,0);
      if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(lVar12 + 0x28),*(undefined8 *)(param_1 + 4),lVar9,
                 *(undefined8 *)PTR_DAT_049cbf50);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = *(undefined8 *)(param_1 + 4);
      plVar2 = *(long **)(param_1 + 6);
      uVar7 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar9,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = *plVar2;
                    /* try { // try from 0266f334 to 0276f343 has its CatchHandler @ 0266f0bc */
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
                    /* try { // try from 0266f344 to 0276f34f has its CatchHandler @ 0266f4d4 */
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049cbf58) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0266f490;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar2,*(long *)PTR_DAT_049cbf58,0);
                    /* try { // try from 0266f36c to 0276f377 has its CatchHandler @ 0266f4d8 */
LAB_0266f490:
      auStack_50 = (*(code *)*puVar8)(plVar2,uVar1,uVar7,puVar8[1]);
      puVar4 = PTR_DAT_049b5138;
                    /* try { // try from 0266f4b8 to 0276f4bb has its CatchHandler @ 0266f4d0 */
                    /* try { // try from 0266f4bc to 0276f4bf has its CatchHandler @ 0266f4cc */
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* try { // try from 0266f4c0 to 0276f4c3 has its CatchHandler @ 0266f4c8 */
        FUN_021f0574();
      }
                    /* try { // try from 0266f4c4 to 0276f503 has its CatchHandler @ 0266f0bc */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f4c0 with catch @ 0266f4c8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f4bc with catch @ 0266f4cc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f4b8 with catch @ 0266f4d0
                        */
      thunk_FUN_021f190c(auStack_50,0);
      uVar7 = auStack_50._8_8_;
      uVar1 = auStack_50._0_8_;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f344 with catch @ 0266f4d4
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f36c with catch @ 0266f4d8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f388 with catch @ 0266f4dc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f2c8 with catch @ 0266f4e0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f3a8 with catch @ 0266f4e4
                        */
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0266f2e8 with catch @ 0266f4e8
                        */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
                    /* try { // try from 0266f504 to 0276f507 has its CatchHandler @ 0266f528 */
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 0266f508 to 0276f52b has its CatchHandler @ 0266f0bc */
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 0266f504 with catch @ 0266f528 */
        cRam0000000004f49bf5 = '\x01';
      }
                    /* try { // try from 0266f52c to 0276f533 has its CatchHandler @ 0266f53c */
      if ((long *)uVar1 != (long *)0x0) {
                    /* try { // try from 0266f534 to 0276f53f has its CatchHandler @ 0266f0bc */
        lVar9 = *(long *)uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0266f52c with catch @ 0266f53c
                        */
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0266f584;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(uVar1,*(long *)PTR_DAT_049b54e0,0);
LAB_0266f584:
        iVar5 = (*(code *)*puVar8)(uVar1,uVar7 & 0xffffffff,puVar8[1]);
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
          thunk_FUN_021f190c(param_1 + 10,0);
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049cc070);
          return;
        }
      }
      goto LAB_0266f384;
    }
  }
  auStack_60 = auVar3;
  if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 4),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_GameObject__SetActive_3c1ce34(lVar9,0,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
            (*(long *)(lVar12 + 0x38),*(undefined8 *)(param_1 + 4),*(undefined8 *)PTR_DAT_049ca6b0);
  auVar3 = auStack_60;
LAB_0266f458:
  *param_1 = -2;
  auStack_60 = auVar3;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

