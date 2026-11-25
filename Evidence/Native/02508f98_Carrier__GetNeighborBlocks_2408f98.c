/* IL2CPP: Carrier$$GetNeighborBlocks
void Carrier__GetNeighborBlocks (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate, System_Collections_Generic_List_Block__o* neighbors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetNeighborBlocks
   void Carrier__GetNeighborBlocks (Carrier_o* __this, UnityEngine_Vector3Int_o coordinate,
   System_Collections_Generic_List_Block__o* neighbors, const MethodInfo* method); */

void Carrier__GetNeighborBlocks_2408f98(undefined8 param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
                    /* catch() { ... } // from try @ 02508ee4 with catch @ 02508f98 */
                    /* catch() { ... } // from try @ 02508eb8 with catch @ 02508f9c */
                    /* catch() { ... } // from try @ 02508ed0 with catch @ 02508fa0 */
                    /* catch() { ... } // from try @ 02508f7c with catch @ 02508fa4 */
                    /* catch() { ... } // from try @ 02508ebc with catch @ 02508fa8 */
                    /* catch() { ... } // from try @ 02508e30 with catch @ 02508fac */
                    /* catch() { ... } // from try @ 02508e50 with catch @ 02508fb0 */
  if ((bRam0000000004f4b6d7 & 1) == 0) {
                    /* try { // try from 02508fcc to 02608fcf has its CatchHandler @ 02508fe8 */
    FUN_021f03f8(PTR_DAT_049c1c80);
                    /* try { // try from 02508fd0 to 02608feb has its CatchHandler @ 02508cfc */
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b6d7 = 1;
  }
  puVar3 = PTR_DAT_049b3b98;
                    /* catch() { ... } // from try @ 02508fcc with catch @ 02508fe8 */
                    /* try { // try from 02508fec to 02608ff3 has its CatchHandler @ 02508ffc */
                    /* try { // try from 02508ff4 to 02608fff has its CatchHandler @ 02508cfc */
  if (cRam0000000004f4b663 == '\0') {
                    /* catch() { ... } // from try @ 02508fec with catch @ 02508ffc */
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b663 = '\x01';
  }
  puVar4 = PTR_DAT_049c1440;
  uVar8 = *(ulong *)(*(long *)(*(long *)PTR_DAT_049c1440 + 0xb8) + 0x18);
  iVar11 = (int)param_2;
  uVar5 = Carrier__GetBlockAt_2408ee0
                    (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar8 + iVar11),
                     *(int *)(*(long *)(*(long *)PTR_DAT_049c1440 + 0xb8) + 0x20) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_4 == 0) goto LAB_025093a8;
    FUN_02333498(param_4,uVar5,*(undefined8 *)PTR_DAT_049c1c80);
  }
  if (cRam0000000004f4b667 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b667 = '\x01';
  }
  uVar8 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24);
  uVar5 = Carrier__GetBlockAt_2408ee0
                    (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar8 + iVar11),
                     *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_4 == 0) goto LAB_025093a8;
    FUN_02333498(param_4,uVar5,*(undefined8 *)PTR_DAT_049c1c80);
  }
  if (cRam0000000004f4b668 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b668 = '\x01';
  }
  uVar8 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
  uVar5 = Carrier__GetBlockAt_2408ee0
                    (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar8 + iVar11),
                     *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_4 == 0) goto LAB_025093a8;
    FUN_02333498(param_4,uVar5,*(undefined8 *)PTR_DAT_049c1c80);
  }
  if (cRam0000000004f4b665 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b665 = '\x01';
  }
  uVar8 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x54);
  uVar5 = Carrier__GetBlockAt_2408ee0
                    (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar8 + iVar11),
                     *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x5c) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_4 == 0) goto LAB_025093a8;
    FUN_02333498(param_4,uVar5,*(undefined8 *)PTR_DAT_049c1c80);
  }
  if (cRam0000000004f4b666 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b666 = '\x01';
  }
  uVar8 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x3c);
  uVar5 = Carrier__GetBlockAt_2408ee0
                    (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                             (ulong)(uint)((int)uVar8 + iVar11),
                     *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x44) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(uVar5,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_4 == 0) goto LAB_025093a8;
    FUN_02333498(param_4,uVar5,*(undefined8 *)PTR_DAT_049c1c80);
  }
  if (cRam0000000004f4b664 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b664 = '\x01';
  }
  uVar8 = *(ulong *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
  ppppuVar6 = (undefined8 ****)
              Carrier__GetBlockAt_2408ee0
                        (param_1,(uVar8 & 0xffffffff00000000) + param_2 & 0xffffffff00000000 |
                                 (ulong)(uint)((int)uVar8 + iVar11),
                         *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) + param_3);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(ppppuVar6,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (param_4 == 0) {
LAB_025093a8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)PTR_DAT_049c1c80;
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  lVar13 = *(long *)(*(long *)(lVar7 + 0x20) + 0xc0);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar13 + 0x48) + 0xfc);
  uVar8 = uVar10 + 0xf & 0x1fffffff0;
  plVar9 = (long *)((long)&pppuStack_70 - uVar8);
  lVar12 = (long)plVar9 - uVar8;
  plVar14 = *(long **)(param_4 + 0x10);
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  pppuStack_70 = ppppuVar6;
  if (plVar14 == (long *)0x0) {
    if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  else {
    uVar1 = *(uint *)(param_4 + 0x18);
    if (uVar1 < *(uint *)(plVar14 + 3)) {
      *(uint *)(param_4 + 0x18) = uVar1 + 1;
      if (-1 < *(int *)(*(long *)(lVar13 + 0x48) + 0x28)) {
        ppppuVar6 = &pppuStack_70;
      }
      func_0x04608620(plVar9,ppppuVar6,uVar10);
      func_0x04608650((long)plVar14 + (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20,
                      ppppuVar6,uVar10);
      lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      if (*(uint *)(plVar14 + 3) <= uVar1) {
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        goto LAB_0233365c;
      }
      FUN_021f03a8(lVar7,(long)plVar14 +
                         (ulong)*(uint *)(*plVar14 + 0x104) * (long)(int)uVar1 + 0x20,plVar9);
    }
    else {
      iVar11 = *(int *)(*(long *)(lVar13 + 0x48) + 0x28);
      if (-1 < iVar11) {
        ppppuVar6 = &pppuStack_70;
      }
      func_0x04608620(plVar9,ppppuVar6,uVar10);
      if (iVar11 < 0) {
        func_0x04608620(lVar12,ppppuVar6,uVar10);
      }
      else {
        lVar12 = *plVar9;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                (param_4,lVar12,*(undefined8 *)(lVar13 + 0x70));
    }
    if (*(long *)(lVar2 + 0x28) == lStack_68) {
      return;
    }
  }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

