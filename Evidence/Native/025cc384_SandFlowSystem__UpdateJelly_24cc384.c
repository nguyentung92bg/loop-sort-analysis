/* IL2CPP: SandFlowSystem$$UpdateJelly
void SandFlowSystem__UpdateJelly (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$UpdateJelly
   void SandFlowSystem__UpdateJelly (SandFlowSystem_o* __this, const MethodInfo* method); */

void SandFlowSystem__UpdateJelly_24cc384
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  long lStack_130;
  long *plStack_128;
  long *plStack_120;
  float fStack_118;
  float fStack_114;
  long lStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d0;
  long *plStack_c8;
  long *aplStack_c0 [2];
  long alStack_b0 [2];
  long lStack_98;
  
  if ((bRam0000000004f4bbf8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c18f8);
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049c7228);
    FUN_021f03f8(PTR_DAT_049c7250);
    FUN_021f03f8(PTR_DAT_049c7308);
    FUN_021f03f8(PTR_DAT_049c7318);
    FUN_021f03f8(PTR_DAT_049c72a8);
    FUN_021f03f8(PTR_DAT_049c7320);
    FUN_021f03f8(PTR_DAT_049c7268);
    FUN_021f03f8(PTR_DAT_049c7328);
    FUN_021f03f8(PTR_DAT_049c7330);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c7338);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c2948);
    FUN_021f03f8(PTR_DAT_049c7340);
    FUN_021f03f8(PTR_DAT_049c2870);
    FUN_021f03f8(PTR_DAT_049c1da8);
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c7348);
    FUN_021f03f8(PTR_DAT_049c7350);
    FUN_021f03f8(PTR_DAT_049c1548);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1568);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c1590);
    FUN_021f03f8(PTR_DAT_049c1900);
    FUN_021f03f8(PTR_DAT_049c1b08);
    FUN_021f03f8(PTR_DAT_049c1b18);
    bRam0000000004f4bbf8 = 1;
  }
  puVar27 = (undefined8 *)PTR_DAT_049c1da8;
  puVar11 = PTR_DAT_049c1c78;
  puVar10 = PTR_DAT_049c1b18;
  puVar9 = PTR_DAT_049c1b08;
  puVar8 = PTR_DAT_049c1900;
  puVar7 = PTR_DAT_049c1590;
  puVar6 = PTR_DAT_049c1410;
  uStack_f0 = 0;
  plStack_e8 = (long *)0x0;
  plStack_e0 = (long *)0x0;
  lStack_110 = 0;
  uStack_108 = (long *)0x0;
  plStack_100 = (long *)0x0;
  lStack_98 = 0;
  fStack_114 = 0.0;
  fStack_118 = 0.0;
  plStack_128 = (long *)0x0;
  lStack_130 = 0;
  plStack_120 = (long *)0x0;
  plVar13 = (long *)PTR_DAT_049b3b98;
  if (*(char *)(param_4 + 0x1c2) != '\0') {
    lVar21 = *(long *)(param_4 + 0x170);
    if (lVar21 != 0) {
      plStack_c8 = (long *)0x0;
      aplStack_c0[0] = (long *)0x0;
      lStack_d0 = (ulong)*(uint *)(lVar21 + 0x30) << 0x20;
      thunk_FUN_021f190c(&plStack_c8,0);
      aplStack_c0[0] = *(long **)(lVar21 + 0x28);
      thunk_FUN_021f190c(aplStack_c0);
      plStack_e8 = plStack_c8;
      uStack_f0 = lStack_d0;
      plStack_e0 = aplStack_c0[0];
LAB_025cc610:
      do {
        do {
          do {
            puVar15 = (undefined8 *)PTR_DAT_049c1558;
            plVar13 = (long *)PTR_DAT_049b3b98;
            iVar19 = (int)uStack_f0 + -1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar19);
            if (iVar19 < 0) {
              uVar4 = uStack_f0._4_4_ - 1;
              uStack_f0 = CONCAT44(uVar4,iVar19);
              if ((int)uVar4 < 0) {
                if (*(long *)(param_4 + 0x40) != 0) {
                  uVar4 = *(uint *)(*(long *)(param_4 + 0x40) + 0x154);
                  lVar21 = *(long *)(param_4 + 0x180);
                  if ((int)uVar4 < 2) {
                    uVar4 = 1;
                  }
                  if (lVar21 != 0) {
                    lVar22 = *(long *)puVar7;
                    lStack_d0 = 0;
                    plStack_c8 = (long *)0x0;
                    aplStack_c0[0] = (long *)0x0;
                    plVar16 = (long *)thunk_FUN_0224e54c(lVar21,*(long *)(**(long **)(*(long *)(
                                                  lVar22 + 0x20) + 0xc0) + 0x80) + 0x60);
                    alStack_b0[0] = *plVar16;
                    alStack_b0[1] = 0;
                    thunk_FUN_021f190c(alStack_b0);
                    alStack_b0[1] = 0;
                    plStack_c8 = (long *)0x0;
                    lStack_d0 = alStack_b0[0];
                    thunk_FUN_021f190c(&lStack_d0,0);
                    puVar17 = (undefined8 *)
                              thunk_FUN_0224e54c(lVar21,*(long *)(**(long **)(*(long *)(lVar22 + 
                                                  0x20) + 0xc0) + 0x80) + 0x80);
                    aplStack_c0[0] = (long *)*puVar17;
                    thunk_FUN_021f190c(aplStack_c0);
                    uStack_108 = plStack_c8;
                    lStack_110 = lStack_d0;
                    plStack_100 = aplStack_c0[0];
                    goto LAB_025cc88c;
                  }
                }
                goto LAB_025ccecc;
              }
              lVar21 = plStack_e0[(ulong)uVar4 + 4];
              plStack_e8 = *(long **)(lVar21 + 0x18);
              thunk_FUN_021f190c((ulong)&uStack_f0 | 8);
              iVar19 = *(int *)(lVar21 + 0x30) + -1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar19);
            }
            if (*(long *)(param_4 + 0x178) == 0) goto LAB_025ccecc;
            plVar13 = (long *)FUN_024f6008(*(long *)(param_4 + 0x178),plStack_e8[(long)iVar19 + 4],
                                           *(undefined8 *)puVar8);
            lVar21 = *plVar13;
            if (lVar21 == 0) goto LAB_025ccecc;
          } while (((*(long **)(lVar21 + 0x100) == (long *)0x0) ||
                   (**(long **)(lVar21 + 0x100) != *(long *)puVar11)) ||
                  (*(char *)(lVar21 + 0x158) == '\0'));
          if (*(long *)(param_4 + 0xf0) == 0) goto LAB_025ccecc;
          uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                             (*(long *)(param_4 + 0xf0),lVar21,*(undefined8 *)PTR_DAT_049c7250);
        } while ((uVar14 & 1) != 0);
        if (*(long *)(param_4 + 0x150) == 0) goto LAB_025ccecc;
        uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                           (*(long *)(param_4 + 0x150),*(undefined8 *)(lVar21 + 0x138),*puVar27);
      } while ((uVar14 & 1) == 0);
      lVar22 = *(long *)(param_4 + 0x2a8);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (lVar22 == 0) goto LAB_025ccecc;
      uVar14 = FUN_024f5708(lVar22,*(undefined8 *)(lVar21 + 0x60),*(undefined8 *)puVar10);
      if ((uVar14 & 1) == 0) {
        uVar23 = 0;
      }
      else {
        lVar22 = *(long *)(param_4 + 0x2a8);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar22 == 0) goto LAB_025ccecc;
        puVar15 = (undefined8 *)
                  FUN_024f6008(lVar22,*(undefined8 *)(lVar21 + 0x60),*(undefined8 *)puVar9);
        uVar23 = *puVar15;
      }
      uVar14 = SandFlowSystem__IsJelly_24c9cc8(param_4,lVar21);
      if ((uVar14 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(uVar23,0,0);
        if (((uVar14 & 1) != 0) ||
           (uVar14 = SandFlowSystem__IsHiddenJelly_24cec6c(param_4,uVar23,lVar21), (uVar14 & 1) == 0
           )) goto LAB_025cc610;
      }
      SandFlowSystem__Jelly_24cee3c(param_4,*(undefined8 *)(lVar21 + 0x138));
      lVar21 = UnityEngine_Component__get_gameObject_3c187f4(lVar21,0);
      if (lVar21 == 0) goto LAB_025ccecc;
      uVar14 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar21,0);
      if ((uVar14 & 1) != 0) {
        SandFlowSystem__AddJelly_24c9e5c(0x3f800000,param_4,uVar23);
      }
      goto LAB_025cc610;
    }
    goto LAB_025ccecc;
  }
  goto LAB_025cccdc;
