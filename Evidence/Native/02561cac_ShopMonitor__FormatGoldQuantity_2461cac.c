/* IL2CPP: ShopMonitor$$FormatGoldQuantity
System_String_o* ShopMonitor__FormatGoldQuantity (ShopMonitor_o* __this, double quantity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$FormatGoldQuantity
   System_String_o* ShopMonitor__FormatGoldQuantity (ShopMonitor_o* __this, double quantity, const
   MethodInfo* method); */

undefined8 ShopMonitor__FormatGoldQuantity_2461cac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined2 auStack_5c [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_049b44e8;
  uStack_58 = param_1;
  if ((bRam0000000004f4b947 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b44e8);
    FUN_021f03f8(PTR_DAT_049b6188);
    bRam0000000004f4b947 = 1;
  }
  auStack_5c[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture_307b9dc(0);
  lVar4 = System_Double__ToString_30e4fdc(&uStack_58,uVar3,0);
  puVar2 = PTR_DAT_049b6188;
  puVar1 = PTR_DAT_049b3bd0;
  if (lVar4 != 0) {
    uVar3 = **(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar6 = 0;
      iVar7 = -1;
      do {
        auStack_5c[0] = System_String__get_Chars_2f7736c(lVar4,iVar6,0);
        if ((iVar7 + *(int *)(lVar4 + 0x10)) * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
          if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar5 = System_Char__ToString_3061a08(auStack_5c,0);
          uVar3 = System_String__Concat_2f7d424(uVar3,uVar5,*(undefined8 *)puVar2,0);
        }
        else {
          if (*(int *)(*(long *)(puVar1 + 0x88) + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar5 = System_Char__ToString_3061a08(auStack_5c,0);
          uVar3 = System_String__Concat_2f72b28(uVar3,uVar5,0);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar6 < *(int *)(lVar4 + 0x10));
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

