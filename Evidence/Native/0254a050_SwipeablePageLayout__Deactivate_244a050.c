/* IL2CPP: SwipeablePageLayout$$Deactivate
void SwipeablePageLayout__Deactivate (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$Deactivate
   void SwipeablePageLayout__Deactivate (SwipeablePageLayout_o* __this, const MethodInfo* method);
    */

void SwipeablePageLayout__Deactivate_244a050(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_049c44f0;
  puVar2 = PTR_DAT_049c44e8;
  puVar1 = PTR_DAT_049c44e0;
  if ((bRam0000000004f4b899 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44e0);
    FUN_021f03f8(PTR_DAT_049c44f0);
    FUN_021f03f8(PTR_DAT_049c4518);
    FUN_021f03f8(PTR_DAT_049c44e8);
    FUN_021f03f8(PTR_DAT_049c4520);
    FUN_021f03f8(PTR_DAT_049c4528);
    bRam0000000004f4b899 = 1;
  }
  puVar6 = PTR_DAT_049c4528;
  puVar5 = PTR_DAT_049c4520;
  puVar4 = PTR_DAT_049c4518;
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Lean_Touch_LeanTouch__remove_OnFingerSwipe_2e7ce30(uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar4,0);
  Lean_Touch_LeanTouch__remove_OnFingerDown_2e7b748(uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar5,0);
  Lean_Touch_LeanTouch__remove_OnFingerUp_2e7a1d8(uVar7,0);
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar7,param_1,*(undefined8 *)puVar6,0);
  Lean_Touch_LeanTouch__remove_OnFingerUpdate_2e7e9b4(uVar7,0);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}

