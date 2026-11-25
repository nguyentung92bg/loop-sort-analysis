/* IL2CPP: TutorialSystem$$OnLevelTransitionComplete
void TutorialSystem__OnLevelTransitionComplete (TutorialSystem_o* __this, LevelTransitionCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TutorialSystem$$OnLevelTransitionComplete
   void TutorialSystem__OnLevelTransitionComplete (TutorialSystem_o* __this,
   LevelTransitionCompleteMessage_o m, const MethodInfo* method); */

long TutorialSystem__OnLevelTransitionComplete_24e1460(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [4];
  
  puVar1 = PTR_DAT_049c79e0;
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(*(long *)(param_1 + 0x68) + 0x10) != '\0') {
    return param_1;
  }
  if ((bRam0000000004f4bc6a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c79e0);
    bRam0000000004f4bc6a = 1;
  }
  alStack_40[2] = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  alStack_40[1] = 0;
  alStack_40[0] = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  alStack_40[0] = param_1;
  thunk_FUN_021f190c(alStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

