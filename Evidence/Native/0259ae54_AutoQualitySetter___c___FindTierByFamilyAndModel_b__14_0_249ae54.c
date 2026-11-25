/* IL2CPP: AutoQualitySetter.<>c$$<FindTierByFamilyAndModel>b__14_0
bool AutoQualitySetter___c___FindTierByFamilyAndModel_b__14_0 (AutoQualitySetter___c_o* __this, AutoQualitySetter_GpuTierData_o* gpu, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter.<>c$$<FindTierByFamilyAndModel>b__14_0
   bool AutoQualitySetter___c___FindTierByFamilyAndModel_b__14_0 (AutoQualitySetter___c_o* __this,
   AutoQualitySetter_GpuTierData_o* gpu, const MethodInfo* method); */

uint AutoQualitySetter___c___FindTierByFamilyAndModel_b__14_0_249ae54
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      uVar1 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_2 + 0x10),0);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

