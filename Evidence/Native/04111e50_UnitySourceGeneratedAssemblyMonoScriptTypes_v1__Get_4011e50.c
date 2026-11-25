/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_97_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_97_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_4011e50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a42fc0;
  puVar2 = PTR_DAT_04a42fb8;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 04111e5c to 04211e63 has its CatchHandler @ 04112100 */
                    /* try { // try from 04111e70 to 04211e77 has its CatchHandler @ 041120e4 */
                    /* try { // try from 04111e80 to 04211e87 has its CatchHandler @ 041120fc */
  if ((bRam0000000004f5ce51 & 1) == 0) {
                    /* try { // try from 04111e90 to 04211e97 has its CatchHandler @ 041120d8 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_04a42fc0);
    FUN_021f03f8(PTR_DAT_04a42fb8);
                    /* try { // try from 04111eac to 04211eb3 has its CatchHandler @ 041120f8 */
    bRam0000000004f5ce51 = 1;
  }
                    /* try { // try from 04111ebc to 04211ec7 has its CatchHandler @ 041120f4 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x224);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x110);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 04111f20 to 04211f23 has its CatchHandler @ 041120d4 */
                    /* try { // try from 04111f24 to 04211f57 has its CatchHandler @ 041120e8 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x400000004;
  return;
}

