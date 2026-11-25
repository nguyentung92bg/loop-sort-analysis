/* IL2CPP: SwipeablePageLayout$$OnFingerSwipe
void SwipeablePageLayout__OnFingerSwipe (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SwipeablePageLayout$$OnFingerSwipe
   void SwipeablePageLayout__OnFingerSwipe (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void SwipeablePageLayout__OnFingerSwipe_244c81c
               (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  long *unaff_d9;
  
  if (((*(char *)(param_3 + 0x3c) == '\0') &&
      (uVar2 = SwipeablePageLayout__IsInputBlocked_244c8e4(), (uVar2 & 1) == 0)) &&
     (*(char *)(param_3 + 0x2e) == '\0')) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar4 = (float)Lean_Touch_LeanFinger__get_SwipeScreenDelta_2e84cb0(param_4,0);
    Lean_Touch_LeanFinger__get_SwipeScreenDelta_2e84cb0(param_4,0);
    iVar1 = UnityEngine_Screen__get_width_3bd80bc(0);
    if (((float)iVar1 * _UNK_013aa698 <= ABS(fVar4)) && (ABS(param_2) + ABS(param_2) <= ABS(fVar4)))
    {
      iVar1 = *(int *)(param_3 + 0x28) + -1;
      if (fVar4 <= 0.0) {
        iVar1 = *(int *)(param_3 + 0x28) + 1;
      }
      if ((bRam0000000004f4b89b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c45c8);
        bRam0000000004f4b89b = 1;
      }
      uVar2 = SwipeablePageLayout__CanTransitionTo_244c200(param_3,iVar1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      *(int *)(param_3 + 0x28) = iVar1;
      SwipeablePageLayout__ApplyTransitionMotion_244c26c(param_3,8);
      if (*(long *)(param_3 + 0x18) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (*(long *)(param_3 + 0x18),iVar1,&stack0xffffffffffffffd8,
                   *(undefined8 *)PTR_DAT_049c45c8);
        lVar3 = *(long *)(param_3 + 0x40);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),unaff_d9,*(undefined8 *)(lVar3 + 0x28));
        }
        if (unaff_d9 != (long *)0x0) {
          (**(code **)(*unaff_d9 + 0x248))(unaff_d9,*(undefined8 *)(*unaff_d9 + 0x250));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

