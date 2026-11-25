/* IL2CPP: CameraBoundsSystem$$CalculateCameraBounds
void CameraBoundsSystem__CalculateCameraBounds (CameraBoundsSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025d596c) */
/* WARNING: Removing unreachable block (ram,0x025d604c) */
/* IL2CPP: CameraBoundsSystem$$CalculateCameraBounds
   void CameraBoundsSystem__CalculateCameraBounds (CameraBoundsSystem_o* __this, const MethodInfo*
   method); */

void CameraBoundsSystem__CalculateCameraBounds_24d54c8
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4)

{
  ushort uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  char cVar19;
  int *piVar20;
  int iVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  float fStack_140;
  undefined8 uStack_13c;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  long lStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  float afStack_ac [2];
  float fStack_a4;
  
  puVar3 = PTR_DAT_049c59b8;
                    /* try { // try from 025d5504 to 026d56eb has its CatchHandler @ 025d5504
                       catch() { ... } // from try @ 025d5504 with catch @ 025d5504
                       catch() { ... } // from try @ 025d579c with catch @ 025d5504
                       catch() { ... } // from try @ 025d586c with catch @ 025d5504
                       catch() { ... } // from try @ 025d58c8 with catch @ 025d5504 */
  if ((bRam0000000004f4bc36 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c59b0);
    FUN_021f03f8(PTR_DAT_049c59b8);
    FUN_021f03f8(PTR_DAT_049c7718);
    FUN_021f03f8(PTR_DAT_049c7720);
    FUN_021f03f8(PTR_DAT_049c7728);
    FUN_021f03f8(PTR_DAT_049c7730);
    FUN_021f03f8(PTR_DAT_049bed58);
    FUN_021f03f8(PTR_DAT_049c7738);
    FUN_021f03f8(PTR_DAT_049c59d0);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4bc36 = 1;
  }
  puVar4 = PTR_DAT_049c59b0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  CameraBoundsSystem__SetGroupFramingSettings_24d621c(param_4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_c0 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_c8,*(undefined8 *)puVar4);
  puVar9 = PTR_DAT_049c7738;
  puVar8 = PTR_DAT_049c7730;
  puVar7 = PTR_DAT_049c7728;
  puVar6 = PTR_DAT_049c7720;
  puVar5 = PTR_DAT_049c7718;
  puVar4 = PTR_DAT_049c22d8;
  puVar3 = PTR_DAT_049bed58;
  lVar12 = *(long *)(param_4 + 0x48);
  puStack_108 = auStack_c0;
  lStack_110 = 0;
  if (lVar12 != 0) {
    iVar21 = 0;
    do {
      iVar11 = Dreamteck_Splines_SplineComputer__get_pointCount_23467f8(lVar12,0);
      lVar12 = lStack_c8;
      if (iVar11 <= iVar21) {
        if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar13 = 0;
        if (*(double *)(*(long *)(param_4 + 0x58) + 0x168) < 1.0) {
          if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 025d56ec to 026d5713 has its CatchHandler @ 025d588c */
          Dreamteck_Splines_SplineComputer__Evaluate_2349114
                    (&uStack_160,*(long *)(param_4 + 0x48),0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar13 = (ulong)(uint)(float)uStack_158;
          FUN_02333498(lVar12,&uStack_160,*(undefined8 *)puVar3);
        }
        lVar12 = *(long *)(param_4 + 0xd0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_158._0_4_ = 0.0;
        uStack_158._4_4_ = 0.0;
        fStack_150 = 0.0;
        fStack_14c = 0.0;
        uStack_160 = (ulong)*(uint *)(lVar12 + 0x30) << 0x20;
        thunk_FUN_021f190c(&uStack_158,0);
        fStack_150 = (float)*(undefined8 *)(lVar12 + 0x28);
        fStack_14c = (float)((ulong)*(undefined8 *)(lVar12 + 0x28) >> 0x20);
        thunk_FUN_021f190c(&fStack_150);
        lStack_d8 = CONCAT44(uStack_158._4_4_,(float)uStack_158);
                    /* try { // try from 025d5750 to 026d5777 has its CatchHandler @ 025d5888 */
        lStack_d0 = CONCAT44(fStack_14c,fStack_150);
        uStack_e0 = uStack_160;
        goto LAB_025d5760;
      }
      if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Dreamteck_Splines_SplineComputer__GetPoint_23478c0
                (&uStack_160,*(long *)(param_4 + 0x48),iVar21,0,0);
      if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      param_3 = (ulong)(uint)fStack_150;
      Dreamteck_Splines_SplineComputer__Project_2349550
                (&uStack_160,(float)uStack_158,uStack_158._4_4_,param_3,0,0x3ff0000000000000,
                 *(long *)(param_4 + 0x48),0);
      uVar10 = (uint)(float)uStack_158;
      if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar13 = Conveyor__IsOnBelt_24b03c4
                         (CONCAT44(uStack_124,fStack_128),*(long *)(param_4 + 0x58),0);
      if ((uVar13 & 1) != 0) {
        if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_158._0_4_ = (float)uVar10;
        FUN_02333498(lStack_c8,&uStack_160,*(undefined8 *)puVar3);
      }
      lVar12 = *(long *)(param_4 + 0x48);
      iVar21 = iVar21 + 1;
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
LAB_025d5760:
  iVar21 = (int)uStack_e0 + -1;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar21);
  if (iVar21 < 0) {
    uStack_e0._4_4_ = uStack_e0._4_4_ - 1;
    uStack_e0._0_4_ = iVar21;
    if ((int)uStack_e0._4_4_ < 0) {
      if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lStack_c8,&uStack_160,*(undefined8 *)puVar9);
      lStack_100 = uStack_160;
      uStack_f8 = CONCAT44(uStack_158._4_4_,(float)uStack_158);
      uStack_f0 = CONCAT44(fStack_14c,fStack_150);
                    /* try { // try from 025d585c to 026d585f has its CatchHandler @ 025d5884 */
                    /* try { // try from 025d5860 to 026d5863 has its CatchHandler @ 025d5880 */
      uStack_158 = &lStack_100;
                    /* try { // try from 025d5864 to 026d5867 has its CatchHandler @ 025d587c */
      uStack_160 = 0;
                    /* try { // try from 025d5868 to 026d586b has its CatchHandler @ 025d5878 */
      uStack_e8 = uStack_148;
                    /* try { // try from 025d586c to 026d58ab has its CatchHandler @ 025d5504 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5868 with catch @ 025d5878
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5864 with catch @ 025d587c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5860 with catch @ 025d5880
                        */
      fVar39 = -100.0;
      fVar2 = -100.0;
      fVar33 = 100.0;
      fVar32 = 100.0;
      while( true ) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5750 with catch @ 025d5888
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d56ec with catch @ 025d588c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5784 with catch @ 025d5890
                        */
        uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&lStack_100,*(undefined8 *)puVar6);
        if ((uVar13 & 1) == 0) break;
        lVar15 = *(long *)puVar7;
        lVar16 = *(long *)(lVar15 + 0x20);
        uVar1 = *(ushort *)(lVar16 + 0x135);
        lVar12 = lVar16;
        if ((uVar1 & 1) == 0) {
                    /* try { // try from 025d58ac to 026d58af has its CatchHandler @ 025d58bc */
          lVar12 = FUN_02229718();
          lVar16 = *(long *)(lVar15 + 0x20);
                    /* catch() { ... } // from try @ 025d58ac with catch @ 025d58bc */
          uVar1 = *(ushort *)(lVar16 + 0x135);
                    /* try { // try from 025d58c0 to 026d58c7 has its CatchHandler @ 025d58d0 */
        }
                    /* try { // try from 025d58c8 to 026d58d3 has its CatchHandler @ 025d5504 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d58c0 with catch @ 025d58d0
                        */
        uVar22 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar16 = FUN_02229718();
        }
        uVar17 = thunk_FUN_0224e54c(&lStack_100,
                                    *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(afStack_ac,uVar17,uVar22);
        fVar46 = afStack_ac[0];
        if (fVar33 <= afStack_ac[0]) {
          fVar46 = fVar33;
        }
        fVar33 = afStack_ac[0];
        if (afStack_ac[0] <= fVar39) {
          fVar33 = fVar39;
        }
        fVar23 = fStack_a4;
        if (fStack_a4 <= fVar2) {
          fVar23 = fVar2;
        }
        fVar39 = fVar33;
        fVar2 = fVar23;
        fVar33 = fVar46;
        if (fStack_a4 < fVar32) {
          fVar32 = fStack_a4;
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_100,*(undefined8 *)puVar5);
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      puVar3 = PTR_DAT_049bbf90;
      lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      uVar17 = *(undefined8 *)(lVar12 + 0x48);
      fVar46 = *(float *)(lVar12 + 0x50);
      if (cRam0000000004f4a632 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
        lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
        cVar19 = cRam0000000004f4a55a;
      }
      else {
        cVar19 = '\x01';
      }
      fVar47 = *(float *)(lVar12 + 0x44);
      uVar40 = *(undefined8 *)(lVar12 + 0x3c);
      fVar23 = fVar39 + fVar33;
      if (cVar19 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      puVar4 = PTR_DAT_049bbf90;
      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar24 = *(float *)(*(long *)(param_4 + 0x30) + 0x24);
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar42 = *(float *)(lVar12 + 0x50);
      uVar41 = *(undefined8 *)(lVar12 + 0x48);
      if (cRam0000000004f4a632 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      fVar43 = *(float *)(lVar12 + 0x44);
      uVar48 = *(undefined8 *)(lVar12 + 0x3c);
      if (cRam0000000004f4a68e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a68e = '\x01';
      }
      puVar4 = PTR_DAT_049bbf90;
      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar25 = *(float *)(*(long *)(param_4 + 0x30) + 0x28);
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
                    /* catch() { ... } // from try @ 025d5acc with catch @ 025d5a9c
                       catch() { ... } // from try @ 025d5afc with catch @ 025d5a9c
                       catch() { ... } // from try @ 025d5b58 with catch @ 025d5a9c
                       catch() { ... } // from try @ 025d5b64 with catch @ 025d5a9c */
      fVar44 = *(float *)(lVar12 + 0x5c);
      uVar49 = *(undefined8 *)(lVar12 + 0x54);
      if (cRam0000000004f4a632 == '\0') {
                    /* try { // try from 025d5ab4 to 026d5acb has its CatchHandler @ 025d5acc */
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      puVar4 = PTR_DAT_049bbf90;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5ab4 with catch @ 025d5acc
                       try { // try from 025d5acc to 026d5ae3 has its CatchHandler @ 025d5a9c */
      uVar34 = *(undefined8 *)(lVar12 + 0x3c);
      fVar26 = *(float *)(lVar12 + 0x44);
      if (cRam0000000004f4a55a == '\0') {
                    /* try { // try from 025d5ae4 to 026d5afb has its CatchHandler @ 025d5b5c */
        FUN_021f03f8(PTR_DAT_049bbf90);
                    /* try { // try from 025d5afc to 026d5b47 has its CatchHandler @ 025d5a9c */
        cRam0000000004f4a55a = '\x01';
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      fVar27 = fVar32 + fVar2;
      fVar28 = *(float *)(lVar12 + 0x50);
      uVar35 = *(undefined8 *)(lVar12 + 0x48);
      if (cRam0000000004f4a690 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a690 = '\x01';
      }
      puVar4 = PTR_DAT_049bbf90;
      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025d5b48 to 026d5b57 has its CatchHandler @ 025d5b5c */
      lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
      fVar29 = *(float *)(lVar12 + 0x38);
                    /* try { // try from 025d5b58 to 026d5b5f has its CatchHandler @ 025d5a9c */
                    /* catch() { ... } // from try @ 025d5ae4 with catch @ 025d5b5c
                       catch() { ... } // from try @ 025d5b48 with catch @ 025d5b5c */
      fVar30 = *(float *)(*(long *)(param_4 + 0x30) + 0x2c);
                    /* try { // try from 025d5b60 to 026d5b63 has its CatchHandler @ 025d5b6c */
                    /* try { // try from 025d5b64 to 026d5b6f has its CatchHandler @ 025d5a9c */
      uVar36 = *(undefined8 *)(lVar12 + 0x30);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d5b60 with catch @ 025d5b6c
                        */
      if (cRam0000000004f4a632 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      puVar4 = PTR_DAT_049bbf90;
      uVar37 = *(undefined8 *)(lVar12 + 0x3c);
      fVar31 = *(float *)(lVar12 + 0x44);
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
        lVar12 = *(long *)(*(long *)puVar4 + 0xb8);
        cVar19 = cRam0000000004f4a632;
      }
      else {
        cVar19 = '\x01';
      }
      fVar45 = *(float *)(lVar12 + 0x50);
      uVar50 = *(undefined8 *)(lVar12 + 0x48);
      if (cVar19 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a632 = '\x01';
      }
      if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar53 = (float)uVar41;
      fVar38 = (float)((ulong)uVar41 >> 0x20);
                    /* try { // try from 025d5c54 to 026d5cc7 has its CatchHandler @ 025d5c54
                       catch() { ... } // from try @ 025d5c54 with catch @ 025d5c54
                       catch() { ... } // from try @ 025d5cf4 with catch @ 025d5c54
                       catch() { ... } // from try @ 025d5d48 with catch @ 025d5c54
                       catch() { ... } // from try @ 025d5d74 with catch @ 025d5c54
                       catch() { ... } // from try @ 025d5dac with catch @ 025d5c54 */
                    /* try { // try from 025d5cc8 to 026d5cd3 has its CatchHandler @ 025d5d54 */
                    /* try { // try from 025d5cec to 026d5cf3 has its CatchHandler @ 025d5d4c */
      uVar41 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c);
                    /* try { // try from 025d5cf4 to 026d5d43 has its CatchHandler @ 025d5c54 */
      fVar51 = (float)uVar17 * fVar2 + (float)uVar40 * fVar23 * 0.5 + fVar53 * fVar24;
      fVar52 = (float)((ulong)uVar17 >> 0x20) * fVar2 +
               (float)((ulong)uVar40 >> 0x20) * fVar23 * 0.5 + fVar38 * fVar24;
      fVar38 = fVar38 * fVar32 + (float)((ulong)uVar48 >> 0x20) * fVar23 * 0.5 +
               (float)((ulong)uVar49 >> 0x20) * fVar25;
      uVar17 = CONCAT44(fVar38,fVar53 * fVar32 + (float)uVar48 * fVar23 * 0.5 +
                               (float)uVar49 * fVar25);
      fVar53 = *(float *)(*(long *)(param_4 + 0x30) + 0x30);
      fVar32 = fVar32 * fVar42 + fVar23 * fVar43 * 0.5 + fVar44 * fVar25;
                    /* try { // try from 025d5d44 to 026d5d47 has its CatchHandler @ 025d5d50 */
      fVar25 = (float)((ulong)uVar34 >> 0x20) * fVar33 +
               (float)((ulong)uVar35 >> 0x20) * fVar27 * 0.5 +
               (float)((ulong)uVar36 >> 0x20) * fVar30;
      uVar40 = CONCAT44(fVar25,(float)uVar34 * fVar33 + (float)uVar35 * fVar27 * 0.5 +
                               (float)uVar36 * fVar30);
                    /* try { // try from 025d5d48 to 026d5d6f has its CatchHandler @ 025d5c54 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5cec with catch @ 025d5d4c
                        */
      fVar33 = fVar33 * fVar26 + fVar27 * fVar28 * 0.5 + fVar29 * fVar30;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5d44 with catch @ 025d5d50
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d5cc8 with catch @ 025d5d54
                        */
      fVar44 = (float)((ulong)uVar37 >> 0x20) * fVar39 +
               (float)((ulong)uVar50 >> 0x20) * fVar27 * 0.5 +
               (float)((ulong)uVar41 >> 0x20) * fVar53;
      uVar41 = CONCAT44(fVar44,(float)uVar37 * fVar39 + (float)uVar50 * fVar27 * 0.5 +
                               (float)uVar41 * fVar53);
      fVar43 = fVar39 * fVar31 + fVar27 * fVar45 * 0.5 +
               *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44) * fVar53;
      fVar39 = fVar43;
      if (*(char *)(param_4 + 0x98) == '\0') {
        *(undefined1 *)(param_4 + 0x98) = 1;
        if (*(long *)(param_4 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__set_position_3c2d61c(fVar51,fVar52,*(long *)(param_4 + 0x78),0);
        if (*(long *)(param_4 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__set_position_3c2d61c
                  (uVar17,fVar38,fVar32,*(long *)(param_4 + 0x80),0);
        if (*(long *)(param_4 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__set_position_3c2d61c
                  (uVar40,fVar25,fVar33,*(long *)(param_4 + 0x88),0);
        if (*(long *)(param_4 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_Transform__set_position_3c2d61c(*(long *)(param_4 + 0x90),0);
      }
      else {
                    /* try { // try from 025d5d70 to 026d5d73 has its CatchHandler @ 025d5da0 */
                    /* try { // try from 025d5d74 to 026d5da3 has its CatchHandler @ 025d5c54 */
        CameraBoundsSystem__MoveTarget_24d6358
                  (fVar51,fVar52,param_4,*(undefined8 *)(param_4 + 0x78),param_4 + 0x9c);
        CameraBoundsSystem__MoveTarget_24d6358
                  (uVar17,fVar38,fVar32,param_4,*(undefined8 *)(param_4 + 0x80),param_4 + 0xa8);
                    /* catch() { ... } // from try @ 025d5d70 with catch @ 025d5da0 */
                    /* try { // try from 025d5da4 to 026d5dab has its CatchHandler @ 025d5db4 */
                    /* try { // try from 025d5dac to 026d5db7 has its CatchHandler @ 025d5c54 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d5da4 with catch @ 025d5db4
                        */
        CameraBoundsSystem__MoveTarget_24d6358
                  (uVar40,fVar25,fVar33,param_4,*(undefined8 *)(param_4 + 0x88),param_4 + 0xb4);
        CameraBoundsSystem__MoveTarget_24d6358
                  (param_4,*(undefined8 *)(param_4 + 0x90),param_4 + 0xc0);
      }
      if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Unity_Cinemachine_CinemachineTargetGroup__DoUpdate_389f858(*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar14 = *(long **)(param_4 + 0x68);
      fVar25 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x78),0);
      if (*(long *)(param_4 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar26 = fVar39;
      fVar27 = fVar44;
      fVar28 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x80),0);
      if (*(long *)(param_4 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar29 = fVar27;
      fVar30 = fVar26;
      fVar31 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x88),0);
      if (*(long *)(param_4 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar45 = fVar29;
      fVar38 = fVar30;
      fVar53 = (float)UnityEngine_Transform__get_position_3c2d540(*(long *)(param_4 + 0x90),0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar20 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar8) {
            puVar18 = (undefined8 *)(lVar12 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_025d5f1c;
          }
          uVar13 = uVar13 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar13 != 0);
      }
      puVar18 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)puVar8,0);
LAB_025d5f1c:
      uStack_158._0_4_ = (fVar39 + fVar26 + fVar30 + fVar38) * 0.25;
      uStack_160 = CONCAT44((fVar44 + fVar27 + fVar29 + fVar45) * 0.25,
                            (fVar25 + fVar28 + fVar31 + fVar53) * 0.25);
      uStack_158._4_4_ = fVar51;
      fStack_150 = fVar52;
      fStack_14c = fVar2 * fVar46 + fVar23 * fVar47 * 0.5 + fVar42 * fVar24;
      uStack_148 = uVar17;
      fStack_140 = fVar32;
      uStack_13c = uVar40;
      fStack_134 = fVar33;
      uStack_130 = uVar41;
      fStack_128 = fVar43;
      (*(code *)*puVar18)(plVar14,&uStack_160,puVar18[1]);
      lVar12 = lStack_110;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_108,*(undefined8 *)PTR_DAT_049c59d0);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f0698(lVar12);
      }
      return;
    }
                    /* try { // try from 025d5784 to 026d579b has its CatchHandler @ 025d5890 */
    lVar12 = *(long *)(lStack_d0 + (ulong)uStack_e0._4_4_ * 8 + 0x20);
    lStack_d8 = *(long *)(lVar12 + 0x18);
    thunk_FUN_021f190c((ulong)&uStack_e0 | 8);
                    /* try { // try from 025d579c to 026d585b has its CatchHandler @ 025d5504 */
    iVar21 = *(int *)(lVar12 + 0x30) + -1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar21);
  }
  if (*(long *)(param_4 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar14 = (long *)FUN_024f6008(*(long *)(param_4 + 0xd8),
                                 *(undefined8 *)(lStack_d8 + (long)iVar21 * 8 + 0x20),
                                 *(undefined8 *)puVar4);
  lVar12 = *plVar14;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar15 = UnityEngine_Component__get_transform_3c18724(lVar12,0);
  lVar16 = lStack_c8;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar22 = UnityEngine_Transform__get_position_3c2d540(lVar15,0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_160 = CONCAT44((int)uVar13,uVar22);
  uStack_158._0_4_ = (float)param_3;
  FUN_02333498(lVar16,&uStack_160,*(undefined8 *)puVar3);
  lVar16 = lStack_c8;
  if (*(long *)(lVar12 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar22 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar12 + 200),0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_160 = CONCAT44((int)uVar13,uVar22);
  uStack_158._0_4_ = (float)param_3;
  FUN_02333498(lVar16,&uStack_160,*(undefined8 *)puVar3);
  goto LAB_025d5760;
}

