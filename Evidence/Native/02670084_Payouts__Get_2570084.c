/* IL2CPP: Payouts$$Get
FulfillPayout_array* Payouts__Get (Payouts_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Payouts$$Get
   FulfillPayout_array* Payouts__Get (Payouts_o* __this, System_String_o* productId, const
   MethodInfo* method); */

undefined8 Payouts__Get_2570084(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4c1cc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc128);
    FUN_021f03f8(PTR_DAT_049cc130);
    bRam0000000004f4c1cc = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar4 = &uStack_28;
    uVar1 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),param_2,&uStack_28,*(undefined8 *)PTR_DAT_049cc130)
    ;
    if ((uVar1 & 1) == 0) {
      lVar3 = *(long *)PTR_DAT_049cc128;
      lVar2 = *(long *)(lVar3 + 0x38);
      if (lVar2 == 0) {
        FUN_02229774(lVar3);
        lVar2 = *(long *)(lVar3 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02229718();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02229718();
      }
      puVar4 = *(undefined8 **)(lVar2 + 0xb8);
    }
    return *puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

