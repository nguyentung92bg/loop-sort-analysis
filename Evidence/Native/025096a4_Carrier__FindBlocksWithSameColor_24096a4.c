/* IL2CPP: Carrier$$FindBlocksWithSameColor
void Carrier__FindBlocksWithSameColor (Carrier_o* __this, System_Collections_Generic_ICollection_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$FindBlocksWithSameColor
   void Carrier__FindBlocksWithSameColor (Carrier_o* __this,
   System_Collections_Generic_ICollection_Block__o* blocks, const MethodInfo* method); */

void Carrier__FindBlocksWithSameColor_24096a4(long param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lStack_48;
  
  if ((bRam0000000004f4b6dd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23c8);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b6dd = 1;
  }
  uVar5 = Carrier__GetNextColorType_24095f4(param_1);
  puVar3 = PTR_DAT_049c23c8;
  puVar2 = PTR_DAT_049c1558;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    iVar10 = *(int *)(*(long *)(param_1 + 0x1e0) + 0x18) + -1;
    if (-1 < iVar10) {
      do {
        if ((*(long *)(param_1 + 0x1e0) == 0) ||
           (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (*(long *)(param_1 + 0x1e0),iVar10,&lStack_48,*(undefined8 *)puVar2),
           lVar4 = lStack_48, lStack_48 == 0)) goto LAB_025097e4;
        uVar6 = ColorType__op_Inequality_24f9dbc(*(undefined8 *)(lStack_48 + 0xe4),uVar5,0);
        if ((uVar6 & 1) != 0) {
          return;
        }
        if (param_2 == (long *)0x0) goto LAB_025097e4;
        lVar8 = *param_2;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_025097b0;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar3,2);
LAB_025097b0:
        (*(code *)*puVar7)(param_2,lVar4,puVar7[1]);
        bVar1 = 0 < iVar10;
        iVar10 = iVar10 + -1;
      } while (bVar1);
    }
    return;
  }
LAB_025097e4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

