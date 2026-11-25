/* IL2CPP: Grid$$FindNearestCell
CellBase_o* Grid__FindNearestCell (Grid_o* __this, UnityEngine_Vector3_o worldPosition, float maxDistance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$FindNearestCell
   CellBase_o* Grid__FindNearestCell (Grid_o* __this, UnityEngine_Vector3_o worldPosition, float
   maxDistance, const MethodInfo* method); */

long Grid__FindNearestCell_25072f4
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_48;
  
  fVar15 = param_2;
  fVar16 = param_3;
  if ((bRam0000000004f4bd94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8d80);
    FUN_021f03f8(PTR_DAT_049c8d88);
    FUN_021f03f8(PTR_DAT_049c8d90);
                    /* try { // try from 02607360 to 027073e3 has its CatchHandler @ 02607360
                       catch() { ... } // from try @ 02607360 with catch @ 02607360
                       catch() { ... } // from try @ 02607584 with catch @ 02607360
                       catch() { ... } // from try @ 026075c4 with catch @ 02607360
                       catch() { ... } // from try @ 02607630 with catch @ 02607360
                       catch() { ... } // from try @ 02607698 with catch @ 02607360 */
    FUN_021f03f8(PTR_DAT_049c8db8);
    bRam0000000004f4bd94 = 1;
  }
  puVar6 = PTR_DAT_049c8d90;
  puVar5 = PTR_DAT_049c8d88;
  puVar4 = PTR_DAT_049c8d80;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(long *)(param_5 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_5 + 0xe8),&uStack_c8,*(undefined8 *)PTR_DAT_049c8db8);
  puVar3 = PTR_DAT_049b8758;
  uStack_a8 = puStack_c0;
  uStack_b0 = uStack_c8;
  uStack_a0 = uStack_b8;
  uStack_c8 = 0;
  lVar11 = 0;
  fVar17 = param_4;
  puStack_c0 = &uStack_b0;
  while( true ) {
                    /* try { // try from 026073e4 to 027073eb has its CatchHandler @ 026075fc */
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_b0,*(undefined8 *)puVar5);
    if ((uVar7 & 1) == 0) {
                    /* try { // try from 026074d4 to 027074e7 has its CatchHandler @ 026075dc */
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_b0,*(undefined8 *)puVar4);
                    /* try { // try from 026074e8 to 027074f3 has its CatchHandler @ 026075d8 */
                    /* try { // try from 026074fc to 02707507 has its CatchHandler @ 026075d4 */
      return lVar11;
    }
                    /* try { // try from 026073f0 to 027073fb has its CatchHandler @ 026075ec */
    lVar12 = *(long *)puVar6;
    lVar8 = *(long *)(lVar12 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
                    /* try { // try from 0260740c to 02707417 has its CatchHandler @ 026075cc */
      lVar8 = *(long *)(lVar12 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
                    /* try { // try from 02607444 to 02707453 has its CatchHandler @ 026075c8 */
    uVar10 = thunk_FUN_0224e54c(&uStack_b0,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_48,uVar10,uVar1);
    lVar9 = lStack_48;
    if (lStack_48 == 0) break;
    fVar13 = (float)CellBase__get_CenterPosition_2504e44(lStack_48);
                    /* try { // try from 0260746c to 02707483 has its CatchHandler @ 026075e8 */
    if (cRam0000000004f4a234 == '\0') {
      FUN_021f03f8(puVar3);
      cRam0000000004f4a234 = '\x01';
    }
                    /* try { // try from 02607494 to 0270749f has its CatchHandler @ 026075e4 */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar14 = fVar15 - param_2;
    fVar16 = fVar16 - param_3;
                    /* try { // try from 026074ac to 027074b3 has its CatchHandler @ 026075e0 */
    fVar15 = (float)NEON_fminnm(param_4,fVar17);
    fVar13 = SQRT(fVar16 * fVar16 + (fVar13 - param_1) * (fVar13 - param_1) + fVar14 * fVar14);
    if (fVar13 <= fVar15) {
      lVar11 = lVar9;
      fVar17 = fVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

