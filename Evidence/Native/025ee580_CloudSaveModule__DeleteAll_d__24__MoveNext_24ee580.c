/* IL2CPP: CloudSaveModule.<DeleteAll>d__24$$MoveNext
void CloudSaveModule__DeleteAll_d__24__MoveNext (CloudSaveModule__DeleteAll_d__24_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule.<DeleteAll>d__24$$MoveNext
   void CloudSaveModule__DeleteAll_d__24__MoveNext (CloudSaveModule__DeleteAll_d__24_o __this, const
   MethodInfo* method); */

void CloudSaveModule__DeleteAll_d__24__MoveNext_24ee580(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bceb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8098);
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c80a0);
    bRam0000000004f4bceb = 1;
  }
  puVar1 = PTR_DAT_049c8008;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar11 = *(long *)(param_1 + 6);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar10 = *(long **)(lVar11 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
                    /* try { // try from 025ee678 to 026ee67f has its CatchHandler @ 025ee8ec */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025ee67c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c8008,0);
LAB_025ee67c:
    lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (lVar7 == 0) goto LAB_025ee8ec;
    plVar10 = *(long **)(lVar11 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *plVar10;
                    /* try { // try from 025ee698 to 026ee6e3 has its CatchHandler @ 025ee938 */
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
          goto LAB_025ee6e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)puVar1,0xd);
LAB_025ee6e4:
                    /* try { // try from 025ee6e4 to 026ee77f has its CatchHandler @ 025ee57c */
    auStack_40 = (*(code *)*puVar5)(plVar10,0,puVar5[1]);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar6 = auStack_40._0_8_;
    auStack_50 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 025ee780 to 026ee787 has its CatchHandler @ 025ee8e8 */
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar6 != (long *)0x0) {
      lVar11 = *(long *)uVar6;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
                    /* try { // try from 025ee7a0 to 026ee7eb has its CatchHandler @ 025ee8f0 */
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025ee7dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar6,*(long *)PTR_DAT_049b54e0,0);
LAB_025ee7dc:
      iVar4 = (*(code *)*puVar5)(uVar6,uVar3 & 0xffffffff,puVar5[1]);
                    /* try { // try from 025ee7ec to 026ee8d3 has its CatchHandler @ 025ee57c */
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c8098);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar6 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
    lVar11 = *(long *)auStack_50._0_8_;
    uVar12 = auStack_50._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025ee874;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025ee874:
    (*(code *)*puVar5)(uVar6,uVar12,puVar5[1]);
  }
  UnityEngine_PlayerPrefs__DeleteAll_3c10628(0);
  puVar1 = PTR_DAT_049c8018;
  lVar11 = *(long *)PTR_DAT_049c8018;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    FUN_021f0574();
    lVar11 = *(long *)puVar1;
  }
  uVar6 = System_String__Concat_2f72b28
                    (**(undefined8 **)(lVar11 + 0xb8),*(undefined8 *)PTR_DAT_049c80a0,0);
                    /* try { // try from 025ee8d4 to 026ee8d7 has its CatchHandler @ 025ee8e4 */
                    /* try { // try from 025ee8d8 to 026ee8db has its CatchHandler @ 025ee8e0 */
  if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
                    /* try { // try from 025ee8dc to 026ee90b has its CatchHandler @ 025ee57c */
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 025ee8d8 with catch @ 025ee8e0 */
                    /* catch() { ... } // from try @ 025ee8d4 with catch @ 025ee8e4 */
                    /* catch() { ... } // from try @ 025ee780 with catch @ 025ee8e8 */
  UnityEngine_Debug__Log_3bd0be4(uVar6,0);
LAB_025ee8ec:
                    /* catch() { ... } // from try @ 025ee678 with catch @ 025ee8ec */
  cVar2 = cRam0000000004f49bfa;
                    /* catch() { ... } // from try @ 025ee7a0 with catch @ 025ee8f0 */
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
                    /* try { // try from 025ee90c to 026ee90f has its CatchHandler @ 025ee928 */
                    /* try { // try from 025ee910 to 026ee92b has its CatchHandler @ 025ee57c */
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
                    /* catch() { ... } // from try @ 025ee90c with catch @ 025ee928 */
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* try { // try from 025ee92c to 026ee933 has its CatchHandler @ 025ee984 */
    if (uVar8 != 0) {
                    /* try { // try from 025ee934 to 026ee953 has its CatchHandler @ 025ee57c */
                    /* catch() { ... } // from try @ 025ee698 with catch @ 025ee938 */
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* catch() { ... } // from try @ 025ee954 with catch @ 025ee970 */
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025ee974;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 025ee954 to 026ee957 has its CatchHandler @ 025ee970 */
                    /* try { // try from 025ee958 to 026ee973 has its CatchHandler @ 025ee57c */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_025ee974:
                    /* try { // try from 025ee974 to 026ee97b has its CatchHandler @ 025ee984 */
                    /* try { // try from 025ee97c to 026ee987 has its CatchHandler @ 025ee57c */
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
                    /* catch() { ... } // from try @ 025ee92c with catch @ 025ee984
                       catch() { ... } // from try @ 025ee974 with catch @ 025ee984 */
                    /* try { // try from 025ee988 to 026eeac7 has its CatchHandler @ 025ee988
                       catch() { ... } // from try @ 025ee988 with catch @ 025ee988
                       catch() { ... } // from try @ 025eeb34 with catch @ 025ee988
                       catch() { ... } // from try @ 025eeb7c with catch @ 025ee988
                       catch() { ... } // from try @ 025eed30 with catch @ 025ee988
                       catch() { ... } // from try @ 025eed84 with catch @ 025ee988
                       catch() { ... } // from try @ 025eedd0 with catch @ 025ee988
                       catch() { ... } // from try @ 025eedfc with catch @ 025ee988 */
  return;
}

