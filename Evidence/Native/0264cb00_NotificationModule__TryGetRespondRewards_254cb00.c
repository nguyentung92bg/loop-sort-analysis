/* IL2CPP: NotificationModule$$TryGetRespondRewards
bool NotificationModule__TryGetRespondRewards (NotificationModule_o* __this, System_Collections_Generic_List_NotificationModule_RespondRewardArgs__o** respondRewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationModule$$TryGetRespondRewards
   bool NotificationModule__TryGetRespondRewards (NotificationModule_o* __this,
   System_Collections_Generic_List_NotificationModule_RespondRewardArgs__o** respondRewards, const
   MethodInfo* method); */

bool NotificationModule__TryGetRespondRewards_254cb00(long param_1,undefined8 *param_2)

{
  bool bVar1;
  
  if ((bRam0000000004f4c054 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa80);
    bRam0000000004f4c054 = 1;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xf0);
  thunk_FUN_021f190c(param_2);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar1 = *(int *)(*(long *)(param_1 + 0xf0) + 0x18) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

