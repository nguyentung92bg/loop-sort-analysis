/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_15_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_15_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_233227c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049bdc70;
  puVar2 = PTR_DAT_049bdc68;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 02432298 to 0253229f has its CatchHandler @ 02432354 */
  if ((bRam0000000004f4a4f0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049bdc70);
                    /* try { // try from 024322d0 to 025322ef has its CatchHandler @ 0243236c */
    FUN_021f03f8(PTR_DAT_049bdc68);
    bRam0000000004f4a4f0 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 024322f0 to 0253230f has its CatchHandler @ 0243216c */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x10a9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* try { // try from 02432310 to 02532327 has its CatchHandler @ 02432368 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xfb4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a78d0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0243234c to 0253234f has its CatchHandler @ 02432364 */
                    /* try { // try from 02432350 to 02532353 has its CatchHandler @ 02432360 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02432298 with catch @ 02432354
                       try { // try from 02432354 to 0253238b has its CatchHandler @ 0243216c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02432228 with catch @ 02432358
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024321fc with catch @ 0243235c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02432350 with catch @ 02432360
                        */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0243234c with catch @ 02432364
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02432310 with catch @ 02432368
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02432278 with catch @ 0243236c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 024322d0 with catch @ 0243236c
                        */
  return;
}

