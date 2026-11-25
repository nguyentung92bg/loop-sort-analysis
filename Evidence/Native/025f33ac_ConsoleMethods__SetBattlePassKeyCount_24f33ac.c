/* IL2CPP: ConsoleMethods$$SetBattlePassKeyCount
void ConsoleMethods__SetBattlePassKeyCount (int32_t keyCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetBattlePassKeyCount
   void ConsoleMethods__SetBattlePassKeyCount (int32_t keyCount, const MethodInfo* method); */

void ConsoleMethods__SetBattlePassKeyCount_24f33ac(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5228;
                    /* try { // try from 025f33c8 to 026f33db has its CatchHandler @ 025f3294 */
  if ((bRam0000000004f4bd07 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
                    /* try { // try from 025f33dc to 026f33df has its CatchHandler @ 025f3418 */
                    /* try { // try from 025f33e0 to 026f3407 has its CatchHandler @ 025f3294 */
    FUN_021f03f8(PTR_DAT_049c8258);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
                    /* try { // try from 025f3408 to 026f340b has its CatchHandler @ 025f3410 */
    FUN_021f03f8(PTR_DAT_049c82b0);
                    /* try { // try from 025f340c to 026f3433 has its CatchHandler @ 025f3294 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f3408 with catch @ 025f3410
                        */
    bRam0000000004f4bd07 = 1;
  }
  puVar2 = PTR_DAT_049b5f80;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f335c with catch @ 025f3414
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025f337c with catch @ 025f3418
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025f33dc with catch @ 025f3418
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar2);
                    /* try { // try from 025f3434 to 026f3437 has its CatchHandler @ 025f3458 */
  if (lVar3 != 0) {
                    /* try { // try from 025f3438 to 026f345b has its CatchHandler @ 025f3294 */
    FUN_0235c744(*(undefined8 *)(lVar3 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8258);
    puVar2 = PTR_DAT_049c82b0;
    puVar1 = PTR_DAT_049b3c58;
    if (lStack_28 != 0) {
                    /* catch() { ... } // from try @ 025f3434 with catch @ 025f3458 */
                    /* try { // try from 025f345c to 026f3463 has its CatchHandler @ 025f346c */
      uStack_78 = 0;
      uStack_70 = 0;
                    /* try { // try from 025f3464 to 026f346f has its CatchHandler @ 025f3294 */
      uStack_68 = 0x28;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025f345c with catch @ 025f346c
                        */
      uStack_5c = 0;
      uStack_64 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      uStack_54 = param_1;
      EconomyModule__Set_2524e30(lStack_28,&uStack_78,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