LAB_025cc88c:
  uVar14 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&lStack_110,0);
  if ((uVar14 & 1) != 0) {
    lVar21 = *(long *)((long)plStack_100 +
                      (ulong)*(uint *)(*plStack_100 + 0x104) * (long)uStack_108._4_4_ + 0x20);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(lVar21,0,0);
    if ((uVar14 & 1) == 0) {
      if (*(long *)(param_4 + 0x1d8) == 0) goto LAB_025ccecc;
      uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                         (*(long *)(param_4 + 0x1d8),lVar21,&lStack_98,
                          *(undefined8 *)PTR_DAT_049c7318);
      if ((uVar14 & 1) == 0) {
        lVar24 = *(long *)(param_4 + 0x1d8);
        lVar22 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7350);
        SandFlowSystem_JellyState___ctor_24d1dcc(lVar22,0);
        lStack_98 = lVar22;
        if (lVar24 == 0) goto LAB_025ccecc;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (lVar24,lVar21,lVar22,*(undefined8 *)PTR_DAT_049c7320);
      }
      if ((lVar21 == 0) || (lVar22 = *(long *)(lVar21 + 0x1e0), lVar22 == 0)) goto LAB_025ccecc;
      if (0 < *(int *)(lVar22 + 0x18)) {
        fVar32 = 0.0;
        iVar19 = 0;
        uVar26 = 0;
LAB_025cc96c:
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar22,iVar19,&lStack_d0,*puVar15);
        lVar24 = lStack_d0;
        if (*(int *)(*(long *)PTR_DAT_049c7130 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar12 = SandFlowSystem__IsShown_24ceef8(lVar21,lVar24);
        uVar1 = uVar26;
        if ((uVar12 & 1) == 0) {
          uVar1 = 0xffffffff;
        }
        uVar14 = SandFlowSystem__IsHiddenJelly_24cec6c(param_4,lVar21,lVar24);
        if ((uVar14 & 1) == 0) {
          uVar18 = SandFlowSystem__IsJelly_24c9cc8(param_4,lVar24);
          puVar15 = (undefined8 *)PTR_DAT_049c1558;
          if ((uVar18 & 1) == 0) goto LAB_025ccb80;
          if (lVar24 == 0) goto LAB_025ccecc;
          SandFlowSystem__Jelly_24cee3c(param_4,*(undefined8 *)(lVar24 + 0x138));
          if (*(long *)(param_4 + 0x228) == 0) goto LAB_025ccecc;
          uVar18 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                             (*(long *)(param_4 + 0x228),lVar24,*(undefined8 *)PTR_DAT_049c1710);
          if ((uVar18 & 1) == 0) goto LAB_025cc9f8;
          lVar20 = *(long *)(param_4 + 0x238);
          uVar29 = UnityEngine_Time__get_time_3c295c8(0);
          if (lVar20 == 0) goto LAB_025ccecc;
          lStack_d0 = CONCAT44(lStack_d0._4_4_,uVar29);
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (lVar20,lVar24,&lStack_d0,*(undefined8 *)PTR_DAT_049c7268);
        }
        else {
          if (lVar24 == 0) goto LAB_025ccecc;
          SandFlowSystem__Jelly_24cee3c(param_4,*(undefined8 *)(lVar24 + 0x138));
          if (*(long *)(param_4 + 0x230) == 0) goto LAB_025ccecc;
          System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                    (*(long *)(param_4 + 0x230),lVar24,*(undefined8 *)PTR_DAT_049c2948);
        }
LAB_025cc9f8:
        uVar29 = param_2;
        uVar31 = param_3;
        if (-1 < (int)uVar1) {
          uVar3 = 0;
          if (uVar4 != 0) {
            uVar3 = (int)uVar1 / (int)uVar4;
          }
          if ((int)uVar3 < 0x10) {
            uVar5 = 0;
            if (uVar4 != 0) {
              uVar5 = uVar1 / uVar4;
            }
            if (uVar1 == uVar5 * uVar4) {
              if ((uVar14 & 1) == 0) {
                if (*(long *)(lVar24 + 0x138) == 0) goto LAB_025ccecc;
                uVar23 = UnityEngine_Renderer__get_sharedMaterial_3bddc88
                                   (*(long *)(lVar24 + 0x138),0);
                uVar28 = SandFlowSystem__GetColor_24cea34(param_4,uVar23);
                uVar29 = param_2;
                uVar31 = param_3;
                fVar30 = (float)SandFlowSystem__Revealed_24cefb0(param_4,lVar24);
                fVar30 = 1.0 - fVar30;
              }
              else {
                uVar28 = SandFlowSystem__GetColor_24cea34(param_4,*(undefined8 *)(param_4 + 0x248));
                fVar30 = 1.0;
                uVar29 = param_2;
                uVar31 = param_3;
              }
              if ((lStack_98 == 0) || (lVar20 = *(long *)(lStack_98 + 0x10), lVar20 == 0))
              goto LAB_025ccecc;
              if (*(uint *)(lVar20 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              lVar20 = lVar20 + (ulong)uVar3 * 0x10;
              *(undefined4 *)(lVar20 + 0x20) = uVar28;
              *(undefined4 *)(lVar20 + 0x24) = param_2;
              *(undefined4 *)(lVar20 + 0x28) = param_3;
              *(float *)(lVar20 + 0x2c) = fVar30;
            }
          }
        }
        puVar15 = (undefined8 *)PTR_DAT_049c1558;
        param_2 = uVar29;
        param_3 = uVar31;
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_4 + 0xf0) == 0) goto LAB_025ccecc;
          uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                             (*(long *)(param_4 + 0xf0),lVar24,*(undefined8 *)PTR_DAT_049c7250);
          puVar15 = (undefined8 *)PTR_DAT_049c1558;
          fVar30 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(long *)(param_4 + 0x218) == 0) goto LAB_025ccecc;
            uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                               (*(long *)(param_4 + 0x218),lVar24,&fStack_118,
                                *(undefined8 *)PTR_DAT_049c7308);
            fVar30 = fStack_118;
            if ((uVar14 & 1) == 0) {
              fVar30 = 0.0;
            }
          }
          fVar32 = fVar32 + fVar30;
          param_2 = uVar29;
          param_3 = uVar31;
        }
