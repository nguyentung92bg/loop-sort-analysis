/* IL2CPP: MetalBlockSystem$$ApplyMagnetMotion
Cysharp_Threading_Tasks_UniTaskVoid_o MetalBlockSystem__ApplyMagnetMotion (MetalBlockSystem_o* __this, System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces, UnityEngine_Vector3_o center, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MetalBlockSystem$$ApplyMagnetMotion
   Cysharp_Threading_Tasks_UniTaskVoid_o MetalBlockSystem__ApplyMagnetMotion (MetalBlockSystem_o*
   __this, System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces,
   UnityEngine_Vector3_o center, const MethodInfo* method); */

undefined8
MetalBlockSystem__ApplyMagnetMotion_23ee4a8
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined4 auStack_f0 [2];
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  
  puVar1 = PTR_DAT_049c1ff0;
  if ((bRam0000000004f4b637 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ff0);
                    /* try { // try from 024ee4f8 to 025ee607 has its CatchHandler @ 024ee4f8
                       catch() { ... } // from try @ 024ee4f8 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ee848 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ee964 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ee9f4 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024eeaa8 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024eefc8 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef06c with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef104 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef160 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef1b4 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef1f8 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef224 with catch @ 024ee4f8
                       catch() { ... } // from try @ 024ef2b4 with catch @ 024ee4f8 */
    bRam0000000004f4b637 = 1;
  }
  func_0x04608670(auStack_f0,0,0xb0);
  thunk_FUN_021f190c(auStack_e8,0);
  uStack_d8 = param_4;
  thunk_FUN_021f190c(&uStack_d8,param_4);
  uStack_e0 = param_5;
  thunk_FUN_021f190c(&uStack_e0,param_5);
  auStack_f0[0] = 0xffffffff;
  uStack_d0 = param_1;
  uStack_cc = param_2;
  uStack_c8 = param_3;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            (auStack_e8,auStack_f0,*(undefined8 *)puVar1);
  return 0;
}

