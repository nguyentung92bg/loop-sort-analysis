/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_147_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_147_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_426f558(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a59980;
  puVar2 = PTR_DAT_04a59978;
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f5ea1f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a59978);
    FUN_021f03f8(PTR_DAT_04a59980);
    bRam0000000004f5ea1f = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x86);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 0436f5f8 to 0446f5ff has its CatchHandler @ 0436f844 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x45);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* try { // try from 0436f610 to 0446f61f has its CatchHandler @ 0436f858 */
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0436f62c to 0446f63b has its CatchHandler @ 0436f854 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
                    /* try { // try from 0436f644 to 0446f663 has its CatchHandler @ 0436f85c */
  return;
}

