/* IL2CPP: AreaOffer$$get_Area
int32_t AreaOffer__get_Area (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$get_Area
   int32_t AreaOffer__get_Area (AreaOffer_o* __this, const MethodInfo* method); */

undefined4 AreaOffer__get_Area_25096b8(undefined8 param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_049c8fe0;
  if ((bRam0000000004f4bdb6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8fe0);
    bRam0000000004f4bdb6 = 1;
  }
  uStack_30 = 0;
  uStack_30 = AreaOffer__OfferArea_2509788(param_1);
  lVar7 = *(long *)puVar3;
  lVar5 = *(long *)(lVar7 + 0x20);
  uVar2 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02229718(lVar5);
    lVar6 = *(long *)(lVar7 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  uVar1 = *(undefined4 *)(**(long **)(lVar5 + 0xc0) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_02229718(lVar6);
  }
  uVar4 = thunk_FUN_0224e54c(&uStack_30,
                             *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 8) + 0x80) + 0x20);
  func_0x04608620(&uStack_24,uVar4,uVar1);
  return uStack_24;
}

