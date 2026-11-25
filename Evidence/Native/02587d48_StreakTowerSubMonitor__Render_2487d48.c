/* IL2CPP: StreakTowerSubMonitor$$Render
void StreakTowerSubMonitor__Render (StreakTowerSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$Render
   void StreakTowerSubMonitor__Render (StreakTowerSubMonitor_o* __this, const MethodInfo* method);
    */

void StreakTowerSubMonitor__Render_2487d48
               (undefined1 param_1 [16],undefined4 param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((bRam0000000004f4ba34 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4ba34 = 1;
  }
  if (*(long *)(param_5 + 0x78) != 0) {
    fVar4 = (float)UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition_3ee1838
                             (*(long *)(param_5 + 0x78),0);
    if ((*(long *)(param_5 + 0x50) != 0) &&
       (lVar2 = MonitorBase__get_RectTransform_256c3fc(*(long *)(param_5 + 0x50),0), lVar2 != 0)) {
      UnityEngine_RectTransform__get_rect_3c2ba98(lVar2,0);
      if (*(long *)(param_5 + 0x80) != 0) {
        fVar6 = param_4;
        UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x80),0);
        puVar1 = PTR_DAT_049b5480;
        lVar2 = *(long *)(param_5 + 0x80);
        if (lVar2 != 0) {
          uVar5 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar2,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__WithY_3f0d014(uVar5,param_2,-((fVar6 - param_4) * fVar4),0);
          if ((bRam0000000004f58960 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26c78,0);
            bRam0000000004f58960 = 1;
          }
          if (lVar2 != 0) {
            lVar3 = *(long *)(lVar2 + 0x10);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
            }
            if (pcRam0000000004f589a8 == (code *)0x0) {
              pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
            }
            (*pcRam0000000004f589a8)(lVar3,&stack0xffffffffffffffe8);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

