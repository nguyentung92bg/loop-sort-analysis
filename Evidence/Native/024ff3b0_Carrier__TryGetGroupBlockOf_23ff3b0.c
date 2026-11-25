/* IL2CPP: Carrier$$TryGetGroupBlockOf
bool Carrier__TryGetGroupBlockOf (Carrier_o* __this, Block_o* block, UnityEngine_MeshRenderer_o** groupBlock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$TryGetGroupBlockOf
   bool Carrier__TryGetGroupBlockOf (Carrier_o* __this, Block_o* block, UnityEngine_MeshRenderer_o**
   groupBlock, const MethodInfo* method); */

undefined8 Carrier__TryGetGroupBlockOf_23ff3b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iStack_34;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4b6e3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2508);
    FUN_021f03f8(PTR_DAT_049c1548);
    FUN_021f03f8(PTR_DAT_049c1568);
    bRam0000000004f4b6e3 = 1;
  }
  iStack_34 = 0;
  *param_3 = 0;
  thunk_FUN_021f190c(param_3,0);
  if (*(long *)(param_1 + 0x1e8) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x1e8),param_2,&iStack_34,*(undefined8 *)PTR_DAT_049c2508
                      );
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x168) == 0) || (lVar4 = *(long *)(param_1 + 0x120), lVar4 == 0))
      goto LAB_024ff4a8;
      iVar1 = *(int *)(*(long *)(param_1 + 0x168) + 0x154);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iStack_34 / iVar1;
      }
      if (iVar2 < *(int *)(lVar4 + 0x18)) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar4,iVar2,&uStack_28,*(undefined8 *)PTR_DAT_049c1568);
        *param_3 = uStack_28;
        thunk_FUN_021f190c(param_3);
        return 1;
      }
    }
    return 0;
  }
LAB_024ff4a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

