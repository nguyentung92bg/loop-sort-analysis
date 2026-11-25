/* IL2CPP: SystemBase$$set_SceneLoadToken
void SystemBase__set_SceneLoadToken (SystemBase_o* __this, System_Threading_CancellationToken_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SystemBase$$set_SceneLoadToken
   void SystemBase__set_SceneLoadToken (SystemBase_o* __this, System_Threading_CancellationToken_o
   value, const MethodInfo* method); */

void SystemBase__set_SceneLoadToken_2555e18(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_2;
                    /* try { // try from 02655e1c to 02755e1f has its CatchHandler @ 02655e34 */
                    /* catch() { ... } // from try @ 02655df4 with catch @ 02655e20
                       try { // try from 02655e20 to 02755e5b has its CatchHandler @ 02655b20 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

