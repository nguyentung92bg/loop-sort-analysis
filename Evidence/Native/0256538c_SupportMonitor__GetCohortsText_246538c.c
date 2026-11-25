/* IL2CPP: SupportMonitor$$GetCohortsText
System_String_o* SupportMonitor__GetCohortsText (SupportMonitor_o* __this, System_Text_StringBuilder_o* sb, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SupportMonitor$$GetCohortsText
   System_String_o* SupportMonitor__GetCohortsText (SupportMonitor_o* __this,
   System_Text_StringBuilder_o* sb, const MethodInfo* method); */

void SupportMonitor__GetCohortsText_246538c(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Text_StringBuilder__Clear_2f8ba20(param_2,0);
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = RemoteConfigModule__GetActiveCohortNames_255378c(*(long *)(param_1 + 0x98),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        System_Text_StringBuilder__AppendLine_2f8c724
                  (param_2,*(undefined8 *)(lVar1 + 0x20 + uVar3 * 8),0);
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
                    /* WARNING: Could not recover jumptable at 0x02565420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

