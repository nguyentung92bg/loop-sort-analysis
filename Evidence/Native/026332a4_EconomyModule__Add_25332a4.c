/* IL2CPP: EconomyModule$$Add
void EconomyModule__Add (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EconomyModule$$Add
   void EconomyModule__Add (EconomyModule_o* __this, EconomyModule_Transaction_o transaction, const
   MethodInfo* method); */

void EconomyModule__Add_25332a4(long param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_260 [88];
  undefined1 auStack_208 [88];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam0000000004f4bf34 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9900);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049ca040);
    FUN_021f03f8(PTR_DAT_049b63f0);
    FUN_021f03f8(PTR_DAT_049b6400);
    FUN_021f03f8(PTR_DAT_049ca048);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b6418);
    FUN_021f03f8(PTR_DAT_049b3cf0);
    bRam0000000004f4bf34 = 1;
  }
  puVar3 = PTR_DAT_049b6400;
  puVar2 = PTR_DAT_049b6110;
  uStack_100 = 0;
  uStack_160 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_ac = *(uint *)(param_2 + 0x10);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_1 + 0x50),&uStack_ac,&uStack_a8,*(undefined8 *)PTR_DAT_049c9900);
    uStack_c8 = uStack_a0;
    uStack_d0 = uStack_a8;
    uStack_b8 = uStack_90;
    uStack_c0 = uStack_98;
    iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_d0,0);
    CloudPrefsInt__Set_24e9aa8(&uStack_d0,*(int *)(param_2 + 0x24) + iVar4,0);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar5 = Extensions__IsBooster_24e6a2c(uVar6,0);
    lVar13 = *(long *)puVar3;
    lVar9 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02229718(lVar9);
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    puVar2 = PTR_DAT_049b3cf0;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718(lVar9);
    }
    thunk_FUN_0224e54c(param_2 + 8,*(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20);
    lVar9 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    pcVar7 = (char *)thunk_FUN_0224e54c(param_2 + 8,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      uStack_e8 = *(undefined8 *)(param_1 + 0x60);
      uStack_f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_e0 = *(undefined8 *)(param_1 + 0x68);
      iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_f0,0);
      uStack_ac = iVar4 + 1;
      uStack_a8 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_a8,&uStack_ac,*(undefined8 *)PTR_DAT_049b3c20);
      *(undefined8 *)(param_2 + 8) = uStack_a8;
    }
    lVar13 = *(long *)puVar3;
    lVar9 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02229718();
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    thunk_FUN_0224e54c(param_2 + 0x28,
                       *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20);
    lVar9 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    puVar2 = PTR_DAT_049b63f0;
    pcVar7 = (char *)thunk_FUN_0224e54c(param_2 + 0x28,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      uStack_ac = (uVar5 ^ 0xffffffff) & 1;
      uStack_a8 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_a8,&uStack_ac,*(undefined8 *)PTR_DAT_049b3c20);
      *(undefined8 *)(param_2 + 0x28) = uStack_a8;
    }
    lVar13 = *(long *)puVar2;
    lVar9 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02229718();
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    puVar2 = PTR_DAT_049b6418;
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    thunk_FUN_0224e54c(param_2 + 0x1c,
                       *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20);
    lVar9 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    pcVar7 = (char *)thunk_FUN_0224e54c(param_2 + 0x1c,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar7 == '\0') {
      uStack_ac = 1;
      if ((uVar5 & 1) != 0) {
        uStack_ac = 2;
      }
      uStack_a8 = 0;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_a8,&uStack_ac,*(undefined8 *)PTR_DAT_049ca048);
      *(undefined8 *)(param_2 + 0x1c) = uStack_a8;
    }
    iVar4 = CloudPrefsInt__get_Value_24e99c0(&uStack_d0,0);
    iVar4 = iVar4 - *(int *)(param_2 + 0x24);
    uVar6 = CloudPrefsInt__get_Value_24e99c0(&uStack_d0,0);
    plVar12 = *(long **)(param_1 + 0x28);
    func_0x04608620(&uStack_150,param_2,0x50);
    uStack_100 = 0;
    thunk_FUN_021f190c(&uStack_150,0);
    uStack_100 = CONCAT44(uVar6,iVar4);
    if (plVar12 != (long *)0x0) {
      lVar13 = *(long *)PTR_DAT_049ca040;
      func_0x04608620(auStack_208,&uStack_150,0x58);
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar13) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_026336f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(plVar12,lVar13,0);
LAB_026336f0:
      pcVar14 = (code *)*puVar8;
      func_0x04608620(&uStack_a8,auStack_208,0x58);
      (*pcVar14)(plVar12,&uStack_a8,puVar8[1]);
      func_0x04608620(&uStack_1b0,param_2,0x50);
      uStack_160 = 0;
      thunk_FUN_021f190c(&uStack_1b0,0);
      uStack_160 = CONCAT44(uVar6,iVar4);
      func_0x04608620(auStack_260,&uStack_1b0,0x58);
      EconomyModule__PublishEconomyUpdate_25331e4(param_1,auStack_260);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

