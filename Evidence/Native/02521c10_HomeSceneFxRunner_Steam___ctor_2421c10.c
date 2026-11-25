/* IL2CPP: HomeSceneFxRunner.Steam$$.ctor
void HomeSceneFxRunner_Steam___ctor (HomeSceneFxRunner_Steam_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Steam$$.ctor
   void HomeSceneFxRunner_Steam___ctor (HomeSceneFxRunner_Steam_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, System_Random_o* random, const MethodInfo* method); */

void HomeSceneFxRunner_Steam___ctor_2421c10
               (long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_84;
  
  puVar3 = PTR_DAT_049c31a0;
  puVar2 = PTR_DAT_049c3198;
                    /* try { // try from 02521c60 to 02621cdb has its CatchHandler @ 02521c60
                       catch() { ... } // from try @ 02521c60 with catch @ 02521c60
                       catch() { ... } // from try @ 02521d48 with catch @ 02521c60
                       catch() { ... } // from try @ 02521d74 with catch @ 02521c60
                       catch() { ... } // from try @ 02521d8c with catch @ 02521c60 */
  if ((bRam0000000004f4b78c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31a8);
    FUN_021f03f8(PTR_DAT_049c31a0);
    FUN_021f03f8(PTR_DAT_049c3198);
    FUN_021f03f8(PTR_DAT_049c31b0);
    FUN_021f03f8(PTR_DAT_049c31b8);
    bRam0000000004f4b78c = 1;
  }
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar5,*(undefined8 *)puVar3);
  plVar7 = (long *)(param_1 + 0x10);
  *plVar7 = lVar5;
  thunk_FUN_021f190c(plVar7,lVar5);
  System_Object___ctor_3142338(param_1,0);
                    /* try { // try from 02521cdc to 02621cdf has its CatchHandler @ 02521d54 */
                    /* try { // try from 02521ce0 to 02621d03 has its CatchHandler @ 02521d50 */
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0x18),param_2);
  fVar10 = _UNK_013aa8a8;
  if (param_2 != 0) {
                    /* try { // try from 02521d04 to 02621d0b has its CatchHandler @ 02521d4c */
    fVar13 = 60.0;
    if (0.0 <= *(float *)(param_2 + 0xa0)) {
      fVar13 = *(float *)(param_2 + 0xa0);
    }
                    /* try { // try from 02521d0c to 02621d47 has its CatchHandler @ 02521d48 */
    fVar9 = 200.0;
    if (0.0 <= *(float *)(param_2 + 0xa4)) {
      fVar9 = *(float *)(param_2 + 0xa4);
    }
    *(float *)(param_1 + 0x20) = fVar9;
    if (0.0 <= *(float *)(param_2 + 0x58)) {
      fVar10 = *(float *)(param_2 + 0x58);
    }
    *(float *)(param_1 + 0x24) = fVar10;
    puVar4 = PTR_DAT_049c31b8;
    puVar3 = PTR_DAT_049c31b0;
    puVar2 = PTR_DAT_049c31a8;
    fVar9 = _UNK_013aa4f4;
    fVar10 = _UNK_013aa41c;
    iVar1 = 5;
    if (-1 < *(int *)(param_2 + 0x54)) {
      iVar1 = *(int *)(param_2 + 0x54);
    }
    if (0 < iVar1) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02521d0c with catch @ 02521d48
                       try { // try from 02521d48 to 02621d6f has its CatchHandler @ 02521c60 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02521d04 with catch @ 02521d4c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02521ce0 with catch @ 02521d50
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02521cdc with catch @ 02521d54
                        */
                    /* try { // try from 02521d70 to 02621d73 has its CatchHandler @ 02521d80 */
                    /* try { // try from 02521d74 to 02621d83 has its CatchHandler @ 02521c60 */
                    /* catch() { ... } // from try @ 02521d70 with catch @ 02521d80 */
      iVar8 = 0;
      fVar11 = 6.0;
                    /* try { // try from 02521d84 to 02621d8b has its CatchHandler @ 02521d94 */
      if (0.0 <= *(float *)(param_2 + 0x44)) {
        fVar11 = *(float *)(param_2 + 0x44);
      }
      do {
                    /* try { // try from 02521d8c to 02621d97 has its CatchHandler @ 02521c60 */
        uVar6 = HomeSceneShapes__get_SoftDisc_242699c(0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02521d84 with catch @ 02521d94
                        */
        uVar6 = HomeSceneShapes__Add_2426acc
                          (0x3f800000,0x3f800000,0x3f800000,0,param_3,*(undefined8 *)puVar4,uVar6,0)
        ;
        HomeSceneFxRunner__Centred_24227d0
                  (*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),fVar13,fVar13);
        if (param_4 == (long *)0x0) goto LAB_02521e78;
        lVar5 = *plVar7;
        dVar12 = (double)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
        uStack_b0 = 0;
        uStack_a8 = 0;
        fStack_84 = (-fVar11 * (float)iVar8) / (float)iVar1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar13 * ((float)dVar12 * fVar9 + fVar10));
        System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a05968
                  (&uStack_b0,uVar6,&uStack_a0,&fStack_84,*(undefined8 *)puVar3);
        if (lVar5 == 0) goto LAB_02521e78;
        uStack_98 = uStack_a8;
        uStack_a0 = uStack_b0;
        FUN_02333498(lVar5,&uStack_a0,*(undefined8 *)puVar2);
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    return;
  }
LAB_02521e78:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

