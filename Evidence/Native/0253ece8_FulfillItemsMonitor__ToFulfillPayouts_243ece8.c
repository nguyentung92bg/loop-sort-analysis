/* IL2CPP: FulfillItemsMonitor$$ToFulfillPayouts
System_Collections_Generic_List_FulfillPayout__o* FulfillItemsMonitor__ToFulfillPayouts (System_Collections_Generic_IReadOnlyList_RewardInfo__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0253f01c) */
/* IL2CPP: FulfillItemsMonitor$$ToFulfillPayouts
   System_Collections_Generic_List_FulfillPayout__o* FulfillItemsMonitor__ToFulfillPayouts
   (System_Collections_Generic_IReadOnlyList_RewardInfo__o* rewards, const MethodInfo* method); */

long FulfillItemsMonitor__ToFulfillPayouts_243ece8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uStack_40;
  double dStack_38;
  
  if ((bRam0000000004f4b83e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c3ff8);
    FUN_021f03f8(PTR_DAT_049c4000);
    FUN_021f03f8(PTR_DAT_049b4360);
    FUN_021f03f8(PTR_DAT_049c3ff0);
    FUN_021f03f8(PTR_DAT_049b5390);
    FUN_021f03f8(PTR_DAT_049c4008);
    FUN_021f03f8(PTR_DAT_049b5380);
    bRam0000000004f4b83e = 1;
  }
  puVar3 = PTR_DAT_049c4008;
  puVar2 = PTR_DAT_049c3ff8;
  puVar1 = PTR_DAT_049b5380;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049c3ff0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0253ede4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(param_1,*(long *)PTR_DAT_049c3ff0,0);
LAB_0253ede4:
  uVar4 = (*(code *)*puVar5)(param_1,puVar5[1]);
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd184
            (lVar7,uVar4,*(undefined8 *)puVar3);
  lVar8 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0253ee5c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02229a4c(param_1,*(long *)puVar2,0);
LAB_0253ee5c:
  plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
  puVar3 = PTR_DAT_049c4000;
  puVar2 = PTR_DAT_049b5390;
  puVar1 = PTR_DAT_049b4360;
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0253eee0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)puVar1,0);
LAB_0253eee0:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return lVar7;
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0253efcc;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0253ef44;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)puVar3,0);
LAB_0253ef44:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    dStack_38 = (double)(int)(uVar9 >> 0x20);
    uStack_40 = uVar9 & 0xffffffff;
    FUN_02333498(lVar7,&uStack_40,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b3cc8) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0253efe8;
    }
  }
LAB_0253efcc:
  puVar5 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049b3cc8,0);
LAB_0253efe8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return lVar7;
}

