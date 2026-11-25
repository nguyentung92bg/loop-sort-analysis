/* IL2CPP: NakamaGiftsProvider.GrantHandler$$GrantItemsAsync
System_Threading_Tasks_Task_o* NakamaGiftsProvider_GrantHandler__GrantItemsAsync (NakamaGiftsProvider_GrantHandler_o* __this, Voodoo_Nakama_Gifts_Client_Models_Gift_o* gift, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaGiftsProvider.GrantHandler$$GrantItemsAsync
   System_Threading_Tasks_Task_o* NakamaGiftsProvider_GrantHandler__GrantItemsAsync
   (NakamaGiftsProvider_GrantHandler_o* __this, Voodoo_Nakama_Gifts_Client_Models_Gift_o* gift,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined8 NakamaGiftsProvider_GrantHandler__GrantItemsAsync_224a208(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f49b64 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b59b0);
    FUN_021f03f8(PTR_DAT_049b4fe8);
    bRam0000000004f49b64 = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
                    /* catch() { ... } // from try @ 0234a1e8 with catch @ 0234a26c */
                    /* catch() { ... } // from try @ 0234a184 with catch @ 0234a270 */
    uVar2 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),&uStack_38,
                       *(undefined8 *)PTR_DAT_049b59b0);
                    /* catch() { ... } // from try @ 0234a118 with catch @ 0234a274 */
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_0234a308;
      uStack_48 = uStack_30;
      uStack_50 = uStack_38;
      uStack_40 = uStack_28;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),&uStack_50,*(undefined8 *)(lVar3 + 0x28));
    }
    puVar1 = PTR_DAT_049b4fe8;
    if (*(int *)(*(long *)PTR_DAT_049b4fe8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bfe == '\0') {
      FUN_021f03f8(PTR_DAT_049b4fe8);
      cRam0000000004f49bfe = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
      lVar3 = *(long *)puVar1;
    }
    return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
  }
LAB_0234a308:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

