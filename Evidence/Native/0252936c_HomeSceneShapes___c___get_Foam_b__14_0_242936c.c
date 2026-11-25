/* IL2CPP: HomeSceneShapes.<>c$$<get_Foam>b__14_0
float HomeSceneShapes___c___get_Foam_b__14_0 (HomeSceneShapes___c_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneShapes.<>c$$<get_Foam>b__14_0
   float HomeSceneShapes___c___get_Foam_b__14_0 (HomeSceneShapes___c_o* __this, float u, float v,
   const MethodInfo* method); */

void HomeSceneShapes___c___get_Foam_b__14_0_242936c(undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_18;
  float fStack_14;
  
  puVar4 = PTR_DAT_049be640;
                    /* try { // try from 02529388 to 0262938f has its CatchHandler @ 0252947c */
  if ((bRam0000000004f4b7ad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049be640);
    bRam0000000004f4b7ad = 1;
  }
                    /* try { // try from 025293b8 to 026293bb has its CatchHandler @ 02529434 */
                    /* try { // try from 025293bc to 026293c7 has its CatchHandler @ 02529438 */
  _uStack_18 = CONCAT44(param_2,param_1);
                    /* try { // try from 025293d8 to 026293db has its CatchHandler @ 02529478 */
                    /* try { // try from 025293dc to 0262942b has its CatchHandler @ 02529318 */
  fVar9 = ABS(param_2 + _UNK_013aa6a0) / _UNK_013aa6a0 + 1.0;
  fVar10 = 1.0;
  if (fVar9 <= 1.0) {
    fVar10 = fVar9;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar9) {
    fVar11 = fVar10 * _UNK_013aa8a8;
  }
  lVar5 = FUN_021f04e4(*(undefined8 *)puVar4,5);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(float *)(lVar5 + 0x20) = fVar11;
      uVar3 = _UNK_013aa7b0;
      uVar2 = _UNK_013aa770;
      uVar1 = _UNK_013aa46c;
                    /* try { // try from 0252942c to 02629433 has its CatchHandler @ 02529478 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025293b8 with catch @ 02529434
                       try { // try from 02529434 to 02629457 has its CatchHandler @ 02529318 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025293bc with catch @ 02529438
                        */
      fVar9 = (float)HomeSceneShapes___get_Foam_g__Dash_14_1_2428ec0
                               (_UNK_013aa46c,_UNK_013aa770,_UNK_013aa46c,_UNK_013aa7b0,&uStack_18);
      fVar10 = _UNK_013aa540;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 02529458 to 0262945b has its CatchHandler @ 02529464 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02529458 with catch @ 02529464
                        */
        *(float *)(lVar5 + 0x24) = fVar9 * _UNK_013aa540;
                    /* try { // try from 0252946c to 02629473 has its CatchHandler @ 025294b8 */
        fVar9 = (float)HomeSceneShapes___get_Foam_g__Dash_14_1_2428ec0
                                 (0x3f000000,uVar2,uVar1,uVar3,&uStack_18);
        uVar2 = _UNK_013aa8bc;
        uVar1 = _UNK_013aa568;
                    /* try { // try from 02529474 to 0262949b has its CatchHandler @ 02529318 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025293d8 with catch @ 02529478
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0252942c with catch @ 02529478
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02529388 with catch @ 0252947c
                        */
        if (2 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 0252949c to 0262949f has its CatchHandler @ 025294a4 */
                    /* catch() { ... } // from try @ 0252949c with catch @ 025294a4 */
                    /* try { // try from 025294a8 to 026294af has its CatchHandler @ 025294b8 */
          *(float *)(lVar5 + 0x28) = fVar9 * fVar10;
                    /* try { // try from 025294b0 to 026294bb has its CatchHandler @ 02529318 */
          fVar9 = (float)HomeSceneShapes___get_Foam_g__Dash_14_1_2428ec0
                                   (_UNK_013aa838,uVar2,uVar1,uVar1,&uStack_18);
          fVar10 = _UNK_013aa59c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0252946c with catch @ 025294b8
                       catch(type#2 @ 00000000) { ... } // from try @ 025294a8 with catch @ 025294b8
                        */
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(float *)(lVar5 + 0x2c) = fVar9 * _UNK_013aa59c;
            fVar9 = (float)HomeSceneShapes___get_Foam_g__Dash_14_1_2428ec0
                                     (_UNK_013aa4f4,uVar2,uVar1,uVar1,&uStack_18);
            uVar6 = (uint)*(ulong *)(lVar5 + 0x18);
            if (4 < uVar6) {
              *(float *)(lVar5 + 0x30) = fVar9 * fVar10;
              if (1 < (int)uVar6) {
                lVar7 = (*(ulong *)(lVar5 + 0x18) & 0xffffffff) - 1;
                pfVar8 = (float *)(lVar5 + 0x24);
                fVar10 = *(float *)(lVar5 + 0x20);
                do {
                  fVar9 = *pfVar8;
                  if (*pfVar8 <= fVar10) {
                    fVar9 = fVar10;
                  }
                  lVar7 = lVar7 + -1;
                  pfVar8 = pfVar8 + 1;
                  fVar10 = fVar9;
                } while (lVar7 != 0);
              }
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

