/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_31_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_31_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_2d85380(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049d7310;
  puVar2 = PTR_DAT_049d7308;
  puVar1 = PTR_DAT_049b3bb8;
                    /* catch() { ... } // from try @ 02e84de8 with catch @ 02e85380 */
                    /* catch() { ... } // from try @ 02e84f24 with catch @ 02e85384 */
                    /* catch() { ... } // from try @ 02e84f90 with catch @ 02e85388 */
                    /* catch() { ... } // from try @ 02e852dc with catch @ 02e8538c */
                    /* catch() { ... } // from try @ 02e84e68 with catch @ 02e85390 */
                    /* catch() { ... } // from try @ 02e84d7c with catch @ 02e85394 */
                    /* catch() { ... } // from try @ 02e84ea0 with catch @ 02e85398 */
                    /* catch() { ... } // from try @ 02e84e20 with catch @ 02e8539c */
                    /* catch() { ... } // from try @ 02e84f48 with catch @ 02e853a0 */
                    /* catch() { ... } // from try @ 02e84cdc with catch @ 02e853a4
                       catch() { ... } // from try @ 02e852f4 with catch @ 02e853a4 */
  if ((bRam0000000004f4d8de & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 02e853cc to 02f853cf has its CatchHandler @ 02e8550c */
    FUN_021f03f8(PTR_DAT_049d7308);
    FUN_021f03f8(PTR_DAT_049d7310);
    bRam0000000004f4d8de = 1;
  }
                    /* try { // try from 02e853ec to 02f853ef has its CatchHandler @ 02e85508 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x163e);
                    /* try { // try from 02e853f8 to 02f853ff has its CatchHandler @ 02e85504 */
                    /* try { // try from 02e85400 to 02f8541f has its CatchHandler @ 02e84524 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 02e85420 to 02f85437 has its CatchHandler @ 02e8551c */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xd39);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* try { // try from 02e85438 to 02f854bb has its CatchHandler @ 02e84524 */
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a82f0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

