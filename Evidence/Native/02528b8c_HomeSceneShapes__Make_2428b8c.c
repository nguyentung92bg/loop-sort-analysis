/* IL2CPP: HomeSceneShapes$$Make
UnityEngine_Texture2D_o* HomeSceneShapes__Make (int32_t w, int32_t h, System_Func_float__float__float__o* alpha, int32_t wrap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$Make
   UnityEngine_Texture2D_o* HomeSceneShapes__Make (int32_t w, int32_t h,
   System_Func_float__float__float__o* alpha, int32_t wrap, const MethodInfo* method); */

long HomeSceneShapes__Make_2428b8c(uint param_1,uint param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  puVar2 = PTR_DAT_049b8c98;
  if ((bRam0000000004f4b7a9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b9070);
    FUN_021f03f8(PTR_DAT_049b8c98);
    bRam0000000004f4b7a9 = 1;
  }
                    /* try { // try from 02528bf8 to 02628bff has its CatchHandler @ 02528cf4 */
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* try { // try from 02528c10 to 02628c1b has its CatchHandler @ 02528cf0 */
  UnityEngine_Texture2D___ctor_3bfb1d4(lVar3,param_1,param_2,4,0,0);
  puVar2 = PTR_DAT_049b9070;
  if (lVar3 != 0) {
                    /* try { // try from 02528c2c to 02628c37 has its CatchHandler @ 02528ce8 */
    UnityEngine_Texture__set_wrapMode_3bf5c84(lVar3,param_4,0);
                    /* try { // try from 02528c44 to 02628c63 has its CatchHandler @ 02528cec */
    UnityEngine_Texture__set_filterMode_3bf63a4(lVar3,1,0);
    lVar4 = FUN_021f04e4(*(undefined8 *)puVar2,param_2 * param_1);
    if (0 < (int)param_2) {
      uVar5 = 0;
      uVar8 = 0;
                    /* try { // try from 02528c88 to 02628c93 has its CatchHandler @ 02528d04 */
      do {
                    /* try { // try from 02528c94 to 02628cdb has its CatchHandler @ 02528b30 */
        if (0 < (int)param_1) {
          if (param_3 == 0) goto LAB_02528d8c;
          lVar6 = (ulong)uVar5 << 0x20;
          uVar7 = 0;
          do {
            fStack_84 = ((float)(int)uVar7 + 0.5) / (float)(int)param_1;
            fStack_88 = ((float)(int)uVar8 + 0.5) / (float)(int)param_2;
            (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&fStack_84,&fStack_88,&fStack_8c,
                       *(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 02528cdc to 02628cdf has its CatchHandler @ 02528d00 */
            if (lVar4 == 0) goto LAB_02528d8c;
                    /* try { // try from 02528ce0 to 02628ce3 has its CatchHandler @ 02528cfc */
                    /* try { // try from 02528ce4 to 02628ce7 has its CatchHandler @ 02528cf8 */
                    /* catch() { ... } // from try @ 02528c2c with catch @ 02528ce8
                       try { // try from 02528ce8 to 02628d27 has its CatchHandler @ 02528b30 */
                    /* catch() { ... } // from try @ 02528c44 with catch @ 02528cec */
            if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar5 + uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
                    /* catch() { ... } // from try @ 02528c10 with catch @ 02528cf0 */
                    /* catch() { ... } // from try @ 02528bf8 with catch @ 02528cf4 */
                    /* catch() { ... } // from try @ 02528ce4 with catch @ 02528cf8 */
            lVar1 = lVar6 >> 0x1e;
                    /* catch() { ... } // from try @ 02528ce0 with catch @ 02528cfc */
            uVar7 = uVar7 + 1;
                    /* catch() { ... } // from try @ 02528cdc with catch @ 02528d00 */
            lVar6 = lVar6 + 0x100000000;
                    /* catch() { ... } // from try @ 02528c88 with catch @ 02528d04 */
            *(uint *)(lVar4 + lVar1 + 0x20) = (int)(fStack_8c * 255.0) << 0x18 | 0xffffff;
          } while (param_1 != uVar7);
        }
                    /* try { // try from 02528d28 to 02628d3f has its CatchHandler @ 02528ee8 */
        uVar8 = uVar8 + 1;
        uVar5 = uVar5 + param_1;
      } while (uVar8 != param_2);
    }
                    /* try { // try from 02528d40 to 02628daf has its CatchHandler @ 02528b30 */
    UnityEngine_Texture2D__SetPixels32_3bfbf78(lVar3,lVar4,0);
    UnityEngine_Texture2D__Apply_3bfbb6c(lVar3,0,1,0);
    return lVar3;
  }
LAB_02528d8c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

