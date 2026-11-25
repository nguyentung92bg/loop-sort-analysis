/* IL2CPP: AreaOffer$$BuildTourAreas
System_Collections_Generic_List_AreaType__o* AreaOffer__BuildTourAreas (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$BuildTourAreas
   System_Collections_Generic_List_AreaType__o* AreaOffer__BuildTourAreas (AreaOffer_o* __this,
   const MethodInfo* method); */

long AreaOffer__BuildTourAreas_250a604(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [16];
  undefined4 uStack_54;
  
  puVar3 = PTR_DAT_049c9050;
  puVar2 = PTR_DAT_049c9048;
                    /* try { // try from 0260a60c to 0270a61f has its CatchHandler @ 0260b018 */
                    /* try { // try from 0260a62c to 0270a62f has its CatchHandler @ 0260af78 */
                    /* try { // try from 0260a63c to 0270a653 has its CatchHandler @ 0260b058 */
  if ((bRam0000000004f4bdbe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049c43e8);
                    /* try { // try from 0260a660 to 0270a66b has its CatchHandler @ 0260b054 */
    FUN_021f03f8(PTR_DAT_049c43f0);
    FUN_021f03f8(PTR_DAT_049c43f8);
    FUN_021f03f8(PTR_DAT_049c9058);
    FUN_021f03f8(PTR_DAT_049c9050);
                    /* try { // try from 0260a690 to 0270a693 has its CatchHandler @ 0260af60 */
    FUN_021f03f8(PTR_DAT_049c9048);
                    /* try { // try from 0260a698 to 0270a69f has its CatchHandler @ 0260af9c */
    FUN_021f03f8(PTR_DAT_049c4410);
    bRam0000000004f4bdbe = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar7,*(undefined8 *)puVar3);
  puVar6 = PTR_DAT_049c9058;
  puVar5 = PTR_DAT_049c5440;
  puVar4 = PTR_DAT_049c43f8;
  puVar3 = PTR_DAT_049c43f0;
  puVar2 = PTR_DAT_049c43e8;
                    /* try { // try from 0260a6c4 to 0270a6c7 has its CatchHandler @ 0260af5c */
                    /* try { // try from 0260a6c8 to 0270a6e3 has its CatchHandler @ 0260af94 */
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar8 != 0)) {
                    /* try { // try from 0260a6e8 to 0270a6f3 has its CatchHandler @ 0260af90 */
    auStack_70 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                           (lVar8,*(undefined8 *)PTR_DAT_049c4410);
                    /* try { // try from 0260a708 to 0270a79b has its CatchHandler @ 0260b00c */
    while( true ) {
      uVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                        (auStack_70,*(undefined8 *)puVar3);
      if ((uVar9 & 1) == 0) {
        Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                  (auStack_70,*(undefined8 *)puVar2);
        return lVar7;
      }
      lVar8 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                        (auStack_70,*(undefined8 *)puVar4);
      if (lVar8 == 0) break;
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      uVar1 = *(undefined4 *)(lVar8 + 0x20);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = AreaOffer__HasOffers_250a204(uVar10,uVar1);
      if ((uVar9 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0260a7b4 to 0270a7bf has its CatchHandler @ 0260b1b4 */
          FUN_021f06a0();
        }
        uStack_54 = *(undefined4 *)(lVar8 + 0x20);
        FUN_02333498(lVar7,&uStack_54,*(undefined8 *)puVar6);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

