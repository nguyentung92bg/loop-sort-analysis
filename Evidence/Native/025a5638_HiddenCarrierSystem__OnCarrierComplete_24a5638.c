/* IL2CPP: HiddenCarrierSystem$$OnCarrierComplete
void HiddenCarrierSystem__OnCarrierComplete (HiddenCarrierSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenCarrierSystem$$OnCarrierComplete
   void HiddenCarrierSystem__OnCarrierComplete (HiddenCarrierSystem_o* __this,
   CarrierCompleteMessage_o m, const MethodInfo* method); */

void HiddenCarrierSystem__OnCarrierComplete_24a5638(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4bb0c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c66e8);
    FUN_021f03f8(PTR_DAT_049c66f0);
    FUN_021f03f8(PTR_DAT_049c66f8);
    FUN_021f03f8(PTR_DAT_049c6700);
    bRam0000000004f4bb0c = 1;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (lVar4 != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    aplStack_50[0] = (long *)0x0;
    lVar5 = *(long *)PTR_DAT_049c6700;
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar4,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_40 = *puVar1;
    uStack_38 = 0;
    thunk_FUN_021f190c(&uStack_40);
    uStack_38 = 0;
    uStack_58 = 0;
    uStack_60 = uStack_40;
    thunk_FUN_021f190c(&uStack_60,0);
    puVar1 = (undefined8 *)
             thunk_FUN_0224e54c(lVar4,*(long *)(**(long **)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_50[0] = (long *)*puVar1;
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while( true ) {
      do {
        uVar2 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)((long)plStack_70 +
                         (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
        if (lVar4 == 0) goto LAB_025a57c4;
      } while (*(char *)(lVar4 + 0x118) != '\0');
      if (param_2 == 0) break;
      uVar3 = Carrier__GetCompleteColorType_2409e18(param_2,0);
      uVar2 = ColorType__op_Inequality_24f9dbc(*(undefined8 *)(lVar4 + 0x11c),uVar3,0);
      if ((uVar2 & 1) == 0) {
        HiddenCarrier__Reveal_24a52a8(lVar4);
      }
    }
  }
LAB_025a57c4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

