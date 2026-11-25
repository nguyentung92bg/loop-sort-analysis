/* IL2CPP: CarrierVisibilitySystem$$UpdateCarrierVisibility
void CarrierVisibilitySystem__UpdateCarrierVisibility (CarrierVisibilitySystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierVisibilitySystem$$UpdateCarrierVisibility
   void CarrierVisibilitySystem__UpdateCarrierVisibility (CarrierVisibilitySystem_o* __this, const
   MethodInfo* method); */

void CarrierVisibilitySystem__UpdateCarrierVisibility_240e308(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4b70a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b70a = 1;
  }
  puVar1 = PTR_DAT_049b52a8;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_90 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = PlayerPrefsBool__get_Value_3f0e6dc(*(long *)(*(long *)puVar2 + 0xb8) + 0x180,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    uStack_78 = *(undefined8 *)(lVar6 + 0x40);
    uStack_80 = *(undefined8 *)(lVar6 + 0x38);
    uStack_70 = *(undefined8 *)(lVar6 + 0x48);
    lVar6 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                      (&uStack_80,*(undefined8 *)PTR_DAT_049c2788);
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      uStack_60 = 0;
      uStack_58 = 0;
      aplStack_50[0] = (long *)0x0;
      lVar8 = *(long *)PTR_DAT_049c1590;
      puVar5 = (undefined8 *)
               thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80
                                                 ) + 0x60);
      uStack_40 = *puVar5;
      uStack_38 = 0;
      thunk_FUN_021f190c(&uStack_40);
      uStack_38 = 0;
      uStack_58 = 0;
      uStack_60 = uStack_40;
      thunk_FUN_021f190c(&uStack_60,0);
      puVar5 = (undefined8 *)
               thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x80
                                                 ) + 0x80);
      aplStack_50[0] = (long *)*puVar5;
      thunk_FUN_021f190c(aplStack_50);
      uStack_98 = uStack_58;
      uStack_a0 = uStack_60;
      plStack_90 = aplStack_50[0];
      while( true ) {
        uVar4 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_a0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar7 = *(long *)((long)plStack_90 +
                         (ulong)*(uint *)(*plStack_90 + 0x104) * (long)uStack_98._4_4_ + 0x20);
        if ((lVar7 == 0) || (lVar6 == 0)) break;
        uVar3 = CarrierSheet_Row__ContainsCarrier_255af78(lVar6,*(undefined4 *)(lVar7 + 0x130),0);
        lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
        if (lVar7 == 0) break;
        UnityEngine_GameObject__SetActive_3c1ce34(lVar7,uVar3 & 1,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

