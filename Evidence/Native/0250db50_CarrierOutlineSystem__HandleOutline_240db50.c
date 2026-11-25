/* IL2CPP: CarrierOutlineSystem$$HandleOutline
Cysharp_Threading_Tasks_UniTaskVoid_o CarrierOutlineSystem__HandleOutline (CarrierOutlineSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CarrierOutlineSystem$$HandleOutline
   Cysharp_Threading_Tasks_UniTaskVoid_o CarrierOutlineSystem__HandleOutline
   (CarrierOutlineSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method); */

undefined8 CarrierOutlineSystem__HandleOutline_240db50(void)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c2a50;
  if ((bRam0000000004f4b702 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2a50);
    bRam0000000004f4b702 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  thunk_FUN_021f190c((ulong)&uStack_40 | 8,0);
  uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_40 | 8,&uStack_40,*(undefined8 *)puVar1);
  return 0;
}

