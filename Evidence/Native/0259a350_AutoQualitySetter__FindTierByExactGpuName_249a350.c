/* IL2CPP: AutoQualitySetter$$FindTierByExactGpuName
System_String_o* AutoQualitySetter__FindTierByExactGpuName (AutoQualitySetter_GpuTierData_array* gpuList, System_String_o* deviceName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$FindTierByExactGpuName
   System_String_o* AutoQualitySetter__FindTierByExactGpuName (AutoQualitySetter_GpuTierData_array*
   gpuList, System_String_o* deviceName, const MethodInfo* method); */

undefined8 AutoQualitySetter__FindTierByExactGpuName_249a350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lStack_38;
  
  puVar1 = PTR_DAT_049c6208;
  if ((bRam0000000004f4baaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    FUN_021f03f8(PTR_DAT_049c6210);
                    /* try { // try from 0259a394 to 0269a397 has its CatchHandler @ 0259a42c */
    FUN_021f03f8(PTR_DAT_049c6218);
    FUN_021f03f8(PTR_DAT_049c6220);
    FUN_021f03f8(PTR_DAT_049c6228);
    FUN_021f03f8(PTR_DAT_049c6230);
                    /* try { // try from 0259a3c4 to 0269a3cf has its CatchHandler @ 0259a440 */
    FUN_021f03f8(PTR_DAT_049c6208);
                    /* try { // try from 0259a3d0 to 0269a427 has its CatchHandler @ 0259a208 */
    FUN_021f03f8(PTR_DAT_049c6238);
    bRam0000000004f4baaa = 1;
  }
  lVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar2,0);
  uVar3 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049c6078 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 0259a428 to 0269a42b has its CatchHandler @ 0259a440 */
    uVar4 = AutoQualitySetter__CleanGpuName_249aa18(param_2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a394 with catch @ 0259a42c
                       try { // try from 0259a42c to 0269a45b has its CatchHandler @ 0259a208 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a344 with catch @ 0259a430
                        */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a30c with catch @ 0259a434
                        */
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    thunk_FUN_021f190c();
    puVar1 = PTR_DAT_049c6238;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a3c4 with catch @ 0259a440
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0259a428 with catch @ 0259a440
                        */
    lVar5 = *(long *)PTR_DAT_049c6238;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
                    /* try { // try from 0259a45c to 0269a45f has its CatchHandler @ 0259a464 */
    puVar8 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar8[1];
                    /* catch() { ... } // from try @ 0259a45c with catch @ 0259a464 */
    if (lVar9 == 0) {
                    /* try { // try from 0259a468 to 0269a46f has its CatchHandler @ 0259a478 */
      if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 0259a470 to 0269a47b has its CatchHandler @ 0259a208 */
        FUN_021f0574();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259a468 with catch @ 0259a478
                        */
        puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar4 = *puVar8;
      lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6220);
      System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
                (lVar9,uVar4,*(undefined8 *)PTR_DAT_049c6228,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar6 = lVar9;
      thunk_FUN_021f190c(plVar6,lVar9);
    }
    uVar4 = System_Linq_Enumerable__Where___Il2CppFullySharedGenericType__25e3de4
                      (param_1,lVar9,*(undefined8 *)PTR_DAT_049c6218);
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6220);
    System_Func___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2892d80
              (uVar7,lVar2,*(undefined8 *)PTR_DAT_049c6230,0);
    System_Linq_Enumerable__FirstOrDefault___Il2CppFullySharedGenericType__25dd410
              (uVar4,uVar7,&lStack_38,*(undefined8 *)PTR_DAT_049c6210);
    if (lStack_38 != 0) {
      return *(undefined8 *)(lStack_38 + 0x28);
    }
  }
  return 0;
}

