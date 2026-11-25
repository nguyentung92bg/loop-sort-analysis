/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_164_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_164_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_3f735d8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a3ce10;
  puVar2 = PTR_DAT_04a3ce08;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 040735d8 to 041735ef has its CatchHandler @ 04072eac */
                    /* try { // try from 040735f0 to 041735f3 has its CatchHandler @ 040735f8 */
                    /* catch() { ... } // from try @ 040735f0 with catch @ 040735f8 */
                    /* try { // try from 04073600 to 04173607 has its CatchHandler @ 0407363c */
                    /* try { // try from 04073608 to 0417361f has its CatchHandler @ 04072eac */
  if ((bRam0000000004f5c7b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 04073620 to 04173623 has its CatchHandler @ 04073628 */
    FUN_021f03f8(PTR_DAT_04a3ce08);
                    /* catch() { ... } // from try @ 04073620 with catch @ 04073628 */
                    /* try { // try from 0407362c to 04173633 has its CatchHandler @ 0407363c */
    FUN_021f03f8(PTR_DAT_04a3ce10);
                    /* try { // try from 04073634 to 0417363f has its CatchHandler @ 04072eac */
    bRam0000000004f5c7b6 = 1;
  }
                    /* catch() { ... } // from try @ 040735d0 with catch @ 0407363c
                       catch() { ... } // from try @ 04073600 with catch @ 0407363c
                       catch() { ... } // from try @ 0407362c with catch @ 0407363c */
                    /* try { // try from 04073640 to 041736e7 has its CatchHandler @ 04073640
                       catch() { ... } // from try @ 04073640 with catch @ 04073640
                       catch() { ... } // from try @ 04073934 with catch @ 04073640
                       catch() { ... } // from try @ 04073994 with catch @ 04073640
                       catch() { ... } // from try @ 04073a0c with catch @ 04073640 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x1bd);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xe2);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x300000003;
  return;
}

