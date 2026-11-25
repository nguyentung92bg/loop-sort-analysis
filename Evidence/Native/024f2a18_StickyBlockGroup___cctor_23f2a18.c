/* IL2CPP: StickyBlockGroup$$.cctor
void StickyBlockGroup___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: StickyBlockGroup$$.cctor
   void StickyBlockGroup___cctor (const MethodInfo* method); */

void StickyBlockGroup___cctor_23f2a18(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar3 = PTR_DAT_049c2100;
  puVar2 = PTR_DAT_049c20f0;
  if ((bRam0000000004f4b64a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c20f0);
    FUN_021f03f8(PTR_DAT_049c2100);
                    /* try { // try from 024f2a54 to 025f2a5f has its CatchHandler @ 024f2ac8 */
    bRam0000000004f4b64a = 1;
  }
  uVar4 = UnityEngine_Animator__StringToHash_3bb2cf0(*(undefined8 *)puVar3,0);
  uVar1 = _UNK_013a76e8;
                    /* try { // try from 024f2a6c to 025f2a8b has its CatchHandler @ 024f2ad0 */
  puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
  *puVar5 = uVar4;
  *(undefined8 *)(puVar5 + 1) = uVar1;
  puVar5[3] = 0x3f19999a;
                    /* try { // try from 024f2a90 to 025f2aa7 has its CatchHandler @ 024f2bb8 */
  return;
}

