/* IL2CPP: CollectionBarSubMonitor$$FillProgressBarElement
void CollectionBarSubMonitor__FillProgressBarElement (CollectionBarSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectionBarSubMonitor$$FillProgressBarElement
   void CollectionBarSubMonitor__FillProgressBarElement (CollectionBarSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, const MethodInfo* method); */

void CollectionBarSubMonitor__FillProgressBarElement_247179c(long param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_34;
  int iStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b9ad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2d00);
    FUN_021f03f8(PTR_DAT_049c2d08);
    FUN_021f03f8(PTR_DAT_049c2d10);
    FUN_021f03f8(PTR_DAT_049bb3a0);
    bRam0000000004f4b9ad = 1;
  }
  iStack_28 = 0;
  iStack_34 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x70) + 0x28), lVar7 != 0)) {
    iVar1 = *(int *)(lVar7 + 0x18);
    lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                      (param_2,0x9927ed9b,0);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
      UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lVar7 + 0x20),iVar1 < 2,0);
      if (iVar1 < 2) {
        if ((*(long *)(param_1 + 0x70) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x70) + 0x28), lVar7 == 0)) goto LAB_02571a50;
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar7,0,&uStack_88,*(undefined8 *)PTR_DAT_049c2d10);
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x28), lVar7 == 0)) goto LAB_02571a50;
        uStack_24 = uStack_88;
        GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_2895310
                  (lVar7,&uStack_24,&uStack_88,*(undefined8 *)PTR_DAT_049c2d00);
        uStack_98 = uStack_80;
        uStack_90 = uStack_78;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                  (param_2,0xbcdc2f95,auStack_a0,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_02571a50;
        uVar5 = Shop__FormatItemQuantity_257016c(*(long *)(param_1 + 0x58),uStack_88,uStack_84,0);
      }
      else {
        uStack_50 = *(undefined8 *)(param_1 + 0x40);
        uStack_48 = 0;
        uStack_40 = 0;
        thunk_FUN_021f190c(&uStack_50);
        uStack_48 = CONCAT44(uStack_48._4_4_,0x3f800000);
        uStack_60 = uStack_40;
        uStack_68 = uStack_48;
        uStack_70 = uStack_50;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_335166c
                  (param_2,0xbcdc2f95,&uStack_70,0);
        uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (param_2,0x9927ed9b,uVar5,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        iStack_28 = CollectionBar__GetCurrentTokenCount_251276c(*(long *)(param_1 + 0x48),0);
        puVar3 = PTR_DAT_049bb3a0;
        if (*(long *)(param_1 + 0x70) != 0) {
          iStack_34 = *(int *)(*(long *)(param_1 + 0x70) + 0x20);
          if (iStack_34 <= iStack_28) {
            iStack_28 = iStack_34;
          }
          uVar5 = System_Int32__ToString_30fbaa0(&iStack_28,0);
          uVar6 = System_Int32__ToString_30fbaa0(&iStack_34,0);
          uVar5 = System_String__Concat_2f7d424(uVar5,*(undefined8 *)puVar3,uVar6,0);
          StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                    (param_2,0x5f7a3f9f,uVar5,0);
          iVar4 = iStack_28;
          iVar1 = iStack_34;
          lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                            (param_2,0x85f8a9cf,0);
          if ((lVar7 != 0) &&
             (lVar7 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar7,0), lVar7 != 0)) {
            fVar8 = (float)iVar4 / (float)iVar1;
            fVar9 = 1.0;
            if (fVar8 <= 1.0) {
              fVar9 = fVar8;
            }
            fVar2 = 0.0;
            if (0.0 <= fVar8) {
              fVar2 = fVar9;
            }
            UnityEngine_RectTransform__set_anchorMax_3c2bdd0(fVar2,0x3f800000,lVar7,0);
            return;
          }
        }
      }
    }
  }
LAB_02571a50:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

