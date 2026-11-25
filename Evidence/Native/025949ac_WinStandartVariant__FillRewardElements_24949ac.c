/* IL2CPP: WinStandartVariant$$FillRewardElements
void WinStandartVariant__FillRewardElements (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$FillRewardElements
   void WinStandartVariant__FillRewardElements (WinStandartVariant_o* __this, const MethodInfo*
   method); */

void WinStandartVariant__FillRewardElements_24949ac(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4ba91 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    bRam0000000004f4ba91 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar6 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x78d4e5eb,0);
  if (lVar6 != 0) {
    StatefulUI_Runtime_Core_ContainerView__Clear_3347548(lVar6,0);
    puVar5 = PTR_DAT_049b6350;
    puVar4 = PTR_DAT_049b6348;
    puVar3 = PTR_DAT_049b6330;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0xa0), lVar7 != 0)) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (lVar7,&uStack_58,*(undefined8 *)PTR_DAT_049b6370);
      while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                               (&uStack_58,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
        lVar12 = *(long *)puVar5;
        lVar9 = *(long *)(lVar12 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar7 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
          lVar9 = *(long *)(lVar12 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&uStack_58,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&uStack_38,uVar10,uVar1);
        uVar10 = uStack_38;
        uVar11 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar6,0);
        WinStandartVariant__CreateRewardElement_2494b9c(param_1,uVar11,uVar10);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_58,*(undefined8 *)puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

