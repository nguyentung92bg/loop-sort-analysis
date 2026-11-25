/* IL2CPP: DailyRewards$$GetRandomReward
RewardInfo_o DailyRewards__GetRandomReward (DailyRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewards$$GetRandomReward
   RewardInfo_o DailyRewards__GetRandomReward (DailyRewards_o* __this, const MethodInfo* method); */

undefined8 DailyRewards__GetRandomReward_2517a2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4be27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c93f8);
    FUN_021f03f8(PTR_DAT_049c9400);
    FUN_021f03f8(PTR_DAT_049c9408);
    FUN_021f03f8(PTR_DAT_049c9410);
    bRam0000000004f4be27 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xf8), lVar5 != 0)) {
    uVar8 = DailyRewardSheet__GetTotalPercent_255ed74(lVar5,0);
    fVar9 = (float)UnityEngine_Random__Range_3c11c54(0,uVar8,0);
    puVar3 = PTR_DAT_049c9408;
    puVar2 = PTR_DAT_049c9400;
    puVar1 = PTR_DAT_049c93f8;
                    /* try { // try from 02617ab8 to 02717abf has its CatchHandler @ 02617e64 */
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0xf8), lVar5 != 0)) {
      auStack_40 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar5,*(undefined8 *)PTR_DAT_049c9410);
      fVar10 = 0.0;
                    /* try { // try from 02617af4 to 02717afb has its CatchHandler @ 02617e4c */
      while( true ) {
        uVar6 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                          (auStack_40,*(undefined8 *)puVar2);
        if ((uVar6 & 1) == 0) {
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_40,*(undefined8 *)puVar1);
          return 0;
        }
        lVar5 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_40,*(undefined8 *)puVar3);
        if (lVar5 == 0) break;
        bVar4 = fVar10 <= fVar9;
                    /* try { // try from 02617b24 to 02717b27 has its CatchHandler @ 02617e58 */
        fVar10 = fVar10 + *(float *)(lVar5 + 0x28);
        if ((bVar4) && (fVar9 <= fVar10)) {
          uVar7 = DailyRewardSheet_Row__GetReward_255f0a0(lVar5,0);
                    /* try { // try from 02617b44 to 02717b47 has its CatchHandler @ 02617e40 */
                    /* try { // try from 02617b4c to 02717b57 has its CatchHandler @ 02617e54 */
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_40,*(undefined8 *)puVar1);
                    /* try { // try from 02617b6c to 02717bff has its CatchHandler @ 02617e7c */
          return uVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

