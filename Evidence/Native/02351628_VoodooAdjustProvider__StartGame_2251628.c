/* IL2CPP: VoodooAdjustProvider$$StartGame
void VoodooAdjustProvider__StartGame (int32_t levelNumber, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$StartGame
   void VoodooAdjustProvider__StartGame (int32_t levelNumber, const MethodInfo* method); */

void VoodooAdjustProvider__StartGame_2251628(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49b97 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b97 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  if (lVar3 != 0) {
    uVar4 = AdjustEventSheet__TryGetLevelReachedToken_2556f60(lVar3,param_1,&uStack_28,0);
    uVar2 = uStack_28;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

