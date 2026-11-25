/* IL2CPP: VideoRewards$$CanShowInHome
bool VideoRewards__CanShowInHome (VideoRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$CanShowInHome
   bool VideoRewards__CanShowInHome (VideoRewards_o* __this, const MethodInfo* method); */

bool VideoRewards__CanShowInHome_2529b78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((*(char *)(lVar1 + 0x10) != '\0') && (*(long *)(lVar1 + 0x18) != 0)) {
    return 0 < *(int *)(*(long *)(lVar1 + 0x18) + 0x18);
  }
  return false;
}

