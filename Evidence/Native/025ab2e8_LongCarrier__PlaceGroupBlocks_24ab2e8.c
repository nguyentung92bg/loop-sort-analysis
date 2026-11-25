/* IL2CPP: LongCarrier$$PlaceGroupBlocks
void LongCarrier__PlaceGroupBlocks (LongCarrier_o* __this, int32_t capacityGroups, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$PlaceGroupBlocks
   void LongCarrier__PlaceGroupBlocks (LongCarrier_o* __this, int32_t capacityGroups, const
   MethodInfo* method); */

void LongCarrier__PlaceGroupBlocks_24ab2e8(long param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lStack_38;
  
  if ((bRam0000000004f4bb2d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1548);
    FUN_021f03f8(PTR_DAT_049c1568);
    bRam0000000004f4bb2d = 1;
  }
  puVar2 = PTR_DAT_049c1568;
  if ((*(long *)(param_1 + 0x100) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x120), lVar3 != 0)) {
    iVar4 = *(int *)(lVar3 + 0x18);
    iVar1 = param_2;
    if (iVar4 <= param_2) {
      iVar1 = iVar4;
    }
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        if ((*(long *)(param_1 + 0x100) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x120), lVar3 == 0)) goto LAB_025ab3d0;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar3,iVar4,&lStack_38,*(undefined8 *)puVar2);
        if (lStack_38 == 0) goto LAB_025ab3d0;
        lVar3 = UnityEngine_Component__get_transform_3c18724(lStack_38,0);
        LongCarrier__GetGroupCenter_24ab3d4(param_1,iVar4,param_2);
        if (lVar3 == 0) goto LAB_025ab3d0;
        UnityEngine_Transform__set_position_3c2d61c(lVar3,0);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    return;
  }
LAB_025ab3d0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

