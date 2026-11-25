/* IL2CPP: WelcomeBackOffer$$.ctor
void WelcomeBackOffer___ctor (WelcomeBackOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WelcomeBackOffer$$.ctor
   void WelcomeBackOffer___ctor (WelcomeBackOffer_o* __this, const MethodInfo* method); */

undefined1  [16] WelcomeBackOffer___ctor_252db68(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bedf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bedf = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(lVar2 + 0x1e8);
  uVar4 = *(undefined8 *)(lVar2 + 0x200);
  uVar3 = *(undefined8 *)(lVar2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_021f190c(param_1 + 0x48,0);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  return auVar6;
}

