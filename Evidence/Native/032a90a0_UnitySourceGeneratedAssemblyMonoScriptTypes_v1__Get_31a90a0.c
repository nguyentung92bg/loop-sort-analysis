/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_169_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_169_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_31a90a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049f22c8;
  puVar2 = PTR_DAT_049f22c0;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 032a90ac to 033a90b7 has its CatchHandler @ 032a9124 */
                    /* try { // try from 032a90cc to 033a90cf has its CatchHandler @ 032a911c */
                    /* try { // try from 032a90d0 to 033a9117 has its CatchHandler @ 032a9068 */
  if ((bRam0000000004f50424 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049f22c0);
    FUN_021f03f8(PTR_DAT_049f22c8);
    bRam0000000004f50424 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x70);
                    /* try { // try from 032a9118 to 033a911b has its CatchHandler @ 032a9120 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a90cc with catch @ 032a911c
                       try { // try from 032a911c to 033a913f has its CatchHandler @ 032a9068 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a9118 with catch @ 032a9120
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 032a90ac with catch @ 032a9124
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* try { // try from 032a9140 to 033a9143 has its CatchHandler @ 032a9150 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x42);
                    /* catch() { ... } // from try @ 032a9140 with catch @ 032a9150 */
                    /* try { // try from 032a9154 to 033a915b has its CatchHandler @ 032a9164 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
                    /* try { // try from 032a915c to 033a9167 has its CatchHandler @ 032a9068 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a9154 with catch @ 032a9164
                        */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
                    /* try { // try from 032a9168 to 033a91af has its CatchHandler @ 032a9168
                       catch() { ... } // from try @ 032a9168 with catch @ 032a9168
                       catch() { ... } // from try @ 032a91d8 with catch @ 032a9168
                       catch() { ... } // from try @ 032a921c with catch @ 032a9168
                       catch() { ... } // from try @ 032a9254 with catch @ 032a9168 */
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x100000001;
  return;
}

