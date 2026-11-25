/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_22_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_22_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_428b318(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a5ac58;
  puVar2 = PTR_DAT_04a5ac50;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0438b334 to 0448b337 has its CatchHandler @ 0438bb10 */
  if ((bRam0000000004f5ebdc & 1) == 0) {
                    /* try { // try from 0438b358 to 0448b35b has its CatchHandler @ 0438bb08 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a5ac50);
    FUN_021f03f8(PTR_DAT_04a5ac58);
    bRam0000000004f5ebdc = 1;
  }
                    /* try { // try from 0438b384 to 0448b387 has its CatchHandler @ 0438bb00 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xad3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 0438b3a8 to 0448b3ab has its CatchHandler @ 0438baf8 */
                    /* try { // try from 0438b3ac to 0448b3cb has its CatchHandler @ 0438bb4c */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x638);
                    /* try { // try from 0438b3cc to 0448b3d7 has its CatchHandler @ 0438ba58 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 0438b3dc to 0448b3fb has its CatchHandler @ 0438bae8 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a8108;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

