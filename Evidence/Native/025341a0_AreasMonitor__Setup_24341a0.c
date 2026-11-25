/* IL2CPP: AreasMonitor$$Setup
void AreasMonitor__Setup (AreasMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$Setup
   void AreasMonitor__Setup (AreasMonitor_o* __this, const MethodInfo* method); */

void AreasMonitor__Setup_24341a0
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  long *plStack_28;
  
  if ((bRam0000000004f4b7ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3a18);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c3a20);
    FUN_021f03f8(PTR_DAT_049c3a28);
    FUN_021f03f8(PTR_DAT_049c3a30);
    FUN_021f03f8(PTR_DAT_049c3a38);
    FUN_021f03f8(PTR_DAT_049bc0c8);
    bRam0000000004f4b7ef = 1;
  }
  MonitorBase__Setup_256c4e8(param_5,0);
  lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_5,0x21c0801,0);
  if (lVar3 != 0) {
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar3,&plStack_28,*(undefined8 *)PTR_DAT_049c3a20);
    plVar5 = (long *)(param_5 + 0xd0);
    *plVar5 = (long)plStack_28;
    thunk_FUN_021f190c(plVar5);
    if (*plVar5 != 0) {
      plVar4 = (long *)UnityEngine_Component__get_transform_3c18724(*plVar5,0);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(param_5 + 0xd8) = 0;
      }
      else {
        lVar3 = *(long *)PTR_DAT_049bc0c8;
        if ((*plVar4 != lVar3) || (*(long **)(param_5 + 0xd8) = plVar4, *plVar4 != lVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_021f0a20(plVar4);
        }
      }
      thunk_FUN_021f190c(param_5 + 0xd8,plVar4);
      if (*plVar5 != 0) {
        plVar5 = (long *)(*plVar5 + 0x20);
        *plVar5 = param_5;
        thunk_FUN_021f190c(plVar5,param_5);
        lVar3 = *(long *)(param_5 + 0xd0);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 400) = param_5;
          thunk_FUN_021f190c(lVar3 + 400,param_5);
          if ((*(long *)(param_5 + 0x98) != 0) &&
             (lVar3 = *(long *)(*(long *)(param_5 + 0x98) + 0x50), lVar3 != 0)) {
            lVar6 = *(long *)(param_5 + 0xd0);
            uVar2 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                              (lVar3,*(undefined8 *)PTR_DAT_049c3a18);
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + 0x28) = uVar2;
              if ((*(long *)(param_5 + 0x98) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_5 + 0x98) + 0x50), lVar3 != 0)) {
                *(undefined1 *)(param_5 + 0xe0) = *(undefined1 *)(lVar3 + 0x48);
                lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                  (param_5,0x13d626de,0);
                if (lVar3 != 0) {
                  UnityEngine_GameObject__SetActive_3c1ce34(lVar3,*(undefined1 *)(param_5 + 0xe0),0)
                  ;
                  lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c
                                    (param_5,0xd83b59b6,0);
                  if (lVar3 != 0) {
                    UnityEngine_GameObject__SetActive_3c1ce34
                              (lVar3,*(undefined1 *)(param_5 + 0xe0),0);
                    if (*(char *)(param_5 + 0xe0) == '\0') {
                      return;
                    }
                    lVar3 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                                      (param_5,0xbcdc2f95,0);
                    if (lVar3 != 0) {
                      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_5 + 0xb8);
                      thunk_FUN_021f190c();
                      if (*(long *)(param_5 + 0xd0) != 0) {
                        *(undefined4 *)(*(long *)(param_5 + 0xd0) + 0x84) = 2;
                        AreasMonitor__SetupTopBottom_2434624(param_5);
                        puVar1 = PTR_DAT_049c3a28;
                        if ((*(long *)(param_5 + 0xb8) != 0) &&
                           (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                                      (*(long *)(param_5 + 0xb8),&plStack_28,
                                       *(undefined8 *)PTR_DAT_049c3a28), plStack_28 != (long *)0x0))
                        {
                          uVar2 = (**(code **)(*plStack_28 + 0x388))
                                            (plStack_28,*(undefined8 *)(*plStack_28 + 0x390));
                          *(undefined4 *)(param_5 + 0xe4) = uVar2;
                          if (*(long *)(param_5 + 0xb8) != 0) {
                            UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                                      (*(long *)(param_5 + 0xb8),&plStack_28,
                                       *(undefined8 *)PTR_DAT_049c3a30);
                            plVar5 = plStack_28;
                            lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                              (plStack_28,0x6d8b1339,0);
                            if ((lVar3 != 0) &&
                               (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar3,0),
                               lVar3 != 0)) {
                              UnityEngine_RectTransform__get_offsetMax_3c2c628(lVar3,0);
                              *(float *)(param_5 + 0xe8) = param_2;
                              UnityEngine_RectTransform__get_offsetMin_3c2c4e0(lVar3,0);
                              *(float *)(param_5 + 0xec) = -param_2;
                              lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                                                (plVar5,0x297c952a,0);
                              if (lVar3 != 0) {
                                uVar7 = *(undefined8 *)(lVar3 + 0x20);
                                if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
                                  FUN_021f0574(*(long *)PTR_DAT_049b5480);
                                }
                                lVar3 = Extensions__GetRectTransform_3f0c498(uVar7,0);
                                if (lVar3 != 0) {
                                  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar3,0);
                                  fVar8 = param_2;
                                  UnityEngine_RectTransform__get_rect_3c2ba98(lVar3,0);
                                  fVar9 = param_4;
                                  UnityEngine_RectTransform__get_pivot_3c2c1c0(lVar3,0);
                                  param_2 = param_2 - param_4 * fVar8;
                                  *(float *)(param_5 + 0xf0) = param_2;
                                  UnityEngine_RectTransform__get_rect_3c2ba98(lVar3,0);
                                  *(float *)(param_5 + 0xf4) = param_2 + fVar9;
                                  lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                                                    (plVar5,0x78d4e5eb,0);
                                  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) &&
                                     (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                                                (*(long *)(lVar3 + 0x20),&plStack_28,
                                                 *(undefined8 *)PTR_DAT_049c3a38),
                                     plVar4 = plStack_28, plStack_28 != (long *)0x0)) {
                                    *(long *)(param_5 + 0x100) = plStack_28[4];
                                    thunk_FUN_021f190c(param_5 + 0x100);
                                    *(int *)(param_5 + 0x108) = (int)plVar4[0xc];
                                    lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetContainer_3350db4
                                                      (plVar5,0x78d4e5eb,0);
                                    if (((lVar3 != 0) &&
                                        (lVar3 = StatefulUI_Runtime_References_ContainerReference__get_Prefab_3345c30
                                                           (lVar3,0), lVar3 != 0)) &&
                                       (UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                                                  (lVar3,&plStack_28,*(undefined8 *)puVar1),
                                       plStack_28 != (long *)0x0)) {
                                      uVar2 = (**(code **)(*plStack_28 + 0x388))
                                                        (plStack_28,
                                                         *(undefined8 *)(*plStack_28 + 0x390));
                                      *(undefined4 *)(param_5 + 0xf8) = uVar2;
                                      if (*(long *)(param_5 + 0xd0) != 0) {
                                        plVar4 = (long *)(*(long *)(param_5 + 0xd0) + 0x30);
                                        *plVar4 = param_5;
                                        thunk_FUN_021f190c(plVar4,param_5);
                                        lVar3 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetObject_3350f84
                                                          (plVar5,0x39740faf,0);
                                        if ((lVar3 != 0) &&
                                           (lVar3 = Extensions__GetRectTransform_3f0c498
                                                              (*(undefined8 *)(lVar3 + 0x20),0),
                                           lVar3 != 0)) {
                                          uVar2 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                                                            (lVar3,0);
                                          *(undefined4 *)(param_5 + 0x10c) = uVar2;
                                          *(float *)(param_5 + 0x110) = fVar8;
                                          plVar5 = (long *)
                                                  StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                                                            (plVar5,0xa59d6ffe,0);
                                          if (plVar5 != (long *)0x0) {
                                            (**(code **)(*plVar5 + 0x298))
                                                      (plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
                                            *(float *)(param_5 + 0x114) = fVar9;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

