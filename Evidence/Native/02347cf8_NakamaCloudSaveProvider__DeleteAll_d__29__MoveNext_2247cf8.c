/* IL2CPP: NakamaCloudSaveProvider.<DeleteAll>d__29$$MoveNext
void NakamaCloudSaveProvider__DeleteAll_d__29__MoveNext (NakamaCloudSaveProvider__DeleteAll_d__29_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider.<DeleteAll>d__29$$MoveNext
   void NakamaCloudSaveProvider__DeleteAll_d__29__MoveNext
   (NakamaCloudSaveProvider__DeleteAll_d__29_o __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__DeleteAll_d__29__MoveNext_2247cf8(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f49b59 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5890);
    FUN_021f03f8(PTR_DAT_049b5898);
    FUN_021f03f8(PTR_DAT_049b58a0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b59 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(*(long *)(param_1 + 6) + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *plVar9;
    uVar10 = *(undefined8 *)(param_1 + 8);
    lVar12 = *(long *)PTR_DAT_049b58a0;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_02347de8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = FUN_02229a4c(plVar9);
LAB_02347de8:
    lVar6 = thunk_FUN_0220ec70(*(undefined8 *)(lVar6 + 8),lVar12);
    uVar10 = (**(code **)(lVar6 + 8))(plVar9,uVar10,lVar6);
    auStack_40 = Cysharp_Threading_Tasks_UniTaskExtensions__AsUniTask_37d9858(uVar10,1,0);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    uVar3 = auStack_40._8_8_;
    uVar10 = auStack_40._0_8_;
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
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar10 != (long *)0x0) {
      lVar6 = *(long *)uVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 02347ed0 to 02447f23 has its CatchHandler @ 02347ed0
                       catch() { ... } // from try @ 02347ed0 with catch @ 02347ed0
                       catch() { ... } // from try @ 02347f38 with catch @ 02347ed0 */
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02347efc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(uVar10,*(long *)PTR_DAT_049b54e0,0);
LAB_02347efc:
      iVar4 = (*(code *)*puVar5)(uVar10,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_50;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049b5890);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02347f24 to 02447f37 has its CatchHandler @ 02347f74 */
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
                    /* try { // try from 02347f38 to 02447f8f has its CatchHandler @ 02347ed0 */
    lVar6 = *(long *)auStack_50._0_8_;
    uVar11 = auStack_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02347f90 to 02447fcb has its CatchHandler @ 02347f90
                       catch() { ... } // from try @ 02347f90 with catch @ 02347f90
                       catch() { ... } // from try @ 02348044 with catch @ 02347f90 */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02347f94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 02347f24 with catch @ 02347f74 */
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02347f94:
    (*(code *)*puVar5)(uVar10,uVar11,puVar5[1]);
  }
  if (*(int *)(*(long *)PTR_DAT_049b5898 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Voodoo_Sauce_Common_Blackboard__ClearPersistentCache_22f0700(0);
  cVar2 = cRam0000000004f49bfa;
                    /* try { // try from 02347fcc to 02447fd3 has its CatchHandler @ 0234810c */
  *param_1 = -2;
                    /* try { // try from 02347fd4 to 02447fe7 has its CatchHandler @ 023480fc */
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 02347ff8 to 0244800f has its CatchHandler @ 02348114 */
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* try { // try from 02348044 to 02448127 has its CatchHandler @ 02347f90 */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0234804c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 0234802c to 02448043 has its CatchHandler @ 02348110 */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_0234804c:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}

