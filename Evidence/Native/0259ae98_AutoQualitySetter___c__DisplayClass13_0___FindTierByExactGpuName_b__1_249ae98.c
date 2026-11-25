/* IL2CPP: AutoQualitySetter.<>c__DisplayClass13_0$$<FindTierByExactGpuName>b__1
bool AutoQualitySetter___c__DisplayClass13_0___FindTierByExactGpuName_b__1 (AutoQualitySetter___c__DisplayClass13_0_o* __this, AutoQualitySetter_GpuTierData_o* gpu, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0307b744) */
/* WARNING: Removing unreachable block (ram,0x0307b758) */
/* WARNING: Removing unreachable block (ram,0x0307b760) */
/* WARNING: Removing unreachable block (ram,0x0307b618) */
/* WARNING: Removing unreachable block (ram,0x0307b6fc) */
/* WARNING: Removing unreachable block (ram,0x0307b710) */
/* WARNING: Removing unreachable block (ram,0x0307b714) */
/* WARNING: Removing unreachable block (ram,0x0307b720) */
/* WARNING: Removing unreachable block (ram,0x0307b694) */
/* WARNING: Removing unreachable block (ram,0x0307b6a8) */
/* WARNING: Removing unreachable block (ram,0x0307b6ac) */
/* WARNING: Removing unreachable block (ram,0x0307b6b8) */
/* WARNING: Removing unreachable block (ram,0x0307b6c8) */
/* WARNING: Removing unreachable block (ram,0x0307b76c) */
/* WARNING: Removing unreachable block (ram,0x0307b5b0) */
/* WARNING: Removing unreachable block (ram,0x0307b5b4) */
/* WARNING: Removing unreachable block (ram,0x0307b5bc) */
/* WARNING: Removing unreachable block (ram,0x0307b7a0) */
/* WARNING: Removing unreachable block (ram,0x0307b5c4) */
/* WARNING: Removing unreachable block (ram,0x0307b5d8) */
/* WARNING: Removing unreachable block (ram,0x0307b5e0) */
/* WARNING: Removing unreachable block (ram,0x0307b5ec) */
/* WARNING: Removing unreachable block (ram,0x0307b79c) */
/* WARNING: Removing unreachable block (ram,0x0307b730) */
/* WARNING: Removing unreachable block (ram,0x0307b77c) */
/* WARNING: Removing unreachable block (ram,0x0307b6cc) */
/* WARNING: Removing unreachable block (ram,0x0307b6dc) */
/* WARNING: Removing unreachable block (ram,0x03213598) */
/* WARNING: Removing unreachable block (ram,0x032135d4) */
/* WARNING: Removing unreachable block (ram,0x032135e8) */
/* WARNING: Removing unreachable block (ram,0x032136c8) */
/* WARNING: Removing unreachable block (ram,0x03213608) */
/* WARNING: Removing unreachable block (ram,0x032136e8) */
/* WARNING: Removing unreachable block (ram,0x0321361c) */
/* WARNING: Removing unreachable block (ram,0x03213638) */
/* WARNING: Removing unreachable block (ram,0x0321365c) */
/* WARNING: Removing unreachable block (ram,0x03213670) */
/* WARNING: Removing unreachable block (ram,0x032136a8) */
/* WARNING: Removing unreachable block (ram,0x032136ac) */
/* WARNING: Removing unreachable block (ram,0x032136b0) */
/* WARNING: Removing unreachable block (ram,0x0307b5f8) */
/* IL2CPP: AutoQualitySetter.<>c__DisplayClass13_0$$<FindTierByExactGpuName>b__1
   bool AutoQualitySetter___c__DisplayClass13_0___FindTierByExactGpuName_b__1
   (AutoQualitySetter___c__DisplayClass13_0_o* __this, AutoQualitySetter_GpuTierData_o* gpu, const
   MethodInfo* method); */

bool AutoQualitySetter___c__DisplayClass13_0___FindTierByExactGpuName_b__1_249ae98
               (long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 unaff_x30;
  
  if ((bRam0000000004f4baaf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    bRam0000000004f4baaf = 1;
  }
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_049c6078 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = AutoQualitySetter__CleanGpuName_249aa18(uVar5);
    lVar4 = *(long *)(param_1 + 0x10);
    if ((bRam0000000004f4ef7b & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049e4318,lVar4,5,0);
      FUN_021f03f8(PTR_DAT_049b44e8);
      bRam0000000004f4ef7b = 1;
    }
    if (lVar3 == lVar4) {
      bVar1 = true;
    }
    else if (((lVar3 == 0) || (lVar4 == 0)) ||
            (iVar2 = *(int *)(lVar3 + 0x10), iVar2 != *(int *)(lVar4 + 0x10))) {
      bVar1 = false;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_049e4318 + 0xe4) == 0) {
        FUN_021f0574();
      }
      iVar2 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase_3047144
                        (lVar3,0,iVar2,lVar4,0,iVar2,0,in_x7,unaff_x30);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

