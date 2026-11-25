/* IL2CPP: AccountModule.<Unlink>d__5$$MoveNext
void AccountModule__Unlink_d__5__MoveNext (AccountModule__Unlink_d__5_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule.<Unlink>d__5$$MoveNext
   void AccountModule__Unlink_d__5__MoveNext (AccountModule__Unlink_d__5_o __this, const MethodInfo*
   method); */

void AccountModule__Unlink_d__5__MoveNext_253c82c(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f4bf8d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca408);
    FUN_021f03f8(PTR_DAT_049ca410);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4728);
    FUN_021f03f8(PTR_DAT_049c4730);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049ca3e0);
    FUN_021f03f8(PTR_DAT_049ca3f8);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049c4738);
    bRam0000000004f4bf8d = 1;
  }
  iVar5 = *param_1;
  lVar11 = *(long *)(param_1 + 10);
  uStack_50 = 0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  uStack_70 = 0;
  uStack_68 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (iVar5 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_0263c994:
    auStack_60 = auVar1;
    FUN_0235b3fc(&uStack_50,&iStack_40,*(undefined8 *)PTR_DAT_049c4728);
    bVar4 = iStack_40 == 0;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    PlayerPrefsBool__Set_3f0e92c(lVar11 + 0x20,iStack_40 != 0,0);
    goto LAB_0263c9e8;
  }
  if (iVar5 == 1) {
    uStack_68 = *(undefined8 *)(param_1 + 0x14);
    uStack_70 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0263c958:
    auStack_80 = auVar2;
    FUN_0235b3fc(&uStack_70,&iStack_40,*(undefined8 *)PTR_DAT_049c4768);
  }
  else {
    if (iVar5 == 2) {
      uStack_68 = *(undefined8 *)(param_1 + 0x14);
      uStack_70 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
      auStack_80 = auVar2;
    }
    else {
      iVar5 = param_1[8];
      if (iVar5 == 6) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar12 = *(long **)(lVar11 + 0x10);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar12;
                    /* try { // try from 0263cb28 to 0273cb2f has its CatchHandler @ 0263cbe0 */
        uVar7 = *(undefined8 *)(param_1 + 0xc);
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
                    /* try { // try from 0263cb48 to 0273cb93 has its CatchHandler @ 0263cbe4 */
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ca3e0) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_0263cbd0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049ca3e0,4);
LAB_0263cbd0:
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263cba4 with catch @ 0263cbdc
                        */
        auStack_80 = (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263cb28 with catch @ 0263cbe0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0263cb48 with catch @ 0263cbe4
                        */
        FUN_0235b0c0(auStack_80,&iStack_40,*(undefined8 *)PTR_DAT_049c4778);
                    /* try { // try from 0263cc00 to 0273cc03 has its CatchHandler @ 0263cc1c */
                    /* try { // try from 0263cc04 to 0273cc1f has its CatchHandler @ 0263ca50 */
        uStack_70 = CONCAT44(uStack_3c,iStack_40);
        lVar6 = *(long *)PTR_DAT_049c4770;
        uStack_68 = uStack_38;
        lVar11 = *(long *)(lVar6 + 0x20);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0263cc00 with catch @ 0263cc1c */
          lVar11 = FUN_02229718();
        }
                    /* try { // try from 0263cc20 to 0273cc27 has its CatchHandler @ 0263cc30 */
                    /* try { // try from 0263cc28 to 0273cc33 has its CatchHandler @ 0263ca50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0263cc20 with catch @ 0263cc30
                        */
        uVar7 = thunk_FUN_0224e54c(&uStack_70,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80));
        lVar11 = *(long *)(lVar6 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18));
        auVar2 = auStack_80;
        if (iVar5 == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0x14) = uStack_68;
          *(undefined8 *)(param_1 + 0x12) = uStack_70;
          thunk_FUN_021f190c(param_1 + 0x12,0);
          FUN_0235bb44(param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_049ca410);
          return;
                    /* try { // try from 0263cc98 to 0273ce17 has its CatchHandler @ 0263cc98
                       catch() { ... } // from try @ 0263cc98 with catch @ 0263cc98
                       catch() { ... } // from try @ 0263ce84 with catch @ 0263cc98
                       catch() { ... } // from try @ 0263cec8 with catch @ 0263cc98
                       catch() { ... } // from try @ 0263cf2c with catch @ 0263cc98
                       catch() { ... } // from try @ 0263cf58 with catch @ 0263cc98 */
        }
        goto LAB_0263c958;
      }
      if (iVar5 == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar6 = Monitors__Get_object__26889d0
                          (*(long *)(lVar11 + 0x18),*(undefined8 *)PTR_DAT_049ca3f8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 0263ca50 to 0273cb27 has its CatchHandler @ 0263ca50
                       catch() { ... } // from try @ 0263ca50 with catch @ 0263ca50
                       catch() { ... } // from try @ 0263cb94 with catch @ 0263ca50
                       catch() { ... } // from try @ 0263cbb0 with catch @ 0263ca50
                       catch() { ... } // from try @ 0263cc04 with catch @ 0263ca50
                       catch() { ... } // from try @ 0263cc28 with catch @ 0263ca50 */
        auStack_60 = MockAccountLinkMonitor__Show_244e5f4(lVar6,0);
        FUN_0235b0c0(auStack_60,&iStack_40,*(undefined8 *)PTR_DAT_049c4738);
        uStack_50 = CONCAT44(uStack_3c,iStack_40);
        lVar13 = *(long *)PTR_DAT_049c4730;
        uStack_48 = uStack_38;
        lVar6 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        uVar7 = thunk_FUN_0224e54c(&uStack_50,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80)
                                  );
        lVar6 = *(long *)(lVar13 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
        auVar1 = auStack_60;
        if (iVar5 == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = uStack_48;
          *(undefined8 *)(param_1 + 0xe) = uStack_50;
          thunk_FUN_021f190c(param_1 + 0xe,0);
          FUN_0235bb44(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049ca408);
          return;
        }
        goto LAB_0263c994;
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar12 = *(long **)(lVar11 + 0x10);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = *plVar12;
      uVar7 = *(undefined8 *)(param_1 + 0xc);
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
                    /* try { // try from 0263cb94 to 0273cba3 has its CatchHandler @ 0263ca50 */
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049ca3e0) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_0263ccac;
          }
                    /* try { // try from 0263cba4 to 0273cbaf has its CatchHandler @ 0263cbdc */
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 0263cbb0 to 0273cbff has its CatchHandler @ 0263ca50 */
      puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049ca3e0,3);
