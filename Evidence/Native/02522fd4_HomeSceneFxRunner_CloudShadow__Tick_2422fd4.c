/* IL2CPP: HomeSceneFxRunner.CloudShadow$$Tick
void HomeSceneFxRunner_CloudShadow__Tick (HomeSceneFxRunner_CloudShadow_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner.CloudShadow$$Tick
   void HomeSceneFxRunner_CloudShadow__Tick (HomeSceneFxRunner_CloudShadow_o* __this, float t, const
   MethodInfo* method); */

void HomeSceneFxRunner_CloudShadow__Tick_2422fd4(undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fStack_18;
  float fStack_14;
  
  if ((bRam0000000004f4b785 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    bRam0000000004f4b785 = 1;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    fVar5 = *(float *)(lVar2 + 0x9c);
    uVar4 = *(undefined4 *)(lVar2 + 0x50);
    fVar3 = 60.0;
    if (0.0 <= *(float *)(lVar2 + 0x44)) {
      fVar3 = *(float *)(lVar2 + 0x44);
    }
    if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
                    /* try { // try from 02523044 to 0262304f has its CatchHandler @ 02523200 */
      FUN_021f0574();
    }
    fVar3 = (float)HomeSceneView__Phase_24280b4(param_1,uVar4,fVar3,0);
    lVar2 = *(long *)(param_2 + 0x10);
                    /* try { // try from 02523068 to 0262306f has its CatchHandler @ 025231f8 */
    if ((lVar2 != 0) && (lVar1 = *(long *)(param_2 + 0x18), lVar1 != 0)) {
      fStack_14 = -*(float *)(lVar2 + 0x90);
      fStack_18 = fVar5 * fVar3 + *(float *)(lVar2 + 0x8c);
                    /* try { // try from 0252308c to 0262308f has its CatchHandler @ 025231ec */
      if ((bRam0000000004f58960 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26c78,0);
        bRam0000000004f58960 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f589a8 == (code *)0x0) {
          pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
        }
        (*pcRam0000000004f589a8)(lVar2,&fStack_18);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

