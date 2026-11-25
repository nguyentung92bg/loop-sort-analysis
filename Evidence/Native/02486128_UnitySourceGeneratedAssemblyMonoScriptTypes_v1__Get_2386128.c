/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_167_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_167_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_2386128(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049beb78;
  puVar2 = PTR_DAT_049beb70;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0248613c to 02586143 has its CatchHandler @ 024861b4 */
                    /* try { // try from 02486144 to 0258617b has its CatchHandler @ 02486268 */
  if ((bRam0000000004f4a6e5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049beb78);
                    /* try { // try from 0248617c to 02586193 has its CatchHandler @ 02485a88 */
    FUN_021f03f8(PTR_DAT_049beb70);
    bRam0000000004f4a6e5 = 1;
  }
                    /* try { // try from 02486194 to 025861a3 has its CatchHandler @ 024861bc */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x160);
                    /* try { // try from 024861a8 to 025861ab has its CatchHandler @ 0248626c */
                    /* try { // try from 024861ac to 025861af has its CatchHandler @ 024861b0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* catch() { ... } // from try @ 024861ac with catch @ 024861b0 */
                    /* catch() { ... } // from try @ 0248613c with catch @ 024861b4 */
                    /* catch() { ... } // from try @ 02486108 with catch @ 024861b8 */
                    /* catch() { ... } // from try @ 024860d4 with catch @ 024861bc
                       catch() { ... } // from try @ 02486194 with catch @ 024861bc */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 024861c4 to 025861c7 has its CatchHandler @ 02486264 */
                    /* try { // try from 024861c8 to 025861db has its CatchHandler @ 02485a88 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xb0);
                    /* try { // try from 024861dc to 025861f3 has its CatchHandler @ 02486254 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
                    /* try { // try from 024861f4 to 02586243 has its CatchHandler @ 02485a88 */
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x400000004;
  return;
}

