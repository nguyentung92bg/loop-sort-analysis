/* IL2CPP: CarrierSheet.Row$$ParseColors
void CarrierSheet_Row__ParseColors (CarrierSheet_Row_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$ParseColors
   void CarrierSheet_Row__ParseColors (CarrierSheet_Row_o* __this, System_String_o* data, const
   MethodInfo* method); */

void CarrierSheet_Row__ParseColors_255a2f8(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lStack_f8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  uint uStack_84;
  ulong uStack_80;
  long lStack_78;
  uint uStack_6c;
  ulong uStack_68;
  
                    /* try { // try from 0265a324 to 0275a32f has its CatchHandler @ 0265a608 */
  if ((bRam0000000004f4c0d9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb4b0);
    FUN_021f03f8(PTR_DAT_049cb4b8);
    FUN_021f03f8(PTR_DAT_049cb4c0);
                    /* try { // try from 0265a354 to 0275a393 has its CatchHandler @ 0265a788 */
    FUN_021f03f8(PTR_DAT_049c13b8);
    FUN_021f03f8(PTR_DAT_049c13c0);
    FUN_021f03f8(PTR_DAT_049c13c8);
    FUN_021f03f8(PTR_DAT_049cb4c8);
    FUN_021f03f8(PTR_DAT_049cb4d0);
    FUN_021f03f8(PTR_DAT_049cb4d8);
    FUN_021f03f8(PTR_DAT_049c6718);
    FUN_021f03f8(PTR_DAT_049cb4e0);
                    /* try { // try from 0265a3b0 to 0275a3bb has its CatchHandler @ 0265a5fc */
    FUN_021f03f8(PTR_DAT_049c6728);
    FUN_021f03f8(PTR_DAT_049cb4e8);
                    /* try { // try from 0265a3cc to 0275a3d7 has its CatchHandler @ 0265a5f8 */
    FUN_021f03f8(PTR_DAT_049c13d8);
    FUN_021f03f8(PTR_DAT_049cb4f0);
    FUN_021f03f8(PTR_DAT_049cb4f8);
    FUN_021f03f8(PTR_DAT_049cb500);
    FUN_021f03f8(PTR_DAT_049cb508);
    bRam0000000004f4c0d9 = 1;
  }
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_84 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 0265a424 to 0275a42f has its CatchHandler @ 0265a644 */
  if ((param_2 != 0) &&
     (lVar9 = System_String__Split_2f802dc(param_2,0x3a,0,0), puVar5 = PTR_DAT_049c13c0,
     puVar4 = PTR_DAT_049b3bd0, lVar9 != 0)) {
    uVar13 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar13) {
                    /* try { // try from 0265a450 to 0275a45b has its CatchHandler @ 0265a604 */
      uVar17 = 0;
      do {
        if (uVar13 <= uVar17) {
LAB_0265aa24:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar10 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
                    /* try { // try from 0265a48c to 0275a4c3 has its CatchHandler @ 0265a648 */
        if ((lVar10 == 0) || (lVar10 = System_String__Split_2f802dc(lVar10,0x3b,0,0), lVar10 == 0))
        goto LAB_0265aa20;
        if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0265aa24;
        uVar18 = *(undefined8 *)(lVar10 + 0x20);
        if (*(int *)(*(long *)(puVar4 + 0x98) + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                  (uVar18,1,&uStack_e0,*(undefined8 *)PTR_DAT_049cb4b8);
                    /* try { // try from 0265a4d4 to 0275a4df has its CatchHandler @ 0265a64c */
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_0265aa20;
        uVar7 = (int)uStack_e0;
                    /* try { // try from 0265a4e4 to 0275a4f7 has its CatchHandler @ 0265a628 */
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                  (*(long *)(param_1 + 0x40),&uStack_e0,*(undefined8 *)PTR_DAT_049cb4c8);
        if (1 < (int)*(ulong *)(lVar10 + 0x18)) {
          uVar14 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
          uVar19 = 1;
          lStack_f8 = 0;
          do {
            if (uVar14 <= uVar19) goto LAB_0265aa24;
            lVar20 = *(long *)(lVar10 + uVar19 * 8 + 0x20);
            uVar14 = System_String__IsNullOrEmpty_2f7c924(lVar20,0);
            if ((uVar14 & 1) == 0) {
              if (lVar20 == 0) goto LAB_0265aa20;
              sVar8 = System_String__get_Chars_2f7736c(lVar20,0,0);
                    /* try { // try from 0265a550 to 0275a577 has its CatchHandler @ 0265a798 */
              if (sVar8 != 0x2d) {
                if (lStack_f8 == 0) {
                  lStack_f8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb500);
                  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                            (lStack_f8,*(undefined8 *)PTR_DAT_049cb4f0);
                }
                lVar20 = System_String__Split_2f802dc(lVar20,10,0,0);
                if (lVar20 == 0) goto LAB_0265aa20;
                    /* try { // try from 0265a59c to 0275a5a3 has its CatchHandler @ 0265a624 */
                    /* try { // try from 0265a5a4 to 0275a5cf has its CatchHandler @ 0265a1ac */
                if (*(int *)(lVar20 + 0x18) == 0) goto LAB_0265aa24;
                if ((*(long *)(lVar20 + 0x20) == 0) ||
                   (lVar11 = System_String__Split_2f802dc(*(long *)(lVar20 + 0x20),0x5f,0,0),
                   lVar11 == 0)) goto LAB_0265aa20;
                if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0265aa24;
                    /* try { // try from 0265a5d0 to 0275a5d3 has its CatchHandler @ 0265a798 */
                    /* try { // try from 0265a5d4 to 0275a5d7 has its CatchHandler @ 0265a634 */
                    /* try { // try from 0265a5d8 to 0275a5db has its CatchHandler @ 0265a630 */
                    /* try { // try from 0265a5dc to 0275a5df has its CatchHandler @ 0265a62c */
                ColorType___ctor_24f9be0(&uStack_68,*(undefined8 *)(lVar11 + 0x20),0);
                    /* try { // try from 0265a5e0 to 0275a5e3 has its CatchHandler @ 0265a64c */
                    /* try { // try from 0265a5e4 to 0275a5e7 has its CatchHandler @ 0265a620 */
                    /* try { // try from 0265a5e8 to 0275a5eb has its CatchHandler @ 0265a618 */
                    /* try { // try from 0265a5ec to 0275a5ef has its CatchHandler @ 0265a610 */
                lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb508);
                    /* try { // try from 0265a5f0 to 0275a5f3 has its CatchHandler @ 0265a600 */
                    /* try { // try from 0265a5f4 to 0275a5f7 has its CatchHandler @ 0265a648 */
                    /* catch() { ... } // from try @ 0265a3cc with catch @ 0265a5f8
                       try { // try from 0265a5f8 to 0275a667 has its CatchHandler @ 0265a1ac */
                    /* catch() { ... } // from try @ 0265a3b0 with catch @ 0265a5fc */
                    /* catch() { ... } // from try @ 0265a5f0 with catch @ 0265a600 */
                System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                          (lVar12,*(undefined8 *)PTR_DAT_049cb4f8);
                    /* catch() { ... } // from try @ 0265a450 with catch @ 0265a604 */
                    /* catch() { ... } // from try @ 0265a324 with catch @ 0265a608 */
                    /* catch() { ... } // from try @ 0265a2f4 with catch @ 0265a60c */
                if (*(int *)(lVar11 + 0x18) < 2) {
                    /* catch() { ... } // from try @ 0265a4e4 with catch @ 0265a628 */
                    /* catch() { ... } // from try @ 0265a5dc with catch @ 0265a62c */
                  plVar15 = *(long **)(*(long *)(puVar4 + 0x90) + 0xb8);
                    /* catch() { ... } // from try @ 0265a5d8 with catch @ 0265a630 */
                  lVar21 = *plVar15;
                    /* catch() { ... } // from try @ 0265a5d4 with catch @ 0265a634 */
                }
                else {
                    /* catch() { ... } // from try @ 0265a5ec with catch @ 0265a610 */
                  lVar21 = *(long *)(lVar11 + 0x28);
                    /* catch() { ... } // from try @ 0265a2d8 with catch @ 0265a614 */
                    /* catch() { ... } // from try @ 0265a5e8 with catch @ 0265a618 */
                  if (*(int *)(lVar11 + 0x18) == 2) {
                    /* catch() { ... } // from try @ 0265a2c8 with catch @ 0265a61c */
                    /* catch() { ... } // from try @ 0265a5e4 with catch @ 0265a620 */
                    plVar15 = *(long **)(*(long *)(puVar4 + 0x90) + 0xb8);
                    /* catch() { ... } // from try @ 0265a59c with catch @ 0265a624 */
                  }
                  else {
                    plVar15 = (long *)(lVar11 + 0x30);
                  }
                }
                    /* catch() { ... } // from try @ 0265a2ac with catch @ 0265a640 */
                lVar11 = *plVar15;
                    /* catch() { ... } // from try @ 0265a424 with catch @ 0265a644 */
                    /* catch() { ... } // from try @ 0265a48c with catch @ 0265a648
                       catch() { ... } // from try @ 0265a5f4 with catch @ 0265a648 */
                    /* catch() { ... } // from try @ 0265a4d4 with catch @ 0265a64c
                       catch() { ... } // from try @ 0265a5e0 with catch @ 0265a64c */
                if (*(int *)(*(long *)(puVar4 + 0x98) + 0xe4) == 0) {
                  FUN_021f0574();
                }
                    /* try { // try from 0265a668 to 0275a67f has its CatchHandler @ 0265a740 */
                uVar14 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                                   (lVar21,1,&uStack_6c,*(undefined8 *)PTR_DAT_049cb4c0);
                if ((uVar14 & 1) != 0) {
                  uStack_80 = (ulong)uStack_6c;
                  lStack_78 = lVar11;
                  thunk_FUN_021f190c((ulong)&uStack_80 | 8,lVar11);
                  if (lVar12 == 0) goto LAB_0265aa20;
                    /* try { // try from 0265a69c to 0275a69f has its CatchHandler @ 0265a72c */
                    /* try { // try from 0265a6a0 to 0275a6c3 has its CatchHandler @ 0265a734 */
                  lStack_d8 = lStack_78;
                  uStack_e0 = uStack_80;
                  FUN_02333498(lVar12,&uStack_e0,*(undefined8 *)PTR_DAT_049cb4e0);
                }
                uVar13 = *(uint *)(lVar20 + 0x18);
                if (1 < (int)uVar13) {
                  plVar15 = (long *)(lVar20 + 0x28);
                  uVar22 = 1;
                  do {
                    /* try { // try from 0265a6cc to 0275a6d7 has its CatchHandler @ 0265a730 */
                    if ((int)uVar13 < 2) {
                      plVar16 = *(long **)(*(long *)(puVar4 + 0x90) + 0xb8);
                    }
                    else {
                      plVar16 = plVar15;
                      if (uVar13 <= uVar22) goto LAB_0265aa24;
                    }
                    /* try { // try from 0265a6f0 to 0275a707 has its CatchHandler @ 0265a1ac */
                    if ((*plVar16 == 0) ||
                       (lVar11 = System_String__Split_2f802dc(*plVar16,0x5f,0,0), lVar11 == 0))
                    goto LAB_0265aa20;
                    /* try { // try from 0265a708 to 0275a717 has its CatchHandler @ 0265a740 */
                    if (*(int *)(lVar11 + 0x18) < 2) {
                      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_0265aa24;
                    /* try { // try from 0265a71c to 0275a71f has its CatchHandler @ 0265a724 */
                    /* try { // try from 0265a720 to 0275a723 has its CatchHandler @ 0265a730 */
                      plVar16 = *(long **)(*(long *)(puVar4 + 0x90) + 0xb8);
                    }
                    else {
                      plVar16 = (long *)(lVar11 + 0x28);
                    }
                    /* catch() { ... } // from try @ 0265a71c with catch @ 0265a724 */
                    /* catch() { ... } // from try @ 0265a6dc with catch @ 0265a728 */
                    lVar21 = *plVar16;
                    /* catch() { ... } // from try @ 0265a69c with catch @ 0265a72c */
                    uVar18 = *(undefined8 *)(lVar11 + 0x20);
                    /* catch() { ... } // from try @ 0265a6cc with catch @ 0265a730
                       catch() { ... } // from try @ 0265a720 with catch @ 0265a730 */
                    /* catch() { ... } // from try @ 0265a6a0 with catch @ 0265a734 */
                    if (*(int *)(*(long *)(puVar4 + 0x98) + 0xe4) == 0) {
                      FUN_021f0574(*(long *)(puVar4 + 0x98));
                    }
                    /* catch() { ... } // from try @ 0265a668 with catch @ 0265a740
                       catch() { ... } // from try @ 0265a708 with catch @ 0265a740 */
                    /* try { // try from 0265a748 to 0275a74b has its CatchHandler @ 0265a83c */
                    /* try { // try from 0265a74c to 0275a767 has its CatchHandler @ 0265a1ac */
                    uVar14 = System_Enum__TryParse___Il2CppFullySharedGenericStructType__25d8374
                                       (uVar18,1,&uStack_84,*(undefined8 *)PTR_DAT_049cb4c0);
                    if ((uVar14 & 1) != 0) {
                    /* try { // try from 0265a768 to 0275a76b has its CatchHandler @ 0265a774 */
                      uStack_80 = (ulong)uStack_84;
                    /* catch() { ... } // from try @ 0265a768 with catch @ 0265a774 */
                      lStack_78 = lVar21;
                      thunk_FUN_021f190c((ulong)&uStack_80 | 8,lVar21);
                    /* try { // try from 0265a77c to 0275a783 has its CatchHandler @ 0265a83c */
                      if (lVar12 == 0) goto LAB_0265aa20;
                    /* try { // try from 0265a784 to 0275a7b3 has its CatchHandler @ 0265a1ac */
                    /* catch() { ... } // from try @ 0265a354 with catch @ 0265a788 */
                    /* catch() { ... } // from try @ 0265a270 with catch @ 0265a794 */
                      lStack_d8 = lStack_78;
                      uStack_e0 = uStack_80;
                    /* catch() { ... } // from try @ 0265a550 with catch @ 0265a798
                       catch() { ... } // from try @ 0265a5d0 with catch @ 0265a798 */
                      FUN_02333498(lVar12,&uStack_e0,*(undefined8 *)PTR_DAT_049cb4e0);
                    }
                    uVar13 = *(uint *)(lVar20 + 0x18);
                    uVar22 = uVar22 + 1;
                    plVar15 = plVar15 + 1;
                  } while ((int)uVar22 < (int)uVar13);
                }
                    /* try { // try from 0265a7b4 to 0275a7cb has its CatchHandler @ 0265a82c */
                uStack_a0 = uStack_68;
                lStack_98 = lVar12;
                thunk_FUN_021f190c((ulong)&uStack_a0 | 8,lVar12);
                    /* try { // try from 0265a7cc to 0275a81b has its CatchHandler @ 0265a1ac */
                if (lStack_f8 == 0) goto LAB_0265aa20;
                lStack_d8 = lStack_98;
                uStack_e0 = uStack_a0;
                FUN_02333498(lStack_f8,&uStack_e0,*(undefined8 *)PTR_DAT_049cb4d8);
                puVar6 = PTR_DAT_049c13c8;
                if (*(long *)(param_1 + 0x28) == 0) goto LAB_0265aa20;
                    /* try { // try from 0265a81c to 0275a82b has its CatchHandler @ 0265a82c */
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (*(long *)(param_1 + 0x28),&uStack_e0,lStack_f8,
                           *(undefined8 *)PTR_DAT_049cb4b0);
                    /* catch() { ... } // from try @ 0265a7b4 with catch @ 0265a82c
                       catch() { ... } // from try @ 0265a81c with catch @ 0265a82c */
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_0265aa20;
                    /* try { // try from 0265a830 to 0275a833 has its CatchHandler @ 0265a83c */
                    /* try { // try from 0265a834 to 0275a83f has its CatchHandler @ 0265a1ac */
                    /* catch() { ... } // from try @ 0265a748 with catch @ 0265a83c
                       catch() { ... } // from try @ 0265a77c with catch @ 0265a83c
                       catch() { ... } // from try @ 0265a830 with catch @ 0265a83c */
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                uVar14 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                                   (*(long *)(param_1 + 0x48),&uStack_e0,
                                    *(undefined8 *)PTR_DAT_049c6728);
                if ((uVar14 & 1) == 0) {
                    /* try { // try from 0265a84c to 0275a8e7 has its CatchHandler @ 0265a84c
                       catch() { ... } // from try @ 0265a84c with catch @ 0265a84c
                       catch() { ... } // from try @ 0265aaa0 with catch @ 0265a84c
                       catch() { ... } // from try @ 0265ab00 with catch @ 0265a84c
                       catch() { ... } // from try @ 0265ab54 with catch @ 0265a84c
                       catch() { ... } // from try @ 0265abbc with catch @ 0265a84c */
                  if (*(long *)(param_1 + 0x48) == 0) goto LAB_0265aa20;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                  FUN_02333498(*(long *)(param_1 + 0x48),&uStack_e0,*(undefined8 *)PTR_DAT_049c6718)
                  ;
                }
                if (*(long *)(param_1 + 0x50) == 0) goto LAB_0265aa20;
                uStack_e0 = uStack_68;
                uVar14 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                                   (*(long *)(param_1 + 0x50),&uStack_e0,
                                    *(undefined8 *)PTR_DAT_049cb4e8);
                if ((uVar14 & 1) == 0) {
                  if (*(long *)(param_1 + 0x50) == 0) goto LAB_0265aa20;
                  uStack_e0 = uStack_68;
                  FUN_02333498(*(long *)(param_1 + 0x50),&uStack_e0,*(undefined8 *)PTR_DAT_049cb4d0)
                  ;
                }
                if (lVar12 == 0) goto LAB_0265aa20;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                          (lVar12,&uStack_e0,*(undefined8 *)PTR_DAT_049c13d8);
                lStack_b8 = lStack_d8;
                uStack_c0 = uStack_e0;
                uStack_a8 = uStack_c8;
                uStack_b0 = uStack_d0;
                    /* try { // try from 0265a8e8 to 0275a8f3 has its CatchHandler @ 0265a9f0 */
                    /* try { // try from 0265a8f4 to 0275a907 has its CatchHandler @ 0265a9e8 */
                while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                          (&uStack_c0,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
                  lVar12 = *(long *)puVar6;
                  lVar11 = *(long *)(lVar12 + 0x20);
                  uVar3 = *(ushort *)(lVar11 + 0x135);
                  lVar20 = lVar11;
                  if ((uVar3 & 1) == 0) {
                    /* try { // try from 0265a90c to 0275a917 has its CatchHandler @ 0265a9e4 */
                    lVar20 = FUN_02229718();
                    lVar11 = *(long *)(lVar12 + 0x20);
                    uVar3 = *(ushort *)(lVar11 + 0x135);
                  }
                    /* try { // try from 0265a928 to 0275a933 has its CatchHandler @ 0265a9dc */
                  uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x10) + 0xfc);
                  if ((uVar3 & 1) == 0) {
                    lVar11 = FUN_02229718();
                  }
                    /* try { // try from 0265a93c to 0275a947 has its CatchHandler @ 0265a9e0 */
                    /* try { // try from 0265a948 to 0275a95f has its CatchHandler @ 0265a9d8 */
                  uVar18 = thunk_FUN_0224e54c(&uStack_c0,
                                              *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) +
                                                       0x80) + 0x60);
                  func_0x04608620(&uStack_e0,uVar18,uVar2);
                  iVar1 = 0x16;
                  if ((int)uStack_e0 != 1) {
                    iVar1 = (int)uStack_e0;
                  }
                    /* try { // try from 0265a970 to 0275a973 has its CatchHandler @ 0265a9d4 */
                  CarrierSheet_Row__AddFeatureType_255aec4(param_1,iVar1);
                }
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&uStack_c0,*(undefined8 *)PTR_DAT_049c13b8);
              }
            }
            uVar14 = (ulong)*(uint *)(lVar10 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((long)uVar19 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
                    /* catch() { ... } // from try @ 0265a8f4 with catch @ 0265a9e8 */
                    /* catch() { ... } // from try @ 0265a9b8 with catch @ 0265a9ec */
                    /* catch() { ... } // from try @ 0265a8e8 with catch @ 0265a9f0 */
        uVar13 = *(uint *)(lVar9 + 0x18);
                    /* catch() { ... } // from try @ 0265a9a0 with catch @ 0265a9f4 */
        uVar17 = uVar17 + 1;
                    /* catch() { ... } // from try @ 0265a9cc with catch @ 0265a9f8 */
                    /* catch() { ... } // from try @ 0265a9c8 with catch @ 0265a9fc */
      } while ((int)uVar17 < (int)uVar13);
    }
                    /* try { // try from 0265aa00 to 0275aa0b has its CatchHandler @ 0265ab20 */
                    /* try { // try from 0265aa1c to 0275aa1f has its CatchHandler @ 0265ab24 */
    return;
  }
LAB_0265aa20:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0265aa20 to 0275aa27 has its CatchHandler @ 0265ab10 */
  FUN_021f06a0();
}

