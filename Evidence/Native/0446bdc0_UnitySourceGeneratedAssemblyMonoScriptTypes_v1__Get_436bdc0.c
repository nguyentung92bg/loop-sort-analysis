/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_187_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_187_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_436bdc0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f5f3d6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
    bRam0000000004f5f3d6 = 1;
  }
                    /* try { // try from 0446be04 to 0456be07 has its CatchHandler @ 0446be10 */
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
                    /* try { // try from 0446be08 to 0456be2f has its CatchHandler @ 0446bcb0 */
  uStack_40 = FUN_021f04e4(*(undefined8 *)puVar1,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0446bd48 with catch @ 0446be0c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0446be04 with catch @ 0446be10
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0446bd28 with catch @ 0446be14
                        */
  thunk_FUN_021f190c(&uStack_40,uStack_40);
  uStack_38 = FUN_021f04e4(*(undefined8 *)puVar1,0);
                    /* try { // try from 0446be30 to 0456be33 has its CatchHandler @ 0446be40 */
  thunk_FUN_021f190c((ulong)&uStack_40 | 8,uStack_38);
  uStack_28 = uStack_28 & 0xffffffffffffff00;
                    /* catch() { ... } // from try @ 0446be30 with catch @ 0446be40 */
                    /* try { // try from 0446be44 to 0456be4b has its CatchHandler @ 0446be54 */
                    /* try { // try from 0446be4c to 0456be57 has its CatchHandler @ 0446bcb0 */
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[3] = uStack_28;
  param_1[2] = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0446be44 with catch @ 0446be54
                        */
  return;
}

