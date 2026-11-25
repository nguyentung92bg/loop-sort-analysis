/* IL2CPP: ReviveMultiplePageVariant$$OnFailOfferPurchase
void ReviveMultiplePageVariant__OnFailOfferPurchase (ReviveMultiplePageVariant_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ReviveMultiplePageVariant$$OnFailOfferPurchase
   void ReviveMultiplePageVariant__OnFailOfferPurchase (ReviveMultiplePageVariant_o* __this,
   FulfillPurchaseMessage_o m, const MethodInfo* method); */

void ReviveMultiplePageVariant__OnFailOfferPurchase_2492f18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c5fa8;
  if ((bRam0000000004f4ba81 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4650);
    FUN_021f03f8(PTR_DAT_049c48b0);
    FUN_021f03f8(PTR_DAT_049c5fa8);
    bRam0000000004f4ba81 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar5 = DataFlags__Contains_24fb124(param_1 + 0x88,*(undefined8 *)puVar1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0xd0);
  plVar9 = *(long **)(param_1 + 0x90);
  uStack_50 = 0;
  uStack_48 = 0;
  thunk_FUN_021f190c(&uStack_58);
  uVar4 = uStack_48;
  uVar2 = uStack_58;
  uStack_50 = CONCAT44(*(undefined4 *)(param_1 + 200),(undefined4)uStack_50);
  uVar3 = uStack_50;
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c48b0) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0259300c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c48b0,0);
LAB_0259300c:
    uStack_38 = uVar3;
    uStack_40 = uVar2;
    uStack_30 = uVar4;
    (*(code *)*puVar6)(plVar9,&uStack_40,puVar6[1]);
    if (*(long *)(param_1 + 0x48) != 0) {
      GameMachine__RequestStateChange_object__261a650
                (*(long *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_049c4650);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

