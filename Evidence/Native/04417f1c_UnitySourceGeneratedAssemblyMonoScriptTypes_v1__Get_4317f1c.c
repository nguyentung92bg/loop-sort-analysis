/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_78_o UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_78_o
   UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get (const MethodInfo* method); */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get_4317f1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  puVar3 = PTR_DAT_04a5f910;
  puVar2 = PTR_DAT_04a5f908;
  puVar1 = PTR_DAT_049b3bb8;
  if ((bRam0000000004f5f089 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bb8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417d14 with catch @ 04417f60
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417e1c with catch @ 04417f64
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417e18 with catch @ 04417f68
                        */
    FUN_021f03f8(PTR_DAT_04a5f910);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417e14 with catch @ 04417f6c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417e10 with catch @ 04417f70
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417cdc with catch @ 04417f74
                        */
    FUN_021f03f8(PTR_DAT_04a5f908);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 04417c78 with catch @ 04417f78
                        */
    bRam0000000004f5f089 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0x19e);
                    /* try { // try from 04417f94 to 04517f97 has its CatchHandler @ 04417fa4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar2,0);
  uStack_50 = uVar4;
                    /* catch() { ... } // from try @ 04417f94 with catch @ 04417fa4 */
                    /* try { // try from 04417fa8 to 04517faf has its CatchHandler @ 04417fb8 */
                    /* try { // try from 04417fb0 to 04517fbb has its CatchHandler @ 044179c4 */
  thunk_FUN_021f190c(&uStack_50,uVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04417fa8 with catch @ 04417fb8
                        */
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar1,0xea);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  uStack_48 = uVar4;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,uVar4);
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = 0x300000003;
  return;
}

