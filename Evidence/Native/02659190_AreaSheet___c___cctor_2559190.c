/* IL2CPP: AreaSheet.<>c$$.cctor
void AreaSheet___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.<>c$$.cctor
   void AreaSheet___c___cctor (const MethodInfo* method); */

void AreaSheet___c___cctor_2559190(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049cb300;
                    /* try { // try from 026591a0 to 027591a7 has its CatchHandler @ 02659428 */
  if ((bRam0000000004f4c0c9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb300);
    bRam0000000004f4c0c9 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 026591cc to 027591d3 has its CatchHandler @ 02659424 */
  System_Object___ctor_3142338(uVar2,0);
                    /* try { // try from 026591d8 to 027591df has its CatchHandler @ 02659420 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 026591f0 to 027591f7 has its CatchHandler @ 026593fc */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

