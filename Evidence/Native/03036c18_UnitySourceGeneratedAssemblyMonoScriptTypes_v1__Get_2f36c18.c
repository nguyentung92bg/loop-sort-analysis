/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_138_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_138_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_2f36c18(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049e2d28;
  puVar2 = PTR_DAT_049e2d20;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 03036c4c to 03136c4f has its CatchHandler @ 03036c68 */
  if ((bRam0000000004f4ed2a & 1) == 0) {
                    /* try { // try from 03036c50 to 03136c53 has its CatchHandler @ 03036c64 */
                    /* try { // try from 03036c54 to 03136c8b has its CatchHandler @ 030369d4 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 03036ba4 with catch @ 03036c60
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 03036c50 with catch @ 03036c64
                        */
    FUN_021f03f8(PTR_DAT_049e2d28);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 03036c4c with catch @ 03036c68
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 03036b78 with catch @ 03036c6c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 03036b14 with catch @ 03036c70
                        */
    FUN_021f03f8(PTR_DAT_049e2d20);
    bRam0000000004f4ed2a = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 03036c8c to 03136c8f has its CatchHandler @ 03036c98 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xd5);
                    /* catch() { ... } // from try @ 03036c8c with catch @ 03036c98 */
                    /* try { // try from 03036c9c to 03136ca3 has its CatchHandler @ 03036cac */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 03036ca4 to 03136caf has its CatchHandler @ 030369d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03036c9c with catch @ 03036cac
                        */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xb4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a8028;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

