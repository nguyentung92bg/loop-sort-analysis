/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_60_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_60_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_42398fc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a578f8;
  puVar2 = PTR_DAT_04a578f0;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 04339900 to 04439913 has its CatchHandler @ 043396f4 */
                    /* catch() { ... } // from try @ 043398c0 with catch @ 04339904 */
                    /* try { // try from 04339914 to 04439927 has its CatchHandler @ 043399d4 */
  if ((bRam0000000004f5e804 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 04339940 to 04439943 has its CatchHandler @ 043399c8 */
                    /* try { // try from 04339944 to 0443994b has its CatchHandler @ 043399c4 */
    FUN_021f03f8(PTR_DAT_04a578f0);
                    /* try { // try from 04339950 to 0443996f has its CatchHandler @ 043399c0 */
    FUN_021f03f8(PTR_DAT_04a578f8);
    bRam0000000004f5e804 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xe8);
                    /* try { // try from 04339980 to 04439983 has its CatchHandler @ 043399f0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 04339984 to 04439987 has its CatchHandler @ 043399ec */
                    /* try { // try from 04339988 to 044399a3 has its CatchHandler @ 043396f4 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x3db);
                    /* try { // try from 043399a4 to 044399b3 has its CatchHandler @ 043399bc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* try { // try from 043399b4 to 044399b7 has its CatchHandler @ 043399b8 */
  uStack_48 = uVar4;
                    /* catch() { ... } // from try @ 043399b4 with catch @ 043399b8 */
                    /* catch() { ... } // from try @ 043399a4 with catch @ 043399bc */
                    /* catch() { ... } // from try @ 04339950 with catch @ 043399c0 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a7a28;
                    /* catch() { ... } // from try @ 04339944 with catch @ 043399c4 */
                    /* catch() { ... } // from try @ 04339940 with catch @ 043399c8 */
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* catch() { ... } // from try @ 04339914 with catch @ 043399d4 */
                    /* try { // try from 043399dc to 044399df has its CatchHandler @ 04339abc */
                    /* try { // try from 043399e0 to 04439a0b has its CatchHandler @ 043396f4 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
                    /* catch() { ... } // from try @ 04339984 with catch @ 043399ec */
  return;
}

