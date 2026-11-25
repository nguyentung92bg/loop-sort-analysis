/* IL2CPP: GridContainer$$InitializeGrids
void GridContainer__InitializeGrids (GridContainer_o* __this, Grid_array* grids, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridContainer$$InitializeGrids
   void GridContainer__InitializeGrids (GridContainer_o* __this, Grid_array* grids, const
   MethodInfo* method); */

void GridContainer__InitializeGrids_250803c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4bda1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8ee0);
    FUN_021f03f8(PTR_DAT_049c8ee8);
    bRam0000000004f4bda1 = 1;
  }
  puVar3 = PTR_DAT_049c8ee8;
  puVar2 = PTR_DAT_049c8ee0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar5 = *(long *)(param_1 + 0xa8);
        if (lVar5 == 0) goto LAB_02608144;
        uStack_58 = *(undefined8 *)(lVar5 + 0x28);
        uStack_60 = *(undefined8 *)(lVar5 + 0x20);
        uStack_50 = *(undefined8 *)(lVar5 + 0x30);
        lVar6 = *(long *)(param_2 + 0x20 + lVar7 * 8);
        lVar5 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_02608144;
        uVar4 = GridSheet_Layouts__GetLayout_2560de8(lVar5,*(undefined4 *)(lVar6 + 0xa0),0);
        Grid__Initialize_25067a4(lVar6,uVar4,0);
        if (*(long *)(param_1 + 0xb0) == 0) goto LAB_02608144;
        FUN_02333498(*(long *)(param_1 + 0xb0),lVar6,*(undefined8 *)puVar2);
        uVar1 = *(uint *)(param_2 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    return;
  }
LAB_02608144:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

