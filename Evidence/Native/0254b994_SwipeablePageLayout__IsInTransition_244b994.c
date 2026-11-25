/* IL2CPP: SwipeablePageLayout$$IsInTransition
bool SwipeablePageLayout__IsInTransition (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$IsInTransition
   bool SwipeablePageLayout__IsInTransition (SwipeablePageLayout_o* __this, const MethodInfo*
   method); */

uint SwipeablePageLayout__IsInTransition_244b994(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar3 = PTR_DAT_049b6110;
  if ((bRam0000000004f4b8a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4b8a7 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if ((bRam0000000004f4bc91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7c50,0);
    FUN_021f03f8(PTR_DAT_049c7c58);
    FUN_021f03f8(PTR_DAT_049c7c60);
    bRam0000000004f4bc91 = 1;
  }
  puVar5 = PTR_DAT_049c7c60;
  puVar4 = PTR_DAT_049c7c58;
  puVar3 = PTR_DAT_049c7c50;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  LitMotion_CompositeMotionHandle__GetEnumerator_2e8b1c8(&uStack_60,lVar10,0);
  do {
    uVar6 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_60,*(undefined8 *)puVar4);
    if ((uVar6 & 1) == 0) break;
    lVar11 = *(long *)puVar5;
    lVar7 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar10 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar10 = FUN_02229718();
      lVar7 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(&uStack_60,
                               *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_40,uVar8,uVar1);
    uVar9 = FUN_025691dc(uStack_40,uStack_38,0);
  } while ((uVar9 & 1) == 0);
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&uStack_60,*(undefined8 *)puVar3);
  return uVar6 & 1;
}

