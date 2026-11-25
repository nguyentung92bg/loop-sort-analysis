/* IL2CPP: RankingMonitor$$UpdateLocalPlayerElement
void RankingMonitor__UpdateLocalPlayerElement (RankingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor$$UpdateLocalPlayerElement
   void RankingMonitor__UpdateLocalPlayerElement (RankingMonitor_o* __this, const MethodInfo*
   method); */

void RankingMonitor__UpdateLocalPlayerElement_2457eb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b8fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b8fe = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
  puVar2 = PTR_DAT_049b5480;
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetObject_335184c(param_1,0x21c0801,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  lVar4 = Extensions__GetRectTransform_3f0c498(uVar6,0);
  if (lVar4 != 0) {
    UnityEngine_RectTransform__get_rect_3c2ba98(lVar4,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                        (*(long *)(param_1 + 0x100),0);
      lVar5 = *(long *)puVar1;
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574(lVar5);
      }
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar6,0,0);
      if ((uVar3 & 1) == 0) {
        RankingMonitor__IsLocalPlayerAbove_2458084(param_1);
        if (lVar4 != 0) goto LAB_02558054;
      }
      else if (((*(long *)(param_1 + 0x108) != 0) &&
               (lVar5 = StatefulUI_Runtime_Core_StatefulComponent__get_RectTransform_3349dd0
                                  (*(long *)(param_1 + 0x108),0), lVar5 != 0)) &&
              (UnityEngine_Transform__get_position_3c2d540(lVar5,0), lVar4 != 0)) {
        UnityEngine_Transform__set_position_3c2d61c(lVar4,0);
        UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar4,0);
LAB_02558054:
        UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar4,0);
        if ((bRam0000000004f58960 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26c78,0);
          bRam0000000004f58960 = 1;
        }
        if (lVar4 != 0) {
          lVar5 = *(long *)(lVar4 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
          }
          if (pcRam0000000004f589a8 == (code *)0x0) {
            pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
          }
          (*pcRam0000000004f589a8)(lVar5,&stack0xffffffffffffffe8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

