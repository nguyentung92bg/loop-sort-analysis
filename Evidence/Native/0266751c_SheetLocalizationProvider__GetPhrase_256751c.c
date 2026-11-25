/* IL2CPP: SheetLocalizationProvider$$GetPhrase
System_String_o* SheetLocalizationProvider__GetPhrase (SheetLocalizationProvider_o* __this, System_String_o* key, System_String_o* defaultValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetLocalizationProvider$$GetPhrase
   System_String_o* SheetLocalizationProvider__GetPhrase (SheetLocalizationProvider_o* __this,
   System_String_o* key, System_String_o* defaultValue, const MethodInfo* method); */

undefined8
SheetLocalizationProvider__GetPhrase_256751c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4c16a & 1) == 0) {
                    /* try { // try from 0266754c to 027675d3 has its CatchHandler @ 026677c0 */
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049cbcc0);
    FUN_021f03f8(PTR_DAT_049cbcc8);
    FUN_021f03f8(PTR_DAT_049b5f78);
    FUN_021f03f8(PTR_DAT_049b5f80);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c9c60);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049cbcd0);
    FUN_021f03f8(PTR_DAT_049cbcd8);
    bRam0000000004f4c16a = 1;
  }
                    /* try { // try from 026675d4 to 0276767b has its CatchHandler @ 02666f04 */
  uStack_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Application__get_isPlaying_3bc708c(0);
  puVar1 = PTR_DAT_049cbcd0;
  if ((uVar3 & 1) == 0) {
    return param_3;
  }
  if (**(long **)(*(long *)PTR_DAT_049cbcd0 + 0xb8) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
                    /* try { // try from 026676b8 to 027676c3 has its CatchHandler @ 02667754 */
      FUN_021f0574();
    }
    lVar4 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
                    /* try { // try from 026676d0 to 027676df has its CatchHandler @ 02667750 */
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
                    /* try { // try from 026676f0 to 027676fb has its CatchHandler @ 02667748 */
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      return param_3;
    }
    if (lVar4 == 0) goto LAB_026677ac;
                    /* try { // try from 02667708 to 02767717 has its CatchHandler @ 02667744 */
    FUN_0235c744(*(undefined8 *)(lVar4 + 0x50),&uStack_38,*(undefined8 *)PTR_DAT_049b5f78);
    if (CONCAT44(uStack_34,uStack_38) == 0) {
      return param_3;
    }
    **(undefined8 **)(*(long *)puVar1 + 0xb8) =
         *(undefined8 *)(CONCAT44(uStack_34,uStack_38) + 0x80);
                    /* try { // try from 02667734 to 02767737 has its CatchHandler @ 026677b0 */
                    /* try { // try from 02667738 to 0276773b has its CatchHandler @ 02667794 */
                    /* try { // try from 0266773c to 0276773f has its CatchHandler @ 0266777c */
    thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                    /* try { // try from 02667740 to 02767743 has its CatchHandler @ 026677b4 */
                    /* catch() { ... } // from try @ 02667708 with catch @ 02667744
                       try { // try from 02667744 to 027677d7 has its CatchHandler @ 02666f04 */
                    /* catch() { ... } // from try @ 026676f0 with catch @ 02667748 */
                    /* catch() { ... } // from try @ 02667048 with catch @ 0266774c */
    if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
      return param_3;
    }
  }
  puVar2 = PTR_DAT_049b5310;
  lVar4 = *(long *)PTR_DAT_049b5310;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  PlayerPrefsEnum___Il2CppFullySharedGenericStructType___get_Value_290ff8c
            (*(long *)(lVar4 + 0xb8) + 0x28,&uStack_38,*(undefined8 *)PTR_DAT_049c9c60);
  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
    lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (**(long **)(*(long *)puVar1 + 0xb8),param_2,*(undefined8 *)PTR_DAT_049cbcd8);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) goto LAB_026677ac;
                    /* try { // try from 0266767c to 02767687 has its CatchHandler @ 0266775c */
                    /* try { // try from 02667694 to 027676a3 has its CatchHandler @ 02667758 */
      uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (lVar4,&uStack_38,&uStack_40,*(undefined8 *)PTR_DAT_049cbcc0);
      if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 026676b8 with catch @ 02667754 */
                    /* catch() { ... } // from try @ 02667694 with catch @ 02667758 */
                    /* catch() { ... } // from try @ 0266767c with catch @ 0266775c */
                    /* catch() { ... } // from try @ 02667248 with catch @ 02667760 */
                    /* catch() { ... } // from try @ 026671f4 with catch @ 02667764 */
                    /* catch() { ... } // from try @ 02667464 with catch @ 02667768 */
                    /* catch() { ... } // from try @ 02667420 with catch @ 0266776c */
                    /* catch() { ... } // from try @ 026673e4 with catch @ 02667770 */
        uStack_24 = 10;
                    /* catch() { ... } // from try @ 02667060 with catch @ 02667774 */
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                  (lVar4,&uStack_24,&uStack_38,*(undefined8 *)PTR_DAT_049cbcc8);
                    /* catch() { ... } // from try @ 0266704c with catch @ 02667778 */
        uStack_40 = CONCAT44(uStack_34,uStack_38);
                    /* catch() { ... } // from try @ 0266773c with catch @ 0266777c */
      }
                    /* catch() { ... } // from try @ 02667250 with catch @ 02667780 */
                    /* catch() { ... } // from try @ 02667228 with catch @ 02667784 */
      uVar3 = System_String__IsNullOrEmpty_2f7c924(uStack_40,0);
                    /* catch() { ... } // from try @ 02667220 with catch @ 02667788 */
                    /* catch() { ... } // from try @ 02667208 with catch @ 0266778c */
                    /* catch() { ... } // from try @ 026671d0 with catch @ 02667790 */
      if ((uVar3 & 1) == 0) {
        param_3 = uStack_40;
      }
    }
                    /* catch() { ... } // from try @ 02667738 with catch @ 02667794 */
                    /* catch() { ... } // from try @ 02667080 with catch @ 02667798 */
                    /* catch() { ... } // from try @ 0266746c with catch @ 0266779c */
                    /* catch() { ... } // from try @ 02667444 with catch @ 026677a0 */
                    /* catch() { ... } // from try @ 02667430 with catch @ 026677a4 */
                    /* catch() { ... } // from try @ 026673f8 with catch @ 026677a8 */
    return param_3;
  }
LAB_026677ac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026673c0 with catch @ 026677ac */
  FUN_021f06a0();
}

