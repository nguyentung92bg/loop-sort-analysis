/* IL2CPP: NakamaCloudSaveProvider$$.cctor
void NakamaCloudSaveProvider___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaCloudSaveProvider$$.cctor
   void NakamaCloudSaveProvider___cctor (const MethodInfo* method); */

void NakamaCloudSaveProvider___cctor_2247c6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_DAT_049b5888;
  puVar1 = PTR_DAT_049b5880;
                    /* catch() { ... } // from try @ 02347a94 with catch @ 02347c74 */
                    /* catch() { ... } // from try @ 02347a60 with catch @ 02347c78 */
                    /* catch() { ... } // from try @ 02347aa8 with catch @ 02347c7c
                       catch() { ... } // from try @ 02347c48 with catch @ 02347c7c */
  if ((bRam0000000004f49b58 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5888);
    FUN_021f03f8(PTR_DAT_049b5880);
    bRam0000000004f49b58 = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = *(undefined8 *)puVar1;
  uVar3 = *(ulong *)(*(long *)puVar2 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

