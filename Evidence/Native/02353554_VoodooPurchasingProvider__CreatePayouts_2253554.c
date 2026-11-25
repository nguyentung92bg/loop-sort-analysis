/* IL2CPP: VoodooPurchasingProvider$$CreatePayouts
System_Collections_Generic_List_FulfillPayout__o* VoodooPurchasingProvider__CreatePayouts (VoodooPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$CreatePayouts
   System_Collections_Generic_List_FulfillPayout__o* VoodooPurchasingProvider__CreatePayouts
   (VoodooPurchasingProvider_o* __this, PurchaseRequest_o request, const MethodInfo* method); */

long VoodooPurchasingProvider__CreatePayouts_2253554(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_049b5388;
  puVar1 = PTR_DAT_049b5380;
  if ((bRam0000000004f49bad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b60f0);
    FUN_021f03f8(PTR_DAT_049b5388);
    FUN_021f03f8(PTR_DAT_049b5380);
    bRam0000000004f49bad = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar3,*(undefined8 *)puVar2);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar4 = Payouts__Get_2570084(*(long *)(param_1 + 0x10),*param_2,0), puVar1 = PTR_DAT_049b60f0,
     lVar3 != 0)) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (lVar3,uVar4,*(undefined8 *)PTR_DAT_049b60f0);
    if (param_2[7] != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                (lVar3,param_2[7],*(undefined8 *)puVar1);
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

