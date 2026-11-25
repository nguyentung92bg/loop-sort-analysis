/* IL2CPP: RateUsMonitor$$OnActivated
void RateUsMonitor__OnActivated (RateUsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$OnActivated
   void RateUsMonitor__OnActivated (RateUsMonitor_o* __this, const MethodInfo* method); */

void RateUsMonitor__OnActivated_245ae6c(undefined8 param_1)

{
  undefined8 ******ppppppuVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  long *plVar20;
  long alStack_90 [2];
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_54 [4];
  
  MonitorBase__OnActivated_256c9f4(param_1,0);
  StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
  RateUsMonitor__ResetStarRating_245aed4(param_1);
  lVar10 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                     (param_1,0x1b0af5a7,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar16 = **(long **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
  if (*(char *)(lVar10 + 0x30) == '\0') {
    lVar10 = *(long *)(lVar10 + 0x28);
    if (lVar10 != 0) {
      if ((bRam0000000004f5bf23 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a386f8);
        FUN_021f03f8(PTR_DAT_049b8758);
        FUN_021f03f8(PTR_DAT_04a38700);
        FUN_021f03f8(PTR_DAT_049b4790);
        FUN_021f03f8(PTR_DAT_04a0baa0);
        FUN_021f03f8(PTR_DAT_049b47a0);
        FUN_021f03f8(PTR_DAT_049b4500);
        bRam0000000004f5bf23 = 1;
      }
      uVar13 = System_String__op_Equality_2f7b7fc(*(undefined8 *)(lVar10 + 0x180),lVar16,0);
      puVar5 = PTR_DAT_049b4500;
      puVar4 = PTR_DAT_049b3bd0;
      if ((uVar13 & 1) != 0) {
        return;
      }
      lVar17 = *(long *)PTR_DAT_049b4500;
      if (lVar16 != 0) {
        lVar17 = lVar16;
      }
      if (lVar17 != 0) {
        lVar16 = System_String__Replace_2f7fb18
                           (lVar17,*(undefined8 *)PTR_DAT_04a0baa0,
                            **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
        if (*(int *)(lVar10 + 0x128) == 0) {
          if ((lVar16 == 0) ||
             (lVar16 = System_String__Replace_2f7fb18
                                 (lVar16,*(undefined8 *)PTR_DAT_049b4790,*(undefined8 *)puVar5,0),
             lVar16 == 0)) goto LAB_03fc9334;
          lVar16 = System_String__Replace_2f7fb18
                             (lVar16,*(undefined8 *)PTR_DAT_049b47a0,*(undefined8 *)puVar5,0);
        }
        if ((*(long *)(lVar10 + 0x150) == 0) && (*(int *)(lVar10 + 0x130) == 0)) {
          iVar19 = *(int *)(lVar10 + 0x134);
          if (0 < iVar19) {
            if (lVar16 == 0) goto LAB_03fc9334;
            if (iVar19 < *(int *)(lVar16 + 0x10)) {
              lVar16 = System_String__Substring_2f7f570(lVar16,0,iVar19,0);
            }
          }
          *(long *)(lVar10 + 0x180) = lVar16;
          thunk_FUN_021f190c(lVar10 + 0x180,lVar16);
        }
        else {
          *(undefined8 *)(lVar10 + 0x180) = *(undefined8 *)puVar5;
          thunk_FUN_021f190c(lVar10 + 0x180);
          lVar17 = *(long *)(lVar10 + 0x150);
          if (lVar17 == 0) {
            lVar17 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a38700);
            UnityEngine_UI_InputField_OnValidateInput___ctor_3ec9340
                      (lVar17,lVar10,*(undefined8 *)PTR_DAT_04a386f8);
          }
          if (lVar16 == 0) goto LAB_03fc9334;
          iVar19 = *(int *)(lVar10 + 0x134);
          iVar8 = *(int *)(lVar16 + 0x10);
          *(int *)(lVar10 + 0x198) = iVar8;
          *(int *)(lVar10 + 0x194) = iVar8;
          if (0 < iVar19) {
            if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
              FUN_021f0574();
            }
            iVar8 = System_Math__Min_30ff6e8(iVar19,iVar8,0);
          }
          if (0 < iVar8) {
            iVar19 = 0;
            do {
              lVar11 = *(long *)(lVar10 + 0x180);
              if (lVar11 == 0) goto LAB_03fc9334;
              uVar2 = *(undefined4 *)(lVar11 + 0x10);
              uVar9 = System_String__get_Chars_2f7736c(lVar16,iVar19,0);
              if (lVar17 == 0) goto LAB_03fc9334;
              sVar7 = (**(code **)(lVar17 + 0x18))
                                (*(undefined8 *)(lVar17 + 0x40),lVar11,uVar2,uVar9,
                                 *(undefined8 *)(lVar17 + 0x28));
              if (sVar7 != 0) {
                uVar14 = *(undefined8 *)(lVar10 + 0x180);
                if (*(int *)(*(long *)(puVar4 + 0x88) + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar15 = System_Char__ToString_3061a08(auStack_54,0);
                uVar14 = System_String__Concat_2f72b28(uVar14,uVar15,0);
                *(undefined8 *)(lVar10 + 0x180) = uVar14;
                thunk_FUN_021f190c(lVar10 + 0x180,uVar14);
              }
              iVar19 = iVar19 + 1;
            } while (iVar8 != iVar19);
          }
        }
        if (*(long *)(lVar10 + 0x100) != 0) {
          UnityEngine_TouchScreenKeyboard__set_text_3c2a258
                    (*(long *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x180),0);
        }
        if (*(long *)(lVar10 + 0x180) != 0) {
          iVar19 = *(int *)(*(long *)(lVar10 + 0x180) + 0x10);
          if (iVar19 < *(int *)(lVar10 + 0x194)) {
            *(int *)(lVar10 + 0x198) = iVar19;
            *(int *)(lVar10 + 0x194) = iVar19;
          }
          else if (iVar19 < *(int *)(lVar10 + 0x198)) {
            *(int *)(lVar10 + 0x198) = iVar19;
          }
          UnityEngine_UI_InputField__SendOnValueChanged_3ec93f4(lVar10);
          UnityEngine_UI_InputField__UpdateLabel_3ec9474(lVar10);
          return;
        }
      }
LAB_03fc9334:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
LAB_03445f18:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(0,lVar16,0);
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) goto LAB_03445f18;
  if ((bRam0000000004f54de2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a0baa0);
    FUN_021f03f8(PTR_DAT_049b4500);
    bRam0000000004f54de2 = 1;
  }
  uVar13 = System_String__op_Equality_2f7b7fc(*(undefined8 *)(lVar10 + 0x210),lVar16,0);
  if ((uVar13 & 1) != 0) {
    return;
  }
  lVar17 = *(long *)PTR_DAT_049b4500;
  if (lVar16 != 0) {
    lVar17 = lVar16;
  }
  if (lVar17 == 0) {
LAB_03bfe9d0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar14 = System_String__Replace_2f7fb18
                     (lVar17,*(undefined8 *)PTR_DAT_04a0baa0,
                      **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8),0);
  *(undefined8 *)(lVar10 + 0x210) = uVar14;
  thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x210),uVar14);
  if (*(long *)(lVar10 + 0x100) != 0) {
    UnityEngine_TouchScreenKeyboard__set_text_3c2a258
              (*(long *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x210),0);
  }
  if (*(long *)(lVar10 + 0x210) == 0) goto LAB_03bfe9d0;
  iVar19 = *(int *)(*(long *)(lVar10 + 0x210) + 0x10);
  if (iVar19 < *(int *)(lVar10 + 0x224)) {
    *(int *)(lVar10 + 0x228) = iVar19;
    *(int *)(lVar10 + 0x224) = iVar19;
  }
  else if (iVar19 < *(int *)(lVar10 + 0x228)) {
    *(int *)(lVar10 + 0x228) = iVar19;
  }
  *(undefined1 *)(lVar10 + 0x2ec) = 1;
  *(undefined1 *)(lVar10 + 0x29a) = 1;
  TMPro_TMP_InputField__UpdateLabel_3afe9dc(lVar10);
  if ((bRam0000000004f54e13 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049df278);
    bRam0000000004f54e13 = 1;
  }
  lVar16 = *(long *)(lVar10 + 0x1d0);
  if (lVar16 == 0) {
    return;
  }
  pppppuStack_80 = *(undefined8 ******)(lVar10 + 0x210);
  lVar17 = *(long *)PTR_DAT_049df278;
  lVar10 = tpidr_el0;
  lStack_68 = *(long *)(lVar10 + 0x28);
  pppppuStack_78 = pppppuStack_80;
  if ((bRam0000000004f4cb85 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049d1a90);
    FUN_021f03f8(PTR_DAT_049d1a98);
    FUN_021f03f8(PTR_DAT_049d1aa0);
    FUN_021f03f8(PTR_DAT_049b3d18);
    bRam0000000004f4cb85 = 1;
  }
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x40) + 0xfc);
  plVar18 = (long *)((long)alStack_90 - (uVar13 + 0xf & 0x1fffffff0));
  if (lVar16 == 0) {
    lVar10 = *(long *)(lVar10 + 0x28);
  }
  else {
    alStack_90[1] = lVar10;
    lVar10 = UnityEngine_Events_UnityEventBase__PrepareInvoke_3c32890(lVar16,0);
    puVar4 = PTR_DAT_049d1aa0;
    if (lVar10 != 0) {
      if (0 < *(int *)(lVar10 + 0x18)) {
        iVar19 = 0;
        do {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar10,iVar19,&plStack_70,*(undefined8 *)puVar4);
          plVar6 = plStack_70;
          lVar11 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x28);
          if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_02229718();
          }
          if (plVar6 == (long *)0x0) {
LAB_02ae5ac8:
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar10,iVar19,&plStack_70,*(undefined8 *)puVar4);
            if (plStack_70 != (long *)0x0) {
              bVar3 = *(byte *)(*(long *)PTR_DAT_049d1a90 + 0x130);
              if ((bVar3 <= *(byte *)(*plStack_70 + 0x130)) &&
                 (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar3 * 8 + -8) ==
                  *(long *)PTR_DAT_049d1a90)) {
                UnityEngine_Events_InvokableCall__Invoke_3c30dfc(plStack_70,0);
                goto LAB_02ae5bec;
              }
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar10,iVar19,&plStack_70,*(undefined8 *)puVar4);
            plVar6 = plStack_70;
            plVar20 = *(long **)(lVar16 + 0x28);
            if (plVar20 == (long *)0x0) {
              uVar14 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b3d18,1);
              *(undefined8 *)(lVar16 + 0x28) = uVar14;
              thunk_FUN_021f190c(lVar16 + 0x28,uVar14);
              plVar20 = *(long **)(lVar16 + 0x28);
            }
            lVar11 = *(long *)(lVar17 + 0x20);
            ppppppuVar1 = (undefined8 ******)pppppuStack_80;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 0x28)) {
              ppppppuVar1 = &pppppuStack_78;
            }
            func_0x04608620(plVar18,ppppppuVar1,uVar13);
            lVar11 = thunk_FUN_0222c66c(*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x40),plVar18);
            if (plVar20 == (long *)0x0) goto LAB_02ae5ca4;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_0222c938(lVar11,*(undefined8 *)(*plVar20 + 0x40)), lVar12 == 0))
            {
              uVar14 = thunk_FUN_0223a53c();
              if (*(long *)(alStack_90[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f0564(uVar14,0);
              }
              goto LAB_02ae5cfc;
            }
            if ((int)plVar20[3] == 0) {
              if (*(long *)(alStack_90[1] + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a8();
              }
              goto LAB_02ae5cfc;
            }
            plVar20[4] = lVar11;
            thunk_FUN_021f190c(plVar20 + 4,lVar11);
            if (plVar6 == (long *)0x0) goto LAB_02ae5ca4;
            (**(code **)(*plVar6 + 0x178))
                      (plVar6,*(undefined8 *)(lVar16 + 0x28),*(undefined8 *)(*plVar6 + 0x180));
          }
          else {
            if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
               (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
                lVar11)) goto LAB_02ae5ac8;
            lVar11 = *(long *)(lVar17 + 0x20);
            ppppppuVar1 = (undefined8 ******)pppppuStack_80;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 0x28)) {
              ppppppuVar1 = &pppppuStack_78;
            }
            func_0x04608620(plVar18,ppppppuVar1,uVar13);
            plStack_70 = plVar18;
            if (-1 < *(int *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x40) + 0x28)) {
              plStack_70 = (long *)*plVar18;
            }
            lVar11 = *(long *)(*plVar6 + 0x1a0);
            (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8),lVar11,plVar6,&plStack_70);
          }
LAB_02ae5bec:
          iVar19 = iVar19 + 1;
        } while (iVar19 < *(int *)(lVar10 + 0x18));
      }
      if (*(long *)(alStack_90[1] + 0x28) == lStack_68) {
        return;
      }
      goto LAB_02ae5cfc;
    }
LAB_02ae5ca4:
    lVar10 = *(long *)(alStack_90[1] + 0x28);
  }
  if (lVar10 == lStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_02ae5cfc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

