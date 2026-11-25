/* IL2CPP: AreaOfferSubMonitor$$.cctor
void AreaOfferSubMonitor___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOfferSubMonitor$$.cctor
   void AreaOfferSubMonitor___cctor (const MethodInfo* method); */

void AreaOfferSubMonitor___cctor_246d32c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_049c5488;
  puVar2 = PTR_DAT_049c5480;
  puVar1 = PTR_DAT_049c5458;
  if ((bRam0000000004f4b98b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5458);
    FUN_021f03f8(PTR_DAT_049c5480);
    FUN_021f03f8(PTR_DAT_049c5488);
    bRam0000000004f4b98b = 1;
  }
  uVar4 = FUN_021f04e4(*(undefined8 *)puVar2,4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_302316c
            (uVar4,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

