/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_49_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_49_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_231c068(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049bcf80;
  puVar2 = PTR_DAT_049bcf78;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0241c06c to 0251c073 has its CatchHandler @ 0241c5e4 */
                    /* try { // try from 0241c07c to 0251c087 has its CatchHandler @ 0241c5e8 */
                    /* try { // try from 0241c08c to 0251c093 has its CatchHandler @ 0241c5ec */
  if ((bRam0000000004f4a284 & 1) == 0) {
                    /* try { // try from 0241c0a0 to 0251c0ab has its CatchHandler @ 0241c5f0 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049bcf78);
                    /* try { // try from 0241c0b8 to 0251c0bf has its CatchHandler @ 0241c5f4 */
    FUN_021f03f8(PTR_DAT_049bcf80);
    bRam0000000004f4a284 = 1;
  }
                    /* try { // try from 0241c0d4 to 0251c0f7 has its CatchHandler @ 0241c614 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x671);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 0241c104 to 0251c143 has its CatchHandler @ 0241c624 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x4ed);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a8658;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0241c14c to 0251c153 has its CatchHandler @ 0241c4f0 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

