/* IL2CPP: LosePopupVariant$$OnCloseClicked
void LosePopupVariant__OnCloseClicked (LosePopupVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0263d418) */
/* WARNING: Removing unreachable block (ram,0x0263d3fc) */
/* WARNING: Removing unreachable block (ram,0x0263d42c) */
/* IL2CPP: LosePopupVariant$$OnCloseClicked
   void LosePopupVariant__OnCloseClicked (LosePopupVariant_o* __this, const MethodInfo* method); */

ulong LosePopupVariant__OnCloseClicked_2491e28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar2 = PTR_DAT_049c5f50;
  puVar1 = PTR_DAT_049b4308;
  if ((bRam0000000004f4ba76 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c5f50);
    FUN_021f03f8(PTR_DAT_049c5f18);
    bRam0000000004f4ba76 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___ctor_306b98c(lVar3,param_1,*(undefined8 *)puVar2,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar5 = *(undefined8 *)PTR_DAT_049c5f18;
  uVar4 = AdsModule__AreInterstitialConditionsMet_253d454();
  if (((uVar4 & 1) != 0) &&
     (uVar4 = AdsModule__CanShowInterstitial_253d654(lVar6), puVar1 = PTR_DAT_049ca438,
     (uVar4 & 1) != 0)) {
    if ((bRam0000000004f4bf95 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049ca438);
      bRam0000000004f4bf95 = 1;
    }
    uStack_50 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    lStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
    lStack_80 = lVar6;
    thunk_FUN_021f190c(&lStack_80,lVar6);
    uStack_70 = uVar5;
    thunk_FUN_021f190c(&uStack_70,uVar5);
    uStack_68 = 0;
    thunk_FUN_021f190c(&uStack_68,0);
    lStack_78 = lVar3;
    thunk_FUN_021f190c(&lStack_78,lVar3);
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
              ((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
    return 0;
  }
  if (lVar3 != 0) {
    uVar4 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
  }
  return uVar4;
}

