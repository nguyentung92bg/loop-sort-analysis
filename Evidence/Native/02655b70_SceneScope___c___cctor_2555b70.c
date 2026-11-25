/* IL2CPP: SceneScope.<>c$$.cctor
void SceneScope___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SceneScope.<>c$$.cctor
   void SceneScope___c___cctor (const MethodInfo* method); */

void SceneScope___c___cctor_2555b70(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_049cb070;
  if ((bRam0000000004f4c0a0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb070);
                    /* try { // try from 02655b98 to 02755b9b has its CatchHandler @ 02655e30 */
    bRam0000000004f4c0a0 = 1;
  }
  uVar2 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(uVar2,0);
                    /* try { // try from 02655bb8 to 02755bbb has its CatchHandler @ 02655e28 */
                    /* try { // try from 02655bc0 to 02755bcb has its CatchHandler @ 02655e2c */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

