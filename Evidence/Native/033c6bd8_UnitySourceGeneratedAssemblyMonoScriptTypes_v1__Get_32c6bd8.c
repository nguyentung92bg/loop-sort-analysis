/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_186_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_186_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_32c6bd8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f50d16 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    bRam0000000004f50d16 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_40 = FUN_021f04e4(*(undefined8 *)puVar1,0);
  thunk_FUN_021f190c(&uStack_40,uStack_40);
  uStack_38 = FUN_021f04e4(*(undefined8 *)puVar1,0);
  thunk_FUN_021f190c((ulong)&uStack_40 | 8,uStack_38);
  uStack_28 = uStack_28 & 0xffffffffffffff00;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = 0;
  return;
}

