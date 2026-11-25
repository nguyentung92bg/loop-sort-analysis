/* IL2CPP: NakamaCloudSaveProvider.<TryInitialize>d__25$$MoveNext
void NakamaCloudSaveProvider__TryInitialize_d__25__MoveNext (NakamaCloudSaveProvider__TryInitialize_d__25_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider.<TryInitialize>d__25$$MoveNext
   void NakamaCloudSaveProvider__TryInitialize_d__25__MoveNext
   (NakamaCloudSaveProvider__TryInitialize_d__25_o __this, const MethodInfo* method); */

void NakamaCloudSaveProvider__TryInitialize_d__25__MoveNext_2249424(int *param_1)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 auStack_60 [16];
  
                    /* catch() { ... } // from try @ 0234926c with catch @ 02349424 */
                    /* catch() { ... } // from try @ 02349244 with catch @ 02349430
                       catch() { ... } // from try @ 02349284 with catch @ 02349430 */
  if ((bRam0000000004f49b60 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5930);
    FUN_021f03f8(PTR_DAT_049b5938);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5240);
    FUN_021f03f8(PTR_DAT_049b56a8);
    FUN_021f03f8(PTR_DAT_049b5840);
    FUN_021f03f8(PTR_DAT_049b5940);
    FUN_021f03f8(PTR_DAT_049b5948);
    FUN_021f03f8(PTR_DAT_049b5950);
    FUN_021f03f8(PTR_DAT_049b5958);
    FUN_021f03f8(PTR_DAT_049b5888);
    FUN_021f03f8(PTR_DAT_049b5960);
    FUN_021f03f8(PTR_DAT_049b5968);
    FUN_021f03f8(PTR_DAT_049b5970);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049b55a0);
    FUN_021f03f8(PTR_DAT_049b5978);
    FUN_021f03f8(PTR_DAT_049b5980);
    FUN_021f03f8(PTR_DAT_049b5988);
    bRam0000000004f49b60 = 1;
  }
  lVar14 = *(long *)(param_1 + 8);
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (*param_1 == 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_02349600:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult_3021138(&uStack_70,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar17 = *(long **)(lVar14 + 0x10);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *plVar17;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b5840) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02349700;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b5840,0);
LAB_02349700:
    uVar12 = (*(code *)*puVar9)(plVar17,puVar9[1]);
    puVar3 = PTR_DAT_049b5888;
    if ((uVar12 & 1) == 0) {
      lVar14 = *(long *)PTR_DAT_049b5888;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar3;
      }
      uVar10 = System_String__Concat_2f72b28
                         (**(undefined8 **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_049b5980,0);
      if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__LogWarning_3bcf90c(uVar10,0);
LAB_02349cc0:
      auVar2._8_8_ = auStack_60._8_8_;
      auVar2._0_8_ = auStack_60._0_8_;
      auVar1 = auVar2._1_15_;
      auStack_60[0] = 0;
      goto LAB_02349cc4;
    }
    uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5240);
    System_Func___Il2CppFullySharedGenericType____ctor_289217c
              (uVar10,lVar14,*(undefined8 *)PTR_DAT_049b5958,0);
    puVar3 = PTR_DAT_049b5138;
    uVar15 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_60 = Cysharp_Threading_Tasks_UniTask__WaitWhile_37cb838(uVar10,8,uVar15,0,0);
    thunk_FUN_021f190c(auStack_60,0);
    uVar15 = auStack_60._8_8_;
    uVar10 = auStack_60._0_8_;
    auStack_80 = auStack_60;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar10 != (long *)0x0) {
      lVar14 = *(long *)uVar10;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02349d10;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02229a4c(uVar10,*(long *)PTR_DAT_049b54e0,0);
LAB_02349d10:
      iVar8 = (*(code *)*puVar9)(uVar10,uVar15 & 0xffffffff,puVar9[1]);
      if (iVar8 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xe) = auStack_80;
        thunk_FUN_021f190c(param_1 + 0xe,0);
        FUN_0235bb44(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049b5930);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      uVar12 = Voodoo_Sauce_Core_VoodooSauceServices__TryGet_object__272d778
                         (&plStack_68,*(undefined8 *)PTR_DAT_049b55a0);
      plVar17 = plStack_68;
      puVar3 = PTR_DAT_049b5960;
      if ((uVar12 & 1) != 0) {
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5960);
        puVar5 = PTR_DAT_049b5940;
        Voodoo_Nakama_Services_OnAuthenticationCompletedDelegate___ctor_426d4b0
                  (uVar10,lVar14,*(undefined8 *)PTR_DAT_049b5940,0);
        puVar4 = PTR_DAT_049b56a8;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b56a8) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_023498c0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b56a8,5);
LAB_023498c0:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
        plVar17 = plStack_68;
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
        Voodoo_Nakama_Services_OnAuthenticationCompletedDelegate___ctor_426d4b0
                  (uVar10,lVar14,*(undefined8 *)puVar5,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
              goto LAB_02349944;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar4,4);
