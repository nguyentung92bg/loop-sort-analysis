/* IL2CPP: MockLeaderboardProvider.<FetchPage>d__10$$MoveNext
void MockLeaderboardProvider__FetchPage_d__10__MoveNext (MockLeaderboardProvider__FetchPage_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockLeaderboardProvider.<FetchPage>d__10$$MoveNext
   void MockLeaderboardProvider__FetchPage_d__10__MoveNext
   (MockLeaderboardProvider__FetchPage_d__10_o __this, const MethodInfo* method); */

void MockLeaderboardProvider__FetchPage_d__10__MoveNext_2242988(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
                    /* try { // try from 02342994 to 024429bf has its CatchHandler @ 02342994
                       catch() { ... } // from try @ 02342994 with catch @ 02342994
                       catch() { ... } // from try @ 023429c4 with catch @ 02342994
                       catch() { ... } // from try @ 02342a38 with catch @ 02342994 */
  if ((bRam0000000004f49b24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b54c0);
    FUN_021f03f8(PTR_DAT_049b54c8);
                    /* try { // try from 023429c0 to 024429c3 has its CatchHandler @ 02342ac8 */
                    /* try { // try from 023429c4 to 02442a2b has its CatchHandler @ 02342994 */
    FUN_021f03f8(PTR_DAT_049b54d0);
    FUN_021f03f8(PTR_DAT_049b54d8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49b24 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 0x16);
                    /* try { // try from 02342adc to 02442b03 has its CatchHandler @ 02342adc
                       catch() { ... } // from try @ 02342adc with catch @ 02342adc
                       catch() { ... } // from try @ 02342b30 with catch @ 02342adc
                       catch() { ... } // from try @ 02342be8 with catch @ 02342adc
                       catch() { ... } // from try @ 02342c18 with catch @ 02342adc
                       catch() { ... } // from try @ 02342c44 with catch @ 02342adc */
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (lVar5,*(undefined8 *)(param_1 + 0xc),param_1 + 0x12,
                       *(undefined8 *)PTR_DAT_049b54d0);
                    /* try { // try from 02342a2c to 02442a37 has its CatchHandler @ 02342abc */
    auStack_40._0_8_ = 0;
    auStack_40._8_8_ = 0;
    if ((uVar6 & 1) == 0) goto LAB_02342c40;
                    /* try { // try from 02342a38 to 02442adb has its CatchHandler @ 02342994 */
    uVar3 = UnityEngine_Random__Range_3c11c94(100,1000,0);
    puVar1 = PTR_DAT_049b5138;
    uVar9 = *(undefined8 *)(param_1 + 0xe);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(uVar3,0,8,uVar9,0,0);
    thunk_FUN_021f190c(auStack_40,0);
    uVar2 = auStack_40._8_8_;
    uVar9 = auStack_40._0_8_;
    auStack_50 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
                    /* catch() { ... } // from try @ 02342a2c with catch @ 02342abc */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 023429c0 with catch @ 02342ac8 */
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
                    /* try { // try from 02342b04 to 02442b1f has its CatchHandler @ 02342bf0 */
    if ((long *)uVar9 != (long *)0x0) {
      lVar5 = *(long *)uVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 02342b2c to 02442b2f has its CatchHandler @ 02342b9c */
                    /* try { // try from 02342b30 to 02442bb7 has its CatchHandler @ 02342adc */
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02342b5c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02229a4c(uVar9,*(long *)PTR_DAT_049b54e0,0);
LAB_02342b5c:
      iVar4 = (*(code *)*puVar7)(uVar9,uVar2 & 0xffffffff,puVar7[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x16) = auStack_50;
        thunk_FUN_021f190c(param_1 + 0x16,0);
        FUN_0235bb44(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049b54c0);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_50._0_8_;
  if ((long *)auStack_50._0_8_ != (long *)0x0) {
                    /* catch(type#2 @ 0460ebd8, type#1 @ 049ac070) { ... } // from try @ 02342b2c
                       with catch @ 02342b9c */
    lVar5 = *(long *)auStack_50._0_8_;
    uVar10 = auStack_50._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* try { // try from 02342bb8 to 02442bc7 has its CatchHandler @ 02342bdc */
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02342be4 to 02442be7 has its CatchHandler @ 02342c4c */
                    /* try { // try from 02342be8 to 02442c0f has its CatchHandler @ 02342adc */
                    /* catch(type#1 @ 049ac070) { ... } // from try @ 02342b04 with catch @ 02342bf0
                        */
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_02342bf4;
        }
                    /* try { // try from 02342bc8 to 02442bcb has its CatchHandler @ 02342bd0 */
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
                    /* catch(type#1 @ 049ac070) { ... } // from try @ 02342bc8 with catch @ 02342bd0
                        */
      } while (uVar6 != 0);
    }
                    /* catch(type#1 @ 049ac070) { ... } // from try @ 02342bb8 with catch @ 02342bdc
                        */
    puVar7 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02342bf4:
    (*(code *)*puVar7)(uVar9,uVar10,puVar7[1]);
  }
  if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02342c10 to 02442c17 has its CatchHandler @ 02342c3c */
                    /* try { // try from 02342c18 to 02442c3f has its CatchHandler @ 02342adc */
  uStack_58 = System_Collections_Generic_List___Il2CppFullySharedGenericType___GetRange_28cf3fc
                        (*(long *)(param_1 + 0x14),param_1[0x10],param_1[0x11],
                         *(undefined8 *)PTR_DAT_049b54d8);
  uStack_60 = (ulong)(uint)param_1[0x12];
  thunk_FUN_021f190c((ulong)&uStack_60 | 8);
                    /* catch() { ... } // from try @ 02342c10 with catch @ 02342c3c */
  auStack_40._0_8_ = uStack_60;
  auStack_40._8_8_ = uStack_58;
LAB_02342c40:
                    /* try { // try from 02342c40 to 02442c43 has its CatchHandler @ 02342c4c */
  puVar1 = PTR_DAT_049b54c8;
                    /* try { // try from 02342c44 to 02442c4f has its CatchHandler @ 02342adc */
                    /* catch(type#3 @ 00000000) { ... } // from try @ 02342be4 with catch @ 02342c4c
                       catch(type#3 @ 00000000) { ... } // from try @ 02342c40 with catch @ 02342c4c
                        */
  *param_1 = -2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0235bed4(param_1 + 2,auStack_40,*(undefined8 *)puVar1);
  return;
}

