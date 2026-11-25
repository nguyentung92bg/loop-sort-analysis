/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_67_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_67_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_223a820(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049b4e28;
  puVar2 = PTR_DAT_049b4e20;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0233a850 to 0243a873 has its CatchHandler @ 0233a850
                       catch() { ... } // from try @ 0233a850 with catch @ 0233a850
                       catch() { ... } // from try @ 0233a894 with catch @ 0233a850 */
  if ((bRam0000000004f49acb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049b4e28);
                    /* try { // try from 0233a874 to 0243a893 has its CatchHandler @ 0233a8b8 */
    FUN_021f03f8(PTR_DAT_049b4e20);
    bRam0000000004f49acb = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 0233a894 to 0243a8d3 has its CatchHandler @ 0233a850 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x334);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* catch() { ... } // from try @ 0233a874 with catch @ 0233a8b8 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x21a);
                    /* try { // try from 0233a8d4 to 0243a8ef has its CatchHandler @ 0233a8d4
                       catch() { ... } // from try @ 0233a8d4 with catch @ 0233a8d4
                       catch() { ... } // from try @ 0233a900 with catch @ 0233a8d4
                       catch() { ... } // from try @ 0233a998 with catch @ 0233a8d4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a7a38;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0233a8f0 to 0243a8ff has its CatchHandler @ 0233a9d8 */
                    /* try { // try from 0233a900 to 0243a94f has its CatchHandler @ 0233a8d4 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

