/* IL2CPP: WinStandartVariant$$<OnRVClicked>b__28_0
void WinStandartVariant___OnRVClicked_b__28_0 (WinStandartVariant_o* __this, bool watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$<OnRVClicked>b__28_0
   void WinStandartVariant___OnRVClicked_b__28_0 (WinStandartVariant_o* __this, bool watched, const
   MethodInfo* method); */

void WinStandartVariant___OnRVClicked_b__28_0_2495454(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uStack_38;
  
  if ((bRam0000000004f4ba9a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3be0);
    FUN_021f03f8(PTR_DAT_049c4b70);
    FUN_021f03f8(PTR_DAT_049c6018);
    bRam0000000004f4ba9a = 1;
  }
  puVar1 = PTR_DAT_049c4b70;
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0xa0), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar3 + 0x98);
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar6 = 0;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (lVar4,iVar6,&uStack_38,*(undefined8 *)puVar1);
        if ((int)uStack_38 == 1) {
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_02595594;
          uStack_38 = (ulong)(uint)(*(int *)(*(long *)(param_1 + 0xd8) + 0x14) *
                                   (int)(uStack_38 >> 0x20)) << 0x20 | 1;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                    (lVar4,iVar6,&uStack_38,*(undefined8 *)PTR_DAT_049c6018);
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0x18));
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      WinMonitor__SetResults_24693b8(*(long *)(param_1 + 0x40),uVar5,lVar4,0);
      WinStandartVariant__FillRewardElements_24949ac(param_1);
      uStack_38 = uStack_38 & 0xffffffffffffff00;
      uVar2 = WinStandartVariant__HandleContinueClickAsync_2494d9c(param_1);
      uStack_38 = CONCAT71(uStack_38._1_7_,uVar2);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(&uStack_38,0);
      return;
    }
  }
LAB_02595594:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

