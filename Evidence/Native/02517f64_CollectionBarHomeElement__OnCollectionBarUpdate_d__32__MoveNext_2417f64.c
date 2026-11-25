/* IL2CPP: CollectionBarHomeElement.<OnCollectionBarUpdate>d__32$$MoveNext
void CollectionBarHomeElement__OnCollectionBarUpdate_d__32__MoveNext (CollectionBarHomeElement__OnCollectionBarUpdate_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02518584) */
/* IL2CPP: CollectionBarHomeElement.<OnCollectionBarUpdate>d__32$$MoveNext
   void CollectionBarHomeElement__OnCollectionBarUpdate_d__32__MoveNext
   (CollectionBarHomeElement__OnCollectionBarUpdate_d__32_o __this, const MethodInfo* method); */

void CollectionBarHomeElement__OnCollectionBarUpdate_d__32__MoveNext_2417f64(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  undefined1 auStack_90 [16];
  int **ppiStack_80;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  int iStack_44;
  undefined1 auStack_40 [16];
  int *piStack_28;
  
  piStack_28 = param_1;
  if ((bRam0000000004f4b745 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2dd8);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b745 = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  iStack_44 = *param_1;
  lVar8 = *(long *)(param_1 + 8);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_68 = 0;
                    /* try { // try from 02517fcc to 02617fd3 has its CatchHandler @ 02518090 */
  if (iStack_44 == 0) {
                    /* try { // try from 02517fec to 02618037 has its CatchHandler @ 02518094 */
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_44 = -1;
    *param_1 = -1;
LAB_02518118:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar9 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02518198;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02518198:
      (*(code *)*puVar4)(uVar9,uVar10,puVar4[1]);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar9 = FulfillModule__SuppressFulfill_2543dd4(*(long *)(lVar8 + 0x68),0);
    *(undefined8 *)(piStack_28 + 0xe) = uVar9;
    thunk_FUN_021f190c();
    auStack_90._8_8_ = &iStack_44;
    auStack_90._0_8_ = 0;
    ppiStack_80 = &piStack_28;
    if (iStack_44 == 1) goto LAB_025181e8;
    CollectionBarHomeElement__HandleRewardPayouts_2414628(lVar8);
    auStack_40 = CollectionBarHomeElement__HandleFlow_2414ea8(lVar8,*(undefined8 *)(piStack_28 + 6))
    ;
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
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
    uVar9 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02518524;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02518524:
      iVar3 = (*(code *)*puVar4)(uVar9,uVar10,puVar4[1]);
      if (iVar3 == 0) {
        iStack_44 = 1;
        *piStack_28 = 1;
        *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
        thunk_FUN_021f190c(piStack_28 + 10,0);
        FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049c2dd8);
        uVar12 = 5;
        goto LAB_02518390;
      }
    }
  }
  else {
    if (iStack_44 != 1) {
      uVar9 = *(undefined8 *)(param_1 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02518038 to 02618083 has its CatchHandler @ 02517f00 */
      auStack_90 = Cysharp_Threading_Tasks_UniTask__DelayFrame_37c9280(2,8,uVar9,0,0);
      thunk_FUN_021f190c(auStack_90,0);
      auStack_60 = auStack_90;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02518084 to 02618087 has its CatchHandler @ 0251808c */
                    /* try { // try from 02518088 to 026180af has its CatchHandler @ 02517f00 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02518084 with catch @ 0251808c
                        */
      if (cRam0000000004f49bf5 == '\0') {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02517fcc with catch @ 02518090
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02517fec with catch @ 02518094
                        */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar9 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* try { // try from 025180b0 to 026180b3 has its CatchHandler @ 025180d4 */
        lVar5 = *(long *)auStack_60._0_8_;
                    /* try { // try from 025180b4 to 026180d7 has its CatchHandler @ 02517f00 */
        uVar10 = auStack_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 025180b0 with catch @ 025180d4 */
                    /* try { // try from 025180d8 to 026180df has its CatchHandler @ 025180e8 */
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_02518104;
            }
            uVar6 = uVar6 - 1;
                    /* try { // try from 025180e0 to 026180eb has its CatchHandler @ 02517f00 */
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025180d8 with catch @ 025180e8
                        */
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02518104:
        iVar3 = (*(code *)*puVar4)(uVar9,uVar10,puVar4[1]);
        if (iVar3 == 0) {
          iStack_44 = 0;
          *piStack_28 = 0;
          *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
          thunk_FUN_021f190c(piStack_28 + 10,0);
          FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049c2dd8);
          return;
        }
      }
      goto LAB_02518118;
    }
LAB_025181e8:
    ppiStack_80 = &piStack_28;
    auStack_90._8_8_ = &iStack_44;
    auStack_90._0_8_ = 0;
    iStack_44 = -1;
    auStack_60 = *(undefined1 (*) [16])(piStack_28 + 10);
    piStack_28[10] = 0;
    piStack_28[0xb] = 0;
    piStack_28[0xc] = 0;
    piStack_28[0xd] = 0;
    *piStack_28 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar8 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02518378;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02518378:
    (*(code *)*puVar4)(uVar9,uVar10,puVar4[1]);
  }
  uVar12 = 8;
LAB_02518390:
  if ((iStack_44 < 0) && (plVar11 = *(long **)(*ppiStack_80 + 0xe), plVar11 != (long *)0x0)) {
    lVar8 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02518440;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b3cc8,0);
LAB_02518440:
    (*(code *)*puVar4)(plVar11,puVar4[1]);
  }
  if ((uVar12 | 8) == 8) {
    piVar7 = piStack_28 + 0xe;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_021f190c(piVar7,0);
    piVar7 = piStack_28;
    cVar2 = cRam0000000004f49bfa;
    *piStack_28 = -2;
    if (cVar2 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar11 = *(long **)(piVar7 + 2);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025184f8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_025184f8:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
  }
  return;
}

