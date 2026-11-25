/* IL2CPP: HomeNavigationMonitor$$TransitionTo<object>
void HomeNavigationMonitor__TransitionTo_object_ (HomeNavigationMonitor_o* __this, const MethodInfo_2641638* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02741728) */
/* WARNING: Removing unreachable block (ram,0x02741730) */
/* WARNING: Removing unreachable block (ram,0x02741740) */
/* WARNING: Removing unreachable block (ram,0x02741774) */
/* WARNING: Removing unreachable block (ram,0x02741784) */
/* WARNING: Removing unreachable block (ram,0x027417b0) */
/* WARNING: Removing unreachable block (ram,0x02741798) */
/* WARNING: Removing unreachable block (ram,0x027417b4) */
/* WARNING: Removing unreachable block (ram,0x027417c4) */
/* WARNING: Removing unreachable block (ram,0x027417c8) */
/* WARNING: Removing unreachable block (ram,0x0274185c) */
/* WARNING: Removing unreachable block (ram,0x02741814) */
/* WARNING: Removing unreachable block (ram,0x02741820) */
/* IL2CPP: HomeNavigationMonitor$$TransitionTo<object>
   void HomeNavigationMonitor__TransitionTo_object_ (HomeNavigationMonitor_o* __this, const
   MethodInfo_2641638* method); */

void HomeNavigationMonitor__TransitionTo_object__2641638(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x38);
  if (plVar3 == (long *)0x0) {
    FUN_02229774(param_2);
    plVar3 = *(long **)(param_2 + 0x38);
  }
  lVar2 = *plVar3;
  if (*(long *)(lVar2 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049cd7b0);
    FUN_021f03f8(PTR_DAT_049cd7b8);
    FUN_021f03f8(PTR_DAT_049cd7c0);
    FUN_021f03f8(PTR_DAT_049cd7c8);
    FUN_021f03f8(PTR_DAT_049cd7d0);
    if (*(long *)(lVar2 + 0x38) == 0) {
      FUN_02229774(lVar2);
    }
  }
  if (*(long *)(param_1 + 0xb8) == 0) {
LAB_02741860:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = SwipeablePageLayout__CanTransitionTo_object__26d9dc8
                    (*(long *)(param_1 + 0xb8),**(undefined8 **)(lVar2 + 0x38));
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xb8) == 0) goto LAB_02741860;
    SwipeablePageLayout__TransitionTo_object__26d9e4c
              (*(long *)(param_1 + 0xb8),*(undefined8 *)(*(long *)(lVar2 + 0x38) + 8));
  }
  return;
}

