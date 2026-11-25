/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_93_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_93_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_4248ecc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a58318;
  puVar2 = PTR_DAT_04a58310;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 04348efc to 04448f0b has its CatchHandler @ 04348f0c */
  if ((bRam0000000004f5e8f1 & 1) == 0) {
                    /* catch() { ... } // from try @ 04348e70 with catch @ 04348f0c
                       catch() { ... } // from try @ 04348efc with catch @ 04348f0c */
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* try { // try from 04348f10 to 04448f13 has its CatchHandler @ 04348f1c */
                    /* try { // try from 04348f14 to 04448f1f has its CatchHandler @ 04348600 */
    FUN_021f03f8(PTR_DAT_04a58318);
                    /* catch() { ... } // from try @ 04348e58 with catch @ 04348f1c
                       catch() { ... } // from try @ 04348f10 with catch @ 04348f1c */
    FUN_021f03f8(PTR_DAT_04a58310);
    bRam0000000004f5e8f1 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x18b);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xda);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 04348f9c to 044490c3 has its CatchHandler @ 04348f9c
                       catch() { ... } // from try @ 04348f9c with catch @ 04348f9c
                       catch() { ... } // from try @ 043491dc with catch @ 04348f9c
                       catch() { ... } // from try @ 0434941c with catch @ 04348f9c
                       catch() { ... } // from try @ 0434952c with catch @ 04348f9c
                       catch() { ... } // from try @ 04349580 with catch @ 04348f9c
                       catch() { ... } // from try @ 043495ac with catch @ 04348f9c
                       catch() { ... } // from try @ 04349638 with catch @ 04348f9c */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x300000003;
  return;
}

