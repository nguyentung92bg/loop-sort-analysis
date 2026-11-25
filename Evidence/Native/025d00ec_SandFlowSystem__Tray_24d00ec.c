/* IL2CPP: SandFlowSystem$$Tray
System_ValueTuple_Vector3__Vector3__o SandFlowSystem__Tray (SandFlowSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025d0428) */
/* IL2CPP: SandFlowSystem$$Tray
   System_ValueTuple_Vector3__Vector3__o SandFlowSystem__Tray (SandFlowSystem_o* __this, Carrier_o*
   carrier, const MethodInfo* method); */

void SandFlowSystem__Tray_24d00ec
               (long *param_1,undefined1 param_2 [16],float param_3,ulong param_4,long param_5,
               long param_6)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulong uVar29;
  float fVar30;
  undefined1 auVar31 [12];
  long lStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  ulong uStack_c0;
  float fStack_b8;
  ulong uStack_b0;
  float fStack_a8;
  
  if ((bRam0000000004f4bc00 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7400);
    FUN_021f03f8(PTR_DAT_049c7408);
    FUN_021f03f8(PTR_DAT_049c1640);
    FUN_021f03f8(PTR_DAT_049c1648);
    FUN_021f03f8(PTR_DAT_049c1650);
    FUN_021f03f8(PTR_DAT_049c1658);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c7410);
    bRam0000000004f4bc00 = 1;
  }
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  lStack_d0 = 0;
  lStack_100 = 0;
  plStack_f8 = (long *)0x0;
  lStack_f0 = 0;
  if (*(long *)(param_5 + 0x1d0) == 0) goto LAB_025d0614;
  uVar10 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                     (*(long *)(param_5 + 0x1d0),param_6,&lStack_e0,*(undefined8 *)PTR_DAT_049c7400)
  ;
  puVar5 = PTR_DAT_049b3b98;
  if ((uVar10 & 1) != 0) goto LAB_025d05cc;
  if ((param_6 == 0) || (*(long *)(param_5 + 0x58) == 0)) goto LAB_025d0614;
  lVar15 = *(long *)(param_6 + 0xc0);
  lVar16 = *(long *)(*(long *)(param_5 + 0x58) + 0x38);
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = UnityEngine_Object__op_Inequality_3c1b96c(lVar16,0,0);
  fVar19 = (float)param_4;
  if ((uVar10 & 1) == 0) {
LAB_025d0438:
                    /* catch() { ... } // from try @ 025d0420 with catch @ 025d0440 */
    auVar31 = Carrier__get_BlockSize_240813c(param_6,0);
                    /* try { // try from 025d0444 to 026d044b has its CatchHandler @ 025d0454 */
                    /* try { // try from 025d044c to 026d0457 has its CatchHandler @ 025d03c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d0444 with catch @ 025d0454
                        */
                    /* try { // try from 025d0458 to 026d04e3 has its CatchHandler @ 025d0458
                       catch() { ... } // from try @ 025d0458 with catch @ 025d0458
                       catch() { ... } // from try @ 025d057c with catch @ 025d0458
                       catch() { ... } // from try @ 025d05f8 with catch @ 025d0458 */
    if (cRam0000000004f4b729 == '\0') {
      FUN_021f03f8(PTR_DAT_049c1440);
      cRam0000000004f4b729 = '\x01';
    }
    fVar20 = (float)Carrier__CoordinateToLocalPosition_2408cbc
                              (param_6,**(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8),
                               *(undefined4 *)
                                (*(undefined8 **)(*(long *)PTR_DAT_049c1440 + 0xb8) + 1),0);
    uVar18 = auVar31._0_4_ - 1;
    uVar3 = auVar31._4_4_ - 1;
    uVar4 = auVar31._8_4_ - 1;
    fVar26 = param_3;
    fVar27 = fVar19;
    fVar21 = (float)Carrier__CoordinateToLocalPosition_2408cbc
                              (param_6,CONCAT44(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
                                                uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)),
                               uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU),0);
    uVar29 = CONCAT44(fVar26,fVar21);
    fVar30 = fVar19;
                    /* try { // try from 025d04e4 to 026d04ef has its CatchHandler @ 025d05bc */
    if (fVar27 <= fVar19) {
      fVar30 = fVar27;
    }
    uVar10 = uVar29 ^ (uVar29 ^ CONCAT44(param_3,fVar20)) &
                      CONCAT44(-(uint)(param_3 < fVar26),-(uint)(fVar20 < fVar21));
    if (cRam0000000004f4a190 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a190 = '\x01';
    }
    uVar13 = NEON_fmov(0x3e800000,4);
                    /* try { // try from 025d051c to 026d052b has its CatchHandler @ 025d05b8 */
    uVar29 = uVar29 ^ (uVar29 ^ CONCAT44(param_3,fVar20)) &
                      CONCAT44(-(uint)(fVar26 < param_3),-(uint)(fVar21 < fVar20));
                    /* try { // try from 025d0530 to 026d0557 has its CatchHandler @ 025d05c0 */
    uVar28 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0xc);
    fVar24 = *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x14) * 0.25;
    if (fVar19 <= fVar27) {
      fVar19 = fVar27;
    }
    fVar26 = (float)uVar28 * (float)uVar13;
    fVar27 = (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
    fVar30 = fVar30 - fVar24;
    uVar10 = CONCAT44((float)(uVar10 >> 0x20) - fVar27,(float)uVar10 - fVar26);
    uVar29 = CONCAT44((float)(uVar29 >> 0x20) + fVar27,(float)uVar29 + fVar26);
    fVar24 = fVar19 + fVar24;
  }
  else {
    if (lVar16 == 0) goto LAB_025d0614;
    UnityEngine_Mesh__get_bounds_3bf1bc0(&uStack_118,lVar16,0);
    if (*(long *)(param_6 + 0x120) == 0) goto LAB_025d0614;
    fVar26 = (float)uStack_118;
    fVar27 = uStack_118._4_4_;
    fVar8 = (float)uStack_108;
    fVar9 = uStack_108._4_4_;
    fVar20 = (float)uStack_110;
    fVar21 = uStack_110._4_4_;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_6 + 0x120),&uStack_118,*(undefined8 *)PTR_DAT_049c1658);
    lStack_100 = uStack_118;
    puVar7 = PTR_DAT_049c1650;
    puVar6 = PTR_DAT_049c1648;
    fVar22 = -fVar9;
    uStack_118 = 0;
    lStack_f0 = uStack_108;
    uVar10 = 0x7f7fffff7f7fffff;
    uVar29 = 0xff7fffffff7fffff;
    fVar30 = 3.4028235e+38;
    plStack_f8 = uStack_110;
    fVar24 = -3.4028235e+38;
    param_3 = fVar22;
    uStack_110 = &lStack_100;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&lStack_100,*(undefined8 *)puVar6);
      lVar16 = uStack_118;
      fVar19 = (float)param_4;
      if ((uVar11 & 1) == 0) break;
      lVar17 = *(long *)puVar7;
      lVar12 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
      lVar16 = lVar12;
      if ((uVar2 & 1) == 0) {
        lVar16 = FUN_02229718();
        lVar12 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&lStack_100,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_b0,uVar13,uVar1);
      uVar11 = uStack_b0;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar14 = UnityEngine_Object__op_Equality_3c1eeb4(uVar11,0,0);
      if ((uVar14 & 1) == 0) {
        if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar16 = UnityEngine_Component__get_transform_3c18724(uVar11,0);
        uVar18 = 0;
        do {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fVar19 = fVar22;
          if (3 < uVar18) {
            fVar19 = fVar9;
          }
          fVar23 = -fVar8;
          if ((uVar18 & 2) != 0) {
            fVar23 = fVar8;
          }
          fVar25 = -fVar21;
          if ((uVar18 & 1) != 0) {
            fVar25 = fVar21;
          }
          param_4 = (ulong)(uint)(fVar20 + fVar19);
          fVar23 = fVar27 + fVar23;
          UnityEngine_Transform__TransformPoint_3c2ec74(fVar26 + fVar25,lVar16,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* catch() { ... } // from try @ 025d03ec with catch @ 025d03c8
                       catch() { ... } // from try @ 025d0424 with catch @ 025d03c8
                       catch() { ... } // from try @ 025d044c with catch @ 025d03c8 */
          fVar19 = (float)UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar15,0);
          fVar25 = (float)param_4;
          uVar18 = uVar18 + 1;
          if (fVar25 <= fVar30) {
            fVar30 = fVar25;
          }
          param_3 = (float)-(uint)((float)uVar10 < fVar19);
                    /* try { // try from 025d03e4 to 026d03eb has its CatchHandler @ 025d0404 */
          if (fVar24 <= fVar25) {
            fVar24 = fVar25;
          }
                    /* try { // try from 025d03ec to 026d041f has its CatchHandler @ 025d03c8 */
          uVar10 = uVar10 ^ (uVar10 ^ CONCAT44(fVar23,fVar19)) &
                            ~CONCAT44(-(uint)((float)(uVar10 >> 0x20) < fVar23),param_3);
          uVar29 = uVar29 ^ (uVar29 ^ CONCAT44(fVar23,fVar19)) &
                            ~CONCAT44(-(uint)(fVar23 < (float)(uVar29 >> 0x20)),
                                      -(uint)(fVar19 < (float)uVar29));
        } while (uVar18 != 8);
      }
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d03e4 with catch @ 025d0404
                        */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (uStack_110,*(undefined8 *)PTR_DAT_049c1640);
    if (lVar16 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar16);
    }
                    /* try { // try from 025d0420 to 026d0423 has its CatchHandler @ 025d0440 */
                    /* try { // try from 025d0424 to 026d0443 has its CatchHandler @ 025d03c8 */
    if ((float)uVar29 < (float)uVar10) goto LAB_025d0438;
  }
  uStack_118 = 0;
  uStack_110 = (long *)0x0;
  uStack_108 = 0;
                    /* try { // try from 025d056c to 026d057b has its CatchHandler @ 025d05c4 */
                    /* try { // try from 025d057c to 026d05df has its CatchHandler @ 025d0458 */
  uStack_c0 = uVar29;
  fStack_b8 = fVar24;
  uStack_b0 = uVar10;
  fStack_a8 = fVar30;
  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
            (&uStack_118,&uStack_b0,&uStack_c0,*(undefined8 *)PTR_DAT_049c7410);
  plStack_d8 = uStack_110;
  lStack_e0 = uStack_118;
  lStack_d0 = uStack_108;
  if (*(long *)(param_5 + 0x1d0) == 0) {
LAB_025d0614:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d051c with catch @ 025d05b8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d04e4 with catch @ 025d05bc
                        */
  plStack_128 = uStack_110;
  lStack_130 = uStack_118;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d0530 with catch @ 025d05c0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d056c with catch @ 025d05c4
                        */
  lStack_120 = uStack_108;
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
            (*(long *)(param_5 + 0x1d0),param_6,&lStack_130,*(undefined8 *)PTR_DAT_049c7408);
LAB_025d05cc:
  param_1[1] = (long)plStack_d8;
  *param_1 = lStack_e0;
  param_1[2] = lStack_d0;
                    /* try { // try from 025d05e0 to 026d05e3 has its CatchHandler @ 025d05ec */
                    /* catch() { ... } // from try @ 025d05e0 with catch @ 025d05ec */
                    /* try { // try from 025d05f0 to 026d05f7 has its CatchHandler @ 025d0600 */
                    /* try { // try from 025d05f8 to 026d0603 has its CatchHandler @ 025d0458 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d05f0 with catch @ 025d0600
                        */
  return;
}

