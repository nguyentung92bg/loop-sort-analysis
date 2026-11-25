/* IL2CPP: SwipeablePageLayout$$TransitionTo
void SwipeablePageLayout__TransitionTo (SwipeablePageLayout_o* __this, int32_t idx, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$TransitionTo
   void SwipeablePageLayout__TransitionTo (SwipeablePageLayout_o* __this, int32_t idx, const
   MethodInfo* method); */

void SwipeablePageLayout__TransitionTo_244c140(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plStack_28;
  
  if ((bRam0000000004f4b89b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c45c8);
    bRam0000000004f4b89b = 1;
  }
  uVar1 = SwipeablePageLayout__CanTransitionTo_244c200(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  SwipeablePageLayout__ApplyTransitionMotion_244c26c(param_1,8);
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_1 + 0x18),param_2,&plStack_28,*(undefined8 *)PTR_DAT_049c45c8);
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),plStack_28,*(undefined8 *)(lVar2 + 0x28));
    }
    if (plStack_28 != (long *)0x0) {
      (**(code **)(*plStack_28 + 0x248))(plStack_28,*(undefined8 *)(*plStack_28 + 0x250));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

