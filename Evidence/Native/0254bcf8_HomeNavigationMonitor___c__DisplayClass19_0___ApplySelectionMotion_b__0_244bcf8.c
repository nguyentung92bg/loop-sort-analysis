/* IL2CPP: HomeNavigationMonitor.<>c__DisplayClass19_0$$<ApplySelectionMotion>b__0
void HomeNavigationMonitor___c__DisplayClass19_0___ApplySelectionMotion_b__0 (HomeNavigationMonitor___c__DisplayClass19_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeNavigationMonitor.<>c__DisplayClass19_0$$<ApplySelectionMotion>b__0
   void HomeNavigationMonitor___c__DisplayClass19_0___ApplySelectionMotion_b__0
   (HomeNavigationMonitor___c__DisplayClass19_0_o* __this, float t, const MethodInfo* method); */

void HomeNavigationMonitor___c__DisplayClass19_0___ApplySelectionMotion_b__0_244bcf8
               (float param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f4b895 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4b895 = 1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                             (*(long *)(param_3 + 0x10),0);
    if (*(long *)(param_3 + 0x18) != 0) {
      fVar5 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98
                               (*(long *)(param_3 + 0x18),0);
      puVar1 = PTR_DAT_049b5480;
      lVar2 = *(long *)(param_3 + 0x10);
      if (lVar2 != 0) {
        uVar6 = UnityEngine_RectTransform__get_anchoredPosition_3c2be98(lVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar7 = 1.0;
        if (param_1 <= 1.0) {
          fVar7 = param_1;
        }
        fVar8 = 0.0;
        if (0.0 <= param_1) {
          fVar8 = fVar7;
        }
        Extensions__WithX_3f0d00c(uVar6,param_2,fVar4 + fVar8 * (fVar5 - fVar4),0);
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
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

