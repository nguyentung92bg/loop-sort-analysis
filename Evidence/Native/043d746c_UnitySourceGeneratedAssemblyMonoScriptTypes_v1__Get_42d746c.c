/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_181_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_181_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_42d746c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a5d288;
  puVar2 = PTR_DAT_04a5d280;
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f5ed87 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a5d280);
                    /* try { // try from 043d74c4 to 044d74cb has its CatchHandler @ 043d750c */
    FUN_021f03f8(PTR_DAT_04a5d288);
    bRam0000000004f5ed87 = 1;
  }
                    /* try { // try from 043d74d8 to 044d74f7 has its CatchHandler @ 043d7510 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x82);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 043d74fc to 044d74ff has its CatchHandler @ 043d7540 */
                    /* try { // try from 043d7500 to 044d7503 has its CatchHandler @ 043d7530 */
                    /* try { // try from 043d7504 to 044d7507 has its CatchHandler @ 043d751c */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 043d7508 to 044d750b has its CatchHandler @ 043d76e8 */
                    /* catch() { ... } // from try @ 043d74c4 with catch @ 043d750c
                       try { // try from 043d750c to 044d7557 has its CatchHandler @ 043d71d4 */
                    /* catch() { ... } // from try @ 043d74d8 with catch @ 043d7510 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x46);
                    /* catch() { ... } // from try @ 043d73f0 with catch @ 043d7514 */
                    /* catch() { ... } // from try @ 043d73dc with catch @ 043d7518 */
                    /* catch() { ... } // from try @ 043d7504 with catch @ 043d751c */
                    /* catch() { ... } // from try @ 043d7394 with catch @ 043d7520 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* catch() { ... } // from try @ 043d7368 with catch @ 043d7524 */
  uStack_48 = uVar4;
                    /* catch() { ... } // from try @ 043d72cc with catch @ 043d7528 */
                    /* catch() { ... } // from try @ 043d7424 with catch @ 043d752c */
                    /* catch() { ... } // from try @ 043d7500 with catch @ 043d7530 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
                    /* catch() { ... } // from try @ 043d743c with catch @ 043d7534 */
                    /* catch() { ... } // from try @ 043d7408 with catch @ 043d7538 */
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* catch() { ... } // from try @ 043d72b4 with catch @ 043d753c */
                    /* catch() { ... } // from try @ 043d74fc with catch @ 043d7540 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
                    /* try { // try from 043d7558 to 044d756f has its CatchHandler @ 043d7610 */
  return;
}

