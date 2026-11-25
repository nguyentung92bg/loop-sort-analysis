/* IL2CPP: AreaOffer1$$.ctor
void AreaOffer1___ctor (AreaOffer1_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer1$$.ctor
   void AreaOffer1___ctor (AreaOffer1_o* __this, const MethodInfo* method); */

undefined1  [16] AreaOffer1___ctor_250b4e8(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_049c5440;
                    /* try { // try from 0260b4f4 to 0270b50b has its CatchHandler @ 0260bc08 */
  if ((bRam0000000004f4bdc7 & 1) == 0) {
                    /* try { // try from 0260b50c to 0270b527 has its CatchHandler @ 0260bbbc */
    FUN_021f03f8(PTR_DAT_049c5440);
    bRam0000000004f4bdc7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

