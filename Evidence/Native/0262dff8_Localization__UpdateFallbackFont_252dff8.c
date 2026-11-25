/* IL2CPP: Localization$$UpdateFallbackFont
void Localization__UpdateFallbackFont (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Localization$$UpdateFallbackFont
   void Localization__UpdateFallbackFont (const MethodInfo* method); */

void Localization__UpdateFallbackFont_252dff8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iStack_2c;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_049c9ce0;
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bee3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9ce8);
    FUN_021f03f8(PTR_DAT_049b5480);
                    /* try { // try from 0262e038 to 0272e03b has its CatchHandler @ 0262e044 */
                    /* try { // try from 0262e03c to 0272e05f has its CatchHandler @ 0262de64 */
    FUN_021f03f8(PTR_DAT_049c9cf0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262e038 with catch @ 0262e044
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262df2c with catch @ 0262e048
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0262df4c with catch @ 0262e04c
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 0262dfb4 with catch @ 0262e04c
                        */
    FUN_021f03f8(PTR_DAT_049c9cf8);
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0262e060 to 0272e063 has its CatchHandler @ 0262e07c */
                    /* try { // try from 0262e064 to 0272e07f has its CatchHandler @ 0262de64 */
    FUN_021f03f8(PTR_DAT_049c9c60);
    FUN_021f03f8(PTR_DAT_049c9d00);
                    /* catch() { ... } // from try @ 0262e060 with catch @ 0262e07c */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 0262e080 to 0272e087 has its CatchHandler @ 0262e090 */
                    /* try { // try from 0262e088 to 0272e093 has its CatchHandler @ 0262de64 */
    FUN_021f03f8(PTR_DAT_049c9d08);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0262e080 with catch @ 0262e090
                        */
    FUN_021f03f8(PTR_DAT_049c9d10);
    FUN_021f03f8(PTR_DAT_049c9ce0);
    FUN_021f03f8(PTR_DAT_049c9d18);
    FUN_021f03f8(PTR_DAT_049c9d20);
    FUN_021f03f8(PTR_DAT_049c9d28);
    FUN_021f03f8(PTR_DAT_049c9d30);
    bRam0000000004f4bee3 = 1;
  }
  puVar2 = PTR_DAT_049c9c60;
  lVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  System_Object___ctor_3142338(lVar5,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar1;
  }
  PlayerPrefsEnum___Il2CppFullySharedGenericStructType___get_Value_290ff8c
            (*(long *)(lVar6 + 0xb8) + 0x28,&iStack_2c,*(undefined8 *)puVar2);
  if (iStack_2c < 0x18) {
    puVar9 = (undefined8 *)PTR_DAT_049c9d28;
    if ((iStack_2c == 0x16) || (puVar9 = (undefined8 *)PTR_DAT_049c9d18, iStack_2c == 0x17))
    goto LAB_0262e18c;
  }
  else {
    puVar9 = (undefined8 *)PTR_DAT_049c9d30;
    if ((iStack_2c == 0x28) || (puVar9 = (undefined8 *)PTR_DAT_049c9d20, iStack_2c == 0x29))
    goto LAB_0262e18c;
  }
  puVar9 = *(undefined8 **)(*(long *)(PTR_DAT_049b3bd0 + 0x90) + 0xb8);
LAB_0262e18c:
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar10 = (undefined8 *)(lVar5 + 0x10);
  *puVar10 = *puVar9;
  thunk_FUN_021f190c(puVar10);
  uVar7 = System_String__IsNullOrEmpty_2f7c924(*puVar10,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_049c9d08 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar6 = TMPro_TMP_Settings__get_fallbackFontAssets_3b39f38(0);
    if (lVar6 != 0) {
      uVar8 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c9d00);
      System_Predicate___Il2CppFullySharedGenericType____ctor_29189c0
                (uVar8,lVar5,*(undefined8 *)PTR_DAT_049c9d10,0);
      System_Collections_Generic_List___Il2CppFullySharedGenericType___Find_28ce9b0
                (lVar6,uVar8,&uStack_28,*(undefined8 *)PTR_DAT_049c9cf0);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uStack_28,0,0);
      if (((uVar7 & 1) == 0) &&
         (iVar4 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                            (lVar6,uStack_28,*(undefined8 *)PTR_DAT_049c9cf8), 1 < iVar4)) {
        if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Extensions__Swap___Il2CppFullySharedGenericType__25f11bc
                  (lVar6,1,iVar4,*(undefined8 *)PTR_DAT_049c9ce8);
      }
    }
  }
  return;
}

