/* IL2CPP: BlockCarrierMeshSystem$$SetCarrierBlockMesh
void BlockCarrierMeshSystem__SetCarrierBlockMesh (BlockCarrierMeshSystem_o* __this, Carrier_o* carrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockCarrierMeshSystem$$SetCarrierBlockMesh
   void BlockCarrierMeshSystem__SetCarrierBlockMesh (BlockCarrierMeshSystem_o* __this, Carrier_o*
   carrier, Block_o* block, const MethodInfo* method); */

void BlockCarrierMeshSystem__SetCarrierBlockMesh_23df438(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong unaff_x24;
  ulong unaff_x25;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000004f4b5cc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1500);
    FUN_021f03f8(PTR_DAT_049c1508);
    FUN_021f03f8(PTR_DAT_049c1510);
    FUN_021f03f8(PTR_DAT_049c1518);
                    /* try { // try from 024df4a8 to 025df4cf has its CatchHandler @ 024df65c */
    FUN_021f03f8(PTR_DAT_049c1520);
    FUN_021f03f8(PTR_DAT_049c1528);
    bRam0000000004f4b5cc = 1;
  }
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (param_2 != 0) {
    auVar19 = Carrier__GetBlockCoordinate_2408c2c(param_2,param_3,0);
    if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 024df50c to 025df533 has its CatchHandler @ 024df658 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0x70),&uStack_100,*(undefined8 *)PTR_DAT_049c1518);
      uStack_98 = uStack_e8;
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
LAB_024df530:
                    /* try { // try from 024df538 to 025df547 has its CatchHandler @ 024df650 */
      uVar3 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_b0,*(undefined8 *)PTR_DAT_049c1508);
      if ((uVar3 & 1) != 0) {
        lVar9 = *(long *)PTR_DAT_049c1510;
        lVar4 = *(long *)(lVar9 + 0x20);
        uVar2 = *(ushort *)(lVar4 + 0x135);
        lVar5 = lVar4;
        if ((uVar2 & 1) == 0) {
          lVar5 = FUN_02229718();
          lVar4 = *(long *)(lVar9 + 0x20);
          uVar2 = *(ushort *)(lVar4 + 0x135);
        }
        uVar15 = *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar4 = FUN_02229718();
        }
                    /* try { // try from 024df5a4 to 025df5cb has its CatchHandler @ 024df624 */
        uVar6 = thunk_FUN_0224e54c(&uStack_b0,
                                   *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) + 0x60);
        func_0x04608620(&uStack_100,uVar6,uVar15);
        uVar6 = uStack_e8;
        uVar18 = uStack_ec;
        uVar17 = uStack_f0;
        uVar16 = uStack_f4;
        uVar15 = uStack_f8;
        lVar5 = CONCAT44(uStack_fc,uStack_100);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar3 = 0;
          uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                    /* try { // try from 024df5e8 to 025df5eb has its CatchHandler @ 024df61c */
          piVar14 = (int *)(lVar5 + 0x28);
          do {
            if (uVar8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
                    /* try { // try from 024df5f8 to 025df5fb has its CatchHandler @ 024df654 */
                    /* try { // try from 024df5fc to 025df5ff has its CatchHandler @ 024df64c */
            if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* try { // try from 024df600 to 025df603 has its CatchHandler @ 024df648 */
                    /* try { // try from 024df604 to 025df607 has its CatchHandler @ 024df63c */
                    /* try { // try from 024df608 to 025df60b has its CatchHandler @ 024df620 */
            iVar13 = auVar19._8_4_;
                    /* try { // try from 024df60c to 025df60f has its CatchHandler @ 024df634 */
            uVar1 = *piVar14 + iVar13;
                    /* try { // try from 024df610 to 025df613 has its CatchHandler @ 024df644 */
            if (*(char *)(*(long *)(param_1 + 0x88) + 0x10) == '\0') {
                    /* try { // try from 024df688 to 025df68f has its CatchHandler @ 024df964 */
              if ((auVar19._8_8_ & 1) == 0) {
                if (iVar13 <= (int)uVar1) goto LAB_024df614;
              }
              else if ((int)uVar1 <= iVar13) goto LAB_024df614;
            }
            else {
LAB_024df614:
                    /* try { // try from 024df614 to 025df61b has its CatchHandler @ 024df624 */
                    /* catch() { ... } // from try @ 024df5e8 with catch @ 024df61c
                       try { // try from 024df61c to 025df66f has its CatchHandler @ 024df1ec */
              uVar10 = (ulong)(uint)((int)*(ulong *)(piVar14 + -2) + auVar19._0_4_);
                    /* catch() { ... } // from try @ 024df608 with catch @ 024df620 */
                    /* catch() { ... } // from try @ 024df5a4 with catch @ 024df624
                       catch() { ... } // from try @ 024df614 with catch @ 024df624 */
              unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)uVar1;
              uVar12 = (*(ulong *)(piVar14 + -2) & 0xffffffff00000000) + auVar19._0_8_ &
                       0xffffffff00000000;
                    /* catch() { ... } // from try @ 024df424 with catch @ 024df630 */
                    /* catch() { ... } // from try @ 024df354 with catch @ 024df634
                       catch() { ... } // from try @ 024df60c with catch @ 024df634 */
                    /* catch() { ... } // from try @ 024df340 with catch @ 024df638 */
                    /* catch() { ... } // from try @ 024df328 with catch @ 024df63c
                       catch() { ... } // from try @ 024df604 with catch @ 024df63c */
              uVar8 = Carrier__IsBlockExists_2408e28(param_2,uVar12 | uVar10,unaff_x25,0);
                    /* catch() { ... } // from try @ 024df30c with catch @ 024df640 */
              if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 024df39c with catch @ 024df644
                       catch() { ... } // from try @ 024df610 with catch @ 024df644 */
                    /* catch() { ... } // from try @ 024df600 with catch @ 024df648 */
                unaff_x24 = unaff_x24 & 0xffffffff00000000 | (ulong)uVar1;
                    /* catch() { ... } // from try @ 024df5fc with catch @ 024df64c */
                    /* catch() { ... } // from try @ 024df538 with catch @ 024df650 */
                    /* catch() { ... } // from try @ 024df5f8 with catch @ 024df654 */
                    /* catch() { ... } // from try @ 024df50c with catch @ 024df658 */
                    /* catch() { ... } // from try @ 024df4a8 with catch @ 024df65c */
                lVar4 = Carrier__GetBlockAt_2408ee0(param_2,uVar12 | uVar10,unaff_x24,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024df800 to 025df807 has its CatchHandler @ 024df868 */
                  FUN_021f06a0();
                }
                uVar8 = Block__IsCompatibleWith_23dcb80(lVar4,param_3);
                if ((uVar8 & 1) != 0) goto LAB_024df530;
              }
            }
                    /* try { // try from 024df670 to 025df673 has its CatchHandler @ 024df69c */
            uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar3 = uVar3 + 1;
            piVar14 = piVar14 + 3;
            if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) break;
          } while( true );
        }
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        Block__SetMesh_23dc584(param_3,uVar6);
        lVar5 = UnityEngine_Component__get_transform_3c18724(param_3,0);
        uStack_c8 = *(undefined8 *)(param_3 + 0x128);
        uStack_d0 = *(undefined8 *)(param_3 + 0x120);
        lVar4 = *(long *)(*(long *)PTR_DAT_049c1528 + 0x20);
        uStack_c0 = *(undefined4 *)(param_3 + 0x130);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 024df6ec to 025df717 has its CatchHandler @ 024df890 */
          lVar4 = FUN_02229718();
        }
        pcVar7 = (char *)thunk_FUN_0224e54c(&uStack_d0,
                                            *(undefined8 *)
                                             (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
        if (*pcVar7 != '\0') {
          lVar11 = *(long *)PTR_DAT_049c1520;
          lVar9 = *(long *)(lVar11 + 0x20);
                    /* try { // try from 024df720 to 025df723 has its CatchHandler @ 024df884 */
          uVar2 = *(ushort *)(lVar9 + 0x135);
          lVar4 = lVar9;
          if ((uVar2 & 1) == 0) {
            lVar4 = FUN_02229718();
                    /* try { // try from 024df72c to 025df733 has its CatchHandler @ 024df87c */
            lVar9 = *(long *)(lVar11 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
                    /* try { // try from 024df73c to 025df747 has its CatchHandler @ 024df888 */
          }
          uVar15 = *(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar6 = thunk_FUN_0224e54c(&uStack_d0,
                                     *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x20
                                    );
                    /* try { // try from 024df778 to 025df77f has its CatchHandler @ 024df86c */
          func_0x04608620(&uStack_100,uVar6,uVar15);
          uVar15 = uStack_100;
          uVar16 = uStack_fc;
          uVar17 = uStack_f8;
          uVar18 = uStack_f4;
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 024df78c to 025df793 has its CatchHandler @ 024df874 */
                    /* try { // try from 024df794 to 025df7ff has its CatchHandler @ 024df1ec */
        UnityEngine_Transform__set_localRotation_3c2d9f0(uVar15,uVar16,uVar17,uVar18,lVar5,0);
        if (*(long *)(param_3 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024df814 to 025df833 has its CatchHandler @ 024df870 */
          FUN_021f06a0();
        }
        UnityEngine_Renderer__set_enabled_3bdcab0(*(long *)(param_3 + 0x138),1,0);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_b0,*(undefined8 *)PTR_DAT_049c1500);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

