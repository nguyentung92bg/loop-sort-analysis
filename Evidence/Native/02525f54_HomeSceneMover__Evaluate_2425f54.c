/* IL2CPP: HomeSceneMover$$Evaluate
void HomeSceneMover__Evaluate (HomeSceneMover_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneMover$$Evaluate
   void HomeSceneMover__Evaluate (HomeSceneMover_o* __this, float t, const MethodInfo* method); */

void HomeSceneMover__Evaluate_2425f54(float param_1,long param_2)

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
  long *aplStack_48 [3];
  
                    /* try { // try from 02525f70 to 02625f73 has its CatchHandler @ 02525f78 */
                    /* try { // try from 02525f74 to 02625f77 has its CatchHandler @ 02525f80 */
  if ((bRam0000000004f4b797 & 1) == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02525f70 with catch @ 02525f78
                       try { // try from 02525f78 to 02625f9f has its CatchHandler @ 02525e0c */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02525ee4 with catch @ 02525f7c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02525f04 with catch @ 02525f80
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 02525f74 with catch @ 02525f80
                        */
    FUN_021f03f8(PTR_DAT_049c3110);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02525ec4 with catch @ 02525f84
                        */
    bRam0000000004f4b797 = 1;
  }
  if (*(long *)(param_2 + 0x90) == 0) {
LAB_02525ffc:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (1 < *(int *)(*(long *)(param_2 + 0x90) + 0x18)) {
                    /* try { // try from 02525fa0 to 02625fa3 has its CatchHandler @ 02525fb0 */
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 == 0) goto LAB_02525ffc;
                    /* catch() { ... } // from try @ 02525fa0 with catch @ 02525fb0 */
    uVar16 = *(undefined4 *)(lVar8 + 0x50);
    uVar15 = *(undefined4 *)(lVar8 + 0x54);
                    /* try { // try from 02525fb4 to 02625fbb has its CatchHandler @ 02525fc4 */
                    /* try { // try from 02525fbc to 02625fc7 has its CatchHandler @ 02525e0c */
    if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02525fb4 with catch @ 02525fc4
                        */
                    /* try { // try from 02525fc8 to 0262609b has its CatchHandler @ 02525fc8
                       catch() { ... } // from try @ 02525fc8 with catch @ 02525fc8
                       catch() { ... } // from try @ 025260a8 with catch @ 02525fc8
                       catch() { ... } // from try @ 025261b4 with catch @ 02525fc8
                       catch() { ... } // from try @ 02526264 with catch @ 02525fc8
                       catch() { ... } // from try @ 025262c0 with catch @ 02525fc8
                       catch() { ... } // from try @ 02526300 with catch @ 02525fc8 */
    HomeSceneView__Phase_24280b4(param_1,uVar15,uVar16,0);
    HomeSceneMover__EvaluatePath_2425acc(param_2);
  }
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
    lVar5 = *(long *)PTR_DAT_049c3110;
    uVar16 = *(undefined4 *)(lVar8 + 0x78);
    uVar15 = *(undefined4 *)(lVar8 + 0x7c);
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
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (0,-(fVar14 * (fVar12 + fVar12) - fVar12),*(long *)(param_2 + 0x20),0);
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 == 0) goto LAB_025263f8;
  }
  if (*(char *)(lVar8 + 0x58) != '\0') {
    lVar5 = *(long *)puVar2;
    uVar16 = *(undefined4 *)(lVar8 + 0x60);
    uVar15 = *(undefined4 *)(lVar8 + 100);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar2;
    }
    fVar11 = (float)HomeSceneView__Alternate_24280f0
                              (param_1,uVar15,uVar16,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10)
                               ,0);
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_025263f8;
    lVar8 = *(long *)(param_2 + 0x28);
    fVar13 = 1.0;
    if (fVar11 <= 1.0) {
      fVar13 = fVar11;
    }
    fVar12 = *(float *)(*(long *)(param_2 + 0x10) + 0x5c);
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar13;
    }
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
              (0,0,(fVar14 * (fVar12 + fVar12) - fVar12) * _UNK_013aa730,0);
    if (lVar8 == 0) goto LAB_025263f8;
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
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
    fVar11 = (float)HomeSceneView__Phase_24280b4(param_1,uVar15,uVar16,0);
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4(0,0,fVar11 * -360.0 * _UNK_013aa948,0);
    if (lVar8 == 0) goto LAB_025263f8;
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar8,0);
  }
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 != 0) {
    if ((1 < (int)*(uint *)(lVar8 + 0x18)) && (0.0 < *(float *)(lVar8 + 0x1c))) {
      lVar5 = *(long *)(lVar8 + 0x20);
      if (lVar5 == 0) goto LAB_025263f8;
      lVar9 = *(long *)(lVar5 + 0x18);
      uVar7 = *(uint *)(lVar8 + 0x18);
      if (lVar9 != 0) {
        uVar7 = (uint)lVar9;
      }
      fVar11 = (float)(int)uVar7;
      fVar13 = (float)(int)(*(float *)(lVar8 + 0x1c) * (param_1 - *(float *)(param_2 + 0xa4)));
      fVar13 = fVar13 - (float)(int)(fVar13 / fVar11) * fVar11;
      if (fVar13 <= fVar11) {
        fVar11 = fVar13;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar11;
      }
      uVar7 = 0x80000000;
      if (fVar14 != INFINITY) {
        uVar7 = (int)fVar14;
      }
      if (lVar9 != 0) {
        if ((uint)lVar9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        uVar7 = *(uint *)(lVar5 + (long)(int)uVar7 * 4 + 0x20);
      }
      HomeSceneMover__SetFrame_242583c(param_2,uVar7);
    }
    puVar4 = PTR_DAT_049c33a0;
    puVar3 = PTR_DAT_049c3398;
    puVar2 = PTR_DAT_049c3390;
    if (*(long *)(param_2 + 0x88) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x88),&uStack_60,*(undefined8 *)PTR_DAT_049c33a8);
      while( true ) {
        uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&uStack_60,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_60,*(undefined8 *)puVar2);
          return;
        }
        lVar9 = *(long *)puVar4;
        lVar5 = *(long *)(lVar9 + 0x20);
        uVar1 = *(ushort *)(lVar5 + 0x135);
        lVar8 = lVar5;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_02229718();
          lVar5 = *(long *)(lVar9 + 0x20);
          uVar1 = *(ushort *)(lVar5 + 0x135);
        }
        uVar15 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar5 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_60,
                                    *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(aplStack_48,uVar10,uVar15);
        if (aplStack_48[0] == (long *)0x0) break;
        (**(code **)(*aplStack_48[0] + 0x178))
                  (param_1,aplStack_48[0],*(undefined8 *)(*aplStack_48[0] + 0x180));
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
LAB_025263f8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

