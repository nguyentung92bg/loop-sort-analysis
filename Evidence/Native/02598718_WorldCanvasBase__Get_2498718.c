/* IL2CPP: WorldCanvasBase$$Get
StatefulUI_Runtime_References_TextReference_o* WorldCanvasBase__Get (WorldCanvasBase_o* __this, int32_t role, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WorldCanvasBase$$Get
   StatefulUI_Runtime_References_TextReference_o* WorldCanvasBase__Get (WorldCanvasBase_o* __this,
   int32_t role, const MethodInfo* method); */

long * WorldCanvasBase__Get_2498718(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  uVar9 = param_2 & 0xffffffff;
  if ((bRam0000000004f510c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049faef0,param_2,0);
    bRam0000000004f510c2 = 1;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)PTR_DAT_049faef0;
  puVar8 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    FUN_02229774(lVar7);
    puVar8 = *(undefined8 **)(lVar7 + 0x38);
  }
  puVar1 = PTR_DAT_049b3bd0;
  uVar10 = *puVar8;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0xe0) + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar10 = System_Type__GetTypeFromHandle_310ebfc(uVar10,0);
  lVar4 = StatefulUI_Runtime_Core_StatefulUiManager__get_Instance_3346fd4(0);
  if (lVar4 != 0) {
    uVar5 = System_Type__op_Equality_3117e14(uVar10,*(undefined8 *)(lVar4 + 0x10),0);
    if ((uVar5 & 1) == 0) {
      uVar11 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
      if ((uVar5 & 1) == 0) {
        uVar11 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
        if ((uVar5 & 1) == 0) {
          uVar11 = *(undefined8 *)(lVar4 + 0x28);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
          if ((uVar5 & 1) == 0) {
            uVar11 = *(undefined8 *)(lVar4 + 0x30);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
            if ((uVar5 & 1) == 0) {
              uVar11 = *(undefined8 *)(lVar4 + 0x38);
              if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
              if ((uVar5 & 1) == 0) {
                uVar11 = *(undefined8 *)(lVar4 + 0x40);
                if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                if ((uVar5 & 1) == 0) {
                  uVar11 = *(undefined8 *)(lVar4 + 0x48);
                  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                  if ((uVar5 & 1) == 0) {
                    uVar11 = *(undefined8 *)(lVar4 + 0x58);
                    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                    if ((uVar5 & 1) == 0) {
                      uVar11 = *(undefined8 *)(lVar4 + 0x60);
                      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                      if ((uVar5 & 1) == 0) {
                        uVar11 = *(undefined8 *)(lVar4 + 0x68);
                        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                        if ((uVar5 & 1) == 0) {
                          uVar11 = *(undefined8 *)(lVar4 + 0x70);
                          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
                            FUN_021f0574();
                          }
                          uVar5 = System_Type__op_Equality_3117e14(uVar10,uVar11,0);
                          if ((uVar5 & 1) == 0) {
                            uVar11 = thunk_FUN_02256840(PTR_DAT_049ce798);
                            uVar10 = System_String__Format_2f73700(uVar11,uVar10,0);
                            thunk_FUN_02256840(PTR_DAT_049b4350);
                            uVar11 = thunk_FUN_0222ca34();
                            System_Exception___ctor_31372a0(uVar11,uVar10,0);
                    /* WARNING: Subroutine does not return */
                            FUN_021f0564(uVar11,lVar7);
                          }
                          plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetVideoPlayer_334e3e8
                                                     (lVar3,uVar9,0);
                        }
                        else {
                          plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetToggle_334d450
                                                     (lVar3,uVar9,0);
                        }
                      }
                      else {
                        plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetText_334d9f8
                                                   (lVar3,uVar9,0);
                      }
                    }
                    else {
                      plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetTextInput_334e258
                                                 (lVar3,uVar9,0);
                    }
                  }
                  else {
                    plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetSlider_334d180
                                               (lVar3,uVar9,0);
                  }
                }
                else {
                  plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetObject_334b2a0
                                             (lVar3,uVar9,0);
                }
              }
              else {
                plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetInnerComponent_334d728
                                           (lVar3,uVar9,0);
              }
            }
            else {
              plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetImageReference_334b848
                                         (lVar3,uVar9,0);
            }
          }
          else {
            plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetDropdown_334e320
                                       (lVar3,uVar9,0);
          }
        }
        else {
          plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetContainer_334cf38
                                     (lVar3,uVar9,0);
        }
      }
      else {
        plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetButton_334afd0(lVar3,uVar9,0)
        ;
      }
    }
    else {
      plVar6 = (long *)StatefulUI_Runtime_Core_StatefulComponent__GetAnimator_334cb78(lVar3,uVar9,0)
      ;
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718(lVar3);
    }
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar9 = FUN_022524d4(lVar3,lVar7);
      if ((uVar9 & 1) == 0) {
        if ((*(ushort *)(lVar7 + 0x135) >> 0xc & 1) == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar3 + 0x118) >> 5 & 1) != 0) || (*(char *)(lVar3 + 0x2a) == '\x1e'))
              || (*(char *)(lVar3 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar3 + 0x70) != 0 &&
              (lVar7 = *(long *)(*(long *)(lVar3 + 0x70) + 0x28), lVar7 != 0)))) {
            lVar4 = FUN_0223c3e0(plVar6,lVar7);
            if (lVar4 != 0) {
              return plVar6;
            }
            iVar2 = (*(code *)**(undefined8 **)plVar6[2])
                              ((undefined8 *)plVar6[2],lVar7,&stack0xffffffffffffffd8);
            if (-1 < iVar2) {
              uVar9 = FUN_0223c470(plVar6,lVar7,0);
              lVar4 = 0;
              if ((uVar9 & 1) == 0) {
                (**(code **)(lRam0000000000000000 + 0x10))();
                lVar4 = FUN_0223c3e0(plVar6,lVar7);
              }
              if (lVar4 != 0) {
                return plVar6;
              }
            }
          }
          if (lRam0000000004f61810 != lVar3) {
            plVar6 = (long *)0x0;
          }
        }
      }
    }
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

