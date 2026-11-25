/* IL2CPP: AreaSheet.Row.<>c$$.cctor
void AreaSheet_Row___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaSheet.Row.<>c$$.cctor
   void AreaSheet_Row___c___cctor (const MethodInfo* method); */

void AreaSheet_Row___c___cctor_2558e30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049cb390;
                    /* try { // try from 02658e38 to 02758e43 has its CatchHandler @ 02659460 */
  if ((bRam0000000004f4c0c5 & 1) == 0) {
                    /* try { // try from 02658e4c to 02758e63 has its CatchHandler @ 026594e0 */
    FUN_021f03f8(PTR_DAT_049cb390);
    bRam0000000004f4c0c5 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 02658e88 to 02758eab has its CatchHandler @ 026594d0 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

