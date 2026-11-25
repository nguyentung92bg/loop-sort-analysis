/* IL2CPP: SceneModule.<Load>d__19$$MoveNext
void SceneModule__Load_d__19__MoveNext (SceneModule__Load_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02639838) */
/* IL2CPP: SceneModule.<Load>d__19$$MoveNext
   void SceneModule__Load_d__19__MoveNext (SceneModule__Load_d__19_o __this, const MethodInfo*
   method); */

void SceneModule__Load_d__19__MoveNext_2538acc(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_90 [16];
  int **ppiStack_80;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  int iStack_44;
  undefined1 auStack_40 [16];
  int *piStack_28;
  
  piStack_28 = param_1;
  if ((bRam0000000004f4bf71 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca340);
    FUN_021f03f8(PTR_DAT_049b5680);
                    /* try { // try from 02638b0c to 02738b13 has its CatchHandler @ 026393b4 */
    FUN_021f03f8(PTR_DAT_049bd2c8);
    FUN_021f03f8(PTR_DAT_049ca348);
                    /* try { // try from 02638b24 to 02738b2f has its CatchHandler @ 026393b0 */
    FUN_021f03f8(PTR_DAT_049ca350);
    FUN_021f03f8(PTR_DAT_049ca358);
                    /* try { // try from 02638b3c to 02738b5f has its CatchHandler @ 026393f0 */
    FUN_021f03f8(PTR_DAT_049ca360);
    FUN_021f03f8(PTR_DAT_049ca368);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049bb338);
                    /* try { // try from 02638b64 to 02738b6f has its CatchHandler @ 026393ac */
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 02638b74 to 02738b7f has its CatchHandler @ 026393a8 */
    FUN_021f03f8(PTR_DAT_049ca370);
    bRam0000000004f4bf71 = 1;
  }
  iStack_44 = *param_1;
  lVar12 = *(long *)(param_1 + 6);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 02638b94 to 02738b97 has its CatchHandler @ 02639368 */
  uStack_68 = 0;
                    /* try { // try from 02638b9c to 02738ba7 has its CatchHandler @ 026393a4 */
  auVar13 = ZEXT816(0);
  if (iStack_44 - 1U < 2) {
LAB_02638efc:
    auStack_90._8_8_ = &iStack_44;
    ppiStack_80 = &piStack_28;
    auStack_90._0_8_ = 0;
    if (iStack_44 == 1) {
      auStack_60 = *(undefined1 (*) [16])(piStack_28 + 10);
      piStack_28[10] = 0;
      piStack_28[0xb] = 0;
      piStack_28[0xc] = 0;
      piStack_28[0xd] = 0;
      iStack_44 = -1;
      *piStack_28 = -1;
                    /* try { // try from 02638f54 to 02738f6b has its CatchHandler @ 026393e8 */
      goto LAB_026390b0;
    }
    if (iStack_44 == 2) {
      auStack_60 = *(undefined1 (*) [16])(piStack_28 + 10);
      piStack_28[10] = 0;
      piStack_28[0xb] = 0;
      piStack_28[0xc] = 0;
      piStack_28[0xd] = 0;
      iStack_44 = -1;
      *piStack_28 = -1;
LAB_026392f4:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0263930c to 02739317 has its CatchHandler @ 0263940c */
        cRam0000000004f49bf6 = '\x01';
      }
      uVar4 = auStack_60._0_8_;
                    /* try { // try from 02639318 to 0273931b has its CatchHandler @ 026393fc */
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* try { // try from 0263931c to 0273931f has its CatchHandler @ 026393d4 */
                    /* try { // try from 02639320 to 02739323 has its CatchHandler @ 026393f8 */
        lVar7 = *(long *)auStack_60._0_8_;
                    /* try { // try from 02639324 to 02739327 has its CatchHandler @ 026393d0 */
                    /* try { // try from 02639328 to 0273932b has its CatchHandler @ 026393c8 */
        uVar11 = auStack_60._8_8_ & 0xffff;
                    /* try { // try from 0263932c to 0273932f has its CatchHandler @ 026393b8 */
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02639330 to 02739333 has its CatchHandler @ 0263938c */
                    /* try { // try from 02639334 to 02739337 has its CatchHandler @ 02639384 */
        if (uVar8 != 0) {
                    /* try { // try from 02639338 to 0273933b has its CatchHandler @ 02639380 */
                    /* try { // try from 0263933c to 0273933f has its CatchHandler @ 0263937c */
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 02639340 to 02739343 has its CatchHandler @ 02639364 */
                    /* catch() { ... } // from try @ 026391f4 with catch @ 02639344
                       try { // try from 02639344 to 02739437 has its CatchHandler @ 02638680 */
                    /* catch() { ... } // from try @ 026391dc with catch @ 02639348 */
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 02638b94 with catch @ 02639368 */
                    /* catch() { ... } // from try @ 0263914c with catch @ 0263936c */
                    /* catch() { ... } // from try @ 02639134 with catch @ 02639370 */
                    /* catch() { ... } // from try @ 02638928 with catch @ 02639374 */
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02639378;
            }
                    /* catch() { ... } // from try @ 026391b8 with catch @ 0263934c */
            uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 026391a0 with catch @ 02639350 */
            piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 02638904 with catch @ 02639354 */
          } while (uVar8 != 0);
        }
                    /* catch() { ... } // from try @ 02638e90 with catch @ 02639358 */
                    /* catch() { ... } // from try @ 02638e78 with catch @ 0263935c */
                    /* catch() { ... } // from try @ 02638da4 with catch @ 02639360 */
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* catch() { ... } // from try @ 02639340 with catch @ 02639364 */
LAB_02639378:
                    /* catch() { ... } // from try @ 02638908 with catch @ 02639378 */
                    /* catch() { ... } // from try @ 0263933c with catch @ 0263937c */
                    /* catch() { ... } // from try @ 02639338 with catch @ 02639380 */
                    /* catch() { ... } // from try @ 02639334 with catch @ 02639384 */
        (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      }
                    /* catch() { ... } // from try @ 02638fd0 with catch @ 02639388 */
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch() { ... } // from try @ 02639330 with catch @ 0263938c */
                    /* catch() { ... } // from try @ 02638dac with catch @ 02639390 */
                    /* catch() { ... } // from try @ 02638d84 with catch @ 02639394 */
      iVar3 = 0xf;
                    /* catch() { ... } // from try @ 02638d74 with catch @ 02639398 */
      *(undefined1 *)(lVar12 + 0x20) = 1;
                    /* catch() { ... } // from try @ 02638d34 with catch @ 0263939c */
    }
    else {
      iVar3 = piStack_28[8];
      auStack_60 = auVar13;
      if (*(int *)(*(long *)PTR_DAT_049bb338 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02638f78 to 02738f9b has its CatchHandler @ 02639400 */
      uVar4 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync_3c348d8(iVar3,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar5 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(lVar12 + 0x28),0);
                    /* try { // try from 02638fa0 to 02738fab has its CatchHandler @ 026393e4 */
                    /* try { // try from 02638fb0 to 02738fbb has its CatchHandler @ 026393e0 */
      auStack_40 = Cysharp_Threading_Tasks_UnityAsyncExtensions__ToUniTask_38045fc
                             (uVar4,0,8,uVar5,0,0);
      puVar1 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
                    /* try { // try from 02638fd0 to 02738fd3 has its CatchHandler @ 02639388 */
        FUN_021f0574();
      }
                    /* try { // try from 02638fd8 to 02738fe3 has its CatchHandler @ 026393dc */
      thunk_FUN_021f190c(auStack_40,0);
      auStack_60 = auStack_40;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02638ff8 to 027390ab has its CatchHandler @ 02639404 */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ == (long *)0x0) {
LAB_026390b0:
                    /* try { // try from 026390b8 to 0273911b has its CatchHandler @ 02639418 */
        if (cRam0000000004f49bf6 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf6 = '\x01';
        }
        uVar4 = auStack_60._0_8_;
        if ((long *)auStack_60._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_60._0_8_;
          uVar11 = auStack_60._8_8_ & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_02639134;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02639134:
                    /* try { // try from 02639134 to 0273913f has its CatchHandler @ 02639370 */
          (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
        }
                    /* try { // try from 0263914c to 0273915b has its CatchHandler @ 0263936c */
        if ((char)piStack_28[9] != '\0') {
          UnityEngine_Resources__UnloadUnusedAssets_3c131a4(0);
          if (*(int *)(*(long *)PTR_DAT_049bd2c8 + 0xe4) == 0) {
            FUN_021f0574();
          }
                    /* try { // try from 02639174 to 0273917f has its CatchHandler @ 02639418 */
          uVar4 = System_GC__get_MaxGeneration_31388c0(0);
          System_GC__Collect_313862c(uVar4,2,0);
        }
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 026391a0 to 027391ab has its CatchHandler @ 02639350 */
        lVar7 = UnityEngine_Object__FindObjectOfType_object__26954ac
                          (*(undefined8 *)PTR_DAT_049ca368);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 026391b8 to 027391c7 has its CatchHandler @ 0263934c */
        plVar10 = (long *)(lVar12 + 0x10);
        *plVar10 = lVar7;
        thunk_FUN_021f190c(plVar10);
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(*plVar10 + 0x50);
        thunk_FUN_021f190c();
                    /* try { // try from 026391dc to 027391e7 has its CatchHandler @ 02639348 */
        if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar4 = System_Threading_CancellationTokenSource__get_Token_31655c4
                          (*(long *)(lVar12 + 0x28),0);
        puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 026391f4 to 02739203 has its CatchHandler @ 02639344 */
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar13 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar4,0,0);
        auStack_40 = auVar13;
        thunk_FUN_021f190c(auStack_40,0);
                    /* try { // try from 02639238 to 0273923f has its CatchHandler @ 0263940c */
        auStack_60 = auStack_40;
        if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02639240 to 0273930b has its CatchHandler @ 02638680 */
          FUN_021f03f8(PTR_DAT_049b5138);
          cRam0000000004f49bf4 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf5 = '\x01';
        }
        uVar4 = auStack_60._0_8_;
        if ((long *)auStack_60._0_8_ != (long *)0x0) {
          lVar7 = *(long *)auStack_60._0_8_;
          uVar11 = auStack_60._8_8_ & 0xffff;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_026392e0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_026392e0:
          iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
          if (iVar3 == 0) {
                    /* catch() { ... } // from try @ 02638d0c with catch @ 026393a0 */
                    /* catch() { ... } // from try @ 02638b9c with catch @ 026393a4 */
                    /* catch() { ... } // from try @ 02638b74 with catch @ 026393a8 */
            iStack_44 = 2;
                    /* catch() { ... } // from try @ 02638b64 with catch @ 026393ac */
            *piStack_28 = 2;
                    /* catch() { ... } // from try @ 02638b24 with catch @ 026393b0 */
                    /* catch() { ... } // from try @ 02638b0c with catch @ 026393b4 */
            *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
                    /* catch() { ... } // from try @ 0263932c with catch @ 026393b8 */
                    /* catch() { ... } // from try @ 026388e0 with catch @ 026393bc */
                    /* catch() { ... } // from try @ 02638948 with catch @ 026393c0 */
            thunk_FUN_021f190c(piStack_28 + 10,0);
                    /* catch() { ... } // from try @ 026387f8 with catch @ 026393c4 */
                    /* catch() { ... } // from try @ 02639328 with catch @ 026393c8 */
                    /* catch() { ... } // from try @ 026387e4 with catch @ 026393cc */
                    /* catch() { ... } // from try @ 02639324 with catch @ 026393d0 */
                    /* catch() { ... } // from try @ 0263931c with catch @ 026393d4 */
                    /* catch() { ... } // from try @ 02638d4c with catch @ 026393d8 */
                    /* catch() { ... } // from try @ 02638fd8 with catch @ 026393dc */
            FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049ca340);
                    /* catch() { ... } // from try @ 02638fb0 with catch @ 026393e0 */
            goto LAB_02639424;
          }
        }
        goto LAB_026392f4;
      }
      lVar7 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0263909c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0263909c:
      iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      if (iVar3 != 0) goto LAB_026390b0;
                    /* catch() { ... } // from try @ 02638fa0 with catch @ 026393e4 */
                    /* catch() { ... } // from try @ 02638f54 with catch @ 026393e8 */
                    /* catch() { ... } // from try @ 02638dcc with catch @ 026393ec
                       catch() { ... } // from try @ 02638eb4 with catch @ 026393ec */
      iStack_44 = 1;
                    /* catch() { ... } // from try @ 02638b3c with catch @ 026393f0 */
      *piStack_28 = 1;
                    /* catch() { ... } // from try @ 02638bbc with catch @ 026393f4 */
                    /* catch() { ... } // from try @ 026387c4 with catch @ 026393f8
                       catch() { ... } // from try @ 02639320 with catch @ 026393f8 */
      *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
                    /* catch() { ... } // from try @ 02638790 with catch @ 026393fc
                       catch() { ... } // from try @ 02639318 with catch @ 026393fc */
                    /* catch() { ... } // from try @ 02638f78 with catch @ 02639400 */
                    /* catch() { ... } // from try @ 02638ff8 with catch @ 02639404 */
      thunk_FUN_021f190c(piStack_28 + 10,0);
                    /* catch() { ... } // from try @ 0263875c with catch @ 02639408 */
                    /* catch() { ... } // from try @ 02639238 with catch @ 0263940c
                       catch() { ... } // from try @ 0263930c with catch @ 0263940c */
                    /* catch() { ... } // from try @ 02638a40 with catch @ 02639418
                       catch() { ... } // from try @ 02638c7c with catch @ 02639418
                       catch() { ... } // from try @ 02638ecc with catch @ 02639418
                       catch() { ... } // from try @ 026390b8 with catch @ 02639418
                       catch() { ... } // from try @ 02639174 with catch @ 02639418 */
      FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049ca340);
