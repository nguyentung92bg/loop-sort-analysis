/* IL2CPP: HeadlightBlinkEffect$$OnDisable
void HeadlightBlinkEffect__OnDisable (HeadlightBlinkEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HeadlightBlinkEffect$$OnDisable
   void HeadlightBlinkEffect__OnDisable (HeadlightBlinkEffect_o* __this, const MethodInfo* method);
    */

void HeadlightBlinkEffect__OnDisable_2571b78(long param_1)

{
  undefined8 uVar1;
  
  HeadlightBlinkEffect__Apply_2571b98(0);
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}

