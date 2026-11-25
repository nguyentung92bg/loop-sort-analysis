/* IL2CPP: RectCell$$GetNeighbors
System_Collections_Generic_List_CellBase__o* RectCell__GetNeighbors (RectCell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RectCell$$GetNeighbors
   System_Collections_Generic_List_CellBase__o* RectCell__GetNeighbors (RectCell_o* __this, const
   MethodInfo* method); */

long RectCell__GetNeighbors_2508560(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((bRam0000000004f4bda6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d98);
    FUN_021f03f8(PTR_DAT_049c8f08);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c8f10);
    bRam0000000004f4bda6 = 1;
  }
  puVar1 = PTR_DAT_049c8f10;
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar3 = *(long *)PTR_DAT_049c8f10;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_021f0574();
        lVar3 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_049c8d98;
      puVar1 = PTR_DAT_049b3b98;
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 == 0) goto LAB_0260869c;
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar6 = 0;
        uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          uVar4 = CellBase__GetNeighborAt_2505bd0
                            (param_1,*(undefined8 *)(lVar3 + 0x20 + uVar6 * 8),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574(*(long *)puVar1);
          }
          uVar5 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
          if ((uVar5 & 1) == 0) {
            if (*(long *)(param_1 + 0xe8) == 0) goto LAB_0260869c;
            FUN_02333498(*(long *)(param_1 + 0xe8),uVar4,*(undefined8 *)puVar2);
          }
          uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      lVar3 = *(long *)(param_1 + 0xe8);
    }
    return lVar3;
  }
LAB_0260869c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

