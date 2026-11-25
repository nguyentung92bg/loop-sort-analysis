/* IL2CPP: LoseSystem$$OnCarrierBlockCreateComplete
void LoseSystem__OnCarrierBlockCreateComplete (LoseSystem_o* __this, CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoseSystem$$OnCarrierBlockCreateComplete
   void LoseSystem__OnCarrierBlockCreateComplete (LoseSystem_o* __this,
   CarrierBlockCreateCompleteMessage_o m, const MethodInfo* method); */

void LoseSystem__OnCarrierBlockCreateComplete_24e0af8(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 025e0b08 to 026e0b53 has its CatchHandler @ 025e0db0 */
  *(undefined1 *)(param_1 + 0xe0) = 1;
  auVar1 = UniTimer__CreateFromSeconds_3f0f2f4(*(undefined4 *)(param_1 + 0x114),0);
  *(undefined1 (*) [16])(param_1 + 0x104) = auVar1;
  return;
}

