/* IL2CPP: BoosterContainer$$OnRefreshReviveElement
void BoosterContainer__OnRefreshReviveElement (BoosterContainer_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster, ReviveSheet_Revive_o* revive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$OnRefreshReviveElement
   void BoosterContainer__OnRefreshReviveElement (BoosterContainer_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster,
   ReviveSheet_Revive_o* revive, const MethodInfo* method); */

void BoosterContainer__OnRefreshReviveElement_256b358
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  
  if ((bRam0000000004f4c18e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbe60);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6118);
                    /* try { // try from 0266b3b8 to 0276b3c7 has its CatchHandler @ 0266b754 */
    FUN_021f03f8(PTR_DAT_049be928);
    bRam0000000004f4c18e = 1;
  }
  puVar3 = PTR_DAT_049b6118;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
                    /* try { // try from 0266b3d0 to 0276b3db has its CatchHandler @ 0266b750 */
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_3 != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
                    /* try { // try from 0266b3f0 to 0276b3f3 has its CatchHandler @ 0266b714 */
    plVar6 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar6[1] + 0xfc);
    uVar5 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar6 + 0x80));
                    /* try { // try from 0266b404 to 0276b40b has its CatchHandler @ 0266b74c */
    func_0x04608620(&uStack_b0,uVar5,uVar1);
                    /* try { // try from 0266b414 to 0276b417 has its CatchHandler @ 0266b748 */
    if (lVar7 != 0) {
                    /* try { // try from 0266b41c to 0276b427 has its CatchHandler @ 0266b744 */
      Boosters__Get_24e5ab0(&uStack_b0,lVar7,uStack_b0,0);
      uStack_80 = CONCAT44(uStack_ac,uStack_b0);
      uStack_48 = *(undefined4 *)(param_3 + 0x18);
                    /* try { // try from 0266b43c to 0276b43f has its CatchHandler @ 0266b710 */
      uStack_78 = uStack_a8;
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
                    /* try { // try from 0266b444 to 0276b44f has its CatchHandler @ 0266b740 */
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uVar5 = System_Int32__ToString_30fbaa0(&uStack_48,0);
                    /* try { // try from 0266b464 to 0276b517 has its CatchHandler @ 0266b760 */
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x9d9334f4,uVar5,0);
      puVar4 = PTR_DAT_049be928;
      puVar2 = PTR_DAT_049b5310;
      if (param_4 != 0) {
        uStack_48 = *(undefined4 *)(param_4 + 0x1c);
        uVar5 = System_Int32__ToString_30fbaa0(&uStack_48,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0xcc7bd98b,uVar5,0);
        uStack_48 = BoosterSheet_Booster__GetCount_2559e80(param_3,0);
        uVar5 = System_Int32__ToString_30fbaa0(&uStack_48,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0x5cac0bbb,uVar5,0);
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar2;
        }
        uVar5 = CloudPrefsInt__ToString_24ea0b0(*(long *)(lVar7 + 0xb8) + 0x770,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0xc614fb00,uVar5,0);
                    /* try { // try from 0266b524 to 0276b5ab has its CatchHandler @ 0266b764 */
        uStack_d8 = uStack_78;
        uStack_e0 = uStack_80;
        uStack_c8 = uStack_68;
        uStack_d0 = uStack_70;
        uStack_b8 = uStack_58;
        uStack_c0 = uStack_60;
        uStack_f8 = uStack_70;
        uStack_100 = uStack_78;
        uStack_f0 = uStack_68;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                  (param_2,0x1a9a2c8b,&uStack_100,0);
        uStack_48 = *(undefined4 *)(param_4 + 0x20);
        uVar5 = System_Int32__ToString_30fbaa0(&uStack_48,0);
        uVar5 = System_String__Concat_2f72b28(*(undefined8 *)puVar4,uVar5,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (param_2,0xd7ad136f,uVar5,0);
        lVar7 = *(long *)(param_1 + 0x98);
        plVar6 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
                    /* try { // try from 0266b5ac to 0276b663 has its CatchHandler @ 0266b00c */
        uVar1 = *(undefined4 *)(plVar6[1] + 0xfc);
        uVar5 = thunk_FUN_0224e54c(param_3,*(undefined8 *)(*plVar6 + 0x80));
        func_0x04608620(auStack_44,uVar5,uVar1);
        if (lVar7 != 0) {
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                    (lVar7,auStack_44,*(undefined8 *)PTR_DAT_049cbe60);
          BoosterContainer__OnUpdateElement_256a644(param_1,param_2,param_3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

