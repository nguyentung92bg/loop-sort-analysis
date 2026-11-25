/* IL2CPP: SwipeablePageLayout$$IsInputBlocked
bool SwipeablePageLayout__IsInputBlocked (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwipeablePageLayout$$IsInputBlocked
   bool SwipeablePageLayout__IsInputBlocked (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

bool SwipeablePageLayout__IsInputBlocked_244c8e4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  
  if ((bRam0000000004f4b8a3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c0);
    bRam0000000004f4b8a3 = 1;
  }
  if (*(char *)(param_1 + 0x3d) == '\0') {
    return true;
  }
  if (param_2 != 0) {
    fVar3 = *(float *)(param_2 + 0x40);
    iVar1 = UnityEngine_Screen__get_height_3bd80e4(0);
    fVar3 = fVar3 / (float)iVar1;
    if (fVar3 < _UNK_013aa574) {
      return true;
    }
    if (_UNK_013aa92c < fVar3) {
      return true;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = Monitors__IsRaycasterActive_256ebd8(*(long *)(param_1 + 0x10),0);
      if ((uVar2 & 1) == 0) {
        return true;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar1 = Monitors__GetActiveMonitorCount_256e764(*(long *)(param_1 + 0x10),0);
        if (*(long *)(param_1 + 0x18) != 0) {
          return *(int *)(*(long *)(param_1 + 0x18) + 0x18) + 1 < iVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

