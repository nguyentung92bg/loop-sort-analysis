/* IL2CPP: SceneRegistry$$Dispose
void SceneRegistry__Dispose (SceneRegistry_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneRegistry$$Dispose
   void SceneRegistry__Dispose (SceneRegistry_o* __this, const MethodInfo* method); */

void SceneRegistry__Dispose_2553d50(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c095 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caf60);
    FUN_021f03f8(PTR_DAT_049caf68);
                    /* try { // try from 02653d90 to 02753d9f has its CatchHandler @ 02653da0 */
    FUN_021f03f8(PTR_DAT_049caf70);
                    /* catch() { ... } // from try @ 02653d28 with catch @ 02653da0
                       catch() { ... } // from try @ 02653d90 with catch @ 02653da0 */
    FUN_021f03f8(PTR_DAT_049caf78);
                    /* try { // try from 02653da4 to 02753da7 has its CatchHandler @ 02653db0 */
                    /* try { // try from 02653da8 to 02753db3 has its CatchHandler @ 02653a30 */
    FUN_021f03f8(PTR_DAT_049caf80);
                    /* catch() { ... } // from try @ 02653da4 with catch @ 02653db0 */
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* try { // try from 02653dc0 to 02753ea7 has its CatchHandler @ 02653dc0
                       catch() { ... } // from try @ 02653dc0 with catch @ 02653dc0
                       catch() { ... } // from try @ 026540d8 with catch @ 02653dc0
                       catch() { ... } // from try @ 02654150 with catch @ 02653dc0
                       catch() { ... } // from try @ 026541f4 with catch @ 02653dc0
                       catch() { ... } // from try @ 02654268 with catch @ 02653dc0 */
    FUN_021f03f8(PTR_DAT_049caf88);
    bRam0000000004f4c095 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x28);
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_38 = 0;
  plStack_88 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (plVar15 != (long *)0x0) {
    lVar11 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02653e44;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b3cc8,0);
LAB_02653e44:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  puVar7 = PTR_DAT_049caf88;
  puVar6 = PTR_DAT_049caf80;
  puVar5 = PTR_DAT_049caf78;
  puVar4 = PTR_DAT_049caf70;
  puVar3 = PTR_DAT_049caf68;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (*(long *)(param_1 + 0x20),&uStack_b0,*(undefined8 *)PTR_DAT_049caf60);
  uStack_50 = uStack_90;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
                    /* try { // try from 02653ea8 to 02753eaf has its CatchHandler @ 026541c0 */
  do {
    uVar12 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                       (&uStack_70,*(undefined8 *)puVar4);
    if ((uVar12 & 1) == 0) {
                    /* try { // try from 02653fb4 to 02753fcb has its CatchHandler @ 0265418c */
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_70,*(undefined8 *)puVar3);
                    /* try { // try from 02653fcc to 02753fd7 has its CatchHandler @ 02654170 */
      return;
    }
    lVar14 = *(long *)puVar5;
    lVar9 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar9 + 0x135);
    lVar11 = lVar9;
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
                    /* try { // try from 02653ed4 to 02753edb has its CatchHandler @ 026541b4 */
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
    }
                    /* try { // try from 02653ef0 to 02753ef7 has its CatchHandler @ 026541b0 */
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
    }
                    /* try { // try from 02653f04 to 02753f0b has its CatchHandler @ 026541a8 */
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_b0,uVar10,uVar1);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
                    /* try { // try from 02653f38 to 02753f3f has its CatchHandler @ 02654198 */
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_80,&uStack_38,&plStack_88,*(undefined8 *)puVar7);
    plVar15 = plStack_88;
    if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *plStack_88;
                    /* try { // try from 02653f50 to 02753f57 has its CatchHandler @ 02654184 */
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 02653f64 to 02753f6b has its CatchHandler @ 0265415c */
        if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                    /* try { // try from 02653f94 to 02753fab has its CatchHandler @ 02654190 */
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_02653f9c;
        }
        uVar12 = uVar12 - 1;
                    /* try { // try from 02653f74 to 02753f8b has its CatchHandler @ 02654194 */
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plStack_88,*(long *)puVar6,4);
LAB_02653f9c:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  } while( true );
}

