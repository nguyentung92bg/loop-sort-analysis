/* IL2CPP: WeeklyMissions$$GetCurrentDay
int32_t WeeklyMissions__GetCurrentDay (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$GetCurrentDay
   int32_t WeeklyMissions__GetCurrentDay (WeeklyMissions_o* __this, const MethodInfo* method); */

int WeeklyMissions__GetCurrentDay_252c638(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4bed6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f98);
                    /* try { // try from 0262c66c to 0272c673 has its CatchHandler @ 0262c768 */
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049c5d78);
    FUN_021f03f8(PTR_DAT_049b5050);
                    /* try { // try from 0262c68c to 0272c6d7 has its CatchHandler @ 0262c770 */
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049b6128);
    bRam0000000004f4bed6 = 1;
  }
  uStack_28 = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  auVar8 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x88), auVar8 = ZEXT816(0), lVar4 != 0)) {
                    /* try { // try from 0262c6d8 to 0272c757 has its CatchHandler @ 0262c4a8 */
    uStack_40 = 9;
    lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar4,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
    auVar8._8_8_ = auStack_80._8_8_;
    auVar8._0_8_ = auStack_80._0_8_;
    if (lVar4 != 0) {
      uStack_68 = *(undefined8 *)(lVar4 + 0x40);
      uStack_70 = *(undefined8 *)(lVar4 + 0x38);
      uStack_58 = *(undefined8 *)(lVar4 + 0x50);
      uStack_60 = *(undefined8 *)(lVar4 + 0x48);
      uStack_48 = *(undefined8 *)(lVar4 + 0x60);
      uStack_50 = *(undefined8 *)(lVar4 + 0x58);
      uVar5 = CloudPrefsT___Il2CppFullySharedGenericStructType___HasValue_2802774
                        (&uStack_70,*(undefined8 *)PTR_DAT_049b5f98);
      if ((uVar5 & 1) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lVar4 + 0x18);
        if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar6 = System_TimeSpan__FromMinutes_311700c((double)iVar3,0);
        uStack_68 = *(undefined8 *)(lVar4 + 0x40);
        uStack_70 = *(undefined8 *)(lVar4 + 0x38);
                    /* try { // try from 0262c758 to 0272c75b has its CatchHandler @ 0262c76c */
        uStack_58 = *(undefined8 *)(lVar4 + 0x50);
        uStack_60 = *(undefined8 *)(lVar4 + 0x48);
                    /* try { // try from 0262c75c to 0272c75f has its CatchHandler @ 0262c764 */
                    /* try { // try from 0262c760 to 0272c78b has its CatchHandler @ 0262c4a8 */
        uStack_48 = *(undefined8 *)(lVar4 + 0x60);
        uStack_50 = *(undefined8 *)(lVar4 + 0x58);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c75c with catch @ 0262c764
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c66c with catch @ 0262c768
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c758 with catch @ 0262c76c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c68c with catch @ 0262c770
                        */
        CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                  (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049b5fa8);
        auStack_80._0_8_ = CONCAT44(uStack_3c,uStack_40);
                    /* try { // try from 0262c78c to 0272c78f has its CatchHandler @ 0262c7a8 */
                    /* try { // try from 0262c790 to 0272c7ab has its CatchHandler @ 0262c4a8 */
        auStack_80._8_8_ = uStack_38;
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* catch() { ... } // from try @ 0262c78c with catch @ 0262c7a8 */
                    /* try { // try from 0262c7ac to 0272c7b3 has its CatchHandler @ 0262c808 */
        auVar8 = System_DateTimeOffset__Subtract_30e2e30(auStack_80,uVar6,0);
                    /* try { // try from 0262c7b4 to 0272c7d7 has its CatchHandler @ 0262c4a8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c58c with catch @ 0262c7b8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262c5ac with catch @ 0262c7bc
                        */
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_80 = TimeProvider__get_UtcNow_24f95ec(0);
                    /* try { // try from 0262c7d8 to 0272c7db has its CatchHandler @ 0262c7f4 */
                    /* try { // try from 0262c7dc to 0272c7f7 has its CatchHandler @ 0262c4a8 */
        uStack_28 = System_DateTimeOffset__Subtract_30e2d84(auStack_80,auVar8._0_8_,auVar8._8_8_,0);
                    /* catch() { ... } // from try @ 0262c7d8 with catch @ 0262c7f4 */
                    /* try { // try from 0262c7f8 to 0272c7ff has its CatchHandler @ 0262c808 */
        dVar7 = (double)System_TimeSpan__get_TotalDays_3116b74(&uStack_28,0);
                    /* try { // try from 0262c800 to 0272c80b has its CatchHandler @ 0262c4a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0262c7ac with catch @ 0262c808
                       catch(type#2 @ 00000000) { ... } // from try @ 0262c7f8 with catch @ 0262c808
                        */
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar1 = -0x80000000;
        if ((float)(int)dVar7 != INFINITY) {
          iVar1 = (int)dVar7;
        }
        auVar8 = auStack_80;
        if ((*(long *)(param_1 + 0x78) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0xa0), lVar4 == 0)) goto LAB_0262c8a8;
        iVar2 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                          (lVar4,*(undefined8 *)PTR_DAT_049c5d78);
        iVar3 = iVar1;
        if (iVar2 <= iVar1) {
          iVar3 = iVar2;
        }
        if (iVar1 < 1) {
          iVar3 = 1;
        }
      }
      return iVar3;
    }
  }
LAB_0262c8a8:
  auStack_80 = auVar8;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

