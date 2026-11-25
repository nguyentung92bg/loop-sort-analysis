/* IL2CPP: MetalBlockSystem$$FindMetalBlocks
void MetalBlockSystem__FindMetalBlocks (MetalBlockSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$FindMetalBlocks
   void MetalBlockSystem__FindMetalBlocks (MetalBlockSystem_o* __this, Carrier_o* carrier, const
   MethodInfo* method); */

void MetalBlockSystem__FindMetalBlocks_23ecf3c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000004f4b635 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    bRam0000000004f4b635 = 1;
  }
  puVar2 = PTR_DAT_049c1c80;
  puVar1 = PTR_DAT_049c1558;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x1e0), lVar5 != 0)) {
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar6 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar5,iVar6,&lStack_38,*(undefined8 *)puVar1);
        if (lStack_38 == 0) goto LAB_024ed06c;
        uVar3 = Block__TryGetFeature_23dc908(lStack_38,0x1f,&uStack_50);
        lVar4 = *(long *)(param_1 + 0x38);
        if ((uVar3 & 1) == 0) {
          if (lVar4 == 0) goto LAB_024ed06c;
        }
        else {
          if (lVar4 == 0) goto LAB_024ed06c;
          iVar7 = 0;
          while (iVar7 < *(int *)(lVar4 + 0x154)) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar5,iVar6 + iVar7,&lStack_38,*(undefined8 *)puVar1);
            if (*(long *)(param_1 + 0x78) == 0) goto LAB_024ed06c;
            FUN_02333498(*(long *)(param_1 + 0x78),lStack_38,*(undefined8 *)puVar2);
            lVar4 = *(long *)(param_1 + 0x38);
            iVar7 = iVar7 + 1;
            if (lVar4 == 0) goto LAB_024ed06c;
          }
        }
        iVar6 = *(int *)(lVar4 + 0x154) + iVar6;
      } while (iVar6 < *(int *)(lVar5 + 0x18));
    }
    return;
  }
LAB_024ed06c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

