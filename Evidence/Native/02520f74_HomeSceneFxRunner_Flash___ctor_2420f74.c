/* IL2CPP: HomeSceneFxRunner.Flash$$.ctor
void HomeSceneFxRunner_Flash___ctor (HomeSceneFxRunner_Flash_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Flash$$.ctor
   void HomeSceneFxRunner_Flash___ctor (HomeSceneFxRunner_Flash_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneFxRunner_Flash___ctor_2420f74
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  
  puVar5 = PTR_DAT_049c3128;
  puVar4 = PTR_DAT_049c3120;
                    /* try { // try from 02520f80 to 02620faf has its CatchHandler @ 02520db8 */
                    /* try { // try from 02520fb0 to 02620fb7 has its CatchHandler @ 02521174 */
                    /* try { // try from 02520fc8 to 02620fe7 has its CatchHandler @ 0252121c */
  if ((bRam0000000004f4b780 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3130);
    FUN_021f03f8(PTR_DAT_049c3128);
                    /* try { // try from 02520fe8 to 026210b7 has its CatchHandler @ 02520db8 */
    FUN_021f03f8(PTR_DAT_049c3120);
    FUN_021f03f8(PTR_DAT_049be640);
    FUN_021f03f8(PTR_DAT_049c3138);
    FUN_021f03f8(PTR_DAT_049c3140);
    bRam0000000004f4b780 = 1;
  }
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar6,*(undefined8 *)puVar5);
  plVar11 = (long *)(param_1 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_021f190c(plVar11,lVar6);
  System_Object___ctor_3142338(param_1,0);
  puVar4 = PTR_DAT_049c3130;
  fVar3 = _UNK_013aa8ac;
  fVar2 = _UNK_013aa838;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x70);
    fVar17 = 22.0;
    if (0.0 <= *(float *)(param_2 + 0x5c)) {
      fVar17 = *(float *)(param_2 + 0x5c);
    }
    if (lVar6 != 0) {
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar13 = 0;
        uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        puVar14 = (undefined4 *)(lVar6 + 0x24);
        do {
          if (uVar10 <= uVar13) {
LAB_0252125c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02520f60 with catch @ 0252125c */
            FUN_021f06a8();
          }
          if (param_4 == (long *)0x0) goto LAB_02521258;
          uVar18 = puVar14[-1];
          uVar19 = *puVar14;
          fVar21 = *(float *)(param_2 + 100);
          fVar22 = *(float *)(param_2 + 0x68);
                    /* try { // try from 025210b8 to 026210bb has its CatchHandler @ 02521168 */
          dVar15 = (double)(**(code **)(*param_4 + 0x1b8))
                                     (param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* try { // try from 025210c8 to 026210eb has its CatchHandler @ 0252117c */
          uVar7 = HomeSceneShapes__get_Flash_2428d94(0);
          plVar8 = (long *)HomeSceneShapes__Add_2426acc
                                     (0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_3,
                                      *(undefined8 *)PTR_DAT_049c3140,uVar7,0);
                    /* try { // try from 02521100 to 02621107 has its CatchHandler @ 02521170 */
          uVar7 = HomeSceneShapes__get_Screen_2428a54(0);
                    /* try { // try from 02521108 to 02621127 has its CatchHandler @ 02521180 */
          if (plVar8 == (long *)0x0) goto LAB_02521258;
          (**(code **)(*plVar8 + 0x348))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x350));
                    /* try { // try from 02521134 to 0262113b has its CatchHandler @ 0252116c */
          HomeSceneFxRunner__Centred_24227d0(uVar18,uVar19,fVar17,fVar17,plVar8);
                    /* try { // try from 0252113c to 02621163 has its CatchHandler @ 02520db8 */
          lVar12 = *plVar11;
          fVar20 = fVar3;
          if (0.0 <= *(float *)(param_2 + 0x78)) {
            fVar20 = *(float *)(param_2 + 0x78);
          }
          dVar16 = (double)(**(code **)(*param_4 + 0x1b8))
                                     (param_4,*(undefined8 *)(*param_4 + 0x1c0));
                    /* try { // try from 02521164 to 02621167 has its CatchHandler @ 0252117c */
                    /* catch() { ... } // from try @ 025210b8 with catch @ 02521168
                       try { // try from 02521168 to 026211ab has its CatchHandler @ 02520db8 */
                    /* catch() { ... } // from try @ 02521134 with catch @ 0252116c */
                    /* catch() { ... } // from try @ 02521100 with catch @ 02521170 */
          lVar9 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049be640,4);
                    /* catch() { ... } // from try @ 02520fb0 with catch @ 02521174 */
          if (lVar9 == 0) goto LAB_02521258;
                    /* catch() { ... } // from try @ 02520f48 with catch @ 02521178 */
          uVar1 = *(uint *)(lVar9 + 0x18);
                    /* catch() { ... } // from try @ 025210c8 with catch @ 0252117c
                       catch() { ... } // from try @ 02521164 with catch @ 0252117c */
                    /* catch() { ... } // from try @ 02521108 with catch @ 02521180 */
          if (uVar1 < 2) goto LAB_0252125c;
          fVar21 = fVar21 + (fVar22 - fVar21) * (float)dVar15;
          *(float *)(lVar9 + 0x24) = (fVar20 / fVar21) * fVar2;
                    /* try { // try from 025211ac to 026211af has its CatchHandler @ 025212a0 */
                    /* try { // try from 025211b0 to 0262120b has its CatchHandler @ 02520db8 */
          if ((uVar1 == 2) || (*(float *)(lVar9 + 0x28) = fVar20 / fVar21, uVar1 < 4))
          goto LAB_0252125c;
          *(undefined4 *)(lVar9 + 0x2c) = 0x3f800000;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          fStack_a8 = -((float)dVar16 * fVar21);
          fStack_a4 = fVar21;
          System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a0950c
                    (&uStack_c0,plVar8,&fStack_a4,&fStack_a8,lVar9,*(undefined8 *)PTR_DAT_049c3138);
          if (lVar12 == 0) goto LAB_02521258;
          uStack_d8 = uStack_b8;
          uStack_e0 = uStack_c0;
                    /* try { // try from 0252120c to 0262121b has its CatchHandler @ 025212a0 */
          uStack_d0 = uStack_b0;
          FUN_02333498(lVar12,&uStack_e0,*(undefined8 *)puVar4);
          uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar13 = uVar13 + 1;
                    /* catch() { ... } // from try @ 02520fc8 with catch @ 0252121c
                       try { // try from 0252121c to 02621237 has its CatchHandler @ 02520db8 */
          puVar14 = puVar14 + 3;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
                    /* try { // try from 02521238 to 0262123b has its CatchHandler @ 0252124c */
                    /* try { // try from 0252123c to 0262124f has its CatchHandler @ 02520db8 */
                    /* catch() { ... } // from try @ 02521238 with catch @ 0252124c */
                    /* try { // try from 02521250 to 02621257 has its CatchHandler @ 025212b0 */
      return;
    }
  }
LAB_02521258:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02521258 to 02621277 has its CatchHandler @ 02520db8 */
  FUN_021f06a0();
}

