/* IL2CPP: VoodooSauceProvider$$CompletePurchase
void VoodooSauceProvider__CompletePurchase (VoodooSauceProvider_o* __this, AnalyticsPurchaseEvent_o args, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$CompletePurchase
   void VoodooSauceProvider__CompletePurchase (VoodooSauceProvider_o* __this,
   AnalyticsPurchaseEvent_o args, const MethodInfo* method); */

void VoodooSauceProvider__CompletePurchase_2257628(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_049b6440;
  puVar3 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bc2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b6440);
    bRam0000000004f49bc2 = 1;
  }
  puVar2 = PTR_DAT_049b5310;
  uStack_50 = 0;
  uStack_48 = 0;
  AnalyticsCustomEvent___ctor_253ff58(&uStack_50,*(undefined8 *)puVar4,0);
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  uStack_60 = param_2[6];
  VoodooSauceProvider__SendPurchaseEvent_22574d8(&uStack_90,uStack_50,uStack_48);
  uVar8 = param_2[2];
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar3 = PTR_DAT_049b5f70;
  lVar6 = VoodooSauce__GetProduct_437936c(uVar8,0);
  lVar7 = *(long *)puVar2;
  puVar1 = param_2 + 1;
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + 0x50);
  }
  uVar10 = *(undefined4 *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
    lVar7 = *(long *)puVar2;
  }
  uVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x578,0);
  uVar9 = CloudPrefsFloat__get_Value_24ea234(*(long *)(*(long *)puVar2 + 0xb8) + 0x558,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  VoodooAdjustProvider__CompletePurchase_22516c0(uVar10,uVar9,uVar5);
  return;
}

