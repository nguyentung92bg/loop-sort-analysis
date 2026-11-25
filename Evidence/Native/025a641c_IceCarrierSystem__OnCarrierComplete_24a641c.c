/* IL2CPP: IceCarrierSystem$$OnCarrierComplete
void IceCarrierSystem__OnCarrierComplete (IceCarrierSystem_o* __this, CarrierCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: IceCarrierSystem$$OnCarrierComplete
   void IceCarrierSystem__OnCarrierComplete (IceCarrierSystem_o* __this, CarrierCompleteMessage_o m,
   const MethodInfo* method); */

void IceCarrierSystem__OnCarrierComplete_24a641c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  ulong uStack_60;
  undefined8 uStack_58;
  long *aplStack_50 [2];
  ulong auStack_40 [2];
  
  if ((bRam0000000004f4bb18 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6760);
    FUN_021f03f8(PTR_DAT_049c6768);
    FUN_021f03f8(PTR_DAT_049c6770);
    FUN_021f03f8(PTR_DAT_049c6778);
    bRam0000000004f4bb18 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  if (lVar5 != 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    aplStack_50[0] = (long *)0x0;
    lVar6 = *(long *)PTR_DAT_049c6778;
    puVar2 = (ulong *)thunk_FUN_0224e54c(lVar5,*(long *)(**(long **)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                        + 0x80) + 0x60);
    auStack_40[0] = *puVar2;
    auStack_40[1] = 0;
    thunk_FUN_021f190c(auStack_40);
    auStack_40[1] = 0;
    uStack_58 = 0;
    uStack_60 = auStack_40[0];
    thunk_FUN_021f190c(&uStack_60,0);
    puVar3 = (undefined8 *)
             thunk_FUN_0224e54c(lVar5,*(long *)(**(long **)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_50[0] = (long *)*puVar3;
    thunk_FUN_021f190c(aplStack_50);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    plStack_70 = aplStack_50[0];
    while( true ) {
      uVar4 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_80,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)((long)plStack_70 +
                       (ulong)*(uint *)(*plStack_70 + 0x104) * (long)uStack_78._4_4_ + 0x20);
      if (lVar5 == 0) break;
      if ((*(char *)(lVar5 + 0xc0) == '\0') &&
         (uVar4 = IceCarrier__MatchesRequiredCarrierType_24a5b14(lVar5,param_2), (uVar4 & 1) != 0))
      {
        uStack_60 = uStack_60 & 0xffffffffffffff00;
        uVar1 = IceCarrier__BreakDelay_24a5a84(lVar5);
        uStack_60 = CONCAT71(uStack_60._1_7_,uVar1);
        Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(&uStack_60,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

