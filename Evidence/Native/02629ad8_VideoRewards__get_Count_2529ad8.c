/* IL2CPP: VideoRewards$$get_Count
int32_t VideoRewards__get_Count (VideoRewards_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$get_Count
   int32_t VideoRewards__get_Count (VideoRewards_o* __this, const MethodInfo* method); */

undefined4 VideoRewards__get_Count_2529ad8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
  return 0;
}

