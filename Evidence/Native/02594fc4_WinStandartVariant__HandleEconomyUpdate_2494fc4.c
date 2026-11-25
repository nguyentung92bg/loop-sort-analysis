/* IL2CPP: WinStandartVariant$$HandleEconomyUpdate
void WinStandartVariant__HandleEconomyUpdate (WinStandartVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WinStandartVariant$$HandleEconomyUpdate
   void WinStandartVariant__HandleEconomyUpdate (WinStandartVariant_o* __this, const MethodInfo*
   method); */

void WinStandartVariant__HandleEconomyUpdate_2494fc4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_1a8 [80];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam0000000004f4ba97 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c2690);
    FUN_021f03f8(PTR_DAT_049c2c80);
    bRam0000000004f4ba97 = 1;
  }
  puVar7 = PTR_DAT_049c2c80;
  puVar6 = PTR_DAT_049c2690;
  puVar5 = PTR_DAT_049b6350;
  puVar4 = PTR_DAT_049b6348;
  puVar3 = PTR_DAT_049b6330;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if ((*(long *)(param_4 + 0x40) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_4 + 0x40) + 0xa0), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar9,&uStack_148,*(undefined8 *)PTR_DAT_049b6370);
  uStack_80 = uStack_138;
  uStack_88 = puStack_140;
  uStack_90 = uStack_148;
  uStack_148 = 0;
  puStack_140 = &uStack_90;
  do {
    do {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_90,*(undefined8 *)puVar4);
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_90,*(undefined8 *)puVar3);
        return;
      }
      lVar13 = *(long *)puVar5;
      lVar11 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
      lVar9 = lVar11;
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
        lVar11 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_158,uVar12,uVar1);
      iVar8 = (int)uStack_158;
    } while ((int)uStack_158 == 0x32);
    uStack_130 = *(undefined8 *)puVar7;
    uVar1 = uStack_158._4_4_;
    uStack_128 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    thunk_FUN_021f190c(&uStack_130);
    uStack_120 = CONCAT44(uStack_120._4_4_,iVar8);
    uStack_110 = CONCAT44(uVar1,(undefined4)uStack_110);
    func_0x04608620(&uStack_e0,&uStack_130,0x50);
    if (iVar8 == 1) {
      lVar9 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetText_335108c
                        (*(undefined8 *)(param_4 + 200),0x9927ed9b,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar9 = TMPro_TMP_Text__get_transform_3b0c9d0(*(long *)(lVar9 + 0x38),0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_6c = UnityEngine_Transform__get_position_3c2d540(lVar9,0);
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_68 = param_2;
      uStack_64 = param_3;
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (&uStack_158,&uStack_6c,*(undefined8 *)puVar6);
      uStack_a8 = uStack_150;
      uStack_b0 = uStack_158;
      uStack_98 = StatefulUISupport_Scripts_Components_StatefulView__GetInnerComponent_335176c
                            (param_4,0xf6f322b4,0);
      thunk_FUN_021f190c(&uStack_98);
    }
    lVar9 = *(long *)(param_4 + 0x48);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    func_0x04608620(auStack_1a8,&uStack_e0,0x50);
    EconomyModule__Add_25332a4(lVar9,auStack_1a8,0);
  } while( true );
}

