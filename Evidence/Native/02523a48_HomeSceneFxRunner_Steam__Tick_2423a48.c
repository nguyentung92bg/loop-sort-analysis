/* IL2CPP: HomeSceneFxRunner.Steam$$Tick
void HomeSceneFxRunner_Steam__Tick (HomeSceneFxRunner_Steam_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Steam$$Tick
   void HomeSceneFxRunner_Steam__Tick (HomeSceneFxRunner_Steam_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Steam__Tick_2423a48(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_d0;
  undefined4 uStack_cc;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_84;
  
  if ((bRam0000000004f4b78d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c32b0);
    FUN_021f03f8(PTR_DAT_049c32b8);
    FUN_021f03f8(PTR_DAT_049c32c0);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c32c8);
    bRam0000000004f4b78d = 1;
  }
  puVar11 = PTR_DAT_049c32c0;
  puVar10 = PTR_DAT_049c32b8;
  puVar9 = PTR_DAT_049c32b0;
  puVar8 = PTR_DAT_049c3110;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    fVar17 = *(float *)(*(long *)(param_2 + 0x18) + 0x44);
    fVar3 = 6.0;
    if (0.0 <= fVar17) {
      fVar3 = fVar17;
    }
    if (*(long *)(param_2 + 0x10) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x10),&fStack_d0,*(undefined8 *)PTR_DAT_049c32c8);
      fVar7 = _UNK_013aa7ac;
      fVar6 = _UNK_013aa62c;
      fVar5 = _UNK_013aa5c4;
      fVar17 = _UNK_013aa4f4;
      fVar22 = 1.0;
      uStack_a8 = uStack_c8;
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      while( true ) {
        uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&uStack_b0,*(undefined8 *)puVar10);
        if ((uVar12 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_b0,*(undefined8 *)puVar9);
                    /* try { // try from 02523dd4 to 02623e97 has its CatchHandler @ 02523dd4
                       catch() { ... } // from try @ 02523dd4 with catch @ 02523dd4
                       catch() { ... } // from try @ 02523f88 with catch @ 02523dd4
                       catch() { ... } // from try @ 02524064 with catch @ 02523dd4
                       catch() { ... } // from try @ 025240d0 with catch @ 02523dd4
                       catch() { ... } // from try @ 02524150 with catch @ 02523dd4 */
          return;
        }
        lVar16 = *(long *)puVar11;
        lVar13 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar13 + 0x135);
        lVar14 = lVar13;
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar13 = *(long *)(lVar16 + 0x20);
          uVar2 = *(ushort *)(lVar13 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar15 = thunk_FUN_0224e54c(&uStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&fStack_d0,uVar15,uVar1);
        uVar12 = uStack_c8;
        plVar4 = (long *)CONCAT44(uStack_cc,fStack_d0);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar18 = (float)HomeSceneView__Phase_24280b4(param_1,uVar12 >> 0x20,fVar3,0);
        lVar14 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fStack_d0 = fVar18;
        (**(code **)(lVar14 + 0x18))
                  (*(undefined8 *)(lVar14 + 0x40),&fStack_d0,&fStack_84,
                   *(undefined8 *)(lVar14 + 0x28));
        fVar21 = fStack_84;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar14 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar4,0);
        lVar13 = *(long *)(param_2 + 0x18);
        if (lVar13 == 0) break;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                  (fVar21 * (float)uVar12 + *(float *)(lVar13 + 0x1c),
                   -(*(float *)(lVar13 + 0x20) - fVar21 * *(float *)(param_2 + 0x20)),lVar14,0);
        fVar19 = fVar22;
        if (fVar21 <= 1.0) {
          fVar19 = fVar21;
        }
        fVar20 = 0.5;
        if (0.0 <= fVar21) {
          fVar20 = fVar19 * fVar7 + 0.5;
        }
        lVar14 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar4,0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__set_localScale_3c2ddfc(fVar20,fVar20,0x3f800000,lVar14,0);
        lVar14 = *(long *)puVar8;
        fVar21 = *(float *)(param_2 + 0x24);
        if (fVar6 <= fVar18) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            FUN_021f0574();
            lVar14 = *(long *)puVar8;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fStack_d0 = (fVar18 + fVar5) / fVar17;
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),&fStack_d0,&fStack_84,
                     *(undefined8 *)(lVar14 + 0x28));
          fVar18 = fVar22;
          if (fStack_84 <= 1.0) {
            fVar18 = fStack_84;
          }
          fVar19 = 0.0;
          if (0.0 <= fStack_84) {
            fVar19 = fVar18;
          }
          fVar21 = fVar21 + (0.0 - fVar21) * fVar19;
        }
        else {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            FUN_021f0574();
            lVar14 = *(long *)puVar8;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fStack_d0 = fVar18 / fVar6;
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),&fStack_d0,&fStack_84,
                     *(undefined8 *)(lVar14 + 0x28));
          fVar18 = fVar22;
          if (fStack_84 <= 1.0) {
            fVar18 = fStack_84;
          }
          fVar19 = 0.0;
          if (0.0 <= fStack_84) {
            fVar19 = fVar18;
          }
          fVar21 = fVar21 * fVar19 + 0.0;
        }
        (**(code **)(*plVar4 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,fVar21 * fVar17,plVar4,
                   *(undefined8 *)(*plVar4 + 0x2b0));
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

