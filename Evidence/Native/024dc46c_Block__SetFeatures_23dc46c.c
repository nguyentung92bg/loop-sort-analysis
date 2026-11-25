/* IL2CPP: Block$$SetFeatures
void Block__SetFeatures (Block_o* __this, System_Collections_Generic_List_FeatureContainer__o* features, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$SetFeatures
   void Block__SetFeatures (Block_o* __this, System_Collections_Generic_List_FeatureContainer__o*
   features, const MethodInfo* method); */

void Block__SetFeatures_23dc46c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  long lVar10;
  undefined *puVar8;
  
  if ((bRam0000000004f4b5b9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13a0);
    bRam0000000004f4b5b9 = 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0xf0),param_2);
  lVar10 = *(long *)(param_1 + 0x170);
  if (lVar10 != 0) {
    lVar9 = *(long *)PTR_DAT_049c13a0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar4 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar1) {
        puVar5 = *(undefined8 **)(lVar10 + 0x10);
        if (puVar5 == (undefined8 *)0x0) {
          thunk_FUN_02256840(PTR_DAT_049baa58,0,iVar1,0);
          uVar6 = thunk_FUN_0222ca34();
          uVar7 = thunk_FUN_02256840(PTR_DAT_049bf860);
          System_ArgumentNullException___ctor_30655c4(uVar6,uVar7,0);
        }
        else {
          if (iVar1 < 0) {
            thunk_FUN_02256840(PTR_DAT_049bc690,0,iVar1,0);
            uVar6 = thunk_FUN_0222ca34();
            puVar8 = PTR_DAT_049ee748;
          }
          else {
            iVar2 = FUN_021ff2b0(puVar5,0);
            if (iVar2 < 1) {
              iVar3 = System_Array__get_Length_3118750(puVar5);
              if (-iVar2 <= iVar3 - iVar1) {
                iVar3 = il2cpp_array_element_size(*puVar5);
                (*(code *)PTR_memset_04a701c8)
                          ((long)puVar5 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1))
                ;
                return;
              }
              thunk_FUN_02256840(PTR_DAT_049bc690);
              uVar6 = thunk_FUN_0222ca34();
              puVar8 = PTR_DAT_049ee758;
            }
            else {
              thunk_FUN_02256840(PTR_DAT_049bc690);
              uVar6 = thunk_FUN_0222ca34();
              puVar8 = PTR_DAT_049ee750;
            }
          }
          uVar7 = thunk_FUN_02256840(puVar8);
          System_IndexOutOfRangeException___ctor_30f97dc(uVar6,uVar7,0);
        }
        uVar7 = thunk_FUN_02256840(PTR_DAT_049ee760);
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar6,uVar7);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

