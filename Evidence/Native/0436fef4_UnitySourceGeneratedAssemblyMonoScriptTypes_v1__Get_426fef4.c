/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_89_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_89_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_426fef4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a59a70;
  puVar2 = PTR_DAT_04a59a68;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0436fef4 to 0446fefb has its CatchHandler @ 043701c8 */
                    /* try { // try from 0436ff04 to 0446ff0b has its CatchHandler @ 043701c0 */
                    /* try { // try from 0436ff1c to 0446ff2b has its CatchHandler @ 043701e0 */
  if ((bRam0000000004f5ea24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 0436ff38 to 0446ff47 has its CatchHandler @ 043701dc */
    FUN_021f03f8(PTR_DAT_04a59a68);
    FUN_021f03f8(PTR_DAT_04a59a70);
                    /* try { // try from 0436ff50 to 0446ff5b has its CatchHandler @ 043701d8 */
    bRam0000000004f5ea24 = 1;
  }
                    /* try { // try from 0436ff60 to 0446ff7f has its CatchHandler @ 043701e4 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x5f3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 0436ff90 to 0446ff97 has its CatchHandler @ 043701b4 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x55e);
                    /* try { // try from 0436ffa8 to 0446ffaf has its CatchHandler @ 043701b0 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a83e0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0436ffc8 to 0446ffdb has its CatchHandler @ 043701d4 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

