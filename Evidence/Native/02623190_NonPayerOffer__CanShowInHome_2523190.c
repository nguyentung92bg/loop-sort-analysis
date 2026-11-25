/* IL2CPP: NonPayerOffer$$CanShowInHome
bool NonPayerOffer__CanShowInHome (NonPayerOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NonPayerOffer$$CanShowInHome
   bool NonPayerOffer__CanShowInHome (NonPayerOffer_o* __this, const MethodInfo* method); */

byte NonPayerOffer__CanShowInHome_2523190(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4be85 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be85 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0x28) + 0x10) != '\0') {
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      uStack_38 = *(undefined8 *)(lVar4 + 0x68);
      uStack_40 = *(undefined8 *)(lVar4 + 0x60);
      uStack_28 = *(undefined8 *)(lVar4 + 0x78);
      uStack_30 = *(undefined8 *)(lVar4 + 0x70);
      iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02623278;
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x14) <= iVar3) {
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_021f0574();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        uStack_58 = *(undefined8 *)(lVar4 + 0x580);
        uStack_60 = *(undefined8 *)(lVar4 + 0x578);
        uStack_48 = *(undefined8 *)(lVar4 + 0x590);
        uStack_50 = *(undefined8 *)(lVar4 + 0x588);
        iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_60,0);
        if (iVar3 == 0) {
          bVar2 = ProductMetadata__get_IsPurchased_254b044(param_1 + 0x30,0);
          bVar2 = bVar2 ^ 1;
          goto LAB_02623250;
        }
      }
      bVar2 = 0;
    }
LAB_02623250:
    return bVar2 & 1;
  }
LAB_02623278:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

