/* IL2CPP: StreakTowerSubMonitor$$FillStageElement
void StreakTowerSubMonitor__FillStageElement (StreakTowerSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTowerSheet_Stage_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$FillStageElement
   void StreakTowerSubMonitor__FillStageElement (StreakTowerSubMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, StreakTowerSheet_Stage_o* data, const
   MethodInfo* method); */

void StreakTowerSubMonitor__FillStageElement_2487d4c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int extraout_var;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar3 = PTR_DAT_049c5c70;
  if ((bRam0000000004f4ba36 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5c78);
    FUN_021f03f8(PTR_DAT_049c5c80);
    FUN_021f03f8(PTR_DAT_049c5c88);
    FUN_021f03f8(PTR_DAT_049c5c70);
    FUN_021f03f8(PTR_DAT_049b8d80);
    bRam0000000004f4ba36 = 1;
  }
  iStack_6c = 0;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_021f190c((long *)(lVar5 + 0x10),param_1);
    puVar9 = (undefined8 *)(lVar5 + 0x18);
    *puVar9 = param_2;
    thunk_FUN_021f190c(puVar9,param_2);
    plVar8 = (long *)(lVar5 + 0x20);
    *plVar8 = param_3;
    thunk_FUN_021f190c(plVar8,param_3);
    if (*(long *)(param_1 + 0x98) != 0) {
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x98),*plVar8,*puVar9,*(undefined8 *)PTR_DAT_049c5c80);
      StreakTowerSubMonitor__get_Save_248736c();
      iVar4 = StreakTowerSubMonitor__get_Save_248736c();
      if (*plVar8 != 0) {
        iStack_6c = *(int *)(*plVar8 + 0x50);
        uVar2 = 0xf5401aea;
        if (iStack_6c <= iVar4) {
          uVar2 = 0x93dbeb55;
        }
        uVar6 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetInnerComponent_3350f20
                          (*(undefined8 *)(lVar5 + 0x18),0xd675ec2d,0);
        uVar12 = *(undefined8 *)(lVar5 + 0x18);
        uVar7 = System_Int32__ToString_30fbaa0(&iStack_6c,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (uVar12,0x97f78800,uVar7,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (*(undefined8 *)(lVar5 + 0x18),uVar2,0);
        uVar12 = *(undefined8 *)(lVar5 + 0x18);
        uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b8d80);
        UnityEngine_Events_UnityAction___ctor_3c32934(uVar7,lVar5,*(undefined8 *)PTR_DAT_049c5c88,0)
        ;
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetButtonListener_3351728
                  (uVar12,0xd675ec2d,uVar7,0);
        uVar2 = 0xb4ce0c4e;
        if (iStack_6c <= extraout_var) {
          uVar2 = 0xbc956f6;
        }
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                  (uVar6,uVar2,0);
        iVar13 = iStack_6c;
        lVar11 = *(long *)(param_1 + 0xa0);
        lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                          (*(undefined8 *)(lVar5 + 0x18),0x97f78800,0);
        if (((lVar5 != 0) && (*(long *)(lVar5 + 0x38) != 0)) &&
           (uVar6 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar5 + 0x38),0),
           puVar3 = PTR_DAT_049c5c78, lVar11 != 0)) {
          iStack_68 = iVar13;
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (lVar11,&iStack_68,uVar6,*(undefined8 *)PTR_DAT_049c5c78);
          lVar5 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                            (*puVar9,0x844457fc,0);
          if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
            StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar5,0);
            lVar11 = *plVar8;
            if (lVar11 != 0) {
              iVar13 = 0;
              do {
                if (*(int *)(lVar11 + 0x18) <= iVar13) {
                  return;
                }
                iVar1 = iVar13 + iStack_6c;
                lVar11 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c
                                   (lVar5,0);
                uVar2 = 0xf5401aea;
                if (iVar1 + 1 <= iVar4) {
                  uVar2 = 0x93dbeb55;
                }
                StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                          (lVar11,uVar2,0);
                if (lVar11 == 0) break;
                lVar10 = *(long *)(param_1 + 0xa0);
                uVar6 = UnityEngine_Component__get_transform_3c18724(lVar11,0);
                if (lVar10 == 0) break;
                iStack_64 = iVar1;
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                          (lVar10,&iStack_64,uVar6,*(undefined8 *)puVar3);
                lVar11 = *plVar8;
                iVar13 = iVar13 + 1;
              } while (lVar11 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