LAB_025ccb80:
        iVar19 = iVar19 + 1;
        uVar26 = uVar26 + (uVar12 & 1);
        if (*(int *)(lVar22 + 0x18) <= iVar19) goto LAB_025ccb9c;
        goto LAB_025cc96c;
      }
      fVar32 = 0.0;
LAB_025ccb9c:
      plVar13 = (long *)PTR_DAT_049b3b98;
      if (*(long *)(param_4 + 0x1e0) == 0) goto LAB_025ccecc;
      uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                         (*(long *)(param_4 + 0x1e0),lVar21,&fStack_114,
                          *(undefined8 *)PTR_DAT_049c72a8);
      puVar27 = (undefined8 *)PTR_DAT_049c1da8;
      puVar6 = PTR_DAT_049c1568;
      lVar24 = *(long *)(lVar21 + 0x120);
      fVar30 = fStack_114;
      if ((uVar14 & 1) == 0) {
        fVar30 = -0.0;
      }
      if (lVar24 == 0) goto LAB_025ccecc;
      iVar25 = 0;
      iVar19 = 0;
      while (iVar19 < *(int *)(lVar24 + 0x18)) {
        if (iVar25 < *(int *)(lVar22 + 0x18)) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar22,iVar25,&lStack_d0,*puVar15);
          uVar14 = SandFlowSystem__IsJelly_24c9cc8(param_4,lStack_d0);
          if ((uVar14 & 1) != 0) goto LAB_025ccc5c;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar22,iVar25,&lStack_d0,*puVar15);
          uVar14 = SandFlowSystem__IsHiddenJelly_24cec6c(param_4,lVar21,lStack_d0);
          if ((uVar14 & 1) != 0) goto LAB_025ccc5c;
        }
        else {
LAB_025ccc5c:
          if (*(long *)(lVar21 + 0x120) == 0) goto LAB_025ccecc;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(lVar21 + 0x120),iVar19,&lStack_d0,*(undefined8 *)puVar6);
          SandFlowSystem__Jelly_24cee3c(param_4,lStack_d0);
        }
        lVar24 = *(long *)(lVar21 + 0x120);
        iVar19 = iVar19 + 1;
        iVar25 = iVar25 + uVar4;
        if (lVar24 == 0) goto LAB_025ccecc;
      }
      uVar14 = SandFlowSystem__IsJellyMoving_24cf08c(param_4,lVar21,lVar22);
      if ((uVar14 & 1) == 0) {
        SandFlowSystem__DrawJelly_24cfa20(fVar32 + fVar30,param_4,lVar21,lStack_98,uVar4);
      }
      else {
        SandFlowSystem__DrawJellyPieces_24cf588(fVar32 + fVar30,param_4,lVar21,lStack_98,uVar4);
      }
    }
    goto LAB_025cc88c;
  }
