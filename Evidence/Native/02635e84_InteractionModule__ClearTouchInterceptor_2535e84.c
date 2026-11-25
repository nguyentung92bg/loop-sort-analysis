/* IL2CPP: InteractionModule$$ClearTouchInterceptor
void InteractionModule__ClearTouchInterceptor (InteractionModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: InteractionModule$$ClearTouchInterceptor
   void InteractionModule__ClearTouchInterceptor (InteractionModule_o* __this, const MethodInfo*
   method); */

void InteractionModule__ClearTouchInterceptor_2535e84(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *puVar1 = 0;
                    /* try { // try from 02635e8c to 02735e9f has its CatchHandler @ 02636028 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

