/* IL2CPP: EconomyModule$$TryConsume
bool EconomyModule__TryConsume (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$TryConsume
   bool EconomyModule__TryConsume (EconomyModule_o* __this, EconomyModule_Transaction_o transaction,
   const MethodInfo* method); */

bool EconomyModule__TryConsume_2533778(long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  code *pcVar16;
  undefined1 auStack_328 [88];
  undefined1 auStack_2d0 [88];
  undefined1 auStack_278 [88];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000004f4bf35 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca050);
    FUN_021f03f8(PTR_DAT_049ca058);
    FUN_021f03f8(PTR_DAT_049b63f0);
    FUN_021f03f8(PTR_DAT_049b6400);
    FUN_021f03f8(PTR_DAT_049ca048);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b6418);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    bRam0000000004f4bf35 = 1;
  }
  uStack_f0 = 0;
  uStack_170 = 0;
  uStack_1d0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_bc = *(uint *)(param_2 + 0x10);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x50),&uStack_bc,&uStack_b8,*(undefined8 *)PTR_DAT_049c9900);
    iVar1 = *(int *)(param_2 + 0x24);
    uStack_d8 = uStack_b0;
    uStack_e0 = uStack_b8;
    uStack_c8 = uStack_a0;
    uStack_d0 = uStack_a8;
    iVar5 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
    if (iVar5 < iVar1) {
      plVar14 = *(long **)(param_1 + 0x40);
      func_0x04608620(&uStack_140,param_2,0x50);
      uStack_f0 = 0;
      thunk_FUN_021f190c(&uStack_140,0);
      uVar8 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
      if (plVar14 == (long *)0x0) goto LAB_02633d64;
      lVar15 = *(long *)PTR_DAT_049ca050;
      func_0x04608620(auStack_278,&uStack_140,0x58);
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar15) {
                    /* try { // try from 02633d10 to 02733d1b has its CatchHandler @ 02633df4 */
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02633d18;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(plVar14,lVar15,0);
                    /* try { // try from 02633c90 to 02733ca3 has its CatchHandler @ 02633e1c */
LAB_02633d18:
      pcVar16 = (code *)*puVar10;
                    /* try { // try from 02633d1c to 02733d33 has its CatchHandler @ 02633df0 */
      func_0x04608620(&uStack_b8,auStack_278,0x58);
                    /* try { // try from 02633d38 to 02733d43 has its CatchHandler @ 02633e20 */
      (*pcVar16)(plVar14,&uStack_b8,puVar10[1]);
    }
    else {
      iVar6 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
      CloudPrefsInt__Set_24e9aa8(&uStack_e0,iVar6 - *(int *)(param_2 + 0x24),0);
      uVar8 = *(undefined4 *)(param_2 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = Extensions__IsBooster_24e6a2c(uVar8,0);
      puVar4 = PTR_DAT_049b6400;
      lVar15 = *(long *)PTR_DAT_049b6400;
      lVar11 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_02229718(lVar11);
        lVar11 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718(lVar11);
      }
      thunk_FUN_0224e54c(param_2 + 8,
                         *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
      puVar3 = PTR_DAT_049b3cf0;
      lVar11 = *(long *)(*(long *)PTR_DAT_049b3cf0 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      pcVar9 = (char *)thunk_FUN_0224e54c(param_2 + 8,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      if (*pcVar9 == '\0') {
                    /* try { // try from 026339a0 to 02733a8b has its CatchHandler @ 026339a0
                       catch() { ... } // from try @ 026339a0 with catch @ 026339a0
                       catch() { ... } // from try @ 02633ea0 with catch @ 026339a0
                       catch() { ... } // from try @ 02633f48 with catch @ 026339a0
                       catch() { ... } // from try @ 02633f88 with catch @ 026339a0
                       catch() { ... } // from try @ 02633fd0 with catch @ 026339a0
                       catch() { ... } // from try @ 02634038 with catch @ 026339a0 */
        uStack_158 = *(undefined8 *)(param_1 + 0x60);
        uStack_160 = *(undefined8 *)(param_1 + 0x58);
        uStack_148 = *(undefined8 *)(param_1 + 0x70);
        uStack_150 = *(undefined8 *)(param_1 + 0x68);
        iVar6 = CloudPrefsInt__get_Value_24e99c0(&uStack_160,0);
        uStack_bc = iVar6 + 1;
        uStack_b8 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_b8,&uStack_bc,*(undefined8 *)PTR_DAT_049b3c20);
        *(undefined8 *)(param_2 + 8) = uStack_b8;
      }
      lVar15 = *(long *)puVar4;
      lVar11 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_02229718();
        lVar11 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      thunk_FUN_0224e54c(param_2 + 0x28,
                         *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
      lVar11 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      pcVar9 = (char *)thunk_FUN_0224e54c(param_2 + 0x28,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      if (*pcVar9 == '\0') {
        uStack_bc = (uVar7 ^ 0xffffffff) & 1;
        uStack_b8 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_b8,&uStack_bc,*(undefined8 *)PTR_DAT_049b3c20);
        *(undefined8 *)(param_2 + 0x28) = uStack_b8;
      }
                    /* try { // try from 02633a8c to 02733a93 has its CatchHandler @ 02633e38 */
      lVar15 = *(long *)PTR_DAT_049b63f0;
      lVar11 = *(long *)(lVar15 + 0x20);
                    /* try { // try from 02633aa0 to 02733aa3 has its CatchHandler @ 02633e10 */
      uVar2 = *(ushort *)(lVar11 + 0x135);
      if ((uVar2 & 1) == 0) {
        FUN_02229718();
        lVar11 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
                    /* try { // try from 02633ab8 to 02733ac3 has its CatchHandler @ 02633e34 */
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
                    /* try { // try from 02633ac4 to 02733ad7 has its CatchHandler @ 02633e0c */
      thunk_FUN_0224e54c(param_2 + 0x1c,
                         *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x20);
                    /* try { // try from 02633ae4 to 02733ae7 has its CatchHandler @ 02633de8 */
      lVar11 = *(long *)(*(long *)PTR_DAT_049b6418 + 0x20);
                    /* try { // try from 02633ae8 to 02733b03 has its CatchHandler @ 02633e08 */
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718();
      }
                    /* try { // try from 02633b08 to 02733b13 has its CatchHandler @ 02633e04 */
      pcVar9 = (char *)thunk_FUN_0224e54c(param_2 + 0x1c,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      if (*pcVar9 == '\0') {
        uStack_bc = 1;
        if ((uVar7 & 1) != 0) {
          uStack_bc = 2;
        }
                    /* try { // try from 02633b28 to 02733bdb has its CatchHandler @ 02633e3c */
        uStack_b8 = 0;
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (&uStack_b8,&uStack_bc,*(undefined8 *)PTR_DAT_049ca048);
        *(undefined8 *)(param_2 + 0x1c) = uStack_b8;
      }
      iVar6 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
      iVar6 = *(int *)(param_2 + 0x24) + iVar6;
      uVar8 = CloudPrefsInt__get_Value_24e99c0(&uStack_e0,0);
      plVar14 = *(long **)(param_1 + 0x30);
      func_0x04608620(&uStack_1c0,param_2,0x50);
      uStack_170 = 0;
      thunk_FUN_021f190c(&uStack_1c0,0);
      uStack_170 = CONCAT44(uVar8,iVar6);
      if (plVar14 == (long *)0x0) goto LAB_02633d64;
      lVar15 = *(long *)PTR_DAT_049ca058;
      func_0x04608620(auStack_2d0,&uStack_1c0,0x58);
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar15) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02633ca0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
                    /* try { // try from 02633bec to 02733c73 has its CatchHandler @ 02633e40 */
      puVar10 = (undefined8 *)FUN_02229a4c(plVar14,lVar15,0);
LAB_02633ca0:
      pcVar16 = (code *)*puVar10;
                    /* try { // try from 02633ca8 to 02733caf has its CatchHandler @ 02633e18 */
      func_0x04608620(&uStack_b8,auStack_2d0,0x58);
      (*pcVar16)(plVar14,&uStack_b8,puVar10[1]);
      func_0x04608620(&uStack_220,param_2,0x50);
                    /* try { // try from 02633cd4 to 02733cd7 has its CatchHandler @ 02633de0 */
                    /* try { // try from 02633cd8 to 02733cfb has its CatchHandler @ 02633e24 */
      uStack_1d0 = 0;
      thunk_FUN_021f190c(&uStack_220,0);
      uStack_1d0 = CONCAT44(uVar8,iVar6);
      func_0x04608620(auStack_328,&uStack_220,0x58);
      EconomyModule__PublishEconomyUpdate_25331e4(param_1,auStack_328);
    }
                    /* try { // try from 02633d4c to 02733d5f has its CatchHandler @ 02633de4 */
                    /* try { // try from 02633d60 to 02733d73 has its CatchHandler @ 02633dec */
    return iVar1 <= iVar5;
  }
LAB_02633d64:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

