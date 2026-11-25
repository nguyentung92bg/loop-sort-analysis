/* IL2CPP: ConsoleMethods$$SetLevelSheetId
void ConsoleMethods__SetLevelSheetId (System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetLevelSheetId
   void ConsoleMethods__SetLevelSheetId (System_String_o* id, const MethodInfo* method); */

void ConsoleMethods__SetLevelSheetId_24f3624(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_38;
  
  puVar2 = PTR_DAT_049b5228;
                    /* try { // try from 025f3634 to 026f363b has its CatchHandler @ 025f3768 */
  if ((bRam0000000004f4bd09 & 1) == 0) {
                    /* try { // try from 025f3654 to 026f369f has its CatchHandler @ 025f376c */
    FUN_021f03f8(PTR_DAT_049c82d8);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049c5120);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025f36a0 to 026f36bb has its CatchHandler @ 025f34ec */
    FUN_021f03f8(PTR_DAT_049c82c0);
    FUN_021f03f8(PTR_DAT_049c82e0);
                    /* try { // try from 025f36bc to 026f36c3 has its CatchHandler @ 025f3764 */
    FUN_021f03f8(PTR_DAT_049c82e8);
    FUN_021f03f8(PTR_DAT_049c82f0);
                    /* try { // try from 025f36d0 to 026f36d3 has its CatchHandler @ 025f375c */
    bRam0000000004f4bd09 = 1;
  }
  puVar3 = PTR_DAT_049b5f80;
                    /* try { // try from 025f36e4 to 026f36e7 has its CatchHandler @ 025f3748 */
                    /* try { // try from 025f36e8 to 026f371f has its CatchHandler @ 025f34ec */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)puVar3);
                    /* try { // try from 025f3720 to 026f3723 has its CatchHandler @ 025f3760 */
                    /* try { // try from 025f3724 to 026f3727 has its CatchHandler @ 025f3758 */
                    /* try { // try from 025f3728 to 026f372b has its CatchHandler @ 025f374c */
                    /* try { // try from 025f372c to 026f3733 has its CatchHandler @ 025f34ec */
                    /* try { // try from 025f3734 to 026f3737 has its CatchHandler @ 025f3744 */
                    /* try { // try from 025f3738 to 026f373f has its CatchHandler @ 025f3748 */
                    /* catch() { ... } // from try @ 025f35f0 with catch @ 025f3740
                       try { // try from 025f3740 to 026f3787 has its CatchHandler @ 025f34ec */
                    /* catch() { ... } // from try @ 025f3734 with catch @ 025f3744 */
                    /* catch() { ... } // from try @ 025f36e4 with catch @ 025f3748
                       catch() { ... } // from try @ 025f3738 with catch @ 025f3748 */
                    /* catch() { ... } // from try @ 025f35d0 with catch @ 025f374c
                       catch() { ... } // from try @ 025f3728 with catch @ 025f374c */
  if ((((lVar4 != 0) &&
       (FUN_0235c744(*(undefined8 *)(lVar4 + 0x50),&lStack_38,*(undefined8 *)PTR_DAT_049b5f78),
       lStack_38 != 0)) && (*(long *)(lStack_38 + 0x30) != 0)) &&
     ((lVar4 = ConstantSheetBase_object___GetString_281c118
                         (*(long *)(lStack_38 + 0x30),0x16,*(undefined8 *)PTR_DAT_049c82d8),
      lVar4 != 0 &&
      (lVar4 = System_String__Split_2f802dc(lVar4,10,0,0), puVar2 = PTR_DAT_049b3c58, lVar4 != 0))))
  {
    uVar1 = *(uint *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 025f3724 with catch @ 025f3758 */
                    /* catch() { ... } // from try @ 025f36d0 with catch @ 025f375c */
                    /* catch() { ... } // from try @ 025f3720 with catch @ 025f3760 */
                    /* catch() { ... } // from try @ 025f36bc with catch @ 025f3764 */
    if (0 < (int)uVar1) {
                    /* catch() { ... } // from try @ 025f3634 with catch @ 025f3768 */
      lVar8 = 0;
                    /* catch() { ... } // from try @ 025f3654 with catch @ 025f376c */
      do {
        if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        lVar7 = *(long *)(lVar4 + 0x20 + lVar8 * 8);
        if (lVar7 == 0) goto LAB_025f3898;
                    /* try { // try from 025f3788 to 026f378b has its CatchHandler @ 025f37c0 */
        uVar5 = System_String__StartsWith_2f7b8c8(lVar7,param_1,3,0);
        puVar3 = PTR_DAT_049b5310;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_049b5310 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (*(int *)(*(long *)PTR_DAT_049c5120 + 0xe4) == 0) {
            FUN_021f0574();
          }
          PlayerPrefsString__Set_3f0e4a4(*(long *)(*(long *)puVar3 + 0xb8) + 0x5e8,lVar7,0);
          uVar6 = System_String__Concat_2f7d424
                            (*(undefined8 *)PTR_DAT_049c82e8,lVar7,*(undefined8 *)PTR_DAT_049c82e0,0
                            );
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_021f0574(lVar4);
          }
          UnityEngine_Debug__Log_3bd0be4(uVar6,0);
          return;
        }
                    /* try { // try from 025f3798 to 026f379f has its CatchHandler @ 025f37e0 */
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar8 = lVar8 + 1;
                    /* try { // try from 025f37a0 to 026f37b7 has its CatchHandler @ 025f34ec */
      } while ((int)lVar8 < (int)uVar1);
    }
                    /* try { // try from 025f37b8 to 026f37bb has its CatchHandler @ 025f37cc */
                    /* catch() { ... } // from try @ 025f3788 with catch @ 025f37c0 */
    uVar6 = System_String__Concat_2f7d424
                      (*(undefined8 *)PTR_DAT_049c82f0,param_1,*(undefined8 *)PTR_DAT_049c82c0,0);
                    /* catch() { ... } // from try @ 025f37b8 with catch @ 025f37cc */
    lVar4 = *(long *)puVar2;
                    /* try { // try from 025f37d0 to 026f37d7 has its CatchHandler @ 025f37e0 */
                    /* try { // try from 025f37d8 to 026f37e3 has its CatchHandler @ 025f34ec */
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025f3798 with catch @ 025f37e0
                       catch() { ... } // from try @ 025f37d0 with catch @ 025f37e0 */
      FUN_021f0574(lVar4);
    }
    UnityEngine_Debug__LogWarning_3bcf90c(uVar6,0);
    return;
  }
LAB_025f3898:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

