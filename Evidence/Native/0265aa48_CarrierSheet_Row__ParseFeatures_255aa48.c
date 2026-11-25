/* IL2CPP: CarrierSheet.Row$$ParseFeatures
void CarrierSheet_Row__ParseFeatures (CarrierSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierSheet.Row$$ParseFeatures
   void CarrierSheet_Row__ParseFeatures (CarrierSheet_Row_o* __this, const MethodInfo* method); */

void CarrierSheet_Row__ParseFeatures_255aa48(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
                    /* try { // try from 0265aa4c to 0275aa57 has its CatchHandler @ 0265ab24 */
                    /* try { // try from 0265aa5c to 0275aa5f has its CatchHandler @ 0265ab1c */
                    /* try { // try from 0265aa68 to 0275aa73 has its CatchHandler @ 0265ab0c */
  if ((bRam0000000004f4c0da & 1) == 0) {
                    /* try { // try from 0265aa74 to 0275aa8b has its CatchHandler @ 0265ab08 */
    FUN_021f03f8(PTR_DAT_049cb510);
    FUN_021f03f8(PTR_DAT_049cb518);
    FUN_021f03f8(PTR_DAT_049cb520);
                    /* try { // try from 0265aa9c to 0275aa9f has its CatchHandler @ 0265ab04 */
                    /* try { // try from 0265aaa0 to 0275aad7 has its CatchHandler @ 0265a84c */
    FUN_021f03f8(PTR_DAT_049cb4b8);
    FUN_021f03f8(PTR_DAT_049cb528);
    FUN_021f03f8(PTR_DAT_049c13a8);
    FUN_021f03f8(PTR_DAT_049c6718);
    FUN_021f03f8(PTR_DAT_049cb530);
                    /* try { // try from 0265aad8 to 0275aae7 has its CatchHandler @ 0265ab00 */
    FUN_021f03f8(PTR_DAT_049c13d0);
    FUN_021f03f8(PTR_DAT_049c6740);
    FUN_021f03f8(PTR_DAT_049cb538);
                    /* try { // try from 0265aafc to 0275aaff has its CatchHandler @ 0265ab0c */
                    /* catch() { ... } // from try @ 0265aad8 with catch @ 0265ab00
                       try { // try from 0265ab00 to 0275ab3b has its CatchHandler @ 0265a84c */
    FUN_021f03f8(PTR_DAT_049cb540);
                    /* catch() { ... } // from try @ 0265aa9c with catch @ 0265ab04 */
                    /* catch() { ... } // from try @ 0265aa74 with catch @ 0265ab08 */
                    /* catch() { ... } // from try @ 0265aa68 with catch @ 0265ab0c
                       catch() { ... } // from try @ 0265aafc with catch @ 0265ab0c */
    FUN_021f03f8(PTR_DAT_049c6738);
                    /* catch() { ... } // from try @ 0265aa20 with catch @ 0265ab10 */
                    /* catch() { ... } // from try @ 0265aa2c with catch @ 0265ab14 */
                    /* catch() { ... } // from try @ 0265aa3c with catch @ 0265ab18 */
    FUN_021f03f8(PTR_DAT_049cb548);
                    /* catch() { ... } // from try @ 0265aa5c with catch @ 0265ab1c */
                    /* catch() { ... } // from try @ 0265aa00 with catch @ 0265ab20 */
    bRam0000000004f4c0da = 1;
  }
                    /* catch() { ... } // from try @ 0265aa1c with catch @ 0265ab24
                       catch() { ... } // from try @ 0265aa4c with catch @ 0265ab24 */
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0265ab3c to 0275ab53 has its CatchHandler @ 0265abb4 */
    sVar6 = System_String__get_Chars_2f7736c(*(long *)(param_1 + 0x20),0,0);
    if (sVar6 != 0x2d) {
                    /* try { // try from 0265ab54 to 0275aba3 has its CatchHandler @ 0265a84c */
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar7 = System_String__Split_2f802dc(*(long *)(param_1 + 0x20),10,0,0),
         puVar3 = PTR_DAT_049b3bd0, lVar7 == 0)) goto LAB_0265aebc;
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        uVar16 = 0;
        do {
          if (uVar2 <= uVar16) {
LAB_0265aec0:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar8 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
                    /* try { // try from 0265aba4 to 0275abb3 has its CatchHandler @ 0265abb4 */
          if ((lVar8 == 0) || (lVar8 = System_String__Split_2f802dc(lVar8,0x2d,0,0), lVar8 == 0))
          goto LAB_0265aebc;
                    /* catch() { ... } // from try @ 0265ab3c with catch @ 0265abb4
                       catch() { ... } // from try @ 0265aba4 with catch @ 0265abb4 */
                    /* try { // try from 0265abb8 to 0275abbb has its CatchHandler @ 0265abc4 */
                    /* try { // try from 0265abbc to 0275abc7 has its CatchHandler @ 0265a84c */
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_0265aec0;
                    /* catch() { ... } // from try @ 0265abb8 with catch @ 0265abc4 */
          if ((*(long *)(lVar8 + 0x28) == 0) ||
             (lVar9 = System_String__Split_2f802dc(*(long *)(lVar8 + 0x28),0x5f,0,0), lVar9 == 0))
          goto LAB_0265aebc;
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0265aec0;
          uVar14 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
            FUN_021f0574();
          }
          System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                    (uVar14,1,&uStack_78,*(undefined8 *)PTR_DAT_049cb528);
          iVar4 = (int)uStack_78;
          if (*(int *)(lVar9 + 0x18) < 2) {
            puVar12 = *(undefined8 **)(*(long *)(puVar3 + 0x90) + 0xb8);
          }
          else {
            puVar12 = (undefined8 *)(lVar9 + 0x28);
          }
          uStack_80 = *puVar12;
          uStack_88 = uStack_78 & 0xffffffff;
          thunk_FUN_021f190c(&uStack_80);
          uVar14 = uStack_80;
          uVar11 = uStack_88;
          lVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6738);
          System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                    (lVar9,*(undefined8 *)PTR_DAT_049c6740);
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0265aec0;
          if ((*(long *)(lVar8 + 0x20) == 0) ||
             (lVar8 = System_String__Split_2f802dc(*(long *)(lVar8 + 0x20),0x2c,0,0), lVar8 == 0))
          goto LAB_0265aebc;
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar17 = 0;
            uVar13 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar17) goto LAB_0265aec0;
              uVar15 = *(undefined8 *)(lVar8 + 0x20 + uVar17 * 8);
              if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
                FUN_021f0574();
              }
              System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                        (uVar15,1,&uStack_78,*(undefined8 *)PTR_DAT_049cb4b8);
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_0265aebc;
              uVar5 = (int)uStack_78;
              uVar13 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                 (*(long *)(param_1 + 0x30),&uStack_78,&lStack_90,
                                  *(undefined8 *)PTR_DAT_049cb510);
              if ((uVar13 & 1) == 0) {
                lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049cb540);
                System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                          (lVar10,*(undefined8 *)PTR_DAT_049cb538);
                lStack_90 = lVar10;
                if (*(long *)(param_1 + 0x30) == 0) goto LAB_0265aebc;
                uStack_78 = CONCAT44(uStack_78._4_4_,uVar5);
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (*(long *)(param_1 + 0x30),&uStack_78,lVar10,
                           *(undefined8 *)PTR_DAT_049cb518);
              }
              if (lStack_90 == 0) goto LAB_0265aebc;
              uStack_78 = uVar11;
              uStack_70 = uVar14;
              FUN_02333498(lStack_90,&uStack_78,*(undefined8 *)PTR_DAT_049cb530);
              if (lVar9 == 0) goto LAB_0265aebc;
              uStack_78._0_4_ = uVar5;
              FUN_02333498(lVar9,&uStack_78,*(undefined8 *)PTR_DAT_049c6718);
              uStack_98 = 0;
              lVar10 = *(long *)(param_1 + 0x38);
              uStack_78 = CONCAT44(uStack_78._4_4_,uVar5);
              iStack_64 = iVar4;
              System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                        (&uStack_98,&uStack_78,&iStack_64,*(undefined8 *)PTR_DAT_049cb548);
              if (lVar10 == 0) goto LAB_0265aebc;
              uStack_78 = uStack_98;
              System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                        (lVar10,&uStack_78,lVar9,*(undefined8 *)PTR_DAT_049cb520);
              uVar13 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          iVar1 = 0x15;
          if (iVar4 != 1) {
            iVar1 = iVar4;
          }
          if (iVar1 != 0) {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_0265aebc;
            uStack_78 = CONCAT44(uStack_78._4_4_,iVar1);
            FUN_02333498(*(long *)(param_1 + 0x60),&uStack_78,*(undefined8 *)PTR_DAT_049c13a8);
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_0265aebc;
            uStack_78 = CONCAT44(uStack_78._4_4_,iVar1);
            uVar11 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                               (*(long *)(param_1 + 0x58),&uStack_78,*(undefined8 *)PTR_DAT_049c13d0
                               );
            if ((uVar11 & 1) == 0) {
              if (*(long *)(param_1 + 0x58) == 0) goto LAB_0265aebc;
              uStack_78 = CONCAT44(uStack_78._4_4_,iVar1);
              FUN_02333498(*(long *)(param_1 + 0x58),&uStack_78,*(undefined8 *)PTR_DAT_049c13a8);
            }
          }
          uVar16 = uVar16 + 1;
          uVar2 = *(uint *)(lVar7 + 0x18);
        } while ((int)uVar16 < (int)uVar2);
      }
    }
    return;
  }
LAB_0265aebc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

