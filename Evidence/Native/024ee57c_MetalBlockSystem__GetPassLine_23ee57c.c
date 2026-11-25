/* IL2CPP: MetalBlockSystem$$GetPassLine
void MetalBlockSystem__GetPassLine (System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces, UnityEngine_Vector3_o center, UnityEngine_Vector3_o screenUp, UnityEngine_Vector3_o* from, UnityEngine_Vector3_o* to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$GetPassLine
   void MetalBlockSystem__GetPassLine
   (System_Collections_Generic_List_MetalBlockSystem_MagnetPiece__o* pieces, UnityEngine_Vector3_o
   center, UnityEngine_Vector3_o screenUp, UnityEngine_Vector3_o* from, UnityEngine_Vector3_o* to,
   const MethodInfo* method); */

void MetalBlockSystem__GetPassLine_23ee57c
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,float *param_8,float *param_9)

{
  undefined4 uVar1;
  ushort uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_48;
  
  if ((bRam0000000004f4b638 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1ff8);
    FUN_021f03f8(PTR_DAT_049c2000);
    FUN_021f03f8(PTR_DAT_049c2008);
    FUN_021f03f8(PTR_DAT_049c2010);
                    /* try { // try from 024ee608 to 025ee60f has its CatchHandler @ 024ee760 */
    bRam0000000004f4b638 = 1;
  }
  puVar7 = PTR_DAT_049c2010;
  puVar6 = PTR_DAT_049c2008;
  puVar5 = PTR_DAT_049c2000;
  puVar4 = PTR_DAT_049c1ff8;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  if (param_7 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_7,&uStack_c8,*(undefined8 *)PTR_DAT_049c2010);
    uStack_b0 = uStack_c8;
    uStack_c8 = 0;
                    /* try { // try from 024ee65c to 025ee68b has its CatchHandler @ 024ee770 */
    uStack_a0 = uStack_b8;
    puStack_a8 = puStack_c0;
    fVar15 = 3.4028235e+38;
    fVar17 = -3.4028235e+38;
    puStack_c0 = &uStack_b0;
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                        (&uStack_b0,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_b0,*(undefined8 *)puVar4);
                    /* try { // try from 024ee744 to 025ee747 has its CatchHandler @ 024ee768 */
                    /* try { // try from 024ee748 to 025ee74b has its CatchHandler @ 024ee764 */
                    /* try { // try from 024ee74c to 025ee74f has its CatchHandler @ 024ee75c */
                    /* try { // try from 024ee750 to 025ee753 has its CatchHandler @ 024ee770 */
                    /* try { // try from 024ee754 to 025ee757 has its CatchHandler @ 024ee758 */
                    /* catch() { ... } // from try @ 024ee754 with catch @ 024ee758 */
        fVar13 = fVar17 - fVar15;
        if (fVar17 - fVar15 <= _UNK_013aa8d8) {
          fVar13 = _UNK_013aa8d8;
        }
                    /* catch() { ... } // from try @ 024ee74c with catch @ 024ee75c */
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (param_7,&uStack_c8,*(undefined8 *)puVar7);
                    /* catch() { ... } // from try @ 024ee608 with catch @ 024ee760 */
                    /* catch() { ... } // from try @ 024ee748 with catch @ 024ee764 */
                    /* catch() { ... } // from try @ 024ee744 with catch @ 024ee768 */
                    /* catch() { ... } // from try @ 024ee6c8 with catch @ 024ee76c */
        uStack_a0 = uStack_b8;
                    /* catch() { ... } // from try @ 024ee65c with catch @ 024ee770
                       catch() { ... } // from try @ 024ee750 with catch @ 024ee770 */
        puStack_a8 = puStack_c0;
        uStack_b0 = uStack_c8;
        uStack_c8 = 0;
        puStack_c0 = &uStack_b0;
        while( true ) {
          uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&uStack_b0,*(undefined8 *)puVar5);
          if ((uVar8 & 1) == 0) {
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&uStack_b0,*(undefined8 *)puVar4);
            fVar15 = fVar15 + -0.5;
                    /* try { // try from 024ee894 to 025ee8df has its CatchHandler @ 024ef1bc */
            *param_8 = param_1 + param_4 * fVar15;
            param_8[1] = param_2 + param_5 * fVar15;
            param_8[2] = param_3 + param_6 * fVar15;
            *param_9 = param_1 + param_4 * fVar17;
            param_9[1] = param_2 + param_5 * fVar17;
            param_9[2] = param_3 + param_6 * fVar17;
            return;
          }
          lVar12 = *(long *)puVar6;
          lVar9 = *(long *)(lVar12 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
          lVar10 = lVar9;
          if ((uVar2 & 1) == 0) {
            lVar10 = FUN_02229718();
            lVar9 = *(long *)(lVar12 + 0x20);
                    /* try { // try from 024ee7b0 to 025ee7d7 has its CatchHandler @ 024ef16c */
            uVar2 = *(ushort *)(lVar9 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar9 = FUN_02229718();
          }
          uVar11 = thunk_FUN_0224e54c(&uStack_b0,
                                      *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_48,uVar11,uVar1);
          if (lStack_48 == 0) break;
                    /* try { // try from 024ee800 to 025ee847 has its CatchHandler @ 024ef1b8 */
          fVar14 = ((param_6 * (*(float *)(lStack_48 + 0x28) - param_3) +
                    param_4 * (*(float *)(lStack_48 + 0x20) - param_1) +
                    param_5 * (*(float *)(lStack_48 + 0x24) - param_2)) - fVar15) / fVar13;
          fVar16 = 1.0;
          if (fVar14 <= 1.0) {
            fVar16 = fVar14;
          }
          fVar3 = 0.0;
          if (0.0 <= fVar14) {
            fVar3 = fVar16;
          }
                    /* try { // try from 024ee848 to 025ee893 has its CatchHandler @ 024ee4f8 */
          *(float *)(lStack_48 + 0x1c) = fVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *(long *)puVar6;
      lVar9 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
                    /* try { // try from 024ee6c8 to 025ee6ff has its CatchHandler @ 024ee76c */
      uVar11 = thunk_FUN_0224e54c(&uStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_48,uVar11,uVar1);
      if (lStack_48 == 0) break;
      fVar13 = param_6 * (*(float *)(lStack_48 + 0x28) - param_3) +
               param_4 * (*(float *)(lStack_48 + 0x20) - param_1) +
               param_5 * (*(float *)(lStack_48 + 0x24) - param_2);
      if (fVar13 <= fVar15) {
        fVar15 = fVar13;
      }
      if (fVar17 <= fVar13) {
        fVar17 = fVar13;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

