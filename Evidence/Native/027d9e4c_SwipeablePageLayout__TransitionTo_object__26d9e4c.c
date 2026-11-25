/* IL2CPP: SwipeablePageLayout$$TransitionTo<object>
void SwipeablePageLayout__TransitionTo_object_ (SwipeablePageLayout_o* __this, const MethodInfo_26D9E4C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$TransitionTo<object>
   void SwipeablePageLayout__TransitionTo_object_ (SwipeablePageLayout_o* __this, const
   MethodInfo_26D9E4C* method); */

void SwipeablePageLayout__TransitionTo_object__26d9e4c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_28;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02229774(param_2);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = Monitors__Get_object__26889d0(*(long *)(param_1 + 0x10),**(undefined8 **)(param_2 + 0x38))
  ;
  if ((bRam0000000004f4b89c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4620,uVar3,0);
    bRam0000000004f4b89c = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                      (*(long *)(param_1 + 0x18),uVar3,*(undefined8 *)PTR_DAT_049c4620);
    if ((bRam0000000004f4b89b & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c45c8);
      bRam0000000004f4b89b = 1;
    }
    uVar2 = SwipeablePageLayout__CanTransitionTo_244c200(param_1,uVar1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    SwipeablePageLayout__ApplyTransitionMotion_244c26c(param_1,8);
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (*(long *)(param_1 + 0x18),uVar1,&plStack_28,*(undefined8 *)PTR_DAT_049c45c8);
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),plStack_28,*(undefined8 *)(lVar4 + 0x28));
      }
      if (plStack_28 != (long *)0x0) {
        (**(code **)(*plStack_28 + 0x248))(plStack_28,*(undefined8 *)(*plStack_28 + 0x250));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

