/* IL2CPP: SelectBooster$$OnDestroy
void SelectBooster__OnDestroy (SelectBooster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024fa2d8) */
/* WARNING: Removing unreachable block (ram,0x024fa068) */
/* WARNING: Removing unreachable block (ram,0x024fa148) */
/* IL2CPP: SelectBooster$$OnDestroy
   void SelectBooster__OnDestroy (SelectBooster_o* __this, const MethodInfo* method); */

void SelectBooster__OnDestroy_23f9cd8
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  
  BoosterBase__OnDestroy_24e4d18(param_4,0);
  lVar12 = *(long *)(param_4 + 0xc0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4b67a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2320);
    FUN_021f03f8(PTR_DAT_049c2330);
    FUN_021f03f8(PTR_DAT_049c2378);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c2338);
    FUN_021f03f8(PTR_DAT_049c2380);
    FUN_021f03f8(PTR_DAT_049c2340);
    FUN_021f03f8(PTR_DAT_049c2388);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c2348);
    FUN_021f03f8(PTR_DAT_049c2390);
    FUN_021f03f8(PTR_DAT_049c2398);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c2368);
    FUN_021f03f8(PTR_DAT_049c2370);
    bRam0000000004f4b67a = 1;
  }
  uStack_90 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_e0 = 0;
  uStack_100 = 0;
  puStack_118 = (undefined8 *)0x0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  if (*(long *)(lVar12 + 0x40) != 0) {
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar12 + 0x40),lVar12,0);
    if (*(long *)(lVar12 + 0x48) != 0) {
      OutlineModule__ActivateRender_254f48c(*(long *)(lVar12 + 0x48),0);
      if (*(long *)(lVar12 + 0x50) != 0) {
        HighlightModule__DeactivateRender_254e0d8(*(long *)(lVar12 + 0x50),0);
        if ((*(long *)(lVar12 + 0x40) != 0) &&
           (lVar13 = Monitors__Get_object__26889d0
                               (*(long *)(lVar12 + 0x40),*(undefined8 *)PTR_DAT_049c2368),
           lVar13 != 0)) {
          HighlightMonitor__HideMask_2444284(lVar13,0);
          puVar9 = PTR_DAT_049c2370;
          puVar8 = PTR_DAT_049c2338;
          puVar7 = PTR_DAT_049c14f0;
          puVar6 = PTR_DAT_049c14e8;
          puVar5 = PTR_DAT_049c14e0;
          puVar4 = PTR_DAT_049c14d8;
          if (*(long *)(lVar12 + 0x70) != 0) {
            System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                      (*(long *)(lVar12 + 0x70),&uStack_160,*(undefined8 *)PTR_DAT_049c2320);
            uStack_90 = uStack_140;
            puStack_168 = &uStack_b0;
            puStack_a8 = puStack_158;
            uStack_b0 = uStack_160;
            uStack_98 = uStack_148;
            uStack_a0 = uStack_150;
            lStack_170 = 0;
            uVar17 = uStack_150;
            while (uVar14 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                                      (&uStack_b0,*(undefined8 *)puVar8), lVar13 = lStack_170,
                  puVar11 = PTR_DAT_049c2388, puVar10 = PTR_DAT_049c2380, (uVar14 & 1) != 0) {
              lVar19 = *(long *)PTR_DAT_049c2340;
              lVar15 = *(long *)(lVar19 + 0x20);
              uVar3 = *(ushort *)(lVar15 + 0x135);
              lVar13 = lVar15;
              if ((uVar3 & 1) == 0) {
                lVar13 = FUN_02229718();
                lVar15 = *(long *)(lVar19 + 0x20);
                uVar3 = *(ushort *)(lVar15 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
              if ((uVar3 & 1) == 0) {
                lVar15 = FUN_02229718();
              }
              uVar16 = thunk_FUN_0224e54c(&uStack_b0,
                                          *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&uStack_160,uVar16,uVar1);
              puStack_b8 = puStack_158;
              uStack_c0 = uStack_160;
              System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                        (&uStack_c0,&lStack_c8,&lStack_d0,*(undefined8 *)PTR_DAT_049c2348);
              lVar13 = lStack_c8;
              if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (lStack_d0,&uStack_160,*(undefined8 *)puVar7);
              uStack_f0 = uStack_160;
              uStack_160 = 0;
              puStack_e8 = puStack_158;
              uStack_e0 = uStack_150;
              puStack_158 = &uStack_f0;
              while( true ) {
                uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&uStack_f0,*(undefined8 *)puVar5);
                fVar22 = (float)uVar17;
                if ((uVar14 & 1) == 0) break;
                lVar20 = *(long *)puVar6;
                lVar19 = *(long *)(lVar20 + 0x20);
                uVar3 = *(ushort *)(lVar19 + 0x135);
                lVar15 = lVar19;
                if ((uVar3 & 1) == 0) {
                  lVar15 = FUN_02229718();
                  lVar19 = *(long *)(lVar20 + 0x20);
                  uVar3 = *(ushort *)(lVar19 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar19 = FUN_02229718();
                }
                uVar16 = thunk_FUN_0224e54c(&uStack_f0,
                                            *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&uStack_78,uVar16,uVar1);
                SelectBoosterSystem__ApplyBlockDownMotion_23fbab0(lVar12,lVar13,uStack_78);
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_f0,*(undefined8 *)puVar4);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              if (*(long *)(lVar13 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar13 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar13 + 0x118),0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              fVar21 = (float)UnityEngine_Transform__get_position_3c2d540(lVar13,0);
              lVar15 = *(long *)puVar9;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                FUN_021f0574();
                lVar15 = *(long *)puVar9;
              }
              pfVar18 = *(float **)(lVar15 + 0xb8);
              param_3 = param_3 - pfVar18[2];
              uVar17 = (ulong)(uint)(fVar22 - pfVar18[1]);
              UnityEngine_Transform__set_position_3c2d61c(fVar21 - *pfVar18,uVar17,param_3,lVar13,0)
              ;
            }
            System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                      (puStack_168,*(undefined8 *)PTR_DAT_049c2330);
            if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f0698(lVar13);
            }
            if (*(long *)(lVar12 + 0x88) != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (*(long *)(lVar12 + 0x88),&uStack_160,*(undefined8 *)PTR_DAT_049c2398);
              uStack_100 = uStack_140;
              puStack_118 = puStack_158;
              uStack_120 = uStack_160;
              uStack_108 = uStack_148;
              uStack_110 = uStack_150;
              uStack_160 = 0;
              puStack_158 = &uStack_120;
              while (uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&uStack_120,*(undefined8 *)puVar10), (uVar17 & 1) != 0) {
                lVar19 = *(long *)puVar11;
                lVar15 = *(long *)(lVar19 + 0x20);
                uVar3 = *(ushort *)(lVar15 + 0x135);
                lVar13 = lVar15;
                if ((uVar3 & 1) == 0) {
                  lVar13 = FUN_02229718();
                  lVar15 = *(long *)(lVar19 + 0x20);
                  uVar3 = *(ushort *)(lVar15 + 0x135);
                }
                uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar15 = FUN_02229718();
                }
                uVar16 = thunk_FUN_0224e54c(&uStack_120,
                                            *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&uStack_138,uVar16,uVar1);
                if (*(long *)(lVar12 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                uStack_188 = uStack_130;
                uStack_190 = uStack_138;
                uStack_180 = uStack_128;
                HighlightModule__Remove_254e058(*(long *)(lVar12 + 0x50),&uStack_190,0);
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_120,*(undefined8 *)PTR_DAT_049c2378);
              lVar13 = *(long *)(lVar12 + 0x88);
              if (lVar13 != 0) {
                lVar15 = *(long *)PTR_DAT_049c2390;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                uVar17 = FUN_021f1190(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
                if ((uVar17 & 1) == 0) {
                  *(undefined4 *)(lVar13 + 0x18) = 0;
                }
                else {
                  iVar2 = *(int *)(lVar13 + 0x18);
                  *(undefined4 *)(lVar13 + 0x18) = 0;
                  if (0 < iVar2) {
                    System_Array__Clear_31229cc(*(undefined8 *)(lVar13 + 0x10),0,iVar2,0);
                  }
                }
                SelectBoosterSystem__ClearSelectables_23fbcf8(lVar12);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

