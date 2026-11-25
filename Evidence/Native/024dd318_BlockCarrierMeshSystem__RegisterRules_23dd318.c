/* IL2CPP: BlockCarrierMeshSystem$$RegisterRules
void BlockCarrierMeshSystem__RegisterRules (BlockCarrierMeshSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockCarrierMeshSystem$$RegisterRules
   void BlockCarrierMeshSystem__RegisterRules (BlockCarrierMeshSystem_o* __this, const MethodInfo*
   method); */

void BlockCarrierMeshSystem__RegisterRules_23dd318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR_DAT_049c1428;
  if ((bRam0000000004f4b5ce & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1430);
                    /* try { // try from 024dd360 to 025dd387 has its CatchHandler @ 024dd510 */
    FUN_021f03f8(PTR_DAT_049c1438);
    FUN_021f03f8(PTR_DAT_049c1428);
    bRam0000000004f4b5ce = 1;
  }
  lVar8 = *(long *)(param_1 + 0x70);
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
  if (cRam0000000004f4b663 == '\0') {
    FUN_021f03f8(PTR_DAT_049c1440);
    cRam0000000004f4b663 = '\x01';
  }
  cVar4 = cRam0000000004f4b664;
  puVar3 = PTR_DAT_049c1440;
  if (lVar5 == 0) goto LAB_024ded24;
                    /* try { // try from 024dd3c0 to 025dd3eb has its CatchHandler @ 024dd514 */
  uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
  if (uVar7 != 0) {
    uVar10 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_049c1440 + 0xb8) + 0x20);
    *(undefined8 *)(lVar5 + 0x20) =
         *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049c1440 + 0xb8) + 0x18);
    *(undefined4 *)(lVar5 + 0x28) = uVar10;
    if (cVar4 == '\0') {
      FUN_021f03f8(PTR_DAT_049c1440);
      uVar7 = *(ulong *)(lVar5 + 0x18);
                    /* try { // try from 024dd404 to 025dd40f has its CatchHandler @ 024dd500 */
      cRam0000000004f4b664 = '\x01';
    }
    cVar4 = cRam0000000004f4b665;
    uVar6 = (uint)uVar7;
                    /* try { // try from 024dd410 to 025dd4e3 has its CatchHandler @ 024dd0a8 */
    if ((uVar7 & 0xfffffffe) != 0) {
      uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
      *(undefined8 *)(lVar5 + 0x2c) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
      *(undefined4 *)(lVar5 + 0x34) = uVar10;
      if (cVar4 == '\0') {
        FUN_021f03f8(PTR_DAT_049c1440);
        uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
        cRam0000000004f4b665 = '\x01';
      }
      if (2 < uVar6) {
        uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c);
        *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54);
        *(undefined4 *)(lVar5 + 0x40) = uVar10;
        lStack_a0 = lVar5;
        thunk_FUN_021f190c(&lStack_a0,lVar5);
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55e = '\x01';
        }
        lVar5 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        uVar13 = *(undefined4 *)(lVar5 + 0x18);
        uVar14 = *(undefined4 *)(lVar5 + 0x1c);
        uVar15 = *(undefined4 *)(lVar5 + 0x20);
        uVar10 = UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x42b40000,0);
        uStack_98 = CONCAT44(uVar13,uVar10);
        uStack_90 = CONCAT44(uVar15,uVar14);
        if (*(long *)(param_1 + 0x30) != 0) {
          uStack_88 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
                    /* try { // try from 024dd4e4 to 025dd4e7 has its CatchHandler @ 024dd50c */
                    /* try { // try from 024dd4e8 to 025dd4eb has its CatchHandler @ 024dd508 */
                    /* try { // try from 024dd4ec to 025dd4ef has its CatchHandler @ 024dd504 */
                    /* try { // try from 024dd4f0 to 025dd4fb has its CatchHandler @ 024dd0a8 */
          thunk_FUN_021f190c(&uStack_88);
          puVar2 = PTR_DAT_049c1438;
          if (lVar8 != 0) {
                    /* try { // try from 024dd4fc to 025dd4ff has its CatchHandler @ 024dd500 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd404 with catch @ 024dd500
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd4fc with catch @ 024dd500
                       try { // try from 024dd500 to 025dd533 has its CatchHandler @ 024dd0a8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd4ec with catch @ 024dd504
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd4e8 with catch @ 024dd508
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd4e4 with catch @ 024dd50c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd360 with catch @ 024dd510
                        */
            uStack_b8 = uStack_98;
            lStack_c0 = lStack_a0;
            uStack_a8 = uStack_88;
            uStack_b0 = uStack_90;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd3c0 with catch @ 024dd514
                        */
            FUN_02333498(lVar8,&lStack_c0,*(undefined8 *)PTR_DAT_049c1438);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 024dd2fc with catch @ 024dd518
                        */
            lVar8 = *(long *)(param_1 + 0x70);
            uStack_98 = 0;
            lStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                    /* try { // try from 024dd534 to 025dd537 has its CatchHandler @ 024dd548 */
            if (cRam0000000004f4b663 == '\0') {
              FUN_021f03f8(PTR_DAT_049c1440);
                    /* catch() { ... } // from try @ 024dd534 with catch @ 024dd548 */
                    /* try { // try from 024dd54c to 025dd553 has its CatchHandler @ 024dd55c */
              cRam0000000004f4b663 = '\x01';
            }
            cVar4 = cRam0000000004f4b666;
            if (lVar5 != 0) {
                    /* try { // try from 024dd554 to 025dd55f has its CatchHandler @ 024dd0a8 */
              uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
              if (uVar7 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024dd54c with catch @ 024dd55c
                        */
                uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
                *(undefined8 *)(lVar5 + 0x20) =
                     *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                *(undefined4 *)(lVar5 + 0x28) = uVar10;
                if (cVar4 == '\0') {
                  FUN_021f03f8(PTR_DAT_049c1440);
                  uVar7 = *(ulong *)(lVar5 + 0x18);
                  cRam0000000004f4b666 = '\x01';
                }
                cVar4 = cRam0000000004f4b665;
                uVar6 = (uint)uVar7;
                if ((uVar7 & 0xfffffffe) != 0) {
                  uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44);
                  *(undefined8 *)(lVar5 + 0x2c) =
                       *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c);
                  *(undefined4 *)(lVar5 + 0x34) = uVar10;
                  if (cVar4 == '\0') {
                    FUN_021f03f8(PTR_DAT_049c1440);
                    uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
                    cRam0000000004f4b665 = '\x01';
                  }
                  if (2 < uVar6) {
                    uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c);
                    *(undefined8 *)(lVar5 + 0x38) =
                         *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54);
                    *(undefined4 *)(lVar5 + 0x40) = uVar10;
                    lStack_a0 = lVar5;
                    thunk_FUN_021f190c(&lStack_a0,lVar5);
                    if (cRam0000000004f4a55e == '\0') {
                      FUN_021f03f8(PTR_DAT_049bbf90);
                      cRam0000000004f4a55e = '\x01';
                    }
                    lVar5 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
                    uVar13 = *(undefined4 *)(lVar5 + 0x18);
                    uVar14 = *(undefined4 *)(lVar5 + 0x1c);
                    uVar15 = *(undefined4 *)(lVar5 + 0x20);
                    uVar10 = UnityEngine_Quaternion__AngleAxis_3c0a0a8(0,0);
                    uStack_98 = CONCAT44(uVar13,uVar10);
                    uStack_90 = CONCAT44(uVar15,uVar14);
                    if (*(long *)(param_1 + 0x30) != 0) {
                      uStack_88 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
                      thunk_FUN_021f190c(&uStack_88);
                      if (lVar8 != 0) {
                        uStack_d8 = uStack_98;
                        lStack_e0 = lStack_a0;
                        uStack_c8 = uStack_88;
                        uStack_d0 = uStack_90;
                        FUN_02333498(lVar8,&lStack_e0,*(undefined8 *)puVar2);
                        lVar8 = *(long *)(param_1 + 0x70);
                        uStack_98 = 0;
                        lStack_a0 = 0;
                        uStack_88 = 0;
                        uStack_90 = 0;
                        lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                        if (cRam0000000004f4b667 == '\0') {
                          FUN_021f03f8(PTR_DAT_049c1440);
                          cRam0000000004f4b667 = '\x01';
                        }
                        cVar4 = cRam0000000004f4b664;
                        if (lVar5 != 0) {
                          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                          if (uVar7 != 0) {
                            uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c);
                            *(undefined8 *)(lVar5 + 0x20) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24);
                            *(undefined4 *)(lVar5 + 0x28) = uVar10;
                            if (cVar4 == '\0') {
                              FUN_021f03f8(PTR_DAT_049c1440);
                              uVar7 = *(ulong *)(lVar5 + 0x18);
                              cRam0000000004f4b664 = '\x01';
                            }
                            cVar4 = cRam0000000004f4b665;
                            uVar6 = (uint)uVar7;
                            if ((uVar7 & 0xfffffffe) != 0) {
                              uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
                              *(undefined8 *)(lVar5 + 0x2c) =
                                   *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
                              *(undefined4 *)(lVar5 + 0x34) = uVar10;
                              if (cVar4 == '\0') {
                                FUN_021f03f8(PTR_DAT_049c1440);
                                uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
                                cRam0000000004f4b665 = '\x01';
                              }
                              if (2 < uVar6) {
                                uVar10 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c);
                                *(undefined8 *)(lVar5 + 0x38) =
                                     *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54);
                                *(undefined4 *)(lVar5 + 0x40) = uVar10;
                                lStack_a0 = lVar5;
                                thunk_FUN_021f190c(&lStack_a0,lVar5);
                                uVar13 = _UNK_013aa650;
                                uVar10 = _UNK_013aa5e8;
                                uVar16 = 0;
                                uVar14 = _UNK_013aa650;
                                uVar11 = UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                   (_UNK_013aa5e8,0);
                                uStack_98 = CONCAT44(uVar16,uVar11);
                                uStack_90 = CONCAT44(uVar15,uVar14);
                                if (*(long *)(param_1 + 0x30) != 0) {
                                  uStack_88 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
                                  thunk_FUN_021f190c(&uStack_88);
                                  if (lVar8 != 0) {
                                    uStack_f8 = uStack_98;
                                    lStack_100 = lStack_a0;
                                    uStack_e8 = uStack_88;
                                    uStack_f0 = uStack_90;
                                    FUN_02333498(lVar8,&lStack_100,*(undefined8 *)puVar2);
                                    lVar8 = *(long *)(param_1 + 0x70);
                                    uStack_98 = 0;
                                    lStack_a0 = 0;
                                    uStack_88 = 0;
                                    uStack_90 = 0;
                                    lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                                    if (cRam0000000004f4b667 == '\0') {
                                      FUN_021f03f8(PTR_DAT_049c1440);
                                      cRam0000000004f4b667 = '\x01';
                                    }
                                    cVar4 = cRam0000000004f4b666;
                                    if (lVar5 != 0) {
                                      uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                      if (uVar7 != 0) {
                                        uVar14 = *(undefined4 *)
                                                  (*(long *)(*(long *)puVar3 + 0xb8) + 0x2c);
                                        *(undefined8 *)(lVar5 + 0x20) =
                                             *(undefined8 *)
                                              (*(long *)(*(long *)puVar3 + 0xb8) + 0x24);
                                        *(undefined4 *)(lVar5 + 0x28) = uVar14;
                                        if (cVar4 == '\0') {
                                          FUN_021f03f8(PTR_DAT_049c1440);
                                          uVar7 = *(ulong *)(lVar5 + 0x18);
                                          cRam0000000004f4b666 = '\x01';
                                        }
                                        cVar4 = cRam0000000004f4b665;
                                        uVar6 = (uint)uVar7;
                                        if ((uVar7 & 0xfffffffe) != 0) {
                                          uVar14 = *(undefined4 *)
                                                    (*(long *)(*(long *)puVar3 + 0xb8) + 0x44);
                                          *(undefined8 *)(lVar5 + 0x2c) =
                                               *(undefined8 *)
                                                (*(long *)(*(long *)puVar3 + 0xb8) + 0x3c);
                                          *(undefined4 *)(lVar5 + 0x34) = uVar14;
                                          if (cVar4 == '\0') {
                                            FUN_021f03f8(PTR_DAT_049c1440);
                                            uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
                                            cRam0000000004f4b665 = '\x01';
                                          }
                                          if (2 < uVar6) {
                                            uVar14 = *(undefined4 *)
                                                      (*(long *)(*(long *)puVar3 + 0xb8) + 0x5c);
                                            *(undefined8 *)(lVar5 + 0x38) =
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)puVar3 + 0xb8) + 0x54);
                                            *(undefined4 *)(lVar5 + 0x40) = uVar14;
                                            lStack_a0 = lVar5;
                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                            uVar16 = 0;
                                            uVar14 = uVar10;
                                            uVar11 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                            uStack_98 = CONCAT44(uVar16,uVar11);
                                            uStack_90 = CONCAT44(uVar15,uVar14);
                                            if (*(long *)(param_1 + 0x30) != 0) {
                                              uStack_88 = *(undefined8 *)
                                                           (*(long *)(param_1 + 0x30) + 0x28);
                                              thunk_FUN_021f190c(&uStack_88);
                                              if (lVar8 != 0) {
                                                uStack_118 = uStack_98;
                                                lStack_120 = lStack_a0;
                                                uStack_108 = uStack_88;
                                                uStack_110 = uStack_90;
                                                FUN_02333498(lVar8,&lStack_120,*(undefined8 *)puVar2
                                                            );
                                                lVar8 = *(long *)(param_1 + 0x70);
                                                uStack_98 = 0;
                                                lStack_a0 = 0;
                                                uStack_88 = 0;
                                                uStack_90 = 0;
                                                lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                                                if (cRam0000000004f4b663 == '\0') {
                                                  FUN_021f03f8(PTR_DAT_049c1440);
                                                  cRam0000000004f4b663 = '\x01';
                                                }
                                                cVar4 = cRam0000000004f4b664;
                                                if (lVar5 != 0) {
                                                  uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                  if (uVar7 != 0) {
                                                    uVar14 = *(undefined4 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x20);
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)puVar3 + 0xb8) + 0x18)
                                                    ;
                                                    *(undefined4 *)(lVar5 + 0x28) = uVar14;
                                                    if (cVar4 == '\0') {
                                                      FUN_021f03f8(PTR_DAT_049c1440);
                                                      uVar7 = *(ulong *)(lVar5 + 0x18);
                                                      cRam0000000004f4b664 = '\x01';
                                                    }
                                                    cVar4 = cRam0000000004f4b668;
                                                    uVar6 = (uint)uVar7;
                                                    if ((uVar7 & 0xfffffffe) != 0) {
                                                      uVar14 = *(undefined4 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x38);
                                                      *(undefined8 *)(lVar5 + 0x2c) =
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x30);
                                                      *(undefined4 *)(lVar5 + 0x34) = uVar14;
                                                      if (cVar4 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
                                                        cRam0000000004f4b668 = '\x01';
                                                      }
                                                      if (2 < uVar6) {
                                                        uVar14 = *(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x50);
                                                        *(undefined8 *)(lVar5 + 0x38) =
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)puVar3 + 0xb8) +
                                                              0x48);
                                                        *(undefined4 *)(lVar5 + 0x40) = uVar14;
                                                        lStack_a0 = lVar5;
                                                        thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                        if (cRam0000000004f4a55e == '\0') {
                                                          FUN_021f03f8(PTR_DAT_049bbf90);
                                                          cRam0000000004f4a55e = '\x01';
                                                        }
                                                        lVar5 = *(long *)(*(long *)PTR_DAT_049bbf90
                                                                         + 0xb8);
                                                        uVar15 = *(undefined4 *)(lVar5 + 0x18);
                                                        uVar11 = *(undefined4 *)(lVar5 + 0x1c);
                                                        uVar16 = *(undefined4 *)(lVar5 + 0x20);
                                                        uVar14 = 
                                                  UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                            (0x43340000,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar14);
                                                  uStack_90 = CONCAT44(uVar16,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x28);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_138 = uStack_98;
                                                      lStack_140 = lStack_a0;
                                                      uStack_128 = uStack_88;
                                                      uStack_130 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_140,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                                                      if (cRam0000000004f4b663 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b663 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar14 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x20);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x18);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar14;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                                                          cVar4 = cRam0000000004f4b668;
                                                          uVar6 = (uint)uVar7;
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar14 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar14;
                                                            if (cVar4 == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049c1440);
                                                              uVar6 = (uint)*(undefined8 *)
                                                                             (lVar5 + 0x18);
                                                              cRam0000000004f4b668 = '\x01';
                                                            }
                                                            if (2 < uVar6) {
                                                              uVar14 = *(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0x50);
                                                              *(undefined8 *)(lVar5 + 0x38) =
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x48);
                                                              *(undefined4 *)(lVar5 + 0x40) = uVar14
                                                              ;
                                                              lStack_a0 = lVar5;
                                                              thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                              if (cRam0000000004f4a55e == '\0') {
                                                                FUN_021f03f8(PTR_DAT_049bbf90);
                                                                cRam0000000004f4a55e = '\x01';
                                                              }
                                                              lVar5 = *(long *)(*(long *)
                                                  PTR_DAT_049bbf90 + 0xb8);
                                                  uVar15 = *(undefined4 *)(lVar5 + 0x18);
                                                  uVar11 = *(undefined4 *)(lVar5 + 0x1c);
                                                  uVar16 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar14 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                                     (0xc2b40000,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar14);
                                                  uStack_90 = CONCAT44(uVar16,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x28);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_158 = uStack_98;
                                                      lStack_160 = lStack_a0;
                                                      uStack_148 = uStack_88;
                                                      uStack_150 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_160,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                                                      if (cRam0000000004f4b667 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b667 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b664;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar14 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x2c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x24);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar14;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b664 = '\x01';
                                                          }
                                                          cVar4 = cRam0000000004f4b668;
                                                          uVar6 = (uint)uVar7;
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar14 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x38);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x30);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar14;
                                                            if (cVar4 == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049c1440);
                                                              uVar6 = (uint)*(undefined8 *)
                                                                             (lVar5 + 0x18);
                                                              cRam0000000004f4b668 = '\x01';
                                                            }
                                                            if (2 < uVar6) {
                                                              uVar14 = *(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0x50);
                                                              *(undefined8 *)(lVar5 + 0x38) =
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x48);
                                                              *(undefined4 *)(lVar5 + 0x40) = uVar14
                                                              ;
                                                              lStack_a0 = lVar5;
                                                              thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                              uVar14 = _UNK_013aa860;
                                                              uVar15 = uVar13;
                                                              uVar11 = _UNK_013aa860;
                                                              uVar12 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar12);
                                                  uStack_90 = CONCAT44(uVar16,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x28);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_178 = uStack_98;
                                                      lStack_180 = lStack_a0;
                                                      uStack_168 = uStack_88;
                                                      uStack_170 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_180,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,3);
                                                      if (cRam0000000004f4b667 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b667 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x2c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x24);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                                                          cVar4 = cRam0000000004f4b668;
                                                          uVar6 = (uint)uVar7;
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            if (cVar4 == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049c1440);
                                                              uVar6 = (uint)*(undefined8 *)
                                                                             (lVar5 + 0x18);
                                                              cRam0000000004f4b668 = '\x01';
                                                            }
                                                            if (2 < uVar6) {
                                                              uVar15 = *(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0x50);
                                                              *(undefined8 *)(lVar5 + 0x38) =
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x48);
                                                              *(undefined4 *)(lVar5 + 0x40) = uVar15
                                                              ;
                                                              lStack_a0 = lVar5;
                                                              thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                              uVar15 = uVar14;
                                                              uVar11 = uVar14;
                                                              uVar12 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar12);
                                                  uStack_90 = CONCAT44(uVar16,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x28);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_198 = uStack_98;
                                                      lStack_1a0 = lStack_a0;
                                                      uStack_188 = uStack_88;
                                                      uStack_190 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_1a0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b663 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b663 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b664;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x20);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x18);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b664 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x38);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x30);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            if (cRam0000000004f4a55e == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049bbf90);
                                                              cRam0000000004f4a55e = '\x01';
                                                            }
                                                            lVar5 = *(long *)(*(long *)
                                                  PTR_DAT_049bbf90 + 0xb8);
                                                  uVar11 = *(undefined4 *)(lVar5 + 0x18);
                                                  uVar16 = *(undefined4 *)(lVar5 + 0x1c);
                                                  uVar12 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar15 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                                     (0x42b40000,0);
                                                  uStack_98 = CONCAT44(uVar11,uVar15);
                                                  uStack_90 = CONCAT44(uVar12,uVar16);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024de00c to 025de2ff has its CatchHandler @ 024de00c
                       catch() { ... } // from try @ 024de00c with catch @ 024de00c
                       catch() { ... } // from try @ 024de3fc with catch @ 024de00c
                       catch() { ... } // from try @ 024de4d0 with catch @ 024de00c
                       catch() { ... } // from try @ 024de674 with catch @ 024de00c
                       catch() { ... } // from try @ 024de720 with catch @ 024de00c
                       catch() { ... } // from try @ 024de7e0 with catch @ 024de00c
                       catch() { ... } // from try @ 024de934 with catch @ 024de00c
                       catch() { ... } // from try @ 024de9ac with catch @ 024de00c
                       catch() { ... } // from try @ 024dea60 with catch @ 024de00c
                       catch() { ... } // from try @ 024dead4 with catch @ 024de00c
                       catch() { ... } // from try @ 024deb40 with catch @ 024de00c
                       catch() { ... } // from try @ 024debac with catch @ 024de00c
                       catch() { ... } // from try @ 024debd0 with catch @ 024de00c
                       catch() { ... } // from try @ 024debf4 with catch @ 024de00c
                       catch() { ... } // from try @ 024dec18 with catch @ 024de00c
                       catch() { ... } // from try @ 024dec6c with catch @ 024de00c */
                                                      uStack_1b8 = uStack_98;
                                                      lStack_1c0 = lStack_a0;
                                                      uStack_1a8 = uStack_88;
                                                      uStack_1b0 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_1c0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b663 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b663 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x20);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x18);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            if (cRam0000000004f4a55e == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049bbf90);
                                                              cRam0000000004f4a55e = '\x01';
                                                            }
                                                            lVar5 = *(long *)(*(long *)
                                                  PTR_DAT_049bbf90 + 0xb8);
                                                  uVar11 = *(undefined4 *)(lVar5 + 0x18);
                                                  uVar16 = *(undefined4 *)(lVar5 + 0x1c);
                                                  uVar12 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar15 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                                     (0xc2b40000,0);
                                                  uStack_98 = CONCAT44(uVar11,uVar15);
                                                  uStack_90 = CONCAT44(uVar12,uVar16);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_1d8 = uStack_98;
                                                      lStack_1e0 = lStack_a0;
                                                      uStack_1c8 = uStack_88;
                                                      uStack_1d0 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_1e0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b667 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b667 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b664;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x2c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x24);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b664 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x38);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x30);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar15 = uVar13;
                                                            uVar11 = uVar14;
                                                            uVar16 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar16);
                                                  uStack_90 = CONCAT44(uVar12,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_1f8 = uStack_98;
                                                      lStack_200 = lStack_a0;
                                                      uStack_1e8 = uStack_88;
                                                      uStack_1f0 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_200,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b667 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b667 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x2c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x24);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                    /* try { // try from 024de300 to 025de327 has its CatchHandler @ 024dec24 */
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar16 = 0;
                                                            uVar15 = uVar10;
                                                            uVar11 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (uVar10,0);
                                                  uStack_98 = CONCAT44(uVar16,uVar11);
                                                  uStack_90 = CONCAT44(uVar12,uVar15);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024de36c to 025de393 has its CatchHandler @ 024dec20 */
                                                      uStack_218 = uStack_98;
                                                      lStack_220 = lStack_a0;
                                                      uStack_208 = uStack_88;
                                                      uStack_210 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_220,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b665 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b665 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b663;
                                                      if (lVar5 != 0) {
                    /* try { // try from 024de3b0 to 025de3fb has its CatchHandler @ 024dec30 */
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x5c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x54);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b663 = '\x01';
                                                          }
                    /* try { // try from 024de3fc to 025de40f has its CatchHandler @ 024de00c */
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                    /* try { // try from 024de410 to 025de423 has its CatchHandler @ 024dec2c */
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x20);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x18);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            if (cRam0000000004f4a55e == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049bbf90);
                    /* try { // try from 024de440 to 025de443 has its CatchHandler @ 024dec34 */
                                                              cRam0000000004f4a55e = '\x01';
                                                            }
                                                            lVar5 = *(long *)(*(long *)
                                                  PTR_DAT_049bbf90 + 0xb8);
                                                  uVar11 = *(undefined4 *)(lVar5 + 0x18);
                                                  uVar16 = *(undefined4 *)(lVar5 + 0x1c);
                                                  uVar12 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar15 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                                     (0,0);
                    /* try { // try from 024de468 to 025de46f has its CatchHandler @ 024deb4c */
                                                  uStack_98 = CONCAT44(uVar11,uVar15);
                                                  uStack_90 = CONCAT44(uVar12,uVar16);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                    /* try { // try from 024de488 to 025de48b has its CatchHandler @ 024dec28 */
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_238 = uStack_98;
                                                      lStack_240 = lStack_a0;
                                                      uStack_228 = uStack_88;
                                                      uStack_230 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_240,
                                                                   *(undefined8 *)puVar2);
                    /* try { // try from 024de4b4 to 025de4cf has its CatchHandler @ 024dec34 */
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b665 == '\0') {
                    /* try { // try from 024de4d0 to 025de50f has its CatchHandler @ 024de00c */
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b665 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b667;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x5c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x54);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                    /* try { // try from 024de510 to 025de53f has its CatchHandler @ 024dec34 */
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b667 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x2c);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x24);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar11 = 0;
                                                            uVar16 = 0;
                                                            uVar15 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (uVar10,0);
                    /* try { // try from 024de570 to 025de59f has its CatchHandler @ 024deb80 */
                                                  uStack_98 = CONCAT44(uVar11,uVar15);
                                                  uStack_90 = CONCAT44(uVar12,uVar16);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_258 = uStack_98;
                                                      lStack_260 = lStack_a0;
                                                      uStack_248 = uStack_88;
                                                      uStack_250 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_260,
                                                                   *(undefined8 *)puVar2);
                    /* try { // try from 024de5b0 to 025de5b7 has its CatchHandler @ 024deb54 */
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                    /* try { // try from 024de5cc to 025de5d3 has its CatchHandler @ 024deb48 */
                                                      if (cRam0000000004f4b665 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b665 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b664;
                                                      if (lVar5 != 0) {
                    /* try { // try from 024de5ec to 025de5ef has its CatchHandler @ 024dec1c */
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x5c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x54);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b664 = '\x01';
                                                          }
                    /* try { // try from 024de634 to 025de63f has its CatchHandler @ 024deb50 */
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x38);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x30);
                    /* try { // try from 024de658 to 025de673 has its CatchHandler @ 024dec28 */
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar16 = 0;
                                                            uVar15 = uVar13;
                    /* try { // try from 024de674 to 025de693 has its CatchHandler @ 024de00c */
                                                            uVar11 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                                  uStack_98 = CONCAT44(uVar16,uVar11);
                                                  uStack_90 = CONCAT44(uVar12,uVar15);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                    /* try { // try from 024de694 to 025de6eb has its CatchHandler @ 024dec28 */
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                                                      uStack_278 = uStack_98;
                                                      lStack_280 = lStack_a0;
                                                      uStack_268 = uStack_88;
                                                      uStack_270 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_280,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b665 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b665 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                    /* try { // try from 024de704 to 025de71f has its CatchHandler @ 024dec1c */
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x5c);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x54);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                    /* try { // try from 024de720 to 025de73f has its CatchHandler @ 024de00c */
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                    /* try { // try from 024de740 to 025de797 has its CatchHandler @ 024dec1c */
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar16 = 0;
                                                            uVar15 = uVar10;
                                                            uVar11 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                                                  uStack_98 = CONCAT44(uVar16,uVar11);
                                                  uStack_90 = CONCAT44(uVar12,uVar15);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024de7b0 to 025de7bb has its CatchHandler @ 024deb50 */
                                                      uStack_298 = uStack_98;
                                                      lStack_2a0 = lStack_a0;
                                                      uStack_288 = uStack_88;
                                                      uStack_290 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_2a0,
                                                                   *(undefined8 *)puVar2);
                    /* try { // try from 024de7c8 to 025de7d3 has its CatchHandler @ 024deb44 */
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                    /* try { // try from 024de7dc to 025de7df has its CatchHandler @ 024deb7c */
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                    /* try { // try from 024de7e0 to 025de8c7 has its CatchHandler @ 024de00c */
                                                      if (cRam0000000004f4b668 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b668 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b663;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x50);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x48);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b663 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x20);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x18);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            if (cRam0000000004f4a55e == '\0') {
                                                              FUN_021f03f8(PTR_DAT_049bbf90);
                                                              cRam0000000004f4a55e = '\x01';
                                                            }
                                                            lVar5 = *(long *)(*(long *)
                                                  PTR_DAT_049bbf90 + 0xb8);
                                                  uVar11 = *(undefined4 *)(lVar5 + 0x18);
                                                  uVar16 = *(undefined4 *)(lVar5 + 0x1c);
                                                  uVar12 = *(undefined4 *)(lVar5 + 0x20);
                                                  uVar15 = UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                                                     (0x43340000,0);
                                                  uStack_98 = CONCAT44(uVar11,uVar15);
                    /* try { // try from 024de8c8 to 025de8cf has its CatchHandler @ 024deb68 */
                                                  uStack_90 = CONCAT44(uVar12,uVar16);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024de8e8 to 025de933 has its CatchHandler @ 024debd4 */
                                                      uStack_2b8 = uStack_98;
                                                      lStack_2c0 = lStack_a0;
                                                      uStack_2a8 = uStack_88;
                                                      uStack_2b0 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_2c0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b668 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                    /* try { // try from 024de934 to 025de977 has its CatchHandler @ 024de00c */
                                                        cRam0000000004f4b668 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b667;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                                                          uVar15 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x50);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x48);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar15;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                    /* try { // try from 024de978 to 025de9ab has its CatchHandler @ 024deb88 */
                                                            cRam0000000004f4b667 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                                                            uVar15 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x2c);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x24);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar15;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                    /* try { // try from 024de9ac to 025de9f3 has its CatchHandler @ 024de00c */
                                                            uVar15 = 0;
                                                            uVar11 = 0;
                                                            uVar14 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (uVar14,0);
                                                  uStack_98 = CONCAT44(uVar15,uVar14);
                                                  uStack_90 = CONCAT44(uVar12,uVar11);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024de9f4 to 025de9fb has its CatchHandler @ 024deb64 */
                                                      uStack_2d8 = uStack_98;
                                                      lStack_2e0 = lStack_a0;
                                                      uStack_2c8 = uStack_88;
                                                      uStack_2d0 = uStack_90;
                                                      FUN_02333498(lVar8,&lStack_2e0,
                                                                   *(undefined8 *)puVar2);
                                                      lVar8 = *(long *)(param_1 + 0x70);
                    /* try { // try from 024dea14 to 025dea5f has its CatchHandler @ 024deb8c */
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                                                      if (cRam0000000004f4b668 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                                                        cRam0000000004f4b668 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b664;
                                                      if (lVar5 != 0) {
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                                                        if (uVar7 != 0) {
                    /* try { // try from 024dea60 to 025deaa3 has its CatchHandler @ 024de00c */
                                                          uVar14 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x50);
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x48);
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar14;
                                                          if (cVar4 == '\0') {
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                                                            cRam0000000004f4b664 = '\x01';
                                                          }
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                    /* try { // try from 024deaa4 to 025dead3 has its CatchHandler @ 024deb84 */
                                                            uVar14 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x38);
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x30);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar14;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar14 = uVar13;
                                                            uVar15 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                    /* try { // try from 024dead4 to 025deb03 has its CatchHandler @ 024de00c */
                                                  uStack_98 = CONCAT44(uVar13,uVar15);
                                                  uStack_90 = CONCAT44(uVar12,uVar14);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    if (lVar8 != 0) {
                    /* try { // try from 024deb04 to 025deb07 has its CatchHandler @ 024deb78 */
                    /* try { // try from 024deb08 to 025deb0b has its CatchHandler @ 024deb74 */
                                                      uStack_2f8 = uStack_98;
                                                      lStack_300 = lStack_a0;
                                                      uStack_2e8 = uStack_88;
                                                      uStack_2f0 = uStack_90;
                    /* try { // try from 024deb0c to 025deb0f has its CatchHandler @ 024deb60 */
                                                      FUN_02333498(lVar8,&lStack_300,
                                                                   *(undefined8 *)puVar2);
                    /* try { // try from 024deb10 to 025deb13 has its CatchHandler @ 024deb5c */
                    /* try { // try from 024deb14 to 025deb17 has its CatchHandler @ 024deb58 */
                    /* try { // try from 024deb18 to 025deb1f has its CatchHandler @ 024deb70 */
                                                      lVar8 = *(long *)(param_1 + 0x70);
                    /* try { // try from 024deb20 to 025deb27 has its CatchHandler @ 024deb6c */
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                                                      lVar5 = FUN_021f04e4(*(undefined8 *)puVar1,2);
                    /* try { // try from 024deb28 to 025deb33 has its CatchHandler @ 024deb70 */
                                                      if (cRam0000000004f4b668 == '\0') {
                    /* try { // try from 024deb34 to 025deb3f has its CatchHandler @ 024deb6c */
                                                        FUN_021f03f8(PTR_DAT_049c1440);
                    /* try { // try from 024deb40 to 025deba7 has its CatchHandler @ 024de00c */
                    /* catch() { ... } // from try @ 024de7c8 with catch @ 024deb44 */
                                                        cRam0000000004f4b668 = '\x01';
                                                      }
                                                      cVar4 = cRam0000000004f4b666;
                    /* catch() { ... } // from try @ 024de5cc with catch @ 024deb48 */
                                                      if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 024de468 with catch @ 024deb4c */
                                                        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
                    /* catch() { ... } // from try @ 024de634 with catch @ 024deb50
                       catch() { ... } // from try @ 024de7b0 with catch @ 024deb50 */
                                                        if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 024de5b0 with catch @ 024deb54 */
                    /* catch() { ... } // from try @ 024deb14 with catch @ 024deb58 */
                    /* catch() { ... } // from try @ 024deb10 with catch @ 024deb5c */
                    /* catch() { ... } // from try @ 024deb0c with catch @ 024deb60 */
                    /* catch() { ... } // from try @ 024de9f4 with catch @ 024deb64 */
                                                          uVar13 = *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0x50);
                    /* catch() { ... } // from try @ 024de8c8 with catch @ 024deb68 */
                                                          *(undefined8 *)(lVar5 + 0x20) =
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)puVar3 + 0xb8) +
                                                                0x48);
                    /* catch() { ... } // from try @ 024deb20 with catch @ 024deb6c
                       catch() { ... } // from try @ 024deb34 with catch @ 024deb6c */
                                                          *(undefined4 *)(lVar5 + 0x28) = uVar13;
                    /* catch() { ... } // from try @ 024deb18 with catch @ 024deb70
                       catch() { ... } // from try @ 024deb28 with catch @ 024deb70 */
                                                          if (cVar4 == '\0') {
                    /* catch() { ... } // from try @ 024deb08 with catch @ 024deb74 */
                    /* catch() { ... } // from try @ 024deb04 with catch @ 024deb78 */
                    /* catch() { ... } // from try @ 024de7dc with catch @ 024deb7c */
                                                            FUN_021f03f8(PTR_DAT_049c1440);
                    /* catch() { ... } // from try @ 024de570 with catch @ 024deb80 */
                                                            uVar7 = *(ulong *)(lVar5 + 0x18);
                    /* catch() { ... } // from try @ 024deaa4 with catch @ 024deb84 */
                    /* catch() { ... } // from try @ 024de978 with catch @ 024deb88 */
                                                            cRam0000000004f4b666 = '\x01';
                                                          }
                    /* catch() { ... } // from try @ 024dea14 with catch @ 024deb8c */
                                                          if ((uVar7 & 0xfffffffe) != 0) {
                    /* try { // try from 024deba8 to 025debab has its CatchHandler @ 024debc4 */
                                                            uVar13 = *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0x44);
                    /* try { // try from 024debac to 025debc7 has its CatchHandler @ 024de00c */
                                                            *(undefined8 *)(lVar5 + 0x2c) =
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 0x3c);
                                                            *(undefined4 *)(lVar5 + 0x34) = uVar13;
                                                            lStack_a0 = lVar5;
                                                            thunk_FUN_021f190c(&lStack_a0,lVar5);
                                                            uVar13 = uVar10;
                    /* catch() { ... } // from try @ 024deba8 with catch @ 024debc4 */
                    /* try { // try from 024debc8 to 025debcf has its CatchHandler @ 024dec74 */
                                                            uVar14 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                                            (0,0);
                    /* try { // try from 024debd0 to 025debef has its CatchHandler @ 024de00c */
                    /* catch() { ... } // from try @ 024de8e8 with catch @ 024debd4 */
                                                  uStack_98 = CONCAT44(uVar10,uVar14);
                                                  uStack_90 = CONCAT44(uVar12,uVar13);
                                                  if (*(long *)(param_1 + 0x30) != 0) {
                                                    uStack_88 = *(undefined8 *)
                                                                 (*(long *)(param_1 + 0x30) + 0x30);
                    /* try { // try from 024debf0 to 025debf3 has its CatchHandler @ 024dec0c */
                    /* try { // try from 024debf4 to 025dec0f has its CatchHandler @ 024de00c */
                                                    thunk_FUN_021f190c(&uStack_88);
                                                    puVar1 = PTR_DAT_049c1430;
                                                    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 024debf0 with catch @ 024dec0c */
                    /* try { // try from 024dec10 to 025dec17 has its CatchHandler @ 024dec74 */
                                                      uStack_318 = uStack_98;
                                                      lStack_320 = lStack_a0;
                                                      uStack_308 = uStack_88;
                                                      uStack_310 = uStack_90;
                    /* try { // try from 024dec18 to 025dec4f has its CatchHandler @ 024de00c */
                                                      FUN_02333498(lVar8,&lStack_320,
                                                                   *(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 024de5ec with catch @ 024dec1c
                       catch() { ... } // from try @ 024de704 with catch @ 024dec1c
                       catch() { ... } // from try @ 024de740 with catch @ 024dec1c */
                    /* catch() { ... } // from try @ 024de36c with catch @ 024dec20 */
                                                      lVar9 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 024de300 with catch @ 024dec24 */
                                                      lVar8 = *(long *)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 024de488 with catch @ 024dec28
                       catch() { ... } // from try @ 024de658 with catch @ 024dec28
                       catch() { ... } // from try @ 024de694 with catch @ 024dec28 */
                                                      lVar5 = *(long *)(lVar9 + 0x38);
                    /* catch() { ... } // from try @ 024de410 with catch @ 024dec2c */
                                                      uStack_98 = 0;
                                                      lStack_a0 = 0;
                                                      uStack_88 = 0;
                                                      uStack_90 = 0;
                    /* catch() { ... } // from try @ 024de3b0 with catch @ 024dec30 */
                                                      if (lVar5 == 0) {
                    /* catch() { ... } // from try @ 024de440 with catch @ 024dec34
                       catch() { ... } // from try @ 024de4b4 with catch @ 024dec34
                       catch() { ... } // from try @ 024de510 with catch @ 024dec34 */
                                                        FUN_02229774(lVar9);
                                                        lVar5 = *(long *)(lVar9 + 0x38);
                                                      }
                                                      lVar5 = *(long *)(lVar5 + 0x10);
                                                      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 024dec50 to 025dec53 has its CatchHandler @ 024dec60 */
                                                        lVar5 = FUN_02229718();
                                                      }
                                                      if (*(int *)(lVar5 + 0xe4) == 0) {
                                                        FUN_021f0574();
                                                      }
                    /* catch() { ... } // from try @ 024dec50 with catch @ 024dec60 */
                    /* try { // try from 024dec64 to 025dec6b has its CatchHandler @ 024dec74 */
                                                      lVar5 = *(long *)(*(long *)(lVar9 + 0x38) +
                                                                       0x10);
                    /* try { // try from 024dec6c to 025dec77 has its CatchHandler @ 024de00c */
                                                      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 024debc8 with catch @ 024dec74
                       catch() { ... } // from try @ 024dec10 with catch @ 024dec74
                       catch() { ... } // from try @ 024dec64 with catch @ 024dec74 */
                                                        lVar5 = FUN_02229718();
                                                      }
                    /* try { // try from 024dec80 to 025dee2f has its CatchHandler @ 024dec80
                       catch() { ... } // from try @ 024dec80 with catch @ 024dec80
                       catch() { ... } // from try @ 024def24 with catch @ 024dec80
                       catch() { ... } // from try @ 024defc0 with catch @ 024dec80
                       catch() { ... } // from try @ 024df054 with catch @ 024dec80
                       catch() { ... } // from try @ 024df0b0 with catch @ 024dec80 */
                                                      lStack_a0 = **(long **)(lVar5 + 0xb8);
                                                      thunk_FUN_021f190c(&lStack_a0);
                                                      if (cRam0000000004f4a191 == '\0') {
                                                        FUN_021f03f8(PTR_DAT_049bc158);
                                                        cRam0000000004f4a191 = '\x01';
                                                      }
                                                      uStack_90 = (*(undefined8 **)
                                                                    (*(long *)PTR_DAT_049bc158 +
                                                                    0xb8))[1];
                                                      uStack_98 = **(undefined8 **)
                                                                    (*(long *)PTR_DAT_049bc158 +
                                                                    0xb8);
                                                      if (*(long *)(param_1 + 0x30) != 0) {
                                                        uStack_88 = *(undefined8 *)
                                                                     (*(long *)(param_1 + 0x30) +
                                                                     0x20);
                                                        thunk_FUN_021f190c(&uStack_88);
                                                        if (lVar8 != 0) {
                                                          uStack_338 = uStack_98;
                                                          lStack_340 = lStack_a0;
                                                          uStack_328 = uStack_88;
                                                          uStack_330 = uStack_90;
                                                          FUN_02333498(lVar8,&lStack_340,
                                                                       *(undefined8 *)puVar2);
                                                          return;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded24;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_024ded28;
                                                }
                                              }
                                            }
                                            goto LAB_024ded24;
                                          }
                                        }
                                      }
                                      goto LAB_024ded28;
                                    }
                                  }
                                }
                                goto LAB_024ded24;
                              }
                            }
                          }
                          goto LAB_024ded28;
                        }
                      }
                    }
                    goto LAB_024ded24;
                  }
                }
              }
              goto LAB_024ded28;
            }
          }
        }
LAB_024ded24:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_024ded28:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a8();
}

