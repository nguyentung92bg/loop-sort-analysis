/* IL2CPP: PurchaseRequest$$.cctor
void PurchaseRequest___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchaseRequest$$.cctor
   void PurchaseRequest___cctor (const MethodInfo* method); */

void PurchaseRequest___cctor_254ad64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar2 = PTR_DAT_049bbb10;
  puVar1 = PTR_DAT_049b44e8;
  if ((bRam0000000004f4c038 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049bbb10);
    FUN_021f03f8(PTR_DAT_049b60c8);
    bRam0000000004f4c038 = 1;
  }
  lVar3 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  Newtonsoft_Json_JsonSerializerSettings___ctor_31b0230(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  puVar1 = PTR_DAT_049b60c8;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x48) = uVar4;
    thunk_FUN_021f190c();
    Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling_31bfaac(lVar3,1,0);
    Newtonsoft_Json_JsonSerializerSettings__set_FloatFormatHandling_31c09d4(lVar3,2,0);
    Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling_31bfb1c(lVar3,0,0);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar3;
    uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

