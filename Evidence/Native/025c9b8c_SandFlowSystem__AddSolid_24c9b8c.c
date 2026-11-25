/* IL2CPP: SandFlowSystem$$AddSolid
void SandFlowSystem__AddSolid (SandFlowSystem_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$AddSolid
   void SandFlowSystem__AddSolid (SandFlowSystem_o* __this, Block_o* block, const MethodInfo*
   method); */

void SandFlowSystem__AddSolid_24c9b8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fStack_24;
  
  if ((bRam0000000004f4bbeb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049bea50);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4bbeb = 1;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    if (*(float *)(*(long *)(param_1 + 0x168) + 0x318) <= _UNK_013aa94c) {
      return;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      if (*(int *)(*(long *)(param_1 + 0xd8) + 0x18) == 0x400) {
        return;
      }
      SandFlowSystem__AdvanceTravel_24c9b18(param_1);
      if (*(long *)(param_1 + 0xd8) != 0) {
        FUN_02333498(*(long *)(param_1 + 0xd8),param_2,*(undefined8 *)PTR_DAT_049c1c80);
        if ((*(long *)(param_1 + 0xe0) != 0) &&
           (System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                      (*(long *)(param_1 + 0xe0),param_2,*(undefined8 *)PTR_DAT_049c2948),
           param_2 != 0)) {
          lVar2 = *(long *)(param_1 + 0xe8);
          lVar3 = *(long *)(param_1 + 0x168);
          lVar1 = UnityEngine_Component__get_transform_3c18724(param_2,0);
          if ((lVar1 != 0) && (UnityEngine_Transform__get_position_3c2d540(lVar1,0), lVar3 != 0)) {
            fStack_24 = (float)SandFlowRenderer__FindNearestDistance_24bfb4c(lVar3);
            if ((*(long *)(param_1 + 0x168) != 0) && (lVar2 != 0)) {
              fStack_24 = fStack_24 - *(float *)(*(long *)(param_1 + 0x168) + 800);
              FUN_02333498(lVar2,&fStack_24,*(undefined8 *)PTR_DAT_049bea50);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

