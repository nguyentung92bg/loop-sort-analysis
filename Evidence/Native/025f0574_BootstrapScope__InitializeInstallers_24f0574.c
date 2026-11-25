/* IL2CPP: BootstrapScope$$InitializeInstallers
Cysharp_Threading_Tasks_UniTaskVoid_o BootstrapScope__InitializeInstallers (BootstrapScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$InitializeInstallers
   Cysharp_Threading_Tasks_UniTaskVoid_o BootstrapScope__InitializeInstallers (BootstrapScope_o*
   __this, const MethodInfo* method); */

undefined8 BootstrapScope__InitializeInstallers_24f0574(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 auStack_c0 [2];
  undefined1 auStack_b8 [8];
  undefined8 auStack_b0 [18];
  
  puVar1 = PTR_DAT_049c8118;
                    /* try { // try from 025f057c to 026f0587 has its CatchHandler @ 025f0d08 */
  if ((bRam0000000004f4bcf2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8118);
    bRam0000000004f4bcf2 = 1;
  }
                    /* try { // try from 025f05bc to 026f05cf has its CatchHandler @ 025f0ccc */
  func_0x04608670(auStack_c0,0,0xa0);
  thunk_FUN_021f190c(auStack_b8,0);
  auStack_b0[0] = param_1;
  thunk_FUN_021f190c(auStack_b0,param_1);
  auStack_c0[0] = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            (auStack_b8,auStack_c0,*(undefined8 *)puVar1);
                    /* try { // try from 025f05f4 to 026f05f7 has its CatchHandler @ 025f0c1c */
                    /* try { // try from 025f05fc to 026f0607 has its CatchHandler @ 025f0c18 */
  return 0;
}

