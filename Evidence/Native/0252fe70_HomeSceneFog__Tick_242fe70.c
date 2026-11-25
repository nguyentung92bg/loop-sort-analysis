/* IL2CPP: HomeSceneFog$$Tick
void HomeSceneFog__Tick (HomeSceneFog_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFog$$Tick
   void HomeSceneFog__Tick (HomeSceneFog_o* __this, float t, const MethodInfo* method); */

void HomeSceneFog__Tick_242fe70(float param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
                    /* try { // try from 0252fe70 to 0262fe7b has its CatchHandler @ 02530024 */
                    /* try { // try from 0252fe80 to 0262fe8b has its CatchHandler @ 02530054 */
                    /* try { // try from 0252fea0 to 0262fea7 has its CatchHandler @ 02530040 */
  if ((bRam0000000004f4b7d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3848);
    FUN_021f03f8(PTR_DAT_049c3850);
                    /* try { // try from 0252fec4 to 0262fec7 has its CatchHandler @ 02530018 */
                    /* try { // try from 0252fecc to 0262fef7 has its CatchHandler @ 02530050 */
    FUN_021f03f8(PTR_DAT_049c3858);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3860);
    bRam0000000004f4b7d4 = 1;
  }
  puVar9 = PTR_DAT_049c3858;
  puVar8 = PTR_DAT_049c3850;
  puVar7 = PTR_DAT_049c3848;
  puVar6 = PTR_DAT_049c3110;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
                    /* try { // try from 0252ff04 to 0262ff0f has its CatchHandler @ 0253003c */
  if (*(long *)(param_2 + 0x10) != 0) {
                    /* try { // try from 0252ff18 to 0262ff23 has its CatchHandler @ 02530038 */
                    /* try { // try from 0252ff28 to 0262ff33 has its CatchHandler @ 02530054 */
                    /* try { // try from 0252ff34 to 0262ff6b has its CatchHandler @ 0252fd8c */
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_2 + 0x10),&plStack_108,*(undefined8 *)PTR_DAT_049c3860);
    fVar5 = _UNK_013aa8d8;
    fVar4 = _UNK_013aa8a8;
    uStack_a0 = uStack_d8;
    uStack_c8 = uStack_100;
    plStack_d0 = plStack_108;
                    /* try { // try from 0252ff6c to 0262ff77 has its CatchHandler @ 02530020 */
    uStack_a8 = uStack_e0;
    while( true ) {
      uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&plStack_d0,*(undefined8 *)puVar8);
                    /* try { // try from 0252ff84 to 0262ffa3 has its CatchHandler @ 02530034 */
      if ((uVar13 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&plStack_d0,*(undefined8 *)puVar7);
                    /* try { // try from 025300fc to 02630107 has its CatchHandler @ 02530254 */
        return;
      }
      lVar17 = *(long *)puVar9;
      lVar14 = *(long *)(lVar17 + 0x20);
      uVar3 = *(ushort *)(lVar14 + 0x135);
      lVar15 = lVar14;
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_02229718();
        lVar14 = *(long *)(lVar17 + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
                    /* try { // try from 0252ffcc to 0262ffeb has its CatchHandler @ 0253001c */
      uVar16 = thunk_FUN_0224e54c(&plStack_d0,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_108,uVar16,uVar1);
      uVar12 = uStack_e8;
      uVar11 = uStack_ec;
      fVar19 = fStack_f0;
      fVar21 = fStack_f4;
      uVar1 = uStack_f8;
      uVar16 = uStack_100;
      plVar10 = plStack_108;
                    /* try { // try from 02530000 to 02630003 has its CatchHandler @ 02530048 */
                    /* try { // try from 02530004 to 02630007 has its CatchHandler @ 02530044 */
                    /* try { // try from 02530008 to 0263000b has its CatchHandler @ 02530030 */
      iVar2 = *(int *)(param_2 + 0x2c);
                    /* try { // try from 0253000c to 0263000f has its CatchHandler @ 0253002c */
                    /* try { // try from 02530010 to 02630013 has its CatchHandler @ 0253004c */
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0252ffb4 with catch @ 02530014
                       try { // try from 02530014 to 0263007b has its CatchHandler @ 0252fd8c */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 0252fec4 with catch @ 02530018 */
      if (plVar10 == (long *)0x0) break;
                    /* catch() { ... } // from try @ 0252ffcc with catch @ 0253001c */
                    /* catch() { ... } // from try @ 0252ff6c with catch @ 02530020 */
                    /* catch() { ... } // from try @ 0252fe70 with catch @ 02530024 */
      fVar18 = fVar5;
                    /* catch() { ... } // from try @ 0252fe60 with catch @ 02530028 */
      if (fVar5 <= fVar21) {
        fVar18 = fVar21;
      }
                    /* catch() { ... } // from try @ 0253000c with catch @ 0253002c */
                    /* catch() { ... } // from try @ 02530008 with catch @ 02530030 */
      fVar18 = (param_1 - fVar19) / fVar18;
                    /* catch() { ... } // from try @ 0252ff84 with catch @ 02530034 */
                    /* catch() { ... } // from try @ 0252ff18 with catch @ 02530038 */
      fVar18 = fVar18 - (float)(int)fVar18;
                    /* catch() { ... } // from try @ 0252ff04 with catch @ 0253003c */
                    /* catch() { ... } // from try @ 0252fea0 with catch @ 02530040 */
      fVar21 = 1.0;
      if (fVar18 <= 1.0) {
        fVar21 = fVar18;
      }
                    /* catch() { ... } // from try @ 02530004 with catch @ 02530044 */
                    /* catch() { ... } // from try @ 02530000 with catch @ 02530048 */
      fVar19 = 0.0;
                    /* catch() { ... } // from try @ 0252fe58 with catch @ 0253004c
                       catch() { ... } // from try @ 02530010 with catch @ 0253004c */
      if (0.0 <= fVar18) {
        fVar19 = fVar21;
      }
                    /* catch() { ... } // from try @ 0252fecc with catch @ 02530050 */
                    /* catch() { ... } // from try @ 0252fe80 with catch @ 02530054
                       catch() { ... } // from try @ 0252ff28 with catch @ 02530054 */
      HomeSceneQuad__SetTexture_2429bd4(fVar19 * (float)-iVar2,0,uVar1,0x3f800000,plVar10,uVar16);
                    /* try { // try from 0253007c to 02630093 has its CatchHandler @ 025302a8 */
      fVar19 = (float)HomeSceneView__Alternate_24280f0
                                (param_1,uVar12,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10));
                    /* try { // try from 02530094 to 026300fb has its CatchHandler @ 0252fd8c */
      fVar18 = *(float *)(param_2 + 0x28) * fVar4;
      fVar21 = 1.0;
      if (fVar19 <= 1.0) {
        fVar21 = fVar19;
      }
      fVar20 = 0.0;
      if (0.0 <= fVar19) {
        fVar20 = fVar21;
      }
      (**(code **)(*plVar10 + 0x2a8))
                (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined4 *)(param_2 + 0x20),
                 fVar18 + fVar20 * (*(float *)(param_2 + 0x28) - fVar18),plVar10,
                 *(undefined8 *)(*plVar10 + 0x2b0));
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

