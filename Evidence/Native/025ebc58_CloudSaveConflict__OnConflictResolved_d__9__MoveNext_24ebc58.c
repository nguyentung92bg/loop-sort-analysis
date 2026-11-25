/* IL2CPP: CloudSaveConflict.<OnConflictResolved>d__9$$MoveNext
void CloudSaveConflict__OnConflictResolved_d__9__MoveNext (CloudSaveConflict__OnConflictResolved_d__9_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveConflict.<OnConflictResolved>d__9$$MoveNext
   void CloudSaveConflict__OnConflictResolved_d__9__MoveNext
   (CloudSaveConflict__OnConflictResolved_d__9_o __this, const MethodInfo* method); */

void CloudSaveConflict__OnConflictResolved_d__9__MoveNext_24ebc58(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bcd6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7fc0);
    FUN_021f03f8(PTR_DAT_049c7fc8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bcd6 = 1;
  }
  puVar4 = PTR_DAT_049c7fc8;
  puVar3 = PTR_DAT_049b54e0;
  puVar2 = PTR_DAT_049b5138;
  auStack_60 = ZEXT816(0);
  lVar13 = *(long *)(param_1 + 10);
  if (*param_1 != 0) goto LAB_025ebd74;
  auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -1;
  do {
    do {
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar11 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar8 = *(long *)auStack_60._0_8_;
        uVar12 = auStack_60._8_8_ & 0xffff;
        lVar7 = *(long *)puVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_025ebd64;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,lVar7,2);
LAB_025ebd64:
        (*(code *)*puVar6)(uVar11,uVar12,puVar6[1]);
      }
LAB_025ebd74:
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lVar13 + 0x10) != '\0') {
        uVar1 = *(undefined4 *)(lVar13 + 0x14);
        *param_1 = -2;
        auStack_50._0_4_ = uVar1;
        FUN_0235bed4(param_1 + 2,auStack_50,*(undefined8 *)puVar4);
        return;
      }
      uVar11 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar14 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar11,0,0);
      auStack_50 = auVar14;
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar11 = auStack_60._0_8_;
    } while ((long *)auStack_60._0_8_ == (long *)0x0);
    lVar8 = *(long *)auStack_60._0_8_;
    uVar12 = auStack_60._8_8_ & 0xffff;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_025ebe64;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,lVar7,0);
LAB_025ebe64:
    iVar5 = (*(code *)*puVar6)(uVar11,uVar12,puVar6[1]);
    if (iVar5 == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c7fc0);
      return;
    }
  } while( true );
}

