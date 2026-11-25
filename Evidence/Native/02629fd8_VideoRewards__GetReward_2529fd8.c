/* IL2CPP: VideoRewards$$GetReward
int32_t VideoRewards__GetReward (VideoRewards_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VideoRewards$$GetReward
   int32_t VideoRewards__GetReward (VideoRewards_o* __this, int32_t index, const MethodInfo*
   method); */

undefined4 VideoRewards__GetReward_2529fd8(long param_1,uint param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar1 != 0)) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

