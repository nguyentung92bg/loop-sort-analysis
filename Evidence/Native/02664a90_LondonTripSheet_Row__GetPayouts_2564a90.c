/* IL2CPP: LondonTripSheet.Row$$GetPayouts
System_Collections_Generic_List_RewardInfo__o* LondonTripSheet_Row__GetPayouts (LondonTripSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSheet.Row$$GetPayouts
   System_Collections_Generic_List_RewardInfo__o* LondonTripSheet_Row__GetPayouts
   (LondonTripSheet_Row_o* __this, const MethodInfo* method); */

long LondonTripSheet_Row__GetPayouts_2564a90(long param_1)

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
  
  if ((bRam0000000004f4c148 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa68);
    FUN_021f03f8(PTR_DAT_049c2c78);
    FUN_021f03f8(PTR_DAT_049c5b78);
    FUN_021f03f8(PTR_DAT_049b6378);
    bRam0000000004f4c148 = 1;
  }
  uVar5 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0x18),0);
  lVar6 = 0;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_02664c84:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(lVar6);
    }
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) < 2) {
                    /* try { // try from 02664c64 to 02764c6f has its CatchHandler @ 026652b4 */
      lVar6 = 0;
    }
    else {
      plVar10 = (long *)(param_1 + 0x30);
      lVar6 = *plVar10;
      if (lVar6 == 0) {
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b6378);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (uVar7,*(undefined8 *)PTR_DAT_049c5b78);
        *(undefined8 *)(param_1 + 0x30) = uVar7;
        thunk_FUN_021f190c(plVar10,uVar7);
        lVar6 = 0;
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar8 = System_String__Split_2f802dc(*(long *)(param_1 + 0x18),10,0,0),
           puVar4 = PTR_DAT_049caa68, puVar3 = PTR_DAT_049c2c78, puVar2 = PTR_DAT_049b3bd0,
           lVar6 = 0, lVar8 == 0)) goto LAB_02664c84;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
LAB_02664c88:
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
            lVar6 = 0;
            if ((lVar9 == 0) ||
               (lVar9 = System_String__Split_2f802dc(lVar9,0x3a,0,0), lVar6 = 0, lVar9 == 0))
            goto LAB_02664c84;
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_02664c88;
            uVar7 = *(undefined8 *)(lVar9 + 0x20);
            if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
              FUN_021f0574();
            }
            System_Enum__Parse___Il2CppFullySharedGenericStructType__25d81d0
                      (uVar7,1,&uStack_54,*(undefined8 *)puVar4);
                    /* try { // try from 02664c04 to 02764c0f has its CatchHandler @ 026652c8 */
            if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_02664c88;
            uVar5 = (ulong)uStack_54;
            uVar11 = *(undefined8 *)(lVar9 + 0x28);
            uVar7 = System_Globalization_NumberFormatInfo__get_InvariantInfo_307e370(0);
                    /* try { // try from 02664c1c to 02764c27 has its CatchHandler @ 026652c4 */
            lVar6 = System_Int32__Parse_30fbf68(uVar11,uVar7,0);
            if (*plVar10 == 0) goto LAB_02664c84;
                    /* try { // try from 02664c34 to 02764c3f has its CatchHandler @ 026652c0 */
            uStack_48 = uVar5 | lVar6 << 0x20;
                    /* try { // try from 02664c40 to 02764c4b has its CatchHandler @ 026652bc */
            FUN_02333498(*plVar10,&uStack_48,*(undefined8 *)puVar3);
                    /* try { // try from 02664c4c to 02764c57 has its CatchHandler @ 026652b8 */
            uVar1 = *(uint *)(lVar8 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        lVar6 = *plVar10;
      }
    }
  }
                    /* try { // try from 02664c70 to 02764c7b has its CatchHandler @ 026652b0 */
                    /* try { // try from 02664c7c to 02764c87 has its CatchHandler @ 026652ac */
  return lVar6;
}

