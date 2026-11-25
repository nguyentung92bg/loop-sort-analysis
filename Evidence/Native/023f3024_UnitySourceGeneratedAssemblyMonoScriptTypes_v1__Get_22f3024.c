/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_34_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_34_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_22f3024(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049bbd48;
  puVar2 = PTR_DAT_049bbd40;
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f4a0dc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049bbd40);
    FUN_021f03f8(PTR_DAT_049bbd48);
    bRam0000000004f4a0dc = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x11e0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xd39);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 023f30e4 to 024f30f7 has its CatchHandler @ 023f3110 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a8650;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 023f30f8 to 024f3127 has its CatchHandler @ 023f2ffc */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
                    /* catch() { ... } // from try @ 023f30e4 with catch @ 023f3110 */
  return;
}

