/* IL2CPP: ConsoleMethods$$DeleteAllPrefs
void ConsoleMethods__DeleteAllPrefs (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$DeleteAllPrefs
   void ConsoleMethods__DeleteAllPrefs (const MethodInfo* method); */

void ConsoleMethods__DeleteAllPrefs_24f41ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_18;
  
                    /* catch() { ... } // from try @ 025f3ff4 with catch @ 025f41ec */
  puVar1 = PTR_DAT_049b5228;
                    /* catch() { ... } // from try @ 025f4010 with catch @ 025f41f0 */
                    /* catch() { ... } // from try @ 025f418c with catch @ 025f41f4 */
                    /* catch() { ... } // from try @ 025f4034 with catch @ 025f41f8 */
                    /* catch() { ... } // from try @ 025f401c with catch @ 025f41fc */
                    /* catch() { ... } // from try @ 025f3fdc with catch @ 025f4200 */
                    /* catch() { ... } // from try @ 025f4188 with catch @ 025f4204 */
  if ((bRam0000000004f4bd12 & 1) == 0) {
                    /* catch() { ... } // from try @ 025f3f5c with catch @ 025f4208 */
                    /* catch() { ... } // from try @ 025f3f7c with catch @ 025f420c */
    FUN_021f03f8(PTR_DAT_049c8248);
    FUN_021f03f8(PTR_DAT_049b5f80);
                    /* try { // try from 025f4220 to 026f4223 has its CatchHandler @ 025f422c */
    FUN_021f03f8(PTR_DAT_049b5228);
                    /* catch() { ... } // from try @ 025f4220 with catch @ 025f422c */
    bRam0000000004f4bd12 = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
                    /* try { // try from 025f4234 to 026f423b has its CatchHandler @ 025f4270 */
                    /* try { // try from 025f423c to 026f4253 has its CatchHandler @ 025f3dc8 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
                    /* try { // try from 025f4254 to 026f4257 has its CatchHandler @ 025f425c */
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 025f4254 with catch @ 025f425c */
                    /* try { // try from 025f4260 to 026f4267 has its CatchHandler @ 025f4270 */
                    /* try { // try from 025f4268 to 026f4273 has its CatchHandler @ 025f3dc8 */
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_18,*(undefined8 *)PTR_DAT_049c8248);
                    /* catch() { ... } // from try @ 025f4234 with catch @ 025f4270
                       catch() { ... } // from try @ 025f4260 with catch @ 025f4270 */
                    /* try { // try from 025f4274 to 026f4347 has its CatchHandler @ 025f4274
                       catch() { ... } // from try @ 025f4274 with catch @ 025f4274
                       catch() { ... } // from try @ 025f4410 with catch @ 025f4274
                       catch() { ... } // from try @ 025f4468 with catch @ 025f4274
                       catch() { ... } // from try @ 025f44a8 with catch @ 025f4274
                       catch() { ... } // from try @ 025f44bc with catch @ 025f4274
                       catch() { ... } // from try @ 025f4524 with catch @ 025f4274
                       catch() { ... } // from try @ 025f4550 with catch @ 025f4274 */
    if (lStack_18 != 0) {
      CloudSaveModule__DeleteAll_24ee284();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

