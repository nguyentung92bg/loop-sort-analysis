/* IL2CPP: AreaOffer$$get_ProductId
System_String_o* AreaOffer__get_ProductId (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$get_ProductId
   System_String_o* AreaOffer__get_ProductId (AreaOffer_o* __this, const MethodInfo* method); */

undefined8 AreaOffer__get_ProductId_2509624(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049c5440;
  if ((bRam0000000004f4bdb5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    bRam0000000004f4bdb5 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  iVar2 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if (lVar3 != 0) {
    if (iVar2 - 0x1eU < *(uint *)(lVar3 + 0x18)) {
      return *(undefined8 *)(lVar3 + (long)(int)(iVar2 - 0x1eU) * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

