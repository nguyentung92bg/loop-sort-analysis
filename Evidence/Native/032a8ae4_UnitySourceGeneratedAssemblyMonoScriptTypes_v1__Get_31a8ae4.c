/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_161_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_161_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_31a8ae4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049f2298;
  puVar2 = PTR_DAT_049f2290;
  puVar1 = PTR_DAT_049b3bb8;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a8a90 with catch @ 032a8ae4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 032a8adc with catch @ 032a8ae4
                        */
                    /* try { // try from 032a8b00 to 033a8b03 has its CatchHandler @ 032a8b0c */
                    /* catch() { ... } // from try @ 032a8b00 with catch @ 032a8b0c */
                    /* try { // try from 032a8b10 to 033a8b17 has its CatchHandler @ 032a8b20 */
                    /* try { // try from 032a8b18 to 033a8b23 has its CatchHandler @ 032a8a20 */
  if ((bRam0000000004f5041e & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a8b10 with catch @ 032a8b20
                        */
                    /* try { // try from 032a8b24 to 033a8b67 has its CatchHandler @ 032a8b24
                       catch() { ... } // from try @ 032a8b24 with catch @ 032a8b24
                       catch() { ... } // from try @ 032a8b8c with catch @ 032a8b24
                       catch() { ... } // from try @ 032a8bcc with catch @ 032a8b24
                       catch() { ... } // from try @ 032a8c04 with catch @ 032a8b24 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049f2298);
    FUN_021f03f8(PTR_DAT_049f2290);
    bRam0000000004f5041e = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x6f);
                    /* try { // try from 032a8b68 to 033a8b73 has its CatchHandler @ 032a8bcc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 032a8b88 to 033a8b8b has its CatchHandler @ 032a8bd0 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x41);
                    /* try { // try from 032a8b8c to 033a8bc7 has its CatchHandler @ 032a8b24 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
                    /* try { // try from 032a8bc8 to 033a8bcb has its CatchHandler @ 032a8bd0 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a8b68 with catch @ 032a8bcc
                       try { // try from 032a8bcc to 033a8beb has its CatchHandler @ 032a8b24 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a8b88 with catch @ 032a8bd0
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 032a8bc8 with catch @ 032a8bd0
                        */
  return;
}