LAB_0263ccac:
      auStack_80 = (*(code *)*puVar8)(plVar12,iVar5,uVar7,puVar8[1]);
      FUN_0235b0c0(auStack_80,&iStack_40,*(undefined8 *)PTR_DAT_049c4778);
      uStack_70 = CONCAT44(uStack_3c,iStack_40);
      lVar6 = *(long *)PTR_DAT_049c4770;
      uStack_68 = uStack_38;
      lVar11 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar7 = thunk_FUN_0224e54c(&uStack_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0x80))
      ;
      lVar11 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x18));
      if (iVar5 == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0x14) = uStack_68;
        *(undefined8 *)(param_1 + 0x12) = uStack_70;
        thunk_FUN_021f190c(param_1 + 0x12,0);
        FUN_0235bb44(param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_049ca410);
        return;
      }
    }
    FUN_0235b3fc(&uStack_70,&iStack_40,*(undefined8 *)PTR_DAT_049c4768);
  }
  bVar4 = (char)iStack_40 != '\0';
LAB_0263c9e8:
  puVar3 = PTR_DAT_049b5570;
  *param_1 = -2;
  auStack_24[0] = bVar4;
  FUN_0235bed4(param_1 + 2,auStack_24,*(undefined8 *)puVar3);
  return;
}

