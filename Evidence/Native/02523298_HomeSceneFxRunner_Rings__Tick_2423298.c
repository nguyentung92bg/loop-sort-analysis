/* IL2CPP: HomeSceneFxRunner.Rings$$Tick
void HomeSceneFxRunner_Rings__Tick (HomeSceneFxRunner_Rings_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Rings$$Tick
   void HomeSceneFxRunner_Rings__Tick (HomeSceneFxRunner_Rings_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Rings__Tick_2423298(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lStack_f0;
  long *plStack_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
                    /* try { // try from 025232c4 to 026232cb has its CatchHandler @ 0252331c */
  if ((bRam0000000004f4b788 & 1) == 0) {
                    /* try { // try from 025232dc to 026232e7 has its CatchHandler @ 02523318 */
    FUN_021f03f8(PTR_DAT_049c3250);
                    /* try { // try from 025232e8 to 02623337 has its CatchHandler @ 02523248 */
    FUN_021f03f8(PTR_DAT_049c3258);
    FUN_021f03f8(PTR_DAT_049c3260);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3268);
    bRam0000000004f4b788 = 1;
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025232dc with catch @ 02523318
                        */
  puVar9 = PTR_DAT_049c3260;
  puVar8 = PTR_DAT_049c3258;
  puVar7 = PTR_DAT_049c3250;
  puVar6 = PTR_DAT_049c3110;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025232c4 with catch @ 0252331c
                        */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_b8 = (long *)0x0;
  lStack_c0 = 0;
  if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02523338 to 0262333b has its CatchHandler @ 02523350 */
                    /* try { // try from 0252333c to 02623353 has its CatchHandler @ 02523248 */
                    /* catch() { ... } // from try @ 02523338 with catch @ 02523350 */
                    /* try { // try from 02523354 to 0262335b has its CatchHandler @ 02523364 */
                    /* try { // try from 0252335c to 02623367 has its CatchHandler @ 02523248 */
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_2 + 0x10),&lStack_f0,*(undefined8 *)PTR_DAT_049c3268);
  fVar5 = _UNK_013aa5f0;
  fVar4 = _UNK_013aa540;
  fVar3 = _UNK_013aa488;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02523354 with catch @ 02523364
                        */
  plStack_b8 = plStack_e8;
  lStack_c0 = lStack_f0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  while( true ) {
    uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&lStack_c0,*(undefined8 *)puVar8);
    if ((uVar12 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_c0,*(undefined8 *)puVar7);
      return;
    }
    lVar16 = *(long *)puVar9;
    lVar13 = *(long *)(lVar16 + 0x20);
    uVar2 = *(ushort *)(lVar13 + 0x135);
    lVar14 = lVar13;
    if ((uVar2 & 1) == 0) {
      lVar14 = FUN_02229718();
      lVar13 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar13 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar13 = FUN_02229718();
    }
    uVar15 = thunk_FUN_0224e54c(&lStack_c0,
                                *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_f0,uVar15,uVar1);
    uVar11 = uStack_d4;
    fVar18 = fStack_d8;
    fVar19 = fStack_dc;
    uVar1 = uStack_e0;
    plVar10 = plStack_e8;
    lVar14 = lStack_f0;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar17 = (float)HomeSceneView__Phase_24280b4(param_1,uVar11,uVar1,0);
    fVar20 = -1.0;
    if (fVar19 <= fVar17) {
      fVar20 = (fVar17 - fVar19) / fVar18;
    }
    if (plVar10 == (long *)0x0) break;
    fVar19 = 0.0;
    if (fVar20 <= 1.0 && 0.0 <= fVar20) {
      fVar19 = (1.0 - fVar20) * fVar3;
    }
    (**(code **)(*plVar10 + 0x2a8))
              (0x3f800000,0x3f800000,0x3f800000,fVar19,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
    fVar19 = fVar5;
    if (fVar20 <= 1.0 && 0.0 <= fVar20) {
      fVar18 = 1.0;
      if (fVar20 <= 1.0) {
        fVar18 = fVar20;
      }
      if (0.0 <= fVar20) {
        fVar19 = fVar18 * fVar4 + fVar5;
      }
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Transform__set_localScale_3c2ddfc(fVar19,fVar19,0x3f800000,lVar14,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

