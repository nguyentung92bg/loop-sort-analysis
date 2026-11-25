/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_110_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_110_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_333dbac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_049fa448;
  puVar2 = PTR_DAT_049fa440;
  puVar1 = PTR_DAT_049b3bb8;
                    /* try { // try from 0343dbb4 to 0353dbbb has its CatchHandler @ 0343dc28 */
                    /* try { // try from 0343dbc4 to 0353dbdf has its CatchHandler @ 0343dc24 */
                    /* try { // try from 0343dbe0 to 0353dc1b has its CatchHandler @ 0343dc1c */
  if ((bRam0000000004f50ffc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    FUN_021f03f8(PTR_DAT_049fa448);
    FUN_021f03f8(PTR_DAT_049fa440);
    bRam0000000004f50ffc = 1;
  }
                    /* catch() { ... } // from try @ 0343dbe0 with catch @ 0343dc1c
                       try { // try from 0343dc1c to 0353dc87 has its CatchHandler @ 0343d918 */
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
                    /* catch() { ... } // from try @ 0343db58 with catch @ 0343dc20 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x246);
                    /* catch() { ... } // from try @ 0343dbc4 with catch @ 0343dc24 */
                    /* catch() { ... } // from try @ 0343dbb4 with catch @ 0343dc28 */
                    /* catch() { ... } // from try @ 0343db3c with catch @ 0343dc2c */
                    /* catch() { ... } // from try @ 0343db2c with catch @ 0343dc30 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* catch() { ... } // from try @ 0343da74 with catch @ 0343dc34 */
                    /* catch() { ... } // from try @ 0343da18 with catch @ 0343dc38 */
                    /* catch() { ... } // from try @ 0343d9b4 with catch @ 0343dc3c */
                    /* catch() { ... } // from try @ 0343daf0 with catch @ 0343dc40 */
                    /* catch() { ... } // from try @ 0343d9ec with catch @ 0343dc44 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* catch() { ... } // from try @ 0343dacc with catch @ 0343dc48 */
                    /* catch() { ... } // from try @ 0343db98 with catch @ 0343dc4c */
                    /* catch() { ... } // from try @ 0343dab4 with catch @ 0343dc50 */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x17e);
                    /* catch() { ... } // from try @ 0343db94 with catch @ 0343dc54 */
                    /* catch() { ... } // from try @ 0343daa4 with catch @ 0343dc58 */
                    /* catch() { ... } // from try @ 0343da78 with catch @ 0343dc5c */
                    /* catch() { ... } // from try @ 0343da54 with catch @ 0343dc60 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
                    /* catch() { ... } // from try @ 0343db10 with catch @ 0343dc64 */
  uStack_48 = uVar4;
                    /* catch() { ... } // from try @ 0343da44 with catch @ 0343dc68 */
                    /* catch() { ... } // from try @ 0343da2c with catch @ 0343dc6c */
                    /* catch() { ... } // from try @ 0343d9d0 with catch @ 0343dc70
                       catch() { ... } // from try @ 0343daa0 with catch @ 0343dc70
                       catch() { ... } // from try @ 0343db14 with catch @ 0343dc70
                       catch() { ... } // from try @ 0343db9c with catch @ 0343dc70 */
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
                    /* try { // try from 0343dc88 to 0353dc9f has its CatchHandler @ 0343dd60 */
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x800000008;
  return;
}

