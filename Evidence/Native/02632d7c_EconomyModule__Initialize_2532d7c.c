/* IL2CPP: EconomyModule$$Initialize
void EconomyModule__Initialize (EconomyModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02633160) */
/* IL2CPP: EconomyModule$$Initialize
   void EconomyModule__Initialize (EconomyModule_o* __this, const MethodInfo* method); */

void EconomyModule__Initialize_2532d7c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  long **pplStack_a8;
  long **pplStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_6c;
  long *plStack_68;
  
  puVar4 = PTR_DAT_049b5290;
                    /* try { // try from 02632d8c to 02732dcb has its CatchHandler @ 026330e8 */
  if ((bRam0000000004f4bf32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca018);
    FUN_021f03f8(PTR_DAT_049ca020);
                    /* try { // try from 02632dcc to 02732dd7 has its CatchHandler @ 026330c8 */
    FUN_021f03f8(PTR_DAT_049ca028);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* try { // try from 02632df4 to 02732df7 has its CatchHandler @ 026330b8 */
    FUN_021f03f8(PTR_DAT_049b4360);
                    /* try { // try from 02632df8 to 02732e13 has its CatchHandler @ 026330c4 */
    FUN_021f03f8(PTR_DAT_049b5290);
    FUN_021f03f8(PTR_DAT_049b5298);
                    /* try { // try from 02632e18 to 02732e23 has its CatchHandler @ 026330c0 */
    FUN_021f03f8(PTR_DAT_049ca030);
    bRam0000000004f4bf32 = 1;
  }
  puVar2 = PTR_DAT_049b3bd0;
  uVar18 = *(undefined8 *)puVar4;
  plStack_68 = (long *)0x0;
                    /* try { // try from 02632e38 to 02732f03 has its CatchHandler @ 026330e0 */
  uStack_6c = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar18 = System_Type__GetTypeFromHandle_310ebfc(uVar18,0);
  if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
    FUN_021f0574(*(long *)(puVar2 + 0x98));
  }
  lVar11 = System_Enum__GetValues_3134724(uVar18,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar12 = (long *)System_Array__GetEnumerator_31257a0(lVar11,0);
  puVar9 = PTR_DAT_049ca030;
  puVar8 = PTR_DAT_049ca028;
  puVar7 = PTR_DAT_049ca020;
  puVar6 = PTR_DAT_049ca018;
  puVar5 = PTR_DAT_049b6110;
  puVar2 = PTR_DAT_049b5298;
  puVar4 = PTR_DAT_049b4360;
  pplStack_a8 = &plStack_68;
  uStack_b0 = 0;
  pplStack_a0 = &plStack_98;
  do {
    plStack_68 = plVar12;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *plVar12;
    lVar11 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02632f34;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
                    /* try { // try from 02632f14 to 02732f9b has its CatchHandler @ 026330e4 */
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(plVar12,lVar11,0);
LAB_02632f34:
    uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    plVar12 = plStack_68;
    puVar3 = PTR_DAT_049b3cc8;
    if ((uVar16 & 1) == 0) {
                    /* try { // try from 0263309c to 0273309f has its CatchHandler @ 026330dc */
                    /* try { // try from 026330a0 to 027330a3 has its CatchHandler @ 026330d8 */
                    /* try { // try from 026330a4 to 027330a7 has its CatchHandler @ 026330d0 */
                    /* try { // try from 026330a8 to 027330ab has its CatchHandler @ 026330cc */
                    /* try { // try from 026330ac to 027330af has its CatchHandler @ 026330e8 */
                    /* catch() { ... } // from try @ 02633088 with catch @ 026330b0
                       try { // try from 026330b0 to 027330ff has its CatchHandler @ 02632cd0 */
                    /* catch() { ... } // from try @ 02633070 with catch @ 026330b4 */
      plVar12 = (long *)thunk_FUN_0222c938(plStack_68,*(undefined8 *)PTR_DAT_049b3cc8);
                    /* catch() { ... } // from try @ 02632df4 with catch @ 026330b8 */
                    /* catch() { ... } // from try @ 02632d78 with catch @ 026330bc */
      if (plVar12 == (long *)0x0) {
        return;
      }
                    /* catch() { ... } // from try @ 02632e18 with catch @ 026330c0 */
      lVar11 = *plVar12;
                    /* catch() { ... } // from try @ 02632df8 with catch @ 026330c4 */
                    /* catch() { ... } // from try @ 02632dcc with catch @ 026330c8 */
                    /* catch() { ... } // from try @ 026330a8 with catch @ 026330cc */
      uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 026330a4 with catch @ 026330d0 */
      plStack_98 = plVar12;
      if (uVar16 == 0) goto LAB_026330f4;
                    /* catch() { ... } // from try @ 02632fa8 with catch @ 026330d4 */
                    /* catch() { ... } // from try @ 026330a0 with catch @ 026330d8 */
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar15 = *plStack_68;
    lVar11 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_02632f9c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_02229a4c(plStack_68,lVar11,1);
LAB_02632f9c:
    plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
                    /* try { // try from 02632fa8 to 02732fb7 has its CatchHandler @ 026330d4 */
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02632fb8 to 0273306f has its CatchHandler @ 02632cd0 */
    if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20();
    }
    puVar14 = (undefined4 *)thunk_FUN_0222cb7c();
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar1 = *puVar14;
    uStack_e8 = uVar1;
    uVar16 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                       (*(long *)(param_1 + 0x50),&uStack_e8,*(undefined8 *)puVar8);
    plVar12 = plStack_68;
    if ((uVar16 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_c8 = *(undefined8 *)puVar2;
      lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x58);
      uStack_c0 = 0xffffffffffffffff;
      uStack_b8 = uVar1;
      uVar18 = System_Enum__ToString_3135e00(&uStack_c8,0);
      uVar18 = System_String__Concat_2f72b28(uVar18,*(undefined8 *)puVar9,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar18,uVar18);
      }
      ConstantSheetBase_object___TryGetInt_281c14c(lVar11,uVar18,&uStack_6c,*(undefined8 *)puVar6);
      uVar10 = uStack_6c;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__GetPrefs_24e7680(&uStack_e8,uVar1,uVar10,0);
      uStack_90 = CONCAT44(uStack_e4,uStack_e8);
      uStack_88 = uStack_e0;
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 02633070 to 0273307b has its CatchHandler @ 026330b4 */
      uStack_108 = uStack_e0;
      uStack_f8 = uStack_d0;
      uStack_100 = uStack_d8;
      uStack_110 = uStack_90;
      uStack_e8 = uVar1;
                    /* try { // try from 02633088 to 02733097 has its CatchHandler @ 026330b0 */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                (*(long *)(param_1 + 0x50),&uStack_e8,&uStack_110,*(undefined8 *)puVar7);
      plVar12 = plStack_68;
    }
  } while( true );
  while( true ) {
                    /* catch() { ... } // from try @ 02632d8c with catch @ 026330e8
                       catch() { ... } // from try @ 026330ac with catch @ 026330e8 */
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
                    /* catch() { ... } // from try @ 0263309c with catch @ 026330dc */
                    /* catch() { ... } // from try @ 02632e38 with catch @ 026330e0 */
                    /* catch() { ... } // from try @ 02632f14 with catch @ 026330e4 */
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02633110;
    }
  }
LAB_026330f4:
  puVar13 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)puVar3,0);
                    /* try { // try from 02633100 to 02733117 has its CatchHandler @ 02633178 */
LAB_02633110:
                    /* try { // try from 02633118 to 02733167 has its CatchHandler @ 02632cd0 */
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return;
}

