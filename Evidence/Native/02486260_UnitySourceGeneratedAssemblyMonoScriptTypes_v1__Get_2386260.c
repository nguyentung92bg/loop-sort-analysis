/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_43_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_43_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_2386260(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049beb88;
  puVar2 = PTR_DAT_049beb80;
  puVar1 = PTR_DAT_049b3bb8;
                    /* catch() { ... } // from try @ 024861c4 with catch @ 02486264
                       catch() { ... } // from try @ 02486258 with catch @ 02486264 */
                    /* catch() { ... } // from try @ 02486144 with catch @ 02486268 */
                    /* catch() { ... } // from try @ 0248610c with catch @ 0248626c
                       catch() { ... } // from try @ 024861a8 with catch @ 0248626c */
  if ((bRam0000000004f4a6e6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049beb88);
    FUN_021f03f8(PTR_DAT_049beb80);
    bRam0000000004f4a6e6 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x2041);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xc5d);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a82c0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

