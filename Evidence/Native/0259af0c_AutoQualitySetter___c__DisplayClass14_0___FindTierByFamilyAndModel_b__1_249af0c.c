/* IL2CPP: AutoQualitySetter.<>c__DisplayClass14_0$$<FindTierByFamilyAndModel>b__1
bool AutoQualitySetter___c__DisplayClass14_0___FindTierByFamilyAndModel_b__1 (AutoQualitySetter___c__DisplayClass14_0_o* __this, AutoQualitySetter_GpuTierData_o* gpu, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter.<>c__DisplayClass14_0$$<FindTierByFamilyAndModel>b__1
   bool AutoQualitySetter___c__DisplayClass14_0___FindTierByFamilyAndModel_b__1
   (AutoQualitySetter___c__DisplayClass14_0_o* __this, AutoQualitySetter_GpuTierData_o* gpu, const
   MethodInfo* method); */

uint AutoQualitySetter___c__DisplayClass14_0___FindTierByFamilyAndModel_b__1_249af0c
               (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = System_String__Equals_2f7b554
                      (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x10),5,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_0259af6c;
      uVar1 = System_String__IndexOf_2f8241c
                        (*(long *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x18),5,0);
      uVar1 = ~uVar1 >> 0x1f;
    }
    return uVar1;
  }
LAB_0259af6c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

