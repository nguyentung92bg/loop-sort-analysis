/* IL2CPP: HexCell$$GetNeighbors
System_Collections_Generic_List_CellBase__o* HexCell__GetNeighbors (HexCell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HexCell$$GetNeighbors
   System_Collections_Generic_List_CellBase__o* HexCell__GetNeighbors (HexCell_o* __this, const
   MethodInfo* method); */

long HexCell__GetNeighbors_250823c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  if ((bRam0000000004f4bda3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8f00);
    FUN_021f03f8(PTR_DAT_049c8d98);
    FUN_021f03f8(PTR_DAT_049c8f08);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bda3 = 1;
  }
  puVar3 = PTR_DAT_049c8f00;
  lVar4 = *(long *)(param_1 + 0xe8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar4 = *(long *)PTR_DAT_049c8f00;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_049c8d98;
      puVar1 = PTR_DAT_049b3b98;
      lVar4 = **(long **)(lVar4 + 0xb8);
      if (lVar4 == 0) goto LAB_026083d0;
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        plVar10 = (long *)(lVar4 + 0x20);
        do {
          if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar12 = *(long *)(param_1 + 0xa8);
          lVar8 = *plVar10;
          iVar11 = (int)lVar12;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1;
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_026083d0;
          uVar6 = lVar12 + lVar8;
          iVar7 = (int)uVar6;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          uVar5 = Grid__GetCellAt_2505768
                            (*(long *)(param_1 + 0xd8),
                             uVar6 & 0xffffffff |
                             (ulong)(uint)(((int)((ulong)lVar12 >> 0x20) - (iVar11 >> 1)) +
                                           (int)((ulong)lVar8 >> 0x20) + (iVar7 >> 1)) << 0x20,0);
                    /* try { // try from 02608364 to 0270836b has its CatchHandler @ 02608484 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574(*(long *)puVar1);
          }
          uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
                    /* try { // try from 02608384 to 027083cf has its CatchHandler @ 0260848c */
          if ((uVar6 & 1) == 0) {
            if (*(long *)(param_1 + 0xe8) == 0) goto LAB_026083d0;
            FUN_02333498(*(long *)(param_1 + 0xe8),uVar5,*(undefined8 *)puVar2);
          }
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
          plVar10 = (long *)((long)plVar10 + 0xc);
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(param_1 + 0xe8);
    }
    return lVar4;
  }
LAB_026083d0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 026083d0 to 027083e3 has its CatchHandler @ 02608210 */
  FUN_021f06a0();
}

