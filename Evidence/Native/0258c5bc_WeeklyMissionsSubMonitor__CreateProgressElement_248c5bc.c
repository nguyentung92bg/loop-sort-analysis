/* IL2CPP: WeeklyMissionsSubMonitor$$CreateProgressElement
void WeeklyMissionsSubMonitor__CreateProgressElement (WeeklyMissionsSubMonitor_o* __this, int32_t idx, StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionProgressSheet_Row_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionsSubMonitor$$CreateProgressElement
   void WeeklyMissionsSubMonitor__CreateProgressElement (WeeklyMissionsSubMonitor_o* __this, int32_t
   idx, StatefulUI_Runtime_Core_StatefulComponent_o* view, WeeklyMissionProgressSheet_Row_o* data,
   const MethodInfo* method); */

void WeeklyMissionsSubMonitor__CreateProgressElement_248c5bc
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               int param_5,undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_049c5da8;
  if ((bRam0000000004f4ba4e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d60);
    FUN_021f03f8(PTR_DAT_049c5d08);
    FUN_021f03f8(PTR_DAT_049c5d10);
    FUN_021f03f8(PTR_DAT_049c5db0);
    FUN_021f03f8(PTR_DAT_049c5da8);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba4e = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_4;
    thunk_FUN_021f190c((long *)(lVar6 + 0x10),param_4);
    *(undefined8 *)(lVar6 + 0x18) = param_6;
    thunk_FUN_021f190c((undefined8 *)(lVar6 + 0x18),param_6);
    plVar11 = (long *)(lVar6 + 0x20);
    *plVar11 = param_7;
    thunk_FUN_021f190c(plVar11,param_7);
    if ((*(long *)(param_4 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0xa8), lVar7 != 0)) {
      iVar5 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (lVar7,*(undefined8 *)PTR_DAT_049c5d60);
      *(float *)(lVar6 + 0x28) = (float)(param_5 + 1) / (float)iVar5;
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                        (param_4,0x6d8b1339,0);
      if ((lVar7 != 0) &&
         (lVar7 = StatefulUI_Runtime_Core_ContainerView__get_RectTransform_3346638(lVar7,0),
         lVar7 != 0)) {
        UnityEngine_RectTransform__get_rect_3c2ba98(lVar7,0);
        if (*(long *)(lVar6 + 0x18) != 0) {
          fVar12 = *(float *)(lVar6 + 0x28);
          lVar7 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                            (*(long *)(lVar6 + 0x18),0);
          if (lVar7 != 0) {
            UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(param_3 * fVar12,0,lVar7,0);
            lVar7 = *plVar11;
            if (lVar7 != 0) {
              uStack_68 = *(undefined8 *)(lVar7 + 0x30);
              uStack_70 = *(undefined8 *)(lVar7 + 0x28);
              uStack_58 = *(undefined8 *)(lVar7 + 0x40);
              uStack_60 = *(undefined8 *)(lVar7 + 0x38);
              uVar8 = CloudPrefsBool__get_Value_24eb0d0(&uStack_70,0);
              puVar4 = PTR_DAT_049c5db0;
              puVar3 = PTR_DAT_049b8d80;
              lVar7 = *(long *)(param_4 + 0x90);
              if (lVar7 != 0) {
                iVar5 = *(int *)(lVar7 + 0x18);
                iVar2 = 0;
                if (iVar5 != 0) {
                  iVar2 = param_5 / iVar5;
                }
                uVar10 = *(undefined8 *)(lVar6 + 0x18);
                uVar1 = 0x93dbeb55;
                if ((uVar8 & 1) == 0) {
                  uVar1 = 0xf5401aea;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lVar7,param_5 - iVar2 * iVar5,&uStack_38,*(undefined8 *)PTR_DAT_049c5d10)
                ;
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetImage_3351658
                          (uVar10,0x1a9a2c8b,uStack_38,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (*(undefined8 *)(lVar6 + 0x18),uVar1,0);
                uVar9 = *(undefined8 *)(lVar6 + 0x18);
                uVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
                UnityEngine_Events_UnityAction___ctor_3c32934(uVar10,lVar6,*(undefined8 *)puVar4,0);
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                          (uVar9,0xc80a90e6,uVar10,0);
                return;
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

