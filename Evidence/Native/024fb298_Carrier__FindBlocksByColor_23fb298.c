/* IL2CPP: Carrier$$FindBlocksByColor
void Carrier__FindBlocksByColor (Carrier_o* __this, System_Collections_Generic_ICollection_Block__o* blocks, ColorType_o targetColorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$FindBlocksByColor
   void Carrier__FindBlocksByColor (Carrier_o* __this,
   System_Collections_Generic_ICollection_Block__o* blocks, ColorType_o targetColorType, const
   MethodInfo* method); */

void Carrier__FindBlocksByColor_23fb298(long param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long lStack_48;
  
  if ((bRam0000000004f4b6df & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c23c8);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b6df = 1;
  }
  puVar3 = PTR_DAT_049c23c8;
  puVar2 = PTR_DAT_049c1558;
  if (*(long *)(param_1 + 0x1e0) == 0) {
LAB_024fb3d0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar9 = *(int *)(*(long *)(param_1 + 0x1e0) + 0x18) + -1;
  if (-1 < iVar9) {
    do {
      if ((*(long *)(param_1 + 0x1e0) == 0) ||
         (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_1 + 0x1e0),iVar9,&lStack_48,*(undefined8 *)puVar2),
         lVar4 = lStack_48, lStack_48 == 0)) goto LAB_024fb3d0;
      uVar5 = ColorType__op_Inequality_24f9dbc(*(undefined8 *)(lStack_48 + 0xe4),param_3,0);
      if ((uVar5 & 1) == 0) {
        if (param_2 == (long *)0x0) goto LAB_024fb3d0;
        lVar7 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_024fb39c;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(param_2,*(long *)puVar3,2);
LAB_024fb39c:
        (*(code *)*puVar6)(param_2,lVar4,puVar6[1]);
      }
      bVar1 = 0 < iVar9;
      iVar9 = iVar9 + -1;
    } while (bVar1);
  }
  return;
}

