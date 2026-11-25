/* IL2CPP: Leaderboard$$OnPlayerProfileUpdate
void Leaderboard__OnPlayerProfileUpdate (Leaderboard_o* __this, PlayerProfileUpdateMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$OnPlayerProfileUpdate
   void Leaderboard__OnPlayerProfileUpdate (Leaderboard_o* __this, PlayerProfileUpdateMessage_o m,
   const MethodInfo* method); */

void Leaderboard__OnPlayerProfileUpdate_251de70(long param_1,undefined8 *param_2)

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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_48;
  
                    /* try { // try from 0261de7c to 0271de83 has its CatchHandler @ 0261e274 */
  if ((bRam0000000004f4be60 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c96a0);
    FUN_021f03f8(PTR_DAT_049c96a8);
    FUN_021f03f8(PTR_DAT_049c96b0);
    FUN_021f03f8(PTR_DAT_049c96b8);
                    /* try { // try from 0261ded4 to 0271ded7 has its CatchHandler @ 0261e258 */
    FUN_021f03f8(PTR_DAT_049c96c0);
                    /* try { // try from 0261ded8 to 0271dedf has its CatchHandler @ 0261e26c */
    bRam0000000004f4be60 = 1;
  }
  puVar6 = PTR_DAT_049c96c0;
  puVar5 = PTR_DAT_049c96b8;
  puVar4 = PTR_DAT_049c96b0;
  puVar3 = PTR_DAT_049c96a8;
                    /* try { // try from 0261dee4 to 0271deef has its CatchHandler @ 0261e268 */
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_48 = 0;
  lStack_98 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 0261df04 to 0271dfcf has its CatchHandler @ 0261e28c */
  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (*(long *)(param_1 + 0x50),&uStack_110,*(undefined8 *)PTR_DAT_049c96a0);
  uStack_60 = uStack_f0;
  puStack_118 = &uStack_80;
  uStack_78 = uStack_108;
  uStack_80 = uStack_110;
  uStack_68 = uStack_f8;
  uStack_70 = uStack_100;
  uStack_120 = 0;
  while( true ) {
    uVar7 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                      (&uStack_80,*(undefined8 *)puVar4);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                (&uStack_80,*(undefined8 *)puVar3);
      return;
    }
    lVar11 = *(long *)puVar5;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_80,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_110,uVar10,uVar1);
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
                    /* try { // try from 0261dfe0 to 0271e067 has its CatchHandler @ 0261e290 */
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_90,&uStack_48,&lStack_98,*(undefined8 *)puVar6);
    lVar9 = lStack_98;
    if (lStack_98 == 0) break;
    uStack_c0 = *(undefined8 *)(lStack_98 + 0x40);
    uStack_a8 = param_2[2];
    uStack_d8 = *(undefined8 *)(lStack_98 + 0x28);
    uStack_e0 = *(undefined8 *)(lStack_98 + 0x20);
    uStack_c8 = *(undefined8 *)(lStack_98 + 0x38);
    uStack_d0 = *(undefined8 *)(lStack_98 + 0x30);
    uStack_b0 = param_2[1];
    uStack_b8 = *param_2;
    thunk_FUN_021f190c(&uStack_b0,0);
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    Leaderboard__SetLocalPlayer_251dd48(lVar9,&uStack_160);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

