/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_152_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_152_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_4321424(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a5ff28;
  puVar2 = PTR_DAT_04a5ff20;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 04421428 to 045214d3 has its CatchHandler @ 04421164 */
  if ((bRam0000000004f5f0fd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a5ff20);
    FUN_021f03f8(PTR_DAT_04a5ff28);
    bRam0000000004f5f0fd = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x98);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x4b);
                    /* try { // try from 044214d4 to 045214d7 has its CatchHandler @ 04421548 */
                    /* try { // try from 044214d8 to 045214db has its CatchHandler @ 0442153c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* try { // try from 044214dc to 045214df has its CatchHandler @ 04421534 */
  uStack_48 = uVar4;
                    /* try { // try from 044214e0 to 0452156b has its CatchHandler @ 04421164 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
  return;
}

