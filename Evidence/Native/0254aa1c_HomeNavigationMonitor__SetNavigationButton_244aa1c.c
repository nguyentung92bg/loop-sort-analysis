/* IL2CPP: HomeNavigationMonitor$$SetNavigationButton
void HomeNavigationMonitor__SetNavigationButton (HomeNavigationMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_Events_UnityAction_o* onClicked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor$$SetNavigationButton
   void HomeNavigationMonitor__SetNavigationButton (HomeNavigationMonitor_o* __this,
   StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_Events_UnityAction_o* onClicked,
   const MethodInfo* method); */

void HomeNavigationMonitor__SetNavigationButton_244aa1c
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f4b88b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c3e40);
    bRam0000000004f4b88b = 1;
  }
  if ((*(long *)(param_3 + 200) != 0) &&
     (FUN_02333498(*(long *)(param_3 + 200),param_4,*(undefined8 *)PTR_DAT_049c3e40), param_4 != 0))
  {
    lVar2 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(param_4,0);
    lVar3 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0(param_4,0);
    puVar1 = PTR_DAT_049b5480;
    if (lVar3 != 0) {
      uVar4 = UnityEngine_RectTransform__get_sizeDelta_3c2c02c(lVar3,0);
      uVar5 = *(undefined4 *)(param_3 + 0xc0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Extensions__WithX_3f0d00c(uVar4,param_2,uVar5,0);
      if (lVar2 != 0) {
        UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(lVar2,0);
        lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetButton_3350d50
                          (param_4,0x854128ce,0);
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0x100) != 0)) {
          UnityEngine_Events_UnityEvent__AddListener_3c32a04(*(long *)(lVar2 + 0x100),param_5,0);
          lVar2 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                            (param_4,0x8ac5d12b,0);
          if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
            lVar2 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar2 + 0x38),0);
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a233 = '\x01';
            }
            if (lVar2 != 0) {
              if ((bRam0000000004f58a11 & 1) == 0) {
                FUN_021f03f8(PTR_DAT_04a26ad0,0);
                bRam0000000004f58a11 = 1;
              }
              if (lVar2 != 0) {
                lVar3 = *(long *)(lVar2 + 0x10);
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
                }
                if (pcRam0000000004f58a78 == (code *)0x0) {
                  pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
                }
                (*pcRam0000000004f58a78)(lVar3,&stack0xffffffffffffffd4);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

