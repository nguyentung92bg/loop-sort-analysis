/* IL2CPP: MetalBlockSystem$$RattlePieces
void MetalBlockSystem__RattlePieces (System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces, UnityEngine_Vector3_o magnetPosition, float tremble, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$RattlePieces
   void MetalBlockSystem__RattlePieces
   (System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces, UnityEngine_Vector3_o
   magnetPosition, float tremble, float time, const MethodInfo* method); */

void MetalBlockSystem__RattlePieces_23ee988
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               long param_6)

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
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
                    /* try { // try from 024ee988 to 025ee98f has its CatchHandler @ 024ef0b0 */
                    /* try { // try from 024ee9a8 to 025ee9f3 has its CatchHandler @ 024ef178 */
  if ((bRam0000000004f4b639 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ff8);
    FUN_021f03f8(PTR_DAT_049c2000);
    FUN_021f03f8(PTR_DAT_049c2008);
                    /* try { // try from 024ee9f4 to 025eea13 has its CatchHandler @ 024ee4f8 */
    FUN_021f03f8(PTR_DAT_049c2010);
    bRam0000000004f4b639 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 024eea14 to 025eea17 has its CatchHandler @ 024ef0ac */
  if (0.0 < param_4) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_6,&uStack_d8,*(undefined8 *)PTR_DAT_049c2010);
    uStack_c0 = uStack_d8;
    puVar9 = PTR_DAT_049c2008;
    puVar8 = PTR_DAT_049c2000;
    puVar7 = PTR_DAT_049bbf90;
    puVar6 = PTR_DAT_049b8758;
    fVar5 = _UNK_013aa948;
    fVar4 = _UNK_013aa8fc;
    fVar3 = _UNK_013aa538;
                    /* try { // try from 024eea38 to 025eea43 has its CatchHandler @ 024ef0a0 */
    uStack_d8 = 0;
    uStack_b8 = puStack_d0;
                    /* try { // try from 024eea60 to 025eeaa7 has its CatchHandler @ 024ef11c */
    uStack_b0 = uStack_c8;
    param_4 = param_4 * _UNK_013aa4bc;
    fVar15 = param_5 * 45.0 * _UNK_013aa868;
                    /* try { // try from 024eeaa8 to 025eeabf has its CatchHandler @ 024ee4f8 */
                    /* try { // try from 024eeac0 to 025eeac7 has its CatchHandler @ 024ef09c */
    puStack_d0 = &uStack_c0;
    while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_c0,*(undefined8 *)puVar8), (uVar10 & 1) != 0) {
      lVar14 = *(long *)puVar9;
                    /* try { // try from 024eead8 to 025eeaff has its CatchHandler @ 024ef0c4 */
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_c0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_a8,uVar13,uVar1);
      lVar12 = lStack_a8;
      if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lStack_a8 + 0x48) == '\0') {
                    /* try { // try from 024eeb54 to 025eeb93 has its CatchHandler @ 024ef170 */
        fVar21 = *(float *)(lStack_a8 + 0x20);
        fVar23 = *(float *)(lStack_a8 + 0x28);
        if (cRam0000000004f4a55d == '\0') {
          FUN_021f03f8(puVar6);
          cRam0000000004f4a55d = '\x01';
        }
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar21 = param_1 - fVar21;
        fVar23 = param_3 - fVar23;
        fVar22 = *(float *)(lVar12 + 0x18);
        fVar23 = SQRT(fVar21 * fVar21 + fVar23 * fVar23) / -3.5 + 1.0;
        fVar21 = 1.0;
        if (fVar23 <= 1.0) {
          fVar21 = fVar23;
        }
        fVar17 = 0.0;
        if (0.0 <= fVar23) {
          fVar17 = fVar21;
        }
                    /* try { // try from 024eebc0 to 025eebe3 has its CatchHandler @ 024ef118 */
        fVar21 = (float)FUN_046086e0(param_5 * 45.0 + fVar22);
        fVar23 = (float)FUN_046086e0(fVar15 + fVar22 + fVar22);
        if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar11 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar12 + 0x10),0);
        uVar13 = *(undefined8 *)(lVar12 + 0x20);
        fVar22 = *(float *)(lVar12 + 0x28);
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(puVar7);
          cRam0000000004f4a55e = '\x01';
        }
                    /* try { // try from 024eec14 to 025eec1b has its CatchHandler @ 024ef090 */
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
                    /* try { // try from 024eec20 to 025eec27 has its CatchHandler @ 024ef088 */
                    /* try { // try from 024eec2c to 025eec37 has its CatchHandler @ 024ef084 */
        lVar14 = *(long *)(*(long *)puVar7 + 0xb8);
        fVar16 = param_4 + fVar17 * fVar3;
                    /* try { // try from 024eec50 to 025eec57 has its CatchHandler @ 024ef07c */
        fVar18 = fVar17 * fVar17 * fVar4 + fVar16 * ABS(fVar21);
        uVar19 = *(undefined8 *)(lVar14 + 0x18);
        fVar20 = *(float *)(lVar14 + 0x20);
        fVar17 = fVar16 * 0.0 + (float)((ulong)uVar13 >> 0x20) +
                 (float)((ulong)uVar19 >> 0x20) * fVar18;
                    /* try { // try from 024eec74 to 025eec97 has its CatchHandler @ 024ef080 */
        UnityEngine_Transform__set_position_3c2d61c
                  (CONCAT44(fVar17,fVar21 * fVar16 + (float)uVar13 + (float)uVar19 * fVar18),fVar17,
                   fVar16 * fVar23 + fVar22 + fVar18 * fVar20,lVar11,0);
        fVar24 = *(float *)(lVar12 + 0x34);
        fVar18 = *(float *)(lVar12 + 0x38);
        fVar17 = *(float *)(lVar12 + 0x2c);
        fVar25 = *(float *)(lVar12 + 0x30);
        fVar22 = fVar16 * fVar23 * 60.0 * fVar5;
        fVar23 = 0.0;
        fVar21 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
                                  (fVar21 * fVar16 * 60.0 * fVar5,0,fVar22,0);
                    /* try { // try from 024eecc8 to 025eecd3 has its CatchHandler @ 024ef0c8 */
                    /* try { // try from 024eed28 to 025eed4f has its CatchHandler @ 024ef124 */
        UnityEngine_Transform__set_rotation_3c2d86c
                  ((fVar25 * fVar22 + fVar18 * fVar21 + fVar17 * fVar20) - fVar24 * fVar23,
                   (fVar24 * fVar21 + fVar18 * fVar23 + fVar25 * fVar20) - fVar17 * fVar22,
                   (fVar17 * fVar23 + fVar18 * fVar22 + fVar24 * fVar20) - fVar25 * fVar21,
                   ((fVar18 * fVar20 - fVar17 * fVar21) - fVar25 * fVar23) - fVar24 * fVar22,lVar11,
                   0);
      }
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_c0,*(undefined8 *)PTR_DAT_049c1ff8);
  }
                    /* try { // try from 024eed70 to 025eed77 has its CatchHandler @ 024ef0bc */
  return;
}

