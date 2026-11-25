/* IL2CPP: VoodooPurchasingProvider$$GetStatus
int32_t VoodooPurchasingProvider__GetStatus (VoodooPurchasingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$GetStatus
   int32_t VoodooPurchasingProvider__GetStatus (VoodooPurchasingProvider_o* __this, const
   MethodInfo* method); */

undefined4 VoodooPurchasingProvider__GetStatus_2252d50(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49ba6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49ba6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar2 = VoodooSauce__GetIAPStatus_4378b44(0);
  if (lVar2 != 0) {
    uVar3 = 1;
    if (*(int *)(lVar2 + 0x10) != 4) {
      uVar3 = 2;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

