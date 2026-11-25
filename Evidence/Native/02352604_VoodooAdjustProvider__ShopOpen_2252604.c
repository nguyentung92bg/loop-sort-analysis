/* IL2CPP: VoodooAdjustProvider$$ShopOpen
void VoodooAdjustProvider__ShopOpen (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooAdjustProvider$$ShopOpen
   void VoodooAdjustProvider__ShopOpen (const MethodInfo* method); */

void VoodooAdjustProvider__ShopOpen_2252604(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5f70;
  if ((bRam0000000004f49b9d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5f70);
    bRam0000000004f49b9d = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar5 = VoodooAdjustProvider__GetAdjustEvents_2251388();
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  iVar3 = CloudPrefsInt__get_Value_24e99c0(lVar7 + 0x48,0);
  CloudPrefsInt__set_Value_24e9a2c(lVar7 + 0x48,iVar3 + 1,0);
  lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
  uStack_48 = *(undefined8 *)(lVar7 + 0x50);
  uStack_50 = *(undefined8 *)(lVar7 + 0x48);
  uStack_38 = *(undefined8 *)(lVar7 + 0x60);
  uStack_40 = *(undefined8 *)(lVar7 + 0x58);
  uVar4 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_50,0);
  if (lVar5 != 0) {
    uVar6 = AdjustEventSheet__TryGetShopOpensToken_25572d8(lVar5,uVar4,&uStack_28,0);
    uVar2 = uStack_28;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      VoodooAdjustProvider__TrackEventIfNotTracked_225153c(uVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

