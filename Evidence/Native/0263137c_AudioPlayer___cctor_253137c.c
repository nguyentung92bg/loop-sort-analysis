/* IL2CPP: AudioPlayer$$.cctor
void AudioPlayer___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AudioPlayer$$.cctor
   void AudioPlayer___cctor (const MethodInfo* method); */

void AudioPlayer___cctor_253137c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR_DAT_049c9f40;
  puVar4 = PTR_DAT_049c9f38;
  puVar3 = PTR_DAT_049c1b50;
  puVar2 = PTR_DAT_049bc7b8;
  puVar1 = PTR_DAT_049bc7b0;
                    /* try { // try from 0263138c to 0273138f has its CatchHandler @ 026313a8 */
                    /* try { // try from 02631390 to 027313ab has its CatchHandler @ 026311f4 */
                    /* catch() { ... } // from try @ 0263138c with catch @ 026313a8 */
                    /* try { // try from 026313ac to 027313b3 has its CatchHandler @ 026313bc */
                    /* try { // try from 026313b4 to 027313bf has its CatchHandler @ 026311f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 026313ac with catch @ 026313bc
                        */
  if ((bRam0000000004f4bf22 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049bc7b0);
    FUN_021f03f8(PTR_DAT_049c9f40);
    FUN_021f03f8(PTR_DAT_049bc7b8);
    FUN_021f03f8(PTR_DAT_049c9f38);
    bRam0000000004f4bf22 = 1;
  }
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar1);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar6;
  thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_021f190c(puVar7,uVar6);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
            (uVar6,*(undefined8 *)puVar5);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar7 = uVar6;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

