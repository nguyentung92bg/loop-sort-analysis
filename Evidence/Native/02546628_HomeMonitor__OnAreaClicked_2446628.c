/* IL2CPP: HomeMonitor$$OnAreaClicked
void HomeMonitor__OnAreaClicked (HomeMonitor_o* __this, const MethodInfo* method);
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
/* IL2CPP: HomeMonitor$$OnAreaClicked
   void HomeMonitor__OnAreaClicked (HomeMonitor_o* __this, const MethodInfo* method); */

void HomeMonitor__OnAreaClicked_2446628(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam0000000004f4b869 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4348);
    bRam0000000004f4b869 = 1;
  }
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(long *)(*(long *)(param_1 + 0xd8) + 0xb8) != 0)) {
    uVar1 = SwipeablePageLayout__IsInTransition_244b994();
    if ((uVar1 & 1) != 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0xd8);
    if (lVar2 != 0) {
      lVar3 = *(long *)PTR_DAT_049c4348;
      plVar4 = *(long **)(lVar3 + 0x38);
      if (plVar4 == (long *)0x0) {
        FUN_02229774(lVar3);
        plVar4 = *(long **)(lVar3 + 0x38);
      }
      lVar3 = *plVar4;
      if (*(long *)(lVar3 + 0x38) == 0) {
        FUN_021f03f8(PTR_DAT_049cd7b0);
        FUN_021f03f8(PTR_DAT_049cd7b8);
        FUN_021f03f8(PTR_DAT_049cd7c0);
        FUN_021f03f8(PTR_DAT_049cd7c8);
        FUN_021f03f8(PTR_DAT_049cd7d0);
        if (*(long *)(lVar3 + 0x38) == 0) {
          FUN_02229774(lVar3);
        }
      }
      if (*(long *)(lVar2 + 0xb8) == 0) {
LAB_02741860:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar1 = SwipeablePageLayout__CanTransitionTo_object__26d9dc8
                        (*(long *)(lVar2 + 0xb8),**(undefined8 **)(lVar3 + 0x38));
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar2 + 0xb8) == 0) goto LAB_02741860;
        SwipeablePageLayout__TransitionTo_object__26d9e4c
                  (*(long *)(lVar2 + 0xb8),*(undefined8 *)(*(long *)(lVar3 + 0x38) + 8));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

