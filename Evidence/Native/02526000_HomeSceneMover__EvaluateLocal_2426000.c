/* IL2CPP: HomeSceneMover$$EvaluateLocal
void HomeSceneMover__EvaluateLocal (HomeSceneMover_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneMover$$EvaluateLocal
   void HomeSceneMover__EvaluateLocal (HomeSceneMover_o* __this, float t, const MethodInfo* method);
    */

void HomeSceneMover__EvaluateLocal_2426000(float param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000004f4b798 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3390);
    FUN_021f03f8(PTR_DAT_049c3398);
    FUN_021f03f8(PTR_DAT_049c33a0);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c33a8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b798 = 1;
  }
  puVar2 = PTR_DAT_049c3110;
  lVar8 = *(long *)(param_2 + 0x10);
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (lVar8 == 0) goto LAB_025263f8;
  if (*(char *)(lVar8 + 0x70) != '\0') {
                    /* try { // try from 0252609c to 026260a7 has its CatchHandler @ 025262c8 */
    lVar5 = *(long *)PTR_DAT_049c3110;
    uVar16 = *(undefined4 *)(lVar8 + 0x78);
    uVar15 = *(undefined4 *)(lVar8 + 0x7c);
                    /* try { // try from 025260a8 to 0262610b has its CatchHandler @ 02525fc8 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    fVar11 = (float)HomeSceneView__Alternate_24280f0
                              (param_1,uVar15,uVar16,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10)
                               ,0);
    if ((*(long *)(param_2 + 0x10) == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_025263f8;
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    fVar12 = *(float *)(*(long *)(param_2 + 0x10) + 0x74);
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar13;
    }
                    /* try { // try from 0252610c to 0262612b has its CatchHandler @ 025262c4 */
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (0,-(fVar14 * (fVar12 + fVar12) - fVar12),*(long *)(param_2 + 0x20),0);
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 == 0) goto LAB_025263f8;
  }
  if (*(char *)(lVar8 + 0x58) != '\0') {
    lVar5 = *(long *)puVar2;
    uVar16 = *(undefined4 *)(lVar8 + 0x60);
    uVar15 = *(undefined4 *)(lVar8 + 100);
                    /* try { // try from 02526134 to 0262614b has its CatchHandler @ 025261c8 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
                    /* try { // try from 0252614c to 02626153 has its CatchHandler @ 025261c4 */
    fVar11 = (float)HomeSceneView__Alternate_24280f0
                              (param_1,uVar15,uVar16,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10)
                               ,0);
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_025263f8;
                    /* try { // try from 02526168 to 0262616f has its CatchHandler @ 025261c0 */
    lVar8 = *(long *)(param_2 + 0x28);
                    /* try { // try from 02526170 to 0262618f has its CatchHandler @ 025261bc */
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    fVar12 = *(float *)(*(long *)(param_2 + 0x10) + 0x5c);
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar13;
    }
                    /* try { // try from 02526190 to 026261b3 has its CatchHandler @ 025261b8 */
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
              (0,0,(fVar14 * (fVar12 + fVar12) - fVar12) * _UNK_013aa730,0);
    if (lVar8 == 0) goto LAB_025263f8;
                    /* try { // try from 025261b4 to 026261e3 has its CatchHandler @ 02525fc8 */
                    /* catch() { ... } // from try @ 02526190 with catch @ 025261b8 */
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
  }
                    /* catch() { ... } // from try @ 02526170 with catch @ 025261bc */
                    /* catch() { ... } // from try @ 02526168 with catch @ 025261c0 */
                    /* catch() { ... } // from try @ 0252614c with catch @ 025261c4 */
  uVar10 = *(undefined8 *)(param_2 + 0x30);
                    /* catch() { ... } // from try @ 02526134 with catch @ 025261c8 */
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 025261e4 to 026261fb has its CatchHandler @ 025262b4 */
  uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 == 0) goto LAB_025263f8;
    uVar16 = *(undefined4 *)(lVar8 + 0x84);
    uVar15 = *(undefined4 *)(lVar8 + 0x88);
    lVar8 = *(long *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 02526218 to 0262621b has its CatchHandler @ 025262a8 */
    fVar11 = (float)HomeSceneView__Phase_24280b4(param_1,uVar15,uVar16,0);
                    /* try { // try from 02526234 to 02626243 has its CatchHandler @ 025262b0 */
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar11 * -360.0 * _UNK_013aa948,0);
    if (lVar8 == 0) goto LAB_025263f8;
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
  }
  lVar8 = *(long *)(param_2 + 0x10);
                    /* try { // try from 0252625c to 02626263 has its CatchHandler @ 025262ac */
  if (lVar8 != 0) {
                    /* try { // try from 02526264 to 02626283 has its CatchHandler @ 02525fc8 */
    if ((1 < (int)*(uint *)(lVar8 + 0x18)) && (0.0 < *(float *)(lVar8 + 0x1c))) {
      lVar5 = *(long *)(lVar8 + 0x20);
      if (lVar5 == 0) goto LAB_025263f8;
                    /* try { // try from 02526284 to 02626293 has its CatchHandler @ 025262b4 */
      lVar9 = *(long *)(lVar5 + 0x18);
      uVar7 = *(uint *)(lVar8 + 0x18);
      if (lVar9 != 0) {
        uVar7 = (uint)lVar9;
      }
                    /* try { // try from 02526294 to 02626297 has its CatchHandler @ 025262a4 */
                    /* try { // try from 02526298 to 0262629b has its CatchHandler @ 025262a0 */
      fVar11 = (float)(int)uVar7;
                    /* try { // try from 0252629c to 0262629f has its CatchHandler @ 025262ac */
                    /* catch() { ... } // from try @ 02526298 with catch @ 025262a0 */
      fVar13 = (float)(int)(*(float *)(lVar8 + 0x1c) * (param_1 - *(float *)(param_2 + 0xa4)));
                    /* catch() { ... } // from try @ 02526294 with catch @ 025262a4 */
                    /* catch() { ... } // from try @ 02526218 with catch @ 025262a8 */
                    /* catch() { ... } // from try @ 0252625c with catch @ 025262ac
                       catch() { ... } // from try @ 0252629c with catch @ 025262ac */
                    /* catch() { ... } // from try @ 02526234 with catch @ 025262b0 */
      fVar13 = fVar13 - (float)(int)(fVar13 / fVar11) * fVar11;
                    /* catch() { ... } // from try @ 025261e4 with catch @ 025262b4
                       catch() { ... } // from try @ 02526284 with catch @ 025262b4 */
                    /* try { // try from 025262bc to 026262bf has its CatchHandler @ 02526308 */
      if (fVar13 <= fVar11) {
        fVar11 = fVar13;
      }
                    /* try { // try from 025262c0 to 026262e7 has its CatchHandler @ 02525fc8 */
      fVar14 = 0.0;
                    /* catch() { ... } // from try @ 0252610c with catch @ 025262c4 */
      if (0.0 <= fVar13) {
        fVar14 = fVar11;
      }
                    /* catch() { ... } // from try @ 0252609c with catch @ 025262c8 */
      uVar7 = 0x80000000;
      if (fVar14 != INFINITY) {
        uVar7 = (int)fVar14;
      }
      if (lVar9 != 0) {
        if ((uint)lVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025263fc to 02626403 has its CatchHandler @ 02526460 */
          FUN_021f06a8();
        }
                    /* try { // try from 025262e8 to 026262eb has its CatchHandler @ 025262f4 */
        uVar7 = *(uint *)(lVar5 + (long)(int)uVar7 * 4 + 0x20);
      }
                    /* catch() { ... } // from try @ 025262e8 with catch @ 025262f4 */
      HomeSceneMover__SetFrame_242583c(param_2,uVar7);
    }
    puVar4 = PTR_DAT_049c33a0;
    puVar3 = PTR_DAT_049c3398;
    puVar2 = PTR_DAT_049c3390;
                    /* try { // try from 025262f8 to 026262ff has its CatchHandler @ 02526308 */
    if (*(long *)(param_2 + 0x88) != 0) {
                    /* try { // try from 02526300 to 0262630b has its CatchHandler @ 02525fc8 */
                    /* catch() { ... } // from try @ 025262bc with catch @ 02526308
                       catch() { ... } // from try @ 025262f8 with catch @ 02526308 */
                    /* try { // try from 0252630c to 02626367 has its CatchHandler @ 0252630c
                       catch() { ... } // from try @ 0252630c with catch @ 0252630c
                       catch() { ... } // from try @ 02526404 with catch @ 0252630c
                       catch() { ... } // from try @ 02526454 with catch @ 0252630c
                       catch() { ... } // from try @ 02526498 with catch @ 0252630c */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x88),&uStack_60,*(undefined8 *)PTR_DAT_049c33a8);
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_60,*(undefined8 *)puVar2);
                    /* try { // try from 025263ec to 026263f3 has its CatchHandler @ 02526458 */
          return;
        }
        lVar9 = *(long *)puVar4;
        lVar5 = *(long *)(lVar9 + 0x20);
        uVar1 = *(ushort *)(lVar5 + 0x135);
        lVar8 = lVar5;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar5 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 02526368 to 02626373 has its CatchHandler @ 02526464 */
          uVar1 = *(ushort *)(lVar5 + 0x135);
        }
        uVar15 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_02229718();
        }
                    /* try { // try from 02526398 to 0262639b has its CatchHandler @ 02526454 */
        uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x60)
        ;
                    /* try { // try from 025263a8 to 026263cb has its CatchHandler @ 0252645c */
        func_0x04608620(&plStack_48,uVar10,uVar15);
        if (plStack_48 == (long *)0x0) break;
        (**(code **)(*plStack_48 + 0x178))(param_1,plStack_48,*(undefined8 *)(*plStack_48 + 0x180));
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
LAB_025263f8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

