/* IL2CPP: SplineSheet.Layout$$CheckCapacityCarriers
void SplineSheet_Layout__CheckCapacityCarriers (SplineSheet_Layout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineSheet.Layout$$CheckCapacityCarriers
   void SplineSheet_Layout__CheckCapacityCarriers (SplineSheet_Layout_o* __this, const MethodInfo*
   method); */

void SplineSheet_Layout__CheckCapacityCarriers_2567c18(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f4c16d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c7870);
    FUN_021f03f8(PTR_DAT_049c7878);
    FUN_021f03f8(PTR_DAT_049c7880);
    FUN_021f03f8(PTR_DAT_049c7888);
    FUN_021f03f8(PTR_DAT_049c2cf0);
                    /* try { // try from 02667c8c to 02767d13 has its CatchHandler @ 02668394 */
    FUN_021f03f8(PTR_DAT_049cbd08);
    bRam0000000004f4c16d = 1;
  }
  puVar5 = PTR_DAT_049c7880;
  puVar4 = PTR_DAT_049c7878;
  puVar3 = PTR_DAT_049c7870;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x48),&uStack_80,*(undefined8 *)PTR_DAT_049c7888);
  puVar2 = PTR_DAT_049b3bd0;
  puStack_88 = &uStack_60;
  iVar15 = 0;
  uStack_58 = uStack_78;
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  uStack_90 = 0;
LAB_02667cf0:
  do {
    uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar8 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar3);
                    /* try { // try from 02667de8 to 02767e9b has its CatchHandler @ 02668388 */
      if (iVar15 != 2) {
        plVar13 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
        uVar7 = *(undefined4 *)(plVar13[1] + 0xfc);
        uVar11 = thunk_FUN_0224e54c(param_1,*(undefined8 *)(*plVar13 + 0x80));
        func_0x04608620(&uStack_80,uVar11,uVar7);
        uVar11 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_80);
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar15);
        uVar12 = thunk_FUN_0222c66c(*(undefined8 *)(puVar2 + 0x48),&uStack_90);
        uVar11 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049cbd08,uVar11,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b3c58);
        }
        UnityEngine_Debug__LogWarning_3bcf90c(uVar11,0);
      }
                    /* try { // try from 02667ea8 to 02767f2f has its CatchHandler @ 02668394 */
      return;
    }
    lVar14 = *(long *)puVar5;
    lVar9 = *(long *)(lVar14 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar10 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar10 = FUN_02229718();
                    /* try { // try from 02667d1c to 02767d2b has its CatchHandler @ 02668360 */
      lVar9 = *(long *)(lVar14 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar7 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 02667d40 to 02767d43 has its CatchHandler @ 02668328 */
      lVar9 = FUN_02229718();
    }
                    /* try { // try from 02667d54 to 02767d5b has its CatchHandler @ 0266835c */
    uVar11 = thunk_FUN_0224e54c(&uStack_60,
                                *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_80,uVar11,uVar7);
    lVar10 = CONCAT44(uStack_7c,uStack_80);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02667d7c to 02767d7f has its CatchHandler @ 02668324 */
    sVar6 = System_String__get_Chars_2f7736c(lVar10,0,0);
                    /* try { // try from 02667d8c to 02767d9b has its CatchHandler @ 02668358 */
  } while (1 < (ushort)(sVar6 - 0x59U));
  if (*(int *)(lVar10 + 0x10) != 1) goto LAB_02667da0;
  goto LAB_02667dd4;
LAB_02667da0:
                    /* try { // try from 02667da0 to 02767dab has its CatchHandler @ 02668354 */
  uVar7 = System_String__get_Chars_2f7736c(lVar10,1,0);
  if (*(int *)(*(long *)(puVar2 + 0x88) + 0xe4) == 0) {
                    /* try { // try from 02667dc0 to 02767dc3 has its CatchHandler @ 02668320 */
    FUN_021f0574();
  }
                    /* try { // try from 02667dc8 to 02767dd3 has its CatchHandler @ 02668350 */
  uVar8 = System_Char__IsDigit_306b7b8(uVar7,0);
  if ((uVar8 & 1) == 0) {
LAB_02667dd4:
    iVar15 = iVar15 + 1;
  }
  goto LAB_02667cf0;
}