LAB_025cccdc:
  puVar11 = PTR_DAT_049c7340;
  puVar10 = PTR_DAT_049c7338;
  puVar9 = PTR_DAT_049c7330;
  puVar8 = PTR_DAT_049c7328;
  puVar7 = PTR_DAT_049c7228;
  puVar6 = PTR_DAT_049c2870;
  if (*(long *)(param_4 + 0x150) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
              (*(long *)(param_4 + 0x150),&lStack_d0,*(undefined8 *)PTR_DAT_049c7348);
    plStack_120 = aplStack_c0[0];
    plStack_128 = plStack_c8;
    lStack_130 = lStack_d0;
    lStack_d0 = 0;
    plStack_c8 = &lStack_130;
    while (uVar14 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                              (&lStack_130,*(undefined8 *)puVar9), (uVar14 & 1) != 0) {
      lVar24 = *(long *)puVar10;
      lVar22 = *(long *)(lVar24 + 0x20);
      uVar2 = *(ushort *)(lVar22 + 0x135);
      lVar21 = lVar22;
      if ((uVar2 & 1) == 0) {
        lVar21 = FUN_02229718();
        lVar22 = *(long *)(lVar24 + 0x20);
        uVar2 = *(ushort *)(lVar22 + 0x135);
      }
      uVar29 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar22 = FUN_02229718();
      }
      uVar23 = thunk_FUN_0224e54c(&lStack_130,
                                  *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(alStack_b0,uVar23,uVar29);
      lVar21 = alStack_b0[0];
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar14 = UnityEngine_Object__op_Inequality_3c1b96c(lVar21,0,0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(param_4 + 0x158) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                           (*(long *)(param_4 + 0x158),lVar21,*puVar27);
        if ((uVar14 & 1) == 0) {
          if (*(long *)(param_4 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar14 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ContainsKey_282c168
                             (*(long *)(param_4 + 0xf8),lVar21,*(undefined8 *)puVar7);
          if ((uVar14 & 1) == 0) {
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            UnityEngine_Renderer__set_forceRenderingOff_3bdcfcc(lVar21,0,0);
          }
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
              (&lStack_130,*(undefined8 *)puVar8);
    uVar23 = *(undefined8 *)(param_4 + 0x150);
    *(undefined8 *)(param_4 + 0x150) = *(undefined8 *)(param_4 + 0x158);
    thunk_FUN_021f190c(param_4 + 0x150);
    *(undefined8 *)(param_4 + 0x158) = uVar23;
    thunk_FUN_021f190c(param_4 + 0x158,uVar23);
    if (*(long *)(param_4 + 0x158) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                (*(long *)(param_4 + 0x158),*(undefined8 *)puVar11);
      uVar23 = *(undefined8 *)(param_4 + 0x228);
      *(undefined8 *)(param_4 + 0x228) = *(undefined8 *)(param_4 + 0x230);
      thunk_FUN_021f190c(param_4 + 0x228);
      *(undefined8 *)(param_4 + 0x230) = uVar23;
      thunk_FUN_021f190c(param_4 + 0x230,uVar23);
      if (*(long *)(param_4 + 0x230) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                  (*(long *)(param_4 + 0x230),*(undefined8 *)puVar6);
        return;
      }
    }
  }
LAB_025ccecc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

