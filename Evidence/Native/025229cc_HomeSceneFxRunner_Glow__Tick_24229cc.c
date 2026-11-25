/* IL2CPP: HomeSceneFxRunner.Glow$$Tick
void HomeSceneFxRunner_Glow__Tick (HomeSceneFxRunner_Glow_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Glow$$Tick
   void HomeSceneFxRunner_Glow__Tick (HomeSceneFxRunner_Glow_o* __this, float t, const MethodInfo*
   method); */

void HomeSceneFxRunner_Glow__Tick_24229cc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f4b77d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b77d = 1;
  }
  puVar1 = PTR_DAT_049c3110;
  if (*(long *)(param_2 + 0x10) != 0) {
    fVar5 = *(float *)(*(long *)(param_2 + 0x10) + 0x44);
    lVar2 = *(long *)PTR_DAT_049c3110;
    fVar6 = 4.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      lVar2 = *(long *)puVar1;
    }
    fVar6 = (float)HomeSceneView__Alternate_24280f0
                             (param_1,0,fVar6,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10),0);
    lVar2 = *(long *)(param_2 + 0x10);
    if ((lVar2 != 0) && (plVar3 = *(long **)(param_2 + 0x18), plVar3 != (long *)0x0)) {
      fVar5 = 1.0;
      if (fVar6 <= 1.0) {
        fVar5 = fVar6;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar5;
      }
      (**(code **)(*plVar3 + 0x2a8))
                (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                 *(undefined4 *)(param_2 + 0x28),
                 *(float *)(param_2 + 0x2c) *
                 (*(float *)(lVar2 + 0x3c) +
                 fVar7 * (*(float *)(lVar2 + 0x40) - *(float *)(lVar2 + 0x3c))),plVar3,
                 *(undefined8 *)(*plVar3 + 0x2b0));
      if ((*(long *)(param_2 + 0x18) != 0) &&
         (lVar2 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(*(long *)(param_2 + 0x18),0),
         lVar2 != 0)) {
        if ((bRam0000000004f58a11 & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a11 = 1;
        }
        if (lVar2 != 0) {
          lVar4 = *(long *)(lVar2 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
          }
          if (pcRam0000000004f58a78 == (code *)0x0) {
            pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
          }
          (*pcRam0000000004f58a78)(lVar4,&stack0xffffffffffffffd4);
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

