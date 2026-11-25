/* IL2CPP: Carrier$$RemoveBlock
void Carrier__RemoveBlock (Carrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$RemoveBlock
   void Carrier__RemoveBlock (Carrier_o* __this, Block_o* block, const MethodInfo* method); */

void Carrier__RemoveBlock_23fe2b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4b6ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c24c0);
    FUN_021f03f8(PTR_DAT_049c24c8);
    FUN_021f03f8(PTR_DAT_049c2360);
    bRam0000000004f4b6ca = 1;
  }
  lStack_40 = 0;
  lStack_38 = 0;
  if (param_2 != 0) {
    Block__ClearContainer_23dc3e8(param_2,0);
    if (*(long *)(param_1 + 0x1e0) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                (*(long *)(param_1 + 0x1e0),param_2,*(undefined8 *)PTR_DAT_049c2360);
      if (*(long *)(param_1 + 0x1e8) != 0) {
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                  (*(long *)(param_1 + 0x1e8),param_2,*(undefined8 *)PTR_DAT_049c24c0);
        plVar7 = *(long **)(param_1 + 400);
        lStack_38 = 0;
        lStack_40 = param_1;
        thunk_FUN_021f190c(&lStack_40,param_1);
        lStack_38 = param_2;
        thunk_FUN_021f190c(&lStack_38,param_2);
        lVar2 = lStack_38;
        lVar1 = lStack_40;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049c24c8) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_024fe3d8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049c24c8,0);
LAB_024fe3d8:
          (*(code *)*puVar3)(plVar7,lVar1,lVar2,puVar3[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

