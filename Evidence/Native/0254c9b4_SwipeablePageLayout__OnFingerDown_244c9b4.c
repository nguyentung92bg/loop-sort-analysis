/* IL2CPP: SwipeablePageLayout$$OnFingerDown
void SwipeablePageLayout__OnFingerDown (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o* finger, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$OnFingerDown
   void SwipeablePageLayout__OnFingerDown (SwipeablePageLayout_o* __this, Lean_Touch_LeanFinger_o*
   finger, const MethodInfo* method); */

void SwipeablePageLayout__OnFingerDown_244c9b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uVar4 = SwipeablePageLayout__IsInputBlocked_244c8e4();
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    return;
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x20) != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2e) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar8 = SwipeablePageLayout__GetSlideOffset_244ca38(param_1);
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = uVar8;
    if (lVar5 != 0) {
      if ((bRam0000000004f4e565 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049df8c0,0);
        FUN_021f03f8(PTR_DAT_049df8c8);
        FUN_021f03f8(PTR_DAT_049df8d0);
        bRam0000000004f4e565 = 1;
      }
      puVar2 = PTR_DAT_049df8d0;
      puVar1 = PTR_DAT_049df8c0;
      lVar6 = *(long *)(lVar5 + 0x10);
      if (lVar6 != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar7) {
            lVar5 = *(long *)(*(long *)puVar1 + 0x20);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            uVar4 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 200));
            if ((uVar4 & 1) == 0) {
              *(undefined4 *)(lVar6 + 0x18) = 0;
            }
            else {
              iVar7 = *(int *)(lVar6 + 0x18);
              *(undefined4 *)(lVar6 + 0x18) = 0;
              if (0 < iVar7) {
                System_Array__Clear_31229cc(*(undefined8 *)(lVar6 + 0x10),0,iVar7,0);
              }
            }
            return;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar6,iVar7,&uStack_50,*(undefined8 *)puVar2);
          uVar8 = uStack_48;
          uVar3 = uStack_50;
          uVar4 = FUN_024f7208(uStack_50,uStack_48,0);
          if ((uVar4 & 1) != 0) {
            FUN_024f73c0(uVar3,uVar8,1,0);
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          iVar7 = iVar7 + 1;
        } while (lVar6 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

