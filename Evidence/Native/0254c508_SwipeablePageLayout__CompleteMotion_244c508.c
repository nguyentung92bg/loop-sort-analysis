/* IL2CPP: SwipeablePageLayout$$CompleteMotion
void SwipeablePageLayout__CompleteMotion (SwipeablePageLayout_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SwipeablePageLayout$$CompleteMotion
   void SwipeablePageLayout__CompleteMotion (SwipeablePageLayout_o* __this, const MethodInfo*
   method); */

void SwipeablePageLayout__CompleteMotion_244c508(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4e566 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049df8c0,0);
    FUN_021f03f8(PTR_DAT_049df8c8);
    FUN_021f03f8(PTR_DAT_049df8d0);
    bRam0000000004f4e566 = 1;
  }
  puVar2 = PTR_DAT_049df8d0;
  puVar1 = PTR_DAT_049df8c0;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar8) {
        lVar5 = *(long *)(*(long *)puVar1 + 0x20);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        uVar6 = FUN_021f1190(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 200));
        if ((uVar6 & 1) == 0) {
          *(undefined4 *)(lVar7 + 0x18) = 0;
        }
        else {
          iVar8 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          if (0 < iVar8) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar7 + 0x10),0,iVar8,0);
          }
        }
        return;
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar7,iVar8,&uStack_50,*(undefined8 *)puVar2);
      uVar4 = uStack_48;
      uVar3 = uStack_50;
      uVar6 = FUN_024f7208(uStack_50,uStack_48,0);
      if ((uVar6 & 1) != 0) {
        FUN_02580cb0(uVar3,uVar4,1,0);
      }
      lVar7 = *(long *)(lVar5 + 0x10);
      iVar8 = iVar8 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

