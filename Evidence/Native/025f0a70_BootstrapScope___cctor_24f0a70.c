/* IL2CPP: BootstrapScope$$.cctor
void BootstrapScope___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BootstrapScope$$.cctor
   void BootstrapScope___cctor (const MethodInfo* method); */

void BootstrapScope___cctor_24f0a70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_049b6240;
  puVar2 = PTR_DAT_049b45f8;
  puVar1 = PTR_DAT_049b45f0;
  if ((bRam0000000004f4bcf5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6240);
                    /* try { // try from 025f0aac to 026f0ab7 has its CatchHandler @ 025f0ba8 */
    FUN_021f03f8(PTR_DAT_049b45f8);
    FUN_021f03f8(PTR_DAT_049b45f0);
                    /* try { // try from 025f0ac8 to 026f0ad3 has its CatchHandler @ 025f0ba4 */
    bRam0000000004f4bcf5 = 1;
  }
  uVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 025f0adc to 026f0ae3 has its CatchHandler @ 025f0d0c */
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar4,*(undefined8 *)puVar2);
                    /* try { // try from 025f0ae4 to 026f0ae7 has its CatchHandler @ 025f0cbc */
                    /* try { // try from 025f0ae8 to 026f0aeb has its CatchHandler @ 025f0d04 */
                    /* try { // try from 025f0aec to 026f0aef has its CatchHandler @ 025f0cf4 */
                    /* try { // try from 025f0af0 to 026f0af3 has its CatchHandler @ 025f0cf0 */
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar5 = uVar4;
                    /* try { // try from 025f0af4 to 026f0af7 has its CatchHandler @ 025f0cb0 */
                    /* try { // try from 025f0af8 to 026f0afb has its CatchHandler @ 025f0cac */
                    /* try { // try from 025f0afc to 026f0aff has its CatchHandler @ 025f0cec */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

