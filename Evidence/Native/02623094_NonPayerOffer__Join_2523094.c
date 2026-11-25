/* IL2CPP: NonPayerOffer$$Join
void NonPayerOffer__Join (NonPayerOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NonPayerOffer$$Join
   void NonPayerOffer__Join (NonPayerOffer_o* __this, const MethodInfo* method); */

void NonPayerOffer__Join_2523094(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be83 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be83 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049b52a8;
  lVar2 = *(long *)(lVar2 + 0xb8);
  if ((bRam0000000004f4bccb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8,0,0);
    bRam0000000004f4bccb = 1;
  }
  uStack_38 = *(undefined8 *)(lVar2 + 0x7b8);
  uStack_40 = *(undefined8 *)(lVar2 + 0x7b0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsBool__Set_3f0e92c(&uStack_40,0,0);
  return;
}

