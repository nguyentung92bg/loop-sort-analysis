/* IL2CPP: InteractionModule$$SetTouchInterceptor
void InteractionModule__SetTouchInterceptor (InteractionModule_o* __this, ITouchInterceptor_o* blocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$SetTouchInterceptor
   void InteractionModule__SetTouchInterceptor (InteractionModule_o* __this, ITouchInterceptor_o*
   blocker, const MethodInfo* method); */

void InteractionModule__SetTouchInterceptor_2535e7c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *puVar1 = param_2;
                    /* try { // try from 02635e80 to 02735e8b has its CatchHandler @ 0263602c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

