/* IL2CPP: LondonTripSheet.Row$$GetGifts
System_Collections_Generic_List_RewardInfo__o* LondonTripSheet_Row__GetGifts (LondonTripSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSheet.Row$$GetGifts
   System_Collections_Generic_List_RewardInfo__o* LondonTripSheet_Row__GetGifts
   (LondonTripSheet_Row_o* __this, const MethodInfo* method); */

long LondonTripSheet_Row__GetGifts_25647c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uStack_54;
  ulong uStack_48;
  
                    /* try { // try from 026647c8 to 027647d3 has its CatchHandler @ 02664908 */
                    /* try { // try from 026647d4 to 027647df has its CatchHandler @ 02664904 */
  if ((bRam0000000004f4c149 & 1) == 0) {
                    /* try { // try from 026647f4 to 027647f7 has its CatchHandler @ 026648d8 */
                    /* try { // try from 026647f8 to 027647ff has its CatchHandler @ 026649b8 */
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
                    /* try { // try from 0266480c to 02764813 has its CatchHandler @ 02664900 */
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
                    /* try { // try from 02664820 to 0276482b has its CatchHandler @ 026648fc */
    bRam0000000004f4c149 = 1;
  }
                    /* try { // try from 0266482c to 02764837 has its CatchHandler @ 026648f8 */
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x28),0);
  lVar6 = 0;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_026649bc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02664538 with catch @ 026649bc
                       catch() { ... } // from try @ 026648c8 with catch @ 026649bc */
      FUN_021f06a0(lVar6);
    }
                    /* try { // try from 0266484c to 0276484f has its CatchHandler @ 026648d4 */
                    /* try { // try from 02664850 to 02764857 has its CatchHandler @ 026648f4 */
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x10) < 2) {
                    /* catch() { ... } // from try @ 02664458 with catch @ 0266499c */
      lVar6 = 0;
    }
    else {
      plVar10 = (long *)(param_1 + 0x38);
      lVar6 = *plVar10;
                    /* try { // try from 0266485c to 0276486b has its CatchHandler @ 026648f0 */
      if (lVar6 == 0) {
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
                    /* try { // try from 02664878 to 02764883 has its CatchHandler @ 026648ec */
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (uVar7,*(undefined8 *)PTR_DAT_049c5b78);
                    /* try { // try from 02664884 to 0276488f has its CatchHandler @ 026648e8 */
        *(undefined8 *)(param_1 + 0x38) = uVar7;
                    /* try { // try from 02664890 to 027648b3 has its CatchHandler @ 0266426c */
        thunk_FUN_021f190c(plVar10,uVar7);
        lVar6 = 0;
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar8 = System_String__Split_2f802dc(*(long *)(param_1 + 0x28),10,0,0),
           puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0,
           lVar6 = 0, lVar8 == 0)) goto LAB_026649bc;
        uVar1 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 026648b4 to 027648bb has its CatchHandler @ 026649cc */
                    /* try { // try from 026648bc to 027648bf has its CatchHandler @ 026649c8 */
        if (0 < (int)uVar1) {
                    /* try { // try from 026648c0 to 027648c3 has its CatchHandler @ 026649c0 */
                    /* try { // try from 026648c4 to 027648c7 has its CatchHandler @ 026649c4 */
                    /* try { // try from 026648c8 to 027648cb has its CatchHandler @ 026649bc */
                    /* try { // try from 026648cc to 027648cf has its CatchHandler @ 026649b8 */
                    /* catch() { ... } // from try @ 02664674 with catch @ 026648d0
                       try { // try from 026648d0 to 027649e3 has its CatchHandler @ 0266426c */
                    /* catch() { ... } // from try @ 0266484c with catch @ 026648d4 */
                    /* catch() { ... } // from try @ 026647f4 with catch @ 026648d8 */
          uVar12 = 0;
          do {
                    /* catch() { ... } // from try @ 02664758 with catch @ 026648dc */
                    /* catch() { ... } // from try @ 026643d4 with catch @ 026648e0 */
            if (uVar1 <= uVar12) {
LAB_026649c0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026644f0 with catch @ 026649c0
                       catch() { ... } // from try @ 026648c0 with catch @ 026649c0 */
              FUN_021f06a8();
            }
                    /* catch() { ... } // from try @ 02664678 with catch @ 026648e4 */
                    /* catch() { ... } // from try @ 02664884 with catch @ 026648e8 */
            lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
                    /* catch() { ... } // from try @ 02664878 with catch @ 026648ec */
            lVar6 = 0;
                    /* catch() { ... } // from try @ 0266485c with catch @ 026648f0 */
                    /* catch() { ... } // from try @ 02664850 with catch @ 026648f4 */
                    /* catch() { ... } // from try @ 0266482c with catch @ 026648f8 */
                    /* catch() { ... } // from try @ 02664820 with catch @ 026648fc */
                    /* catch() { ... } // from try @ 0266480c with catch @ 02664900 */
            if ((lVar9 == 0) ||
               (lVar9 = System_String__Split_2f802dc(lVar9,0x3a,0,0), lVar6 = 0, lVar9 == 0))
            goto LAB_026649bc;
                    /* catch() { ... } // from try @ 026647d4 with catch @ 02664904 */
                    /* catch() { ... } // from try @ 026647c8 with catch @ 02664908 */
                    /* catch() { ... } // from try @ 026647b0 with catch @ 0266490c */
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_026649c0;
                    /* catch() { ... } // from try @ 026647a0 with catch @ 02664910 */
                    /* catch() { ... } // from try @ 02664794 with catch @ 02664914 */
            uVar7 = *(undefined8 *)(lVar9 + 0x20);
                    /* catch() { ... } // from try @ 02664788 with catch @ 02664918 */
                    /* catch() { ... } // from try @ 0266476c with catch @ 0266491c */
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0266475c with catch @ 02664920 */
              FUN_021f0574();
            }
                    /* catch() { ... } // from try @ 02664740 with catch @ 02664924 */
                    /* catch() { ... } // from try @ 0266472c with catch @ 02664928 */
                    /* catch() { ... } // from try @ 02664714 with catch @ 0266492c */
                    /* catch() { ... } // from try @ 02664700 with catch @ 02664930 */
                    /* catch() { ... } // from try @ 026646f4 with catch @ 02664934 */
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar7,1,&uStack_54,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 026646e0 with catch @ 02664938 */
                    /* catch() { ... } // from try @ 026646d4 with catch @ 0266493c */
                    /* catch() { ... } // from try @ 026646c4 with catch @ 02664940 */
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_026649c0;
                    /* catch() { ... } // from try @ 026646b8 with catch @ 02664944 */
            uVar5 = (ulong)uStack_54;
                    /* catch() { ... } // from try @ 026646a8 with catch @ 02664948 */
            uVar11 = *(undefined8 *)(lVar9 + 0x28);
                    /* catch() { ... } // from try @ 0266469c with catch @ 0266494c */
                    /* catch() { ... } // from try @ 02664650 with catch @ 02664950 */
            uVar7 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
                    /* catch() { ... } // from try @ 02664644 with catch @ 02664954 */
                    /* catch() { ... } // from try @ 02664638 with catch @ 02664958 */
                    /* catch() { ... } // from try @ 0266461c with catch @ 0266495c */
                    /* catch() { ... } // from try @ 02664604 with catch @ 02664960 */
            lVar6 = System_Int32__Parse_30fbf68(uVar11,uVar7,0);
                    /* catch() { ... } // from try @ 026645f8 with catch @ 02664964 */
                    /* catch() { ... } // from try @ 026645ec with catch @ 02664968 */
            if (*plVar10 == 0) goto LAB_026649bc;
                    /* catch() { ... } // from try @ 026645d0 with catch @ 0266496c */
            uStack_48 = uVar5 | lVar6 << 0x20;
                    /* catch() { ... } // from try @ 026645b8 with catch @ 02664970 */
                    /* catch() { ... } // from try @ 026645ac with catch @ 02664974 */
                    /* catch() { ... } // from try @ 026645a0 with catch @ 02664978 */
                    /* catch() { ... } // from try @ 02664588 with catch @ 0266497c */
                    /* catch() { ... } // from try @ 0266457c with catch @ 02664980 */
            FUN_02333498(*plVar10,&uStack_48,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 02664570 with catch @ 02664984 */
            uVar1 = *(uint *)(lVar8 + 0x18);
                    /* catch() { ... } // from try @ 02664558 with catch @ 02664988 */
            uVar12 = uVar12 + 1;
                    /* catch() { ... } // from try @ 0266454c with catch @ 0266498c */
                    /* catch() { ... } // from try @ 0266453c with catch @ 02664990 */
          } while ((int)uVar12 < (int)uVar1);
        }
                    /* catch() { ... } // from try @ 0266447c with catch @ 02664994 */
        lVar6 = *plVar10;
                    /* catch() { ... } // from try @ 02664464 with catch @ 02664998 */
      }
    }
  }
                    /* catch() { ... } // from try @ 0266443c with catch @ 026649a0 */
                    /* catch() { ... } // from try @ 02664424 with catch @ 026649a4 */
                    /* catch() { ... } // from try @ 02664418 with catch @ 026649a8 */
                    /* catch() { ... } // from try @ 0266440c with catch @ 026649ac */
                    /* catch() { ... } // from try @ 026643f0 with catch @ 026649b0 */
                    /* catch() { ... } // from try @ 026643d8 with catch @ 026649b4 */
                    /* catch() { ... } // from try @ 026647f8 with catch @ 026649b8
                       catch() { ... } // from try @ 026648cc with catch @ 026649b8 */
  return lVar6;
}