LAB_02349944:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = Voodoo_Nakama_Storage_StorageModule__TryGetApi_4270768(lVar14 + 0x10,0);
      puVar4 = PTR_DAT_049b5970;
      puVar3 = PTR_DAT_049b5888;
      if ((uVar12 & 1) == 0) {
        lVar14 = *(long *)PTR_DAT_049b5888;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_021f0574();
          lVar14 = *(long *)puVar3;
        }
        uVar10 = System_String__Concat_2f72b28
                           (**(undefined8 **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_049b5978,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574();
        }
        UnityEngine_Debug__LogWarning_3bcf90c(uVar10,0);
      }
      else {
        plVar17 = *(long **)(lVar14 + 0x10);
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5970);
        puVar5 = PTR_DAT_049b5950;
        Voodoo_Nakama_Storage_OnSyncedDelegate___ctor_42d3c18
                  (uVar10,lVar14,*(undefined8 *)PTR_DAT_049b5950,0);
        puVar3 = PTR_DAT_049b5840;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b5840) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_02349a58;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049b5840,2);
LAB_02349a58:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
        puVar7 = PTR_DAT_049b5968;
        plVar17 = *(long **)(lVar14 + 0x10);
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5968);
        puVar6 = PTR_DAT_049b5948;
        Voodoo_Nakama_Storage_OnStorageInvalidatedDelegate___ctor_42d3e38
                  (uVar10,lVar14,*(undefined8 *)PTR_DAT_049b5948,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
              goto LAB_02349aec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar3,6);
LAB_02349aec:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
        plVar17 = *(long **)(lVar14 + 0x10);
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
        Voodoo_Nakama_Storage_OnSyncedDelegate___ctor_42d3c18(uVar10,lVar14,*(undefined8 *)puVar5,0)
        ;
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_02349b70;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar3,1);
LAB_02349b70:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
        plVar17 = *(long **)(lVar14 + 0x10);
        uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar7);
        Voodoo_Nakama_Storage_OnStorageInvalidatedDelegate___ctor_42d3e38
                  (uVar10,lVar14,*(undefined8 *)puVar6,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = *plVar17;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_02349bf4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar3,5);
LAB_02349bf4:
        (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
        auStack_60._0_8_ = 0;
        uVar12 = NakamaServices__TryGetApi_2243784(auStack_60);
        puVar4 = PTR_DAT_049b5888;
        if ((uVar12 & 1) != 0) {
          plVar17 = *(long **)(lVar14 + 0x10);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar11 = *plVar17;
          uVar10 = *(undefined8 *)(param_1 + 10);
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto LAB_02349d70;
              }
                    /* try { // try from 02349c44 to 02449cbb has its CatchHandler @ 02349c44
                       catch() { ... } // from try @ 02349c44 with catch @ 02349c44
                       catch() { ... } // from try @ 02349cc8 with catch @ 02349c44 */
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)puVar3,8);
LAB_02349d70:
          lVar11 = (*(code *)*puVar9)(plVar17,uVar10,puVar9[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uStack_70 = System_Threading_Tasks_Task__GetAwaiter_3175780(lVar11,0);
          uVar12 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted_3021070
                             (&uStack_70,0);
          if ((uVar12 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0xc) = uStack_70;
            thunk_FUN_021f190c(param_1 + 0xc,0);
            FUN_0235bb44(param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_049b5938);
            return;
          }
          goto LAB_02349600;
        }
        lVar14 = *(long *)PTR_DAT_049b5888;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_021f0574();
          lVar14 = *(long *)puVar4;
        }
        uVar10 = System_String__Concat_2f72b28
                           (**(undefined8 **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_049b5988,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 02349cbc to 02449cc7 has its CatchHandler @ 02349ce8 */
        UnityEngine_Debug__LogWarning_3bcf90c(uVar10,0);
      }
      goto LAB_02349cc0;
    }
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar10 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_80._0_8_;
    uVar16 = auStack_80._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_02349898;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02349898:
    (*(code *)*puVar9)(uVar10,uVar16,puVar9[1]);
  }
  auVar1 = auStack_60._1_15_;
  auStack_60[0] = 1;
LAB_02349cc4:
  puVar3 = PTR_DAT_049b5570;
  auStack_60._8_8_ = auVar1._7_8_;
                    /* try { // try from 02349cc8 to 02449cfb has its CatchHandler @ 02349c44 */
  *param_1 = -2;
  auStack_60._1_7_ = auVar1._0_7_;
  FUN_0235bed4(param_1 + 2,auStack_60,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02349cbc with catch @ 02349ce8 */
                    /* try { // try from 02349cfc to 02449e4b has its CatchHandler @ 02349cfc
                       catch() { ... } // from try @ 02349cfc with catch @ 02349cfc
                       catch() { ... } // from try @ 0234a018 with catch @ 02349cfc */
  return;
}

