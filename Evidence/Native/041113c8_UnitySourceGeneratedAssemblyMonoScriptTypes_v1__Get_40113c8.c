/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_158_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_158_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_40113c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a42f30;
  puVar2 = PTR_DAT_04a42f28;
  puVar1 = PTR_DAT_049b3bb8;
                    /* catch() { ... } // from try @ 041111d0 with catch @ 041113c8 */
                    /* catch() { ... } // from try @ 04111248 with catch @ 041113cc */
                    /* catch() { ... } // from try @ 041113b0 with catch @ 041113d0 */
                    /* catch() { ... } // from try @ 04111290 with catch @ 041113d4 */
                    /* catch() { ... } // from try @ 04111268 with catch @ 041113d8
                       catch() { ... } // from try @ 041113ac with catch @ 041113d8 */
                    /* catch() { ... } // from try @ 04111274 with catch @ 041113dc
                       catch() { ... } // from try @ 041113a8 with catch @ 041113dc */
                    /* catch() { ... } // from try @ 04111200 with catch @ 041113e0 */
                    /* try { // try from 041113f8 to 0421140f has its CatchHandler @ 04111470 */
  if ((bRam0000000004f5ce4b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 04111410 to 0421145f has its CatchHandler @ 04111024 */
    FUN_021f03f8(PTR_DAT_04a42f28);
    FUN_021f03f8(PTR_DAT_04a42f30);
    bRam0000000004f5ce4b = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x74);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 04111460 to 0421146f has its CatchHandler @ 04111470 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x38);
                    /* catch() { ... } // from try @ 041113f8 with catch @ 04111470
                       catch() { ... } // from try @ 04111460 with catch @ 04111470 */
                    /* try { // try from 04111474 to 04211477 has its CatchHandler @ 04111480 */
                    /* try { // try from 04111478 to 04211483 has its CatchHandler @ 04111024 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* catch() { ... } // from try @ 04111474 with catch @ 04111480 */
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
                    /* try { // try from 04111490 to 04211543 has its CatchHandler @ 04111490
                       catch() { ... } // from try @ 04111490 with catch @ 04111490
                       catch() { ... } // from try @ 0411171c with catch @ 04111490
                       catch() { ... } // from try @ 041117a0 with catch @ 04111490
                       catch() { ... } // from try @ 0411180c with catch @ 04111490
                       catch() { ... } // from try @ 04111880 with catch @ 04111490 */
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
  return;
}

