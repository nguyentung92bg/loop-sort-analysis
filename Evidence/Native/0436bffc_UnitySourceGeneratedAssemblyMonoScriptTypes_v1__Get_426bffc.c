/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_72_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_72_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_426bffc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a597f8;
  puVar2 = PTR_DAT_04a597f0;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0436c000 to 0446c00b has its CatchHandler @ 0436c134 */
                    /* try { // try from 0436c024 to 0446c037 has its CatchHandler @ 0436c144 */
  if ((bRam0000000004f5e9f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 0436c048 to 0446c04b has its CatchHandler @ 0436c12c */
    FUN_021f03f8(PTR_DAT_04a597f8);
    FUN_021f03f8(PTR_DAT_04a597f0);
                    /* try { // try from 0436c05c to 0446c063 has its CatchHandler @ 0436c128 */
    bRam0000000004f5e9f0 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xd67);
                    /* try { // try from 0436c078 to 0446c07f has its CatchHandler @ 0436c120 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 0436c08c to 0446c0ab has its CatchHandler @ 0436c124 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x67e);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a87c0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0436c0d0 to 0446c0db has its CatchHandler @ 0436c140 */
                    /* try { // try from 0436c0dc to 0446c113 has its CatchHandler @ 0436bf18 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

