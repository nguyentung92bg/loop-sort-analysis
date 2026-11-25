/* IL2CPP: SwipeablePageLayout$$.ctor
void SwipeablePageLayout___ctor (SwipeablePageLayout_o* __this, Monitors_o* monitors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$.ctor
   void SwipeablePageLayout___ctor (SwipeablePageLayout_o* __this, Monitors_o* monitors, const
   MethodInfo* method); */

void SwipeablePageLayout___ctor_244abb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_049c4588;
  puVar2 = PTR_DAT_049c4580;
  puVar1 = PTR_DAT_049c16a0;
  if ((bRam0000000004f4b897 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c16a0);
    FUN_021f03f8(PTR_DAT_049c4588);
    FUN_021f03f8(PTR_DAT_049c4580);
    bRam0000000004f4b897 = 1;
  }
  System_Object___ctor_3142338(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x10),param_2);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (uVar4,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar4);
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  LitMotion_CompositeMotionHandle___ctor_2e8ad94(uVar4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x20),uVar4);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}

