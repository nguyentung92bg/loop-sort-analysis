/* IL2CPP: AutoQualitySetter$$FindTierByFamilyAndModel
System_String_o* AutoQualitySetter__FindTierByFamilyAndModel (AutoQualitySetter_GpuTierData_array* gpuList, System_String_o* family, System_String_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$FindTierByFamilyAndModel
   System_String_o* AutoQualitySetter__FindTierByFamilyAndModel
   (AutoQualitySetter_GpuTierData_array* gpuList, System_String_o* family, System_String_o* model,
   const MethodInfo* method); */

undefined8
AutoQualitySetter__FindTierByFamilyAndModel_249a664
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lStack_38;
  
  puVar1 = PTR_DAT_049c6248;
  if ((bRam0000000004f4baab & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6210);
    FUN_021f03f8(PTR_DAT_049c6218);
    FUN_021f03f8(PTR_DAT_049c6220);
    FUN_021f03f8(PTR_DAT_049c6250);
    FUN_021f03f8(PTR_DAT_049c6258);
    FUN_021f03f8(PTR_DAT_049c6248);
    FUN_021f03f8(PTR_DAT_049c6238);
    bRam0000000004f4baab = 1;
  }
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar10 = (undefined8 *)(lVar2 + 0x10);
  *puVar10 = param_2;
  thunk_FUN_021f190c(puVar10,param_2);
  puVar8 = (undefined8 *)(lVar2 + 0x18);
  *puVar8 = param_3;
  thunk_FUN_021f190c(puVar8,param_3);
  uVar3 = System_String__IsNullOrEmpty_2f7c924(*puVar10,0);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = System_String__IsNullOrEmpty_2f7c924(*puVar8,0), puVar1 = PTR_DAT_049c6238,
     (uVar3 & 1) == 0)) {
    lVar4 = *(long *)PTR_DAT_049c6238;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    puVar8 = *(undefined8 **)(lVar4 + 0xb8);
    lVar7 = puVar8[2];
    if (lVar7 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar9 = *puVar8;
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6220);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar7,uVar9,*(undefined8 *)PTR_DAT_049c6250,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar5 = lVar7;
      thunk_FUN_021f190c(plVar5,lVar7);
    }
    uVar9 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                      (param_1,lVar7,*(undefined8 *)PTR_DAT_049c6218);
    uVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6220);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
              (uVar6,lVar2,*(undefined8 *)PTR_DAT_049c6258,0);
    System_Linq_Enumerable__FirstOrDefault___Il2CppFullySharedGenericType__25dd410
              (uVar9,uVar6,&lStack_38,*(undefined8 *)PTR_DAT_049c6210);
    if (lStack_38 != 0) {
      return *(undefined8 *)(lStack_38 + 0x28);
    }
  }
  return 0;
}

