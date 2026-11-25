/* IL2CPP: CoreStreakPlayingElement$$OnAnimationEnd
void CoreStreakPlayingElement__OnAnimationEnd (CoreStreakPlayingElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CoreStreakPlayingElement$$OnAnimationEnd
   void CoreStreakPlayingElement__OnAnimationEnd (CoreStreakPlayingElement_o* __this, const
   MethodInfo* method); */

void CoreStreakPlayingElement__OnAnimationEnd_2418d44(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000004f4b749 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2e18);
    bRam0000000004f4b749 = 1;
  }
  lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive_3c1ce34(lVar2,0,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = CoreStreak__IsUnlocked_2512e64(*(long *)(param_1 + 0x28),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar2 = *plVar6;
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_049c2e18) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02518e0c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plVar6,*(long *)PTR_DAT_049c2e18,0);
LAB_02518e0c:
                    /* WARNING: Could not recover jumptable at 0x02518e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(plVar6,uVar1,puVar4[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

