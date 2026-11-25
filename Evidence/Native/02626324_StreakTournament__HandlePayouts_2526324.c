/* IL2CPP: StreakTournament$$HandlePayouts
void StreakTournament__HandlePayouts (StreakTournament_o* __this, System_Collections_Generic_List_RewardInfo__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$HandlePayouts
   void StreakTournament__HandlePayouts (StreakTournament_o* __this,
   System_Collections_Generic_List_RewardInfo__o* rewards, const MethodInfo* method); */

void StreakTournament__HandlePayouts_2526324(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_58;
  int iStack_54;
  
                    /* try { // try from 02626338 to 0272633f has its CatchHandler @ 02626408 */
  if ((bRam0000000004f4be99 & 1) == 0) {
                    /* try { // try from 02626358 to 027263a3 has its CatchHandler @ 0262640c */
    FUN_021f03f8(PTR_DAT_049c99e0);
    FUN_021f03f8(PTR_DAT_049c99e8);
    FUN_021f03f8(PTR_DAT_049c99f0);
    FUN_021f03f8(PTR_DAT_049c99f8);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
                    /* try { // try from 026263a4 to 027263bf has its CatchHandler @ 02626000 */
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c7d38);
                    /* try { // try from 026263c0 to 027263c7 has its CatchHandler @ 02626404 */
    bRam0000000004f4be99 = 1;
  }
  puVar10 = PTR_DAT_049c99f0;
  puVar9 = PTR_DAT_049c99e8;
  puVar8 = PTR_DAT_049c99e0;
  puVar7 = PTR_DAT_049c7d38;
  puVar6 = PTR_DAT_049b6370;
  puVar5 = PTR_DAT_049b6350;
  puVar4 = PTR_DAT_049b6348;
  puVar3 = PTR_DAT_049b6330;
                    /* try { // try from 026263c8 to 027263f3 has its CatchHandler @ 02626000 */
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iStack_58 = 0;
  if (param_2 != 0) {
                    /* try { // try from 026263f4 to 027263f7 has its CatchHandler @ 02626400 */
                    /* try { // try from 026263f8 to 02726427 has its CatchHandler @ 02626000 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026263f4 with catch @ 02626400
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026263c0 with catch @ 02626404
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02626338 with catch @ 02626408
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02626358 with catch @ 0262640c
                        */
    lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c99f8);
                    /* try { // try from 02626428 to 0272642b has its CatchHandler @ 02626444 */
                    /* try { // try from 0262642c to 02726447 has its CatchHandler @ 02626000 */
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
              (lVar12,*(undefined8 *)puVar9);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_2,&uStack_98,*(undefined8 *)puVar6);
                    /* catch() { ... } // from try @ 02626428 with catch @ 02626444 */
                    /* try { // try from 02626448 to 0272644f has its CatchHandler @ 02626458 */
    uStack_70 = uStack_88;
                    /* try { // try from 02626450 to 0272645b has its CatchHandler @ 02626000 */
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02626448 with catch @ 02626458
                        */
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_80,*(undefined8 *)puVar4), (uVar13 & 1) != 0) {
      lVar17 = *(long *)puVar5;
      lVar14 = *(long *)(lVar17 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
      lVar15 = lVar14;
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
        lVar14 = *(long *)(lVar17 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar16 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_68,uVar16,uVar1);
      iVar11 = iStack_64;
      uVar1 = uStack_68;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                (lVar12,&uStack_68,&iStack_58,*(undefined8 *)puVar8);
      iStack_54 = iStack_58 + iVar11;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (lVar12,&uStack_68,&iStack_54,*(undefined8 *)puVar10);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FulfillModule__FulfillFreePayout_254358c
                (*(long *)(param_1 + 0x48),uVar1,(double)iVar11,*(undefined8 *)puVar7,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_80,*(undefined8 *)puVar3);
  }
  return;
}

