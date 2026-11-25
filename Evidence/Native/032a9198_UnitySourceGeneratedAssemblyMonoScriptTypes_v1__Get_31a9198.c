/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_90_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_90_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_31a9198(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049f22d8;
  puVar2 = PTR_DAT_049f22d0;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 032a91b0 to 033a91bb has its CatchHandler @ 032a921c */
  if ((bRam0000000004f50425 & 1) == 0) {
                    /* try { // try from 032a91d0 to 033a91d7 has its CatchHandler @ 032a9220 */
                    /* try { // try from 032a91d8 to 033a9217 has its CatchHandler @ 032a9168 */
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049f22d8);
    FUN_021f03f8(PTR_DAT_049f22d0);
    bRam0000000004f50425 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x4e1);
                    /* try { // try from 032a9218 to 033a921b has its CatchHandler @ 032a9220 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a91b0 with catch @ 032a921c
                       try { // try from 032a921c to 033a923b has its CatchHandler @ 032a9168 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a91d0 with catch @ 032a9220
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 032a9218 with catch @ 032a9220
                        */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 032a923c to 033a923f has its CatchHandler @ 032a9248 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x316);
                    /* catch() { ... } // from try @ 032a923c with catch @ 032a9248 */
                    /* try { // try from 032a924c to 033a9253 has its CatchHandler @ 032a925c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 032a9254 to 033a925f has its CatchHandler @ 032a9168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a924c with catch @ 032a925c
                        */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uVar4 = _UNK_013a81b0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uVar4;
  return;
}

