/* IL2CPP: Grid$$GetNearbyCells
System_Collections_Generic_List_CellBase__o* Grid__GetNearbyCells (Grid_o* __this, UnityEngine_Vector3_o worldPosition, float maxDistance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Grid$$GetNearbyCells
   System_Collections_Generic_List_CellBase__o* Grid__GetNearbyCells (Grid_o* __this,
   UnityEngine_Vector3_o worldPosition, float maxDistance, const MethodInfo* method); */

undefined8
Grid__GetNearbyCells_2507578(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_98;
  
                    /* try { // try from 0260757c to 02707583 has its CatchHandler @ 02607600 */
                    /* try { // try from 02607584 to 027075b3 has its CatchHandler @ 02607360 */
                    /* try { // try from 026075b4 to 027075b7 has its CatchHandler @ 026075f4 */
                    /* try { // try from 026075b8 to 027075bb has its CatchHandler @ 02607600 */
                    /* try { // try from 026075bc to 027075bf has its CatchHandler @ 026075f0 */
                    /* try { // try from 026075c0 to 027075c3 has its CatchHandler @ 026075fc */
  fVar18 = param_2;
  fVar19 = param_3;
  if ((bRam0000000004f4bd95 & 1) == 0) {
                    /* catch() { ... } // from try @ 026074d0 with catch @ 026075c4
                       try { // try from 026075c4 to 02707617 has its CatchHandler @ 02607360 */
                    /* catch() { ... } // from try @ 02607444 with catch @ 026075c8 */
                    /* catch() { ... } // from try @ 0260740c with catch @ 026075cc */
    FUN_021f03f8(PTR_DAT_049c8d80);
                    /* catch() { ... } // from try @ 0260752c with catch @ 026075d0 */
                    /* catch() { ... } // from try @ 026074fc with catch @ 026075d4 */
                    /* catch() { ... } // from try @ 026074e8 with catch @ 026075d8 */
    FUN_021f03f8(PTR_DAT_049c8d88);
                    /* catch() { ... } // from try @ 026074d4 with catch @ 026075dc */
                    /* catch() { ... } // from try @ 026074ac with catch @ 026075e0 */
                    /* catch() { ... } // from try @ 02607494 with catch @ 026075e4 */
    FUN_021f03f8(PTR_DAT_049c8d90);
                    /* catch() { ... } // from try @ 0260746c with catch @ 026075e8 */
                    /* catch() { ... } // from try @ 026073f0 with catch @ 026075ec */
                    /* catch() { ... } // from try @ 026075bc with catch @ 026075f0 */
    FUN_021f03f8(PTR_DAT_049c8e78);
                    /* catch() { ... } // from try @ 026075b4 with catch @ 026075f4 */
                    /* catch() { ... } // from try @ 02607560 with catch @ 026075f8 */
                    /* catch() { ... } // from try @ 026073e4 with catch @ 026075fc
                       catch() { ... } // from try @ 026075c0 with catch @ 026075fc */
    FUN_021f03f8(PTR_DAT_049c8d98);
                    /* catch() { ... } // from try @ 0260757c with catch @ 02607600
                       catch() { ... } // from try @ 026075b8 with catch @ 02607600 */
    FUN_021f03f8(PTR_DAT_049c8da8);
    FUN_021f03f8(PTR_DAT_049c8db8);
                    /* try { // try from 02607618 to 0270762f has its CatchHandler @ 02607690 */
    FUN_021f03f8(PTR_DAT_049c8e80);
    bRam0000000004f4bd95 = 1;
  }
  lVar14 = *(long *)(param_5 + 0xf0);
                    /* try { // try from 02607630 to 0270767f has its CatchHandler @ 02607360 */
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  if (lVar14 != 0) {
    lVar13 = *(long *)PTR_DAT_049c8da8;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar11 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
    if ((uVar11 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar1) {
                    /* try { // try from 02607680 to 0270768f has its CatchHandler @ 02607690 */
        System_Array__Clear_31229cc(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
      }
    }
    puVar10 = PTR_DAT_049c8e80;
    puVar9 = PTR_DAT_049c8e78;
    puVar8 = PTR_DAT_049c8d98;
    puVar7 = PTR_DAT_049c8d90;
    puVar6 = PTR_DAT_049c8d88;
    puVar5 = PTR_DAT_049c8d80;
                    /* catch() { ... } // from try @ 02607618 with catch @ 02607690
                       catch() { ... } // from try @ 02607680 with catch @ 02607690 */
                    /* try { // try from 02607694 to 02707697 has its CatchHandler @ 026076a0 */
    if (*(long *)(param_5 + 0xe8) != 0) {
                    /* try { // try from 02607698 to 027076a3 has its CatchHandler @ 02607360 */
                    /* catch() { ... } // from try @ 02607694 with catch @ 026076a0 */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_5 + 0xe8),&uStack_d8,*(undefined8 *)PTR_DAT_049c8db8);
      puVar4 = PTR_DAT_049b8758;
      puStack_b8 = puStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      uStack_d8 = 0;
      puStack_d0 = &uStack_c0;
      while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_c0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
        lVar15 = *(long *)puVar7;
        lVar13 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar13 + 0x135);
        lVar14 = lVar13;
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
          lVar13 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar13 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar13 = FUN_02229718();
        }
        uVar12 = thunk_FUN_0224e54c(&uStack_c0,
                                    *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_98,uVar12,uVar2);
        lVar14 = lStack_98;
        if (lStack_98 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar16 = (float)CellBase__get_CenterPosition_2504e44(lStack_98);
        if (cRam0000000004f4a234 == '\0') {
          FUN_021f03f8(puVar4);
          cRam0000000004f4a234 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar17 = fVar18 - param_2;
        fVar19 = fVar19 - param_3;
        fVar18 = fVar19 * fVar19;
        if (SQRT(fVar18 + (fVar16 - param_1) * (fVar16 - param_1) + fVar17 * fVar17) <= param_4) {
          if (*(long *)(param_5 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(*(long *)(param_5 + 0xf0),lVar14,*(undefined8 *)puVar8);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_c0,*(undefined8 *)puVar5);
      lVar14 = *(long *)puVar9;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar9;
      }
      lVar13 = **(long **)(lVar14 + 0xb8);
      if (lVar13 != 0) {
        *(float *)(lVar13 + 0x10) = param_1;
        *(float *)(lVar13 + 0x14) = param_2;
        *(float *)(lVar13 + 0x18) = param_3;
        if (*(long *)(param_5 + 0xf0) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d09a4
                    (*(long *)(param_5 + 0xf0),**(undefined8 **)(lVar14 + 0xb8),
                     *(undefined8 *)puVar10);
          return *(undefined8 *)(param_5 + 0xf0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

