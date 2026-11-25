/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_156_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_156_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_39f83ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a1aeb0;
  puVar2 = PTR_DAT_04a1aea8;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 03af840c to 03bf8417 has its CatchHandler @ 03af88f8 */
  if ((bRam0000000004f5434e & 1) == 0) {
                    /* try { // try from 03af8428 to 03bf8437 has its CatchHandler @ 03af88ec */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a1aeb0);
    FUN_021f03f8(PTR_DAT_04a1aea8);
    bRam0000000004f5434e = 1;
  }
                    /* try { // try from 03af845c to 03bf8483 has its CatchHandler @ 03af88f0 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x5f);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x83);
                    /* try { // try from 03af8494 to 03bf84a3 has its CatchHandler @ 03af889c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 03af84ac to 03bf84bf has its CatchHandler @ 03af8898 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a7f80;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 03af84c4 to 03bf84f7 has its CatchHandler @ 03af88cc */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

