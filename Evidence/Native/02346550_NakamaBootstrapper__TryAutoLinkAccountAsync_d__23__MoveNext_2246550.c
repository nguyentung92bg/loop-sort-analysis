/* IL2CPP: NakamaBootstrapper.<TryAutoLinkAccountAsync>d__23$$MoveNext
void NakamaBootstrapper__TryAutoLinkAccountAsync_d__23__MoveNext (NakamaBootstrapper__TryAutoLinkAccountAsync_d__23_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper.<TryAutoLinkAccountAsync>d__23$$MoveNext
   void NakamaBootstrapper__TryAutoLinkAccountAsync_d__23__MoveNext
   (NakamaBootstrapper__TryAutoLinkAccountAsync_d__23_o __this, const MethodInfo* method); */

void NakamaBootstrapper__TryAutoLinkAccountAsync_d__23__MoveNext_2246550(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f49b47 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5788);
    FUN_021f03f8(PTR_DAT_049b5790);
                    /* catch() { ... } // from try @ 0234668c with catch @ 02346588 */
    FUN_021f03f8(PTR_DAT_049b5798);
    FUN_021f03f8(PTR_DAT_049b5710);
    FUN_021f03f8(PTR_DAT_049b57a0);
    FUN_021f03f8(PTR_DAT_049b57a8);
    FUN_021f03f8(PTR_DAT_049b5718);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b57b0);
    FUN_021f03f8(PTR_DAT_049b57b8);
    FUN_021f03f8(PTR_DAT_049b57c0);
    FUN_021f03f8(PTR_DAT_049b5728);
    bRam0000000004f49b47 = 1;
  }
                    /* try { // try from 02346618 to 02446623 has its CatchHandler @ 023466cc */
  lVar10 = *(long *)(param_1 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if (*param_1 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0xe);
                    /* try { // try from 02346660 to 0244666b has its CatchHandler @ 023466b8 */
    uStack_48 = *(undefined8 *)(param_1 + 0xc);
    uStack_50 = *(undefined8 *)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_023467bc:
    FUN_0235b3fc(&uStack_50,&uStack_c0,*(undefined8 *)PTR_DAT_049b57a0);
    lVar5 = CONCAT44(uStack_bc,uStack_c0);
                    /* catch() { ... } // from try @ 02346794 with catch @ 023467e8 */
    if (*(int *)(*(long *)PTR_DAT_049b54a0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = Voodoo_Nakama_Services_LinkedProvidersSnapshot__IsLinked_426d210(lVar5,1,0);
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 02346808 to 0244680b has its CatchHandler @ 02346814 */
      uStack_c0 = 0;
      goto LAB_02346994;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02346808 with catch @ 02346814
                        */
                    /* catch() { ... } // from try @ 0234685c with catch @ 02346818 */
    if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(lVar10 + 0x20);
    uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4(*(long *)(lVar10 + 0x28),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 02346850 to 0244685b has its CatchHandler @ 02346900 */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 0x1b) * 0x10 + 0x138);
          goto LAB_023468c8;
        }
                    /* try { // try from 0234685c to 0244691f has its CatchHandler @ 02346818 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b5578,0x1b);
LAB_023468c8:
    uVar3 = (*(code *)*puVar4)(plVar8,1,uVar3,puVar4[1]);
    Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask___Il2CppFullySharedGenericType__2718b10
              (uVar3,1,&uStack_c0,*(undefined8 *)PTR_DAT_049b57b0);
    uStack_90 = CONCAT44(uStack_bc,uStack_c0);
                    /* catch() { ... } // from try @ 02346850 with catch @ 02346900 */
    uStack_88 = uStack_b8;
    FUN_0235b0c0(&uStack_90,&uStack_c0,*(undefined8 *)PTR_DAT_049b5728);
    uStack_80 = CONCAT44(uStack_bc,uStack_c0);
    lVar5 = *(long *)PTR_DAT_049b5718;
    uStack_78 = uStack_b8;
    lVar10 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
    lVar10 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x12) = uStack_78;
      *(undefined8 *)(param_1 + 0x10) = uStack_80;
      thunk_FUN_021f190c(param_1 + 0x10,0);
      FUN_0235bb44(param_1 + 2,&uStack_80,param_1,*(undefined8 *)PTR_DAT_049b5790);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
                    /* try { // try from 02346680 to 0244668b has its CatchHandler @ 023466b0 */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar10 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 0234668c to 024466db has its CatchHandler @ 02346588 */
      plVar8 = *(long **)(lVar10 + 0x20);
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(lVar10 + 0x28),0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 02346680 with catch @ 023466b0 */
      if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 02346660 with catch @ 023466b8 */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b5578) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x23) * 0x10 + 0x138);
            goto LAB_023466f8;
          }
                    /* catch() { ... } // from try @ 02346618 with catch @ 023466cc */
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b5578,0x23);
LAB_023466f8:
      uVar3 = (*(code *)*puVar4)(plVar8,1,uVar3,puVar4[1]);
      Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask___Il2CppFullySharedGenericType__2718b10
                (uVar3,1,&uStack_c0,*(undefined8 *)PTR_DAT_049b57b8);
      uStack_70 = CONCAT44(uStack_bc,uStack_c0);
      uStack_68 = uStack_b8;
      uStack_60 = uStack_b0;
                    /* catch() { ... } // from try @ 0234679c with catch @ 02346748 */
      FUN_0235b0c0(&uStack_70,&uStack_c0,*(undefined8 *)PTR_DAT_049b57c0);
      uStack_50 = CONCAT44(uStack_bc,uStack_c0);
      lVar9 = *(long *)PTR_DAT_049b57a8;
      uStack_48 = uStack_b8;
      uStack_40 = uStack_b0;
      lVar5 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar3 = thunk_FUN_0224e54c(&uStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
                    /* try { // try from 02346794 to 0244679b has its CatchHandler @ 023467e8 */
      lVar5 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 0234679c to 024467fb has its CatchHandler @ 02346748 */
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = uStack_48;
        *(undefined8 *)(param_1 + 10) = uStack_50;
        *(undefined8 *)(param_1 + 0xe) = uStack_40;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049b5788);
        return;
      }
      goto LAB_023467bc;
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x12);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  FUN_0235b3fc(&uStack_80,&uStack_c0,*(undefined8 *)PTR_DAT_049b5710);
LAB_02346994:
  puVar1 = PTR_DAT_049b5798;
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_c0,*(undefined8 *)puVar1);
  return;
}

