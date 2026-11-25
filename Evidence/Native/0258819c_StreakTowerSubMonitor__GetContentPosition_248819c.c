/* IL2CPP: StreakTowerSubMonitor$$GetContentPosition
UnityEngine_Vector2_o StreakTowerSubMonitor__GetContentPosition (StreakTowerSubMonitor_o* __this, UnityEngine_Transform_o* targetT, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$GetContentPosition
   UnityEngine_Vector2_o StreakTowerSubMonitor__GetContentPosition (StreakTowerSubMonitor_o* __this,
   UnityEngine_Transform_o* targetT, const MethodInfo* method); */

undefined8 StreakTowerSubMonitor__GetContentPosition_248819c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000004f4ba3b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4ba3b = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar2 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x78),0);
    if (((*(long *)(param_1 + 0x78) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar3 != 0)) &&
       (UnityEngine_Transform__get_position_3c2d540(lVar3,0), lVar2 != 0)) {
      UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar2,0);
      if (((*(long *)(param_1 + 0x78) != 0) &&
          (lVar2 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_1 + 0x78),0),
          param_2 != 0)) && (UnityEngine_Transform__get_position_3c2d540(param_2,0), lVar2 != 0)) {
        UnityEngine_Transform__InverseTransformPoint_3c2ed70(lVar2,0);
        if (cRam0000000004f4a196 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8a18);
          cRam0000000004f4a196 = '\x01';
        }
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar2 = MonitorBase__get_RectTransform_256c3fc(*(long *)(param_1 + 0x50),0), lVar2 != 0)
           ) {
          UnityEngine_RectTransform__get_rect_3c2ba98(lVar2,0);
          if ((*(long *)(param_1 + 0x78) != 0) &&
             (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar2 != 0)) {
            UnityEngine_RectTransform__get_rect_3c2ba98(lVar2,0);
            puVar1 = PTR_DAT_049b5480;
            if ((*(long *)(param_1 + 0x78) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar2 != 0)) {
              UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar2,0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              return 0;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