LAB_02639424:
      iVar3 = 9;
    }
    if (iStack_44 < 0) {
                    /* try { // try from 02639438 to 0273943b has its CatchHandler @ 02639448 */
                    /* catch() { ... } // from try @ 02639438 with catch @ 02639448 */
      TimeTracker__Dispose_24a0844(*ppiStack_80 + 0xe,0);
    }
                    /* try { // try from 02639450 to 02739457 has its CatchHandler @ 02639504 */
                    /* try { // try from 02639458 to 0273946b has its CatchHandler @ 02638680 */
    if ((iVar3 != 0xf) && (iVar3 != 0)) {
      return;
    }
    piStack_28[0xe] = 0;
    piStack_28[0xf] = 0;
    piStack_28[0x10] = 0;
    piStack_28[0x11] = 0;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 0263946c to 02739483 has its CatchHandler @ 026394f4 */
    if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02639850 to 0273985f has its CatchHandler @ 0263a1ac */
      FUN_021f06a0();
    }
    plVar10 = *(long **)(lVar12 + 0x48);
    iVar3 = piStack_28[8];
    uVar4 = System_Threading_CancellationTokenSource__get_Token_31655c4(*(long *)(lVar12 + 0x28),0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02639484 to 027394e3 has its CatchHandler @ 02638680 */
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049ca348) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_026394e0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049ca348,1);
LAB_026394e0:
                    /* try { // try from 026394e4 to 027394f3 has its CatchHandler @ 026394f4 */
    auVar13 = (*(code *)*puVar6)(plVar10,iVar3,uVar4,puVar6[1]);
    puVar1 = PTR_DAT_049b5138;
                    /* catch() { ... } // from try @ 0263946c with catch @ 026394f4
                       catch() { ... } // from try @ 026394e4 with catch @ 026394f4 */
                    /* try { // try from 026394f8 to 027394fb has its CatchHandler @ 02639504 */
                    /* try { // try from 026394fc to 02739507 has its CatchHandler @ 02638680 */
    if (*(char *)((long)piStack_28 + 0x25) == '\0') goto LAB_02639690;
                    /* catch() { ... } // from try @ 02639450 with catch @ 02639504
                       catch() { ... } // from try @ 026394f8 with catch @ 02639504 */
                    /* try { // try from 02639514 to 02739627 has its CatchHandler @ 02639514
                       catch() { ... } // from try @ 02639514 with catch @ 02639514
                       catch() { ... } // from try @ 0263a0ac with catch @ 02639514
                       catch() { ... } // from try @ 0263a168 with catch @ 02639514
                       catch() { ... } // from try @ 0263a2a0 with catch @ 02639514
                       catch() { ... } // from try @ 0263a2cc with catch @ 02639514
                       catch() { ... } // from try @ 0263a38c with catch @ 02639514 */
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_90 = auVar13;
    thunk_FUN_021f190c(auStack_90,0);
    auStack_60 = auStack_90;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar4 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_60._0_8_;
      uVar11 = auStack_60._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_026395e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_026395e8:
      iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      if (iVar3 == 0) {
        iStack_44 = 3;
        *piStack_28 = 3;
        *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
        thunk_FUN_021f190c(piStack_28 + 10,0);
        FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049ca340);
        return;
      }
    }
  }
  else {
    if (iStack_44 == 0) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      iStack_44 = -1;
      *param_1 = -1;
LAB_02638dc0:
      if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02638dcc to 02738e5f has its CatchHandler @ 026393ec */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_60._0_8_;
        uVar11 = auStack_60._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_02638e44;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02638e44:
        (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar10 = *(long **)(lVar12 + 0x30);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02639868 to 02739873 has its CatchHandler @ 0263a1a8 */
        FUN_021f06a0();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      iVar3 = piStack_28[8];
                    /* try { // try from 02638e78 to 02738e83 has its CatchHandler @ 0263935c */
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 02638e90 to 02738e9f has its CatchHandler @ 02639358 */
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049ca360) {
                    /* try { // try from 02638eb4 to 02738ebf has its CatchHandler @ 026393ec */
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02638ebc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049ca360,0);
LAB_02638ebc:
      (*(code *)*puVar6)(plVar10,iVar3,puVar6[1]);
                    /* try { // try from 02638ecc to 02738f53 has its CatchHandler @ 02639418 */
      auVar13 = TimeTracker__Begin_24a07c0(*(undefined8 *)PTR_DAT_049ca370,0);
      *(undefined1 (*) [16])(piStack_28 + 0xe) = auVar13;
      thunk_FUN_021f190c(piStack_28 + 0x10,0);
      auVar13 = auStack_60;
      goto LAB_02638efc;
    }
    if (iStack_44 != 3) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar10 = (long *)(lVar12 + 0x28);
      *(undefined1 *)(lVar12 + 0x20) = 0;
      if (*plVar10 != 0) {
        System_Threading_CancellationTokenSource__Cancel_31658dc(*plVar10,0);
      }
      lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
      System_Threading_CancellationTokenSource___ctor_3165668(lVar7,0);
      *plVar10 = lVar7;
      thunk_FUN_021f190c(plVar10,lVar7);
      if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar10 = *(long **)(lVar12 + 0x40);
      iVar3 = piStack_28[8];
      uVar4 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(lVar12 + 0x28),0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 02638c7c to 02738d03 has its CatchHandler @ 02639418 */
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049ca350) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_02638cb0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049ca350,1);
LAB_02638cb0:
      auStack_90 = (*(code *)*puVar6)(plVar10,iVar3,uVar4,puVar6[1]);
      puVar1 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_90,0);
      auStack_60 = auStack_90;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02638d0c to 02738d23 has its CatchHandler @ 026393a0 */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02638d34 to 02738d3f has its CatchHandler @ 0263939c */
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
                    /* try { // try from 02638d4c to 02738d6f has its CatchHandler @ 026393d8 */
      uVar4 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_60._0_8_;
        uVar11 = auStack_60._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 02638d74 to 02738d7f has its CatchHandler @ 02639398 */
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02638da4 to 02738da7 has its CatchHandler @ 02639360 */
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02638dac;
            }
                    /* try { // try from 02638d84 to 02738d8f has its CatchHandler @ 02639394 */
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02638dac:
                    /* try { // try from 02638dac to 02738db7 has its CatchHandler @ 02639390 */
        iVar3 = (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
        if (iVar3 == 0) {
          iStack_44 = 0;
          *piStack_28 = 0;
          *(undefined1 (*) [16])(piStack_28 + 10) = auStack_60;
                    /* try { // try from 02639810 to 0273981b has its CatchHandler @ 0263a174 */
          thunk_FUN_021f190c(piStack_28 + 10,0);
          FUN_0235c25c(piStack_28 + 2,auStack_60,piStack_28,*(undefined8 *)PTR_DAT_049ca340);
          return;
        }
      }
      goto LAB_02638dc0;
    }
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
                    /* try { // try from 02638bbc to 02738c6f has its CatchHandler @ 026393f4 */
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_44 = -1;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* try { // try from 02639628 to 0273962f has its CatchHandler @ 0263a1d4 */
    lVar7 = *(long *)auStack_60._0_8_;
    uVar11 = auStack_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02639638 to 02739643 has its CatchHandler @ 0263a1d0 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 0263967c to 0273967f has its CatchHandler @ 0263a1c4 */
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02639680;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 02639660 to 02739667 has its CatchHandler @ 0263a24c */
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02639680:
                    /* try { // try from 02639688 to 02739697 has its CatchHandler @ 0263a248 */
    (*(code *)*puVar6)(uVar4,uVar11,puVar6[1]);
  }
LAB_02639690:
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar10 = *(long **)(lVar12 + 0x38);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  iVar3 = piStack_28[8];
                    /* try { // try from 026396b4 to 027396bb has its CatchHandler @ 0263a18c */
  if (uVar8 != 0) {
                    /* try { // try from 026396bc to 027396d7 has its CatchHandler @ 0263a244 */
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049ca358) {
                    /* try { // try from 026396f0 to 02739707 has its CatchHandler @ 0263a240 */
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_026396f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049ca358,0);
LAB_026396f8:
  (*(code *)*puVar6)(plVar10,iVar3,puVar6[1]);
  piVar9 = piStack_28;
  cVar2 = cRam0000000004f49bfa;
                    /* try { // try from 02639710 to 0273972f has its CatchHandler @ 0263a23c */
  *piStack_28 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(piVar9 + 2);
  if (plVar10 != (long *)0x0) {
                    /* try { // try from 0263973c to 0273975b has its CatchHandler @ 0263a258 */
    lVar12 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02639794;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02639794:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

