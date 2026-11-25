/* IL2CPP: OutlineModule$$Add
OutlineEntity_o OutlineModule__Add (OutlineModule_o* __this, UnityEngine_GameObject_o* target, UnityEngine_Mesh_o* mesh, UnityEngine_Color_o color, float width, int32_t renderMode, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$Add
   OutlineEntity_o OutlineModule__Add (OutlineModule_o* __this, UnityEngine_GameObject_o* target,
   UnityEngine_Mesh_o* mesh, UnityEngine_Color_o color, float width, int32_t renderMode, int32_t
   layer, const MethodInfo* method); */

void OutlineModule__Add_254e9a4
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8,undefined8 param_9,
               undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_168 [72];
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
                    /* try { // try from 0264e9c0 to 0274e9cb has its CatchHandler @ 0264ea8c */
                    /* try { // try from 0264e9d8 to 0274e9e7 has its CatchHandler @ 0264ea88 */
  if ((bRam0000000004f4c064 & 1) == 0) {
                    /* try { // try from 0264ea0c to 0274ea17 has its CatchHandler @ 0264eaa4 */
    FUN_021f03f8(PTR_DAT_049c6a70);
    FUN_021f03f8(PTR_DAT_049c2478);
                    /* try { // try from 0264ea1c to 0274ea3b has its CatchHandler @ 0264eab4 */
    bRam0000000004f4c064 = 1;
  }
  uStack_90 = 0;
  auStack_e0[0] = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
                    /* try { // try from 0264ea3c to 0274ea73 has its CatchHandler @ 0264e818 */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  OutlineModule__LoadSmoothNormals_254eb88(param_7,param_9);
  uVar1 = *(uint *)(param_7 + 0x20);
  auStack_e0[0] = 0;
  *(uint *)(param_7 + 0x20) = uVar1 + 1;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
                    /* try { // try from 0264ea74 to 0274ea77 has its CatchHandler @ 0264eaa0 */
  uStack_120 = (ulong)uVar1;
  lStack_118 = param_8;
                    /* try { // try from 0264ea78 to 0274ea7b has its CatchHandler @ 0264eab4 */
                    /* try { // try from 0264ea7c to 0274ea7f has its CatchHandler @ 0264eab0 */
  thunk_FUN_021f190c((ulong)&uStack_120 | 8,param_8);
                    /* try { // try from 0264ea80 to 0274ea83 has its CatchHandler @ 0264eaac */
  if (param_8 != 0) {
                    /* try { // try from 0264ea84 to 0274ea87 has its CatchHandler @ 0264ea9c */
                    /* catch() { ... } // from try @ 0264e9d8 with catch @ 0264ea88
                       try { // try from 0264ea88 to 0274eacb has its CatchHandler @ 0264e818 */
                    /* catch() { ... } // from try @ 0264e9c0 with catch @ 0264ea8c */
                    /* catch() { ... } // from try @ 0264e8cc with catch @ 0264ea90 */
                    /* catch() { ... } // from try @ 0264e944 with catch @ 0264ea94 */
                    /* catch() { ... } // from try @ 0264e928 with catch @ 0264ea98 */
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (param_8,&uStack_88,*(undefined8 *)PTR_DAT_049c6a70);
                    /* catch() { ... } // from try @ 0264ea84 with catch @ 0264ea9c */
                    /* catch() { ... } // from try @ 0264ea74 with catch @ 0264eaa0 */
                    /* catch() { ... } // from try @ 0264ea0c with catch @ 0264eaa4 */
    uStack_110 = uStack_88;
                    /* catch() { ... } // from try @ 0264e970 with catch @ 0264eaa8 */
    thunk_FUN_021f190c(&uStack_110);
                    /* catch() { ... } // from try @ 0264e8f8 with catch @ 0264eaac
                       catch() { ... } // from try @ 0264ea80 with catch @ 0264eaac */
    uStack_108 = param_9;
                    /* catch() { ... } // from try @ 0264e8dc with catch @ 0264eab0
                       catch() { ... } // from try @ 0264ea7c with catch @ 0264eab0 */
                    /* catch() { ... } // from try @ 0264ea1c with catch @ 0264eab4
                       catch() { ... } // from try @ 0264ea78 with catch @ 0264eab4 */
    thunk_FUN_021f190c(&uStack_108,param_9);
    uStack_100 = CONCAT44(param_3,param_2);
                    /* try { // try from 0264eacc to 0274eae3 has its CatchHandler @ 0264eb50 */
    uStack_f8 = CONCAT44(param_5,param_4);
    uStack_f0 = CONCAT44(param_10,param_6);
    uStack_e8 = OutlineModule__GetFillMaterial_254ec1c(param_7,param_11,param_10);
                    /* try { // try from 0264eae4 to 0274eb3f has its CatchHandler @ 0264e818 */
    thunk_FUN_021f190c(&uStack_e8,uStack_e8);
    auStack_e0[0] = OutlineModule__GetMaskMaterial_254ec78(param_7,param_11,param_10);
    thunk_FUN_021f190c(auStack_e0,auStack_e0[0]);
    func_0x04608620(&uStack_d0,&uStack_120,0x48);
    puVar2 = PTR_DAT_049c2478;
    lVar3 = *(long *)(param_7 + 0x28);
    if (lVar3 != 0) {
      func_0x04608620(auStack_168,&uStack_120,0x48);
                    /* try { // try from 0264eb40 to 0274eb4f has its CatchHandler @ 0264eb50 */
      FUN_02333498(lVar3,auStack_168,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0264eacc with catch @ 0264eb50
                       catch() { ... } // from try @ 0264eb40 with catch @ 0264eb50 */
                    /* try { // try from 0264eb54 to 0274eb57 has its CatchHandler @ 0264eb60 */
                    /* try { // try from 0264eb58 to 0274eb63 has its CatchHandler @ 0264e818 */
      func_0x04608620(param_1,&uStack_d0,0x48);
                    /* catch() { ... } // from try @ 0264eb54 with catch @ 0264eb60 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

