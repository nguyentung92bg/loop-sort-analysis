/* IL2CPP: CoreStreak$$IsUnlocked
bool CoreStreak__IsUnlocked (CoreStreak_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreak$$IsUnlocked
   bool CoreStreak__IsUnlocked (CoreStreak_o* __this, const MethodInfo* method); */

byte CoreStreak__IsUnlocked_2512e64(long param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    bVar1 = 0;
    if (*(char *)(*(long *)(param_1 + 0x58) + 0x10) != '\0') {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (plVar2 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(param_1 + 0x30),0),
         plVar2 == (long *)0x0)) goto LAB_02612ee0;
      uVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if ((uVar3 & 1) == 0) {
        bVar1 = 0;
      }
      else {
        if (((*(long *)(param_1 + 0x20) == 0) ||
            (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x90), lVar4 == 0)) ||
           (lVar4 = HomeLiveOpsSheet__FindSlot_2560f84(lVar4,0x1b,0), lVar4 == 0))
        goto LAB_02612ee0;
        bVar1 = HomeLiveOpsSheet_Slot__IsLocked_25616a4(lVar4,0);
        bVar1 = bVar1 ^ 1;
      }
    }
    return bVar1 & 1;
  }
LAB_02612ee0:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

