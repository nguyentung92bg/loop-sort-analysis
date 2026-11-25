/* IL2CPP: WeeklyMissions$$TrackCompletedMissions
void WeeklyMissions__TrackCompletedMissions (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$TrackCompletedMissions
   void WeeklyMissions__TrackCompletedMissions (WeeklyMissions_o* __this, const MethodInfo* method);
    */

void WeeklyMissions__TrackCompletedMissions_252aed8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_64;
  
                    /* try { // try from 0262aedc to 0272aedf has its CatchHandler @ 0262aefc */
                    /* try { // try from 0262aee0 to 0272aeff has its CatchHandler @ 0262a0f8 */
                    /* catch() { ... } // from try @ 0262aedc with catch @ 0262aefc */
                    /* try { // try from 0262af00 to 0272af07 has its CatchHandler @ 0262af6c */
  if ((bRam0000000004f4bec6 & 1) == 0) {
                    /* try { // try from 0262af08 to 0272af33 has its CatchHandler @ 0262a0f8 */
                    /* catch() { ... } // from try @ 0262aea0 with catch @ 0262af0c */
    FUN_021f03f8(PTR_DAT_049c5d78);
                    /* catch() { ... } // from try @ 0262ae9c with catch @ 0262af10 */
                    /* catch() { ... } // from try @ 0262ae98 with catch @ 0262af14 */
                    /* catch() { ... } // from try @ 0262a60c with catch @ 0262af18 */
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049c5d90);
    FUN_021f03f8(PTR_DAT_049c5d98);
                    /* try { // try from 0262af34 to 0272af37 has its CatchHandler @ 0262af58 */
                    /* try { // try from 0262af38 to 0272af5b has its CatchHandler @ 0262a0f8 */
    FUN_021f03f8(PTR_DAT_049c5da0);
    bRam0000000004f4bec6 = 1;
  }
  puVar5 = PTR_DAT_049c5da0;
  puVar4 = PTR_DAT_049c5d98;
  puVar3 = PTR_DAT_049c5d90;
  puVar2 = PTR_DAT_049c5d78;
  puVar1 = PTR_DAT_049b3c20;
  lVar11 = *(long *)(param_1 + 0x78);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 0262af34 with catch @ 0262af58 */
                    /* try { // try from 0262af5c to 0272af63 has its CatchHandler @ 0262af6c */
                    /* try { // try from 0262af64 to 0272af6f has its CatchHandler @ 0262a0f8 */
                    /* catch() { ... } // from try @ 0262af00 with catch @ 0262af6c
                       catch() { ... } // from try @ 0262af5c with catch @ 0262af6c */
    iVar12 = 0;
    while (*(long *)(lVar11 + 0xa0) != 0) {
      iVar7 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (*(long *)(lVar11 + 0xa0),*(undefined8 *)puVar2);
      if (iVar7 <= iVar12) {
        return;
      }
      if ((*(long *)(param_1 + 0x78) == 0) ||
         (lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0), lVar11 == 0)) break;
      iVar12 = iVar12 + 1;
      uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar12);
      lVar11 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                         (lVar11,&uStack_b8,*(undefined8 *)puVar5);
      if (lVar11 == 0) break;
      iVar7 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                        (lVar11,*(undefined8 *)puVar3);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          lVar9 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Item_298568c
                            (lVar11,iVar7,*(undefined8 *)puVar4);
          if (lVar9 == 0) goto LAB_0262b0c4;
          uVar10 = WeeklyMissions__IsCompleted_252ad88(lVar9,*(undefined8 *)(lVar9 + 0x28));
          if ((uVar10 & 1) != 0) {
            uStack_a8 = *(undefined8 *)(lVar9 + 0x60);
            uStack_b0 = *(undefined8 *)(lVar9 + 0x58);
            uStack_98 = *(undefined8 *)(lVar9 + 0x70);
            uStack_a0 = *(undefined8 *)(lVar9 + 0x68);
            uVar10 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_b0,0);
            if ((uVar10 & 1) == 0) {
              uStack_88 = *(undefined8 *)(lVar9 + 0x60);
              uStack_90 = *(undefined8 *)(lVar9 + 0x58);
              uStack_78 = *(undefined8 *)(lVar9 + 0x70);
              uStack_80 = *(undefined8 *)(lVar9 + 0x68);
              CloudPrefsBool__Set_24eb1bc(&uStack_90,1,0);
              uStack_b8 = 0;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar7 + 1);
              System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                        (&uStack_b8,&uStack_c0,*(undefined8 *)puVar1);
              uVar6 = uStack_b8;
              uStack_c0 = 0;
              iStack_64 = iVar12;
              System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                        (&uStack_c0,&iStack_64,*(undefined8 *)puVar1);
              if (*(long *)(param_1 + 0x80) == 0) goto LAB_0262b0c4;
                    /* try { // try from 0262b088 to 0272b163 has its CatchHandler @ 0262b088
                       catch() { ... } // from try @ 0262b088 with catch @ 0262b088
                       catch() { ... } // from try @ 0262b1d0 with catch @ 0262b088
                       catch() { ... } // from try @ 0262b274 with catch @ 0262b088
                       catch() { ... } // from try @ 0262b2b8 with catch @ 0262b088
                       catch() { ... } // from try @ 0262b304 with catch @ 0262b088
                       catch() { ... } // from try @ 0262b328 with catch @ 0262b088 */
              uStack_f0 = 0;
              uStack_e8 = 0;
              uStack_f8 = uVar6;
              uStack_e0 = uStack_c0;
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_d8 = 0;
              AnalyticsModule__LiveOpsMilestoneCompleted_2540658
                        (*(long *)(param_1 + 0x80),9,&uStack_f8,0);
            }
          }
          iVar7 = iVar7 + 1;
          iVar8 = Cathei_BakingSheet_SheetRowArray___Il2CppFullySharedGenericType__object___get_Count_2985650
                            (lVar11,*(undefined8 *)puVar3);
        } while (iVar7 < iVar8);
      }
      lVar11 = *(long *)(param_1 + 0x78);
      if (lVar11 == 0) break;
    }
  }
LAB_0262b0c4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

