/* IL2CPP: SwipeablePageLayout$$Activate
void SwipeablePageLayout__Activate (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$Activate
   void SwipeablePageLayout__Activate (SwipeablePageLayout_o* __this, const MethodInfo* method); */

void SwipeablePageLayout__Activate_2449c2c(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  puVar5 = PTR_DAT_049c44f0;
  puVar4 = PTR_DAT_049c44e8;
  puVar3 = PTR_DAT_049c44e0;
  if ((bRam0000000004f4b898 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c44e0);
    FUN_021f03f8(PTR_DAT_049c44f8);
    FUN_021f03f8(PTR_DAT_049c4500);
    FUN_021f03f8(PTR_DAT_049c4508);
    FUN_021f03f8(PTR_DAT_049c44f0);
    FUN_021f03f8(PTR_DAT_049c4510);
    FUN_021f03f8(PTR_DAT_049c3958);
    FUN_021f03f8(PTR_DAT_049c4518);
    FUN_021f03f8(PTR_DAT_049c44e8);
    FUN_021f03f8(PTR_DAT_049c4520);
    FUN_021f03f8(PTR_DAT_049c4528);
    bRam0000000004f4b898 = 1;
  }
  puVar8 = PTR_DAT_049c4528;
  puVar7 = PTR_DAT_049c4520;
  puVar6 = PTR_DAT_049c4518;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Lean_Touch_LeanTouch__add_OnFingerSwipe_2e7cc9c(uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar6,0);
  Lean_Touch_LeanTouch__add_OnFingerDown_2e7b5c4(uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar7,0);
  Lean_Touch_LeanTouch__add_OnFingerUp_2e7a054(uVar9,0);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar9,param_1,*(undefined8 *)puVar8,0);
  Lean_Touch_LeanTouch__add_OnFingerUpdate_2e7e820(uVar9,0);
  puVar6 = PTR_DAT_049c4508;
  puVar5 = PTR_DAT_049c4500;
  puVar4 = PTR_DAT_049c44f8;
  puVar3 = PTR_DAT_049c3958;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0x18),&uStack_78,*(undefined8 *)PTR_DAT_049c4510);
  uStack_50 = uStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while( true ) {
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&uStack_60,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_60,*(undefined8 *)puVar4);
      return;
    }
    lVar14 = *(long *)puVar6;
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar12 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_48,uVar9,uVar1);
    if (CONCAT71(uStack_47,uStack_48) == 0) break;
    uVar9 = System_Object__GetType_3142aac(CONCAT71(uStack_47,uStack_48),0);
    lVar12 = *(long *)puVar3;
    lVar11 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      FUN_021f0574();
      lVar12 = *(long *)puVar3;
    }
    uStack_48 = **(undefined1 **)(lVar12 + 0xb8);
    uVar13 = thunk_FUN_0222c66c(lVar12,&uStack_48);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__Additive_256e54c(lVar11,uVar9,uVar13,0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

