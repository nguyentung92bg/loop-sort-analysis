/* IL2CPP: HomeSceneSplash$$Tick
void HomeSceneSplash__Tick (HomeSceneSplash_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSplash$$Tick
   void HomeSceneSplash__Tick (HomeSceneSplash_o* __this, float t, const MethodInfo* method); */

void HomeSceneSplash__Tick_2427948(float param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  float fVar18;
  float fVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float fStack_34;
  
  if ((bRam0000000004f4b79f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3448);
    FUN_021f03f8(PTR_DAT_049c3450);
    FUN_021f03f8(PTR_DAT_049c3458);
    FUN_021f03f8(PTR_DAT_049c3330);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3460);
    bRam0000000004f4b79f = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    UnityEngine_UI_RawImage__set_uvRect_3edcf98
              ((*(float *)(param_2 + 0x44) * param_1) / *(float *)(param_2 + 0x48),0,
               *(undefined4 *)(param_2 + 0x18),0x3f800000,*(long *)(param_2 + 0x10),0);
    fVar5 = _UNK_013aa7ac;
    lVar22 = *(long *)(param_2 + 0x38);
    if (lVar22 != 0) {
      uVar1 = *(uint *)(lVar22 + 0x18);
      if (0 < (int)uVar1) {
        lVar24 = 0;
        do {
          if (uVar1 <= (uint)lVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar20 = *(long *)(lVar22 + 0x20 + lVar24 * 8);
          if (lVar20 == 0) goto LAB_02527ed4;
          UnityEngine_UI_RawImage__set_uvRect_3edcf98
                    (param_1 / (*(float *)(param_2 + 0x48) * fVar5),0,
                     *(undefined4 *)(param_2 + 0x40),0x3f800000,lVar20,0);
          uVar1 = *(uint *)(lVar22 + 0x18);
          lVar24 = lVar24 + 1;
        } while ((int)lVar24 < (int)uVar1);
      }
      uVar23 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_049c3330 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar5 = _UNK_013aa4b8;
      fVar30 = 1.0;
      HomeSceneSplash__Pulse_2427f94(param_1,_UNK_013aa4b8,0x3f800000,uVar23);
      fVar13 = _UNK_013aa8dc;
      fVar7 = _UNK_013aa540;
      HomeSceneSplash__Pulse_2427f94(param_1,*(undefined8 *)(param_2 + 0x28));
      puVar17 = PTR_DAT_049c3458;
      puVar16 = PTR_DAT_049c3450;
      puVar15 = PTR_DAT_049c3448;
      puVar14 = PTR_DAT_049c3110;
      if (*(long *)(param_2 + 0x30) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_2 + 0x30),&fStack_e0,*(undefined8 *)PTR_DAT_049c3460);
        fVar12 = _UNK_013aa8b8;
        fVar11 = _UNK_013aa8a8;
        fVar10 = _UNK_013aa7ec;
        fVar9 = _UNK_013aa718;
        fVar8 = _UNK_013aa5f0;
        fVar6 = _UNK_013aa534;
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        do {
          uVar21 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_b0,*(undefined8 *)puVar16);
          if ((uVar21 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_b0,*(undefined8 *)puVar15);
            return;
          }
          lVar20 = *(long *)puVar17;
          lVar24 = *(long *)(lVar20 + 0x20);
          uVar3 = *(ushort *)(lVar24 + 0x135);
          lVar22 = lVar24;
          if ((uVar3 & 1) == 0) {
            lVar22 = FUN_02229718();
            lVar24 = *(long *)(lVar20 + 0x20);
            uVar3 = *(ushort *)(lVar24 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar22 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar24 = FUN_02229718();
          }
          uVar23 = thunk_FUN_0224e54c(&uStack_b0,
                                      *(long *)(*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&fStack_e0,uVar23,uVar2);
          fVar28 = fStack_c8;
          fVar27 = fStack_cc;
          fVar26 = fStack_d0;
          fVar19 = fStack_d4;
          fVar18 = fStack_d8;
          plVar4 = (long *)CONCAT44(uStack_dc,fStack_e0);
          if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
            FUN_021f0574();
          }
          lVar22 = *(long *)puVar14;
          fVar25 = (param_1 - fVar28) / fVar6;
          fVar25 = fVar25 - (float)(int)fVar25;
          fVar28 = fVar30;
          if (fVar25 <= 1.0) {
            fVar28 = fVar25;
          }
          fVar29 = 0.0;
          if (0.0 <= fVar25) {
            fVar29 = fVar28;
          }
          if (fVar11 <= fVar29) {
            if (*(int *)(lVar22 + 0xe4) == 0) {
              FUN_021f0574();
              lVar22 = *(long *)puVar14;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x20);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            fStack_e0 = (fVar29 + fVar12) / fVar13;
            (**(code **)(lVar22 + 0x18))
                      (*(undefined8 *)(lVar22 + 0x40),&fStack_e0,&fStack_34,
                       *(undefined8 *)(lVar22 + 0x28));
            lVar22 = *(long *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x20);
            fVar28 = fVar30;
            if (fStack_34 <= 1.0) {
              fVar28 = fStack_34;
            }
            fVar25 = 0.0;
            if (0.0 <= fStack_34) {
              fVar25 = fVar28;
            }
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            fStack_e0 = (fVar29 + fVar10) / fVar7;
            (**(code **)(lVar22 + 0x18))
                      (*(undefined8 *)(lVar22 + 0x40),&fStack_e0,&fStack_34,
                       *(undefined8 *)(lVar22 + 0x28));
            fVar27 = fVar27 + (2.0 - fVar27) * fVar25;
            fVar28 = fVar25 * -0.5 + 1.0;
            fVar26 = fVar26 * fVar5 + (fVar26 - fVar26 * fVar5) * fVar25;
joined_r0x02527dd4:
            fVar25 = 1.0 - fStack_34;
          }
          else {
            if (*(int *)(lVar22 + 0xe4) == 0) {
              FUN_021f0574();
              lVar22 = *(long *)puVar14;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x20);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            fStack_e0 = fVar29 / fVar11;
            (**(code **)(lVar22 + 0x18))
                      (*(undefined8 *)(lVar22 + 0x40),&fStack_e0,&fStack_34,
                       *(undefined8 *)(lVar22 + 0x28));
            lVar22 = *(long *)puVar14;
            fVar27 = fVar27 * fStack_34;
            fVar25 = fVar30;
            if (fStack_34 <= 1.0) {
              fVar25 = fStack_34;
            }
            fVar26 = fVar26 * fVar5 * fStack_34;
            fVar28 = fVar5;
            if (0.0 <= fStack_34) {
              fVar28 = fVar25 * fVar9 + fVar5;
            }
            if (fVar8 <= fVar29) {
              if (*(int *)(lVar22 + 0xe4) == 0) {
                FUN_021f0574();
                lVar22 = *(long *)puVar14;
              }
              lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x20);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              fStack_e0 = (fVar29 + fVar10) / fVar7;
              (**(code **)(lVar22 + 0x18))
                        (*(undefined8 *)(lVar22 + 0x40),&fStack_e0,&fStack_34,
                         *(undefined8 *)(lVar22 + 0x28));
              goto joined_r0x02527dd4;
            }
            if (*(int *)(lVar22 + 0xe4) == 0) {
              FUN_021f0574();
              lVar22 = *(long *)puVar14;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x20);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            fStack_e0 = fVar29 / fVar8;
            (**(code **)(lVar22 + 0x18))
                      (*(undefined8 *)(lVar22 + 0x40),&fStack_e0,&fStack_34,
                       *(undefined8 *)(lVar22 + 0x28));
            fVar25 = fStack_34;
          }
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar22 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar4,0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                    (fVar18 + fVar26,fVar19 - fVar27,lVar22,0);
          lVar22 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(plVar4,0);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_Transform__set_localScale_3c2ddfc(fVar28,fVar28,0x3f800000,lVar22,0);
          (**(code **)(*plVar4 + 0x2a8))
                    (0x3f800000,0x3f800000,0x3f800000,fVar25,plVar4,*(undefined8 *)(*plVar4 + 0x2b0)
                    );
        } while( true );
      }
    }
  }
LAB_02527ed4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

