/* IL2CPP: PiggyBankSubMonitor$$UpdateView
void PiggyBankSubMonitor__UpdateView (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PiggyBankSubMonitor$$UpdateView
   void PiggyBankSubMonitor__UpdateView (PiggyBankSubMonitor_o* __this, const MethodInfo* method);
    */

void PiggyBankSubMonitor__UpdateView_2481aac(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iStack_18;
  int iStack_14;
  
  if ((bRam0000000004f4ba0a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049c5a90);
    FUN_021f03f8(PTR_DAT_049c5a98);
    bRam0000000004f4ba0a = 1;
  }
  iStack_18 = 0;
  iStack_14 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    iStack_14 = EconomyModule__GetAmount_2523ed0(*(long *)(param_1 + 0x48),4,0);
    uVar3 = System_Int32__ToString_30fbaa0(&iStack_14,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xf6f322b4,uVar3,0);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x30), lVar4 != 0)) {
      iStack_18 = ConstantSheetBase_object___GetInt_281c070
                            (lVar4,10,*(undefined8 *)PTR_DAT_049c4228);
      uVar3 = System_Int32__ToString_30fbaa0(&iStack_18,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0x40733919,uVar3,0)
      ;
      fVar5 = (float)iStack_14 / (float)iStack_18;
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar5) {
        fVar7 = fVar6;
      }
      lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                        (param_1,0x85f8a9cf,0);
      if ((lVar4 != 0) &&
         (lVar4 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar4,0), lVar4 != 0)) {
        UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar7,0x3f800000,lVar4,0);
        uVar1 = 0x93dbeb55;
        if (fVar7 < 1.0) {
          uVar1 = 0xf5401aea;
        }
        StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar1,0);
        if ((*(long *)(param_1 + 0x80) != 0) &&
           (lVar4 = Spine_Unity_SkeletonGraphic__get_SkeletonData_331ae34
                              (*(long *)(param_1 + 0x80),0), lVar4 != 0)) {
          puVar2 = (undefined8 *)PTR_DAT_049c5a90;
          if (fVar7 < 1.0) {
            puVar2 = (undefined8 *)PTR_DAT_049c5a98;
          }
          uVar3 = Spine_SkeletonData__FindSkin_32f0b54(lVar4,*puVar2,0);
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (lVar4 = Spine_Unity_SkeletonGraphic__get_Skeleton_330f3c0(*(long *)(param_1 + 0x80),0)
             , lVar4 != 0)) {
            Spine_Skeleton__SetSkin_32e265c(lVar4,uVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

