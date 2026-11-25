/* IL2CPP: Level$$.ctor
void Level___ctor (Level_o __this, int32_t idx, LevelSheet_Level_o* level, int32_t loopCount, RemoteConfigModule_o* remoteConfigModule, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Level$$.ctor
   void Level___ctor (Level_o __this, int32_t idx, LevelSheet_Level_o* level, int32_t loopCount,
   RemoteConfigModule_o* remoteConfigModule, const MethodInfo* method); */

void Level___ctor_25557b8(int *param_1,int param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_54;
  
  puVar1 = PTR_DAT_049cb100;
                    /* try { // try from 026557b8 to 027557c3 has its CatchHandler @ 02655948 */
                    /* try { // try from 026557d0 to 027557df has its CatchHandler @ 02655944 */
                    /* try { // try from 026557f8 to 02755803 has its CatchHandler @ 026559a0 */
  if ((bRam0000000004f4c0a5 & 1) == 0) {
                    /* try { // try from 02655804 to 027558c7 has its CatchHandler @ 026552d0 */
    FUN_021f03f8(PTR_DAT_049cb108);
    FUN_021f03f8(PTR_DAT_049c7990);
    FUN_021f03f8(PTR_DAT_049cb110);
    FUN_021f03f8(PTR_DAT_049c8cd8);
    FUN_021f03f8(PTR_DAT_049cb118);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049cb120);
    FUN_021f03f8(PTR_DAT_049cb100);
    bRam0000000004f4c0a5 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  *param_1 = param_2;
  *(long *)(param_1 + 10) = param_3;
  thunk_FUN_021f190c(param_1 + 10,param_3);
  iStack_54 = param_2;
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&iStack_54);
  uVar4 = System_String__Format_2f73700(*(undefined8 *)puVar1,uVar4,0);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
                    /* try { // try from 026558c8 to 027558d3 has its CatchHandler @ 0265594c */
  CloudPrefsInt___ctor_24e98a8(&uStack_a0,uVar4,0,0,0);
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *(undefined8 *)(param_1 + 2) = uStack_a0;
  *(undefined8 *)(param_1 + 8) = uStack_88;
  *(undefined8 *)(param_1 + 6) = uStack_90;
  thunk_FUN_021f190c(param_1 + 4,0);
                    /* try { // try from 026558e4 to 027558ef has its CatchHandler @ 02655930 */
  if (param_3 != 0) {
    uStack_78 = *(undefined8 *)(param_3 + 0x40);
    uStack_80 = *(undefined8 *)(param_3 + 0x38);
    uStack_70 = *(undefined8 *)(param_3 + 0x48);
                    /* try { // try from 026558fc to 0275590b has its CatchHandler @ 0265592c */
    lVar5 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                      (&uStack_80,*(undefined8 *)PTR_DAT_049c2788);
    puVar2 = PTR_DAT_049cb110;
    puVar1 = PTR_DAT_049cb108;
    if (lVar5 != 0) {
                    /* try { // try from 02655910 to 02755913 has its CatchHandler @ 02655998 */
                    /* try { // try from 02655914 to 02755917 has its CatchHandler @ 0265598c */
                    /* try { // try from 02655918 to 0275591b has its CatchHandler @ 02655988 */
                    /* try { // try from 0265591c to 0275591f has its CatchHandler @ 02655978 */
                    /* try { // try from 02655920 to 02755923 has its CatchHandler @ 02655970 */
      plVar6 = (long *)(param_1 + 0xc);
                    /* try { // try from 02655924 to 02755927 has its CatchHandler @ 02655968 */
                    /* try { // try from 02655928 to 0275592b has its CatchHandler @ 02655940 */
      *plVar6 = *(long *)(lVar5 + 0x50);
                    /* catch() { ... } // from try @ 026558fc with catch @ 0265592c
                       try { // try from 0265592c to 027559bb has its CatchHandler @ 026552d0 */
                    /* catch() { ... } // from try @ 026558e4 with catch @ 02655930 */
      thunk_FUN_021f190c(plVar6);
                    /* catch() { ... } // from try @ 026556e8 with catch @ 02655934 */
                    /* catch() { ... } // from try @ 026556f0 with catch @ 02655938 */
      lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 026556bc with catch @ 0265593c */
                    /* catch() { ... } // from try @ 02655928 with catch @ 02655940 */
                    /* catch() { ... } // from try @ 026557d0 with catch @ 02655944 */
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                (lVar5,*(undefined8 *)puVar1);
      plVar7 = (long *)(param_1 + 0xe);
                    /* catch() { ... } // from try @ 026557b8 with catch @ 02655948 */
                    /* catch() { ... } // from try @ 02655710 with catch @ 0265594c
                       catch() { ... } // from try @ 026558c8 with catch @ 0265594c */
                    /* catch() { ... } // from try @ 02655654 with catch @ 02655950 */
      *plVar7 = lVar5;
                    /* catch() { ... } // from try @ 02655668 with catch @ 02655954 */
                    /* catch() { ... } // from try @ 02655648 with catch @ 02655958 */
      thunk_FUN_021f190c(plVar7,lVar5);
      puVar3 = PTR_DAT_049cb120;
      puVar2 = PTR_DAT_049cb118;
      puVar1 = PTR_DAT_049c7990;
                    /* catch() { ... } // from try @ 02655600 with catch @ 0265595c */
      lVar5 = *plVar6;
                    /* catch() { ... } // from try @ 0265553c with catch @ 02655960 */
      if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 0265550c with catch @ 02655964 */
                    /* catch() { ... } // from try @ 02655924 with catch @ 02655968 */
                    /* catch() { ... } // from try @ 026554e8 with catch @ 0265596c */
                    /* catch() { ... } // from try @ 02655920 with catch @ 02655970 */
                    /* catch() { ... } // from try @ 0265549c with catch @ 02655974 */
                    /* catch() { ... } // from try @ 0265591c with catch @ 02655978 */
                    /* catch() { ... } // from try @ 02655470 with catch @ 0265597c */
        iVar8 = 0;
        do {
                    /* catch() { ... } // from try @ 0265567c with catch @ 02655980 */
                    /* catch() { ... } // from try @ 02655614 with catch @ 02655984 */
                    /* catch() { ... } // from try @ 02655918 with catch @ 02655988 */
          if (*(int *)(lVar5 + 0x18) <= iVar8) {
                    /* try { // try from 026559d4 to 02755a23 has its CatchHandler @ 026552d0 */
            param_1[0x10] = param_4;
            if ((param_5 != 0) &&
               (lVar5 = RemoteConfigModule__GetDataClassNew_object__26a494c
                                  (param_5,*(undefined8 *)puVar3), lVar5 != 0)) {
              *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(lVar5 + 0x10);
              return;
            }
            break;
          }
                    /* catch() { ... } // from try @ 02655914 with catch @ 0265598c */
                    /* catch() { ... } // from try @ 026554b8 with catch @ 02655990 */
          lVar9 = *plVar7;
                    /* catch() { ... } // from try @ 02655458 with catch @ 02655994 */
                    /* catch() { ... } // from try @ 02655910 with catch @ 02655998 */
                    /* catch() { ... } // from try @ 026555c4 with catch @ 0265599c */
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar5,iVar8,&uStack_a0,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 026553d8 with catch @ 026559a0
                       catch() { ... } // from try @ 026557f8 with catch @ 026559a0 */
          if (lVar9 == 0) break;
                    /* catch() { ... } // from try @ 02655574 with catch @ 026559a4 */
          iStack_54 = iVar8;
                    /* try { // try from 026559bc to 027559d3 has its CatchHandler @ 02655a34 */
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (lVar9,&uStack_a0,&iStack_54,*(undefined8 *)puVar1);
          lVar5 = *plVar6;
          iVar8 = iVar8 + 1;
        } while (lVar5 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

