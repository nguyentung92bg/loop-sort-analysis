/* IL2CPP: BoosterContainer$$OnRefreshElement
void BoosterContainer__OnRefreshElement (BoosterContainer_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterContainer$$OnRefreshElement
   void BoosterContainer__OnRefreshElement (BoosterContainer_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, BoosterSheet_Booster_o* booster, const
   MethodInfo* method); */

void BoosterContainer__OnRefreshElement_256afd4(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_54 [4];
  
  puVar3 = PTR_DAT_049cbe58;
                    /* try { // try from 0266afdc to 0276afeb has its CatchHandler @ 0266afec */
                    /* catch() { ... } // from try @ 0266af74 with catch @ 0266afec
                       catch() { ... } // from try @ 0266afdc with catch @ 0266afec */
                    /* try { // try from 0266aff0 to 0276aff3 has its CatchHandler @ 0266affc */
                    /* try { // try from 0266aff4 to 0276afff has its CatchHandler @ 0266a674 */
                    /* catch() { ... } // from try @ 0266aff0 with catch @ 0266affc */
  if ((bRam0000000004f4c18d & 1) == 0) {
                    /* try { // try from 0266b00c to 0276b12f has its CatchHandler @ 0266b00c
                       catch() { ... } // from try @ 0266b00c with catch @ 0266b00c
                       catch() { ... } // from try @ 0266b5ac with catch @ 0266b00c
                       catch() { ... } // from try @ 0266b6f4 with catch @ 0266b00c
                       catch() { ... } // from try @ 0266b794 with catch @ 0266b00c
                       catch() { ... } // from try @ 0266b80c with catch @ 0266b00c */
    FUN_021f03f8(PTR_DAT_049cbe60);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b6118);
    FUN_021f03f8(PTR_DAT_049cbe68);
    FUN_021f03f8(PTR_DAT_049cbe58);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4c18d = 1;
  }
  uStack_94 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
    plVar8 = (long *)(lVar5 + 0x18);
    *plVar8 = param_3;
    thunk_FUN_021f190c(plVar8,param_3);
    puVar9 = (undefined8 *)(lVar5 + 0x20);
    *puVar9 = param_2;
    thunk_FUN_021f190c(puVar9,param_2);
    puVar3 = PTR_DAT_049b6118;
    if (*plVar8 != 0) {
      lVar10 = *(long *)(param_1 + 0x38);
      plVar7 = *(long **)(*(long *)(*(long *)PTR_DAT_049b6118 + 0x20) + 0xc0);
      uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
      uVar6 = thunk_FUN_0224e54c(*plVar8,*(undefined8 *)(*plVar7 + 0x80));
      func_0x04608620(&uStack_c8,uVar6,uVar1);
      if (lVar10 != 0) {
        Boosters__Get_24e5ab0(&uStack_c8,lVar10,uStack_c8,0);
        uStack_90 = CONCAT44(uStack_c4,uStack_c8);
        uStack_88 = uStack_c0;
        uStack_78 = uStack_b0;
        uStack_80 = uStack_b8;
        uStack_68 = uStack_a0;
        uStack_70 = uStack_a8;
        if (*plVar8 != 0) {
                    /* try { // try from 0266b130 to 0276b137 has its CatchHandler @ 0266b758 */
          uStack_94 = *(undefined4 *)(*plVar8 + 0x18);
          uVar11 = *puVar9;
          uVar6 = System_Int32__ToString_30fbaa0(&uStack_94,0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                    (uVar11,0x9d9334f4,uVar6,0);
          if (*plVar8 != 0) {
            uStack_94 = *(undefined4 *)(*plVar8 + 0x1c);
            uVar11 = *puVar9;
                    /* try { // try from 0266b174 to 0276b183 has its CatchHandler @ 0266b704 */
            uVar6 = System_Int32__ToString_30fbaa0(&uStack_94,0);
            StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                      (uVar11,0xcc7bd98b,uVar6,0);
            puVar2 = PTR_DAT_049b5310;
            if (*plVar8 != 0) {
              uVar11 = *puVar9;
              uStack_94 = BoosterSheet_Booster__GetCount_2559e80(*plVar8,0);
                    /* try { // try from 0266b1bc to 0276b1cb has its CatchHandler @ 0266b72c */
              uVar6 = System_Int32__ToString_30fbaa0(&uStack_94,0);
                    /* try { // try from 0266b1d4 to 0276b1df has its CatchHandler @ 0266b728 */
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                        (uVar11,0x5cac0bbb,uVar6,0);
              lVar10 = *(long *)puVar2;
              uVar6 = *puVar9;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                FUN_021f0574();
                lVar10 = *(long *)puVar2;
              }
                    /* try { // try from 0266b1f4 to 0276b1f7 has its CatchHandler @ 0266b700 */
              uVar11 = CloudPrefsInt__ToString_24ea0b0(*(long *)(lVar10 + 0xb8) + 0x770,0);
                    /* try { // try from 0266b208 to 0276b20f has its CatchHandler @ 0266b724 */
                    /* try { // try from 0266b218 to 0276b21b has its CatchHandler @ 0266b720 */
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                        (uVar6,0xc614fb00,uVar11,0);
                    /* try { // try from 0266b220 to 0276b22b has its CatchHandler @ 0266b71c */
              uStack_f8 = uStack_88;
              uStack_100 = uStack_90;
              uStack_e8 = uStack_78;
              uStack_f0 = uStack_80;
                    /* try { // try from 0266b240 to 0276b243 has its CatchHandler @ 0266b6fc */
              uStack_d8 = uStack_68;
              uStack_e0 = uStack_70;
                    /* try { // try from 0266b248 to 0276b253 has its CatchHandler @ 0266b718 */
              uStack_118 = uStack_80;
              uStack_120 = uStack_88;
              uStack_110 = uStack_78;
              StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                        (*puVar9,0x1a9a2c8b,&uStack_120,0);
              lVar10 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                                 (*puVar9,0x854128ce,0);
              puVar4 = PTR_DAT_049cbe68;
              puVar2 = PTR_DAT_049b8d80;
                    /* try { // try from 0266b268 to 0276b31b has its CatchHandler @ 0266b75c */
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x100) != 0)) {
                UnityEngine_Events_UnityEventBase__RemoveAllListeners_3c3287c
                          (*(long *)(lVar10 + 0x100),0);
                lVar10 = *(long *)(lVar10 + 0x100);
                uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,lVar5,*(undefined8 *)puVar4,0);
                if (lVar10 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener_3c32a04(lVar10,uVar6,0);
                  if (*plVar8 != 0) {
                    lVar5 = *(long *)(param_1 + 0x98);
                    plVar7 = *(long **)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0);
                    uVar1 = *(undefined4 *)(plVar7[1] + 0xfc);
                    uVar6 = thunk_FUN_0224e54c(*plVar8,*(undefined8 *)(*plVar7 + 0x80));
                    func_0x04608620(auStack_54,uVar6,uVar1);
                    if (lVar5 != 0) {
                      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                                (lVar5,auStack_54,*(undefined8 *)PTR_DAT_049cbe60);
                    /* try { // try from 0266b328 to 0276b3af has its CatchHandler @ 0266b764 */
                      BoosterContainer__OnUpdateElement_256a644(param_1,*puVar9,*plVar8);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

