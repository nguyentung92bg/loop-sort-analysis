/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_69_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_69_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_4368264(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a61970;
  puVar2 = PTR_DAT_04a61968;
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f5f3a5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a61968);
                    /* try { // try from 044682b4 to 045682db has its CatchHandler @ 04468ab0 */
    FUN_021f03f8(PTR_DAT_04a61970);
    bRam0000000004f5f3a5 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x9e3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 044682fc to 045682ff has its CatchHandler @ 044689fc */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 04468300 to 04568307 has its CatchHandler @ 04468a38 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xb35);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 04468328 to 04568333 has its CatchHandler @ 04468a30 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a8360;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 04468340 to 04568347 has its CatchHandler @ 04468a2c */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

