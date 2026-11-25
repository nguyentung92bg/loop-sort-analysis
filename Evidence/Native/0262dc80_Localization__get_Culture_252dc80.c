/* IL2CPP: Localization$$get_Culture
System_Globalization_CultureInfo_o* Localization__get_Culture (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Localization$$get_Culture
   System_Globalization_CultureInfo_o* Localization__get_Culture (const MethodInfo* method); */

void Localization__get_Culture_252dc80(void)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iStack_14;
  
                    /* try { // try from 0262dc80 to 0272dc97 has its CatchHandler @ 0262d740 */
  puVar1 = PTR_DAT_049b5310;
                    /* catch() { ... } // from try @ 0262d9a4 with catch @ 0262dc84 */
                    /* try { // try from 0262dc98 to 0272dc9b has its CatchHandler @ 0262dcb0 */
  if ((bRam0000000004f4bee1 & 1) == 0) {
                    /* try { // try from 0262dc9c to 0272dcb3 has its CatchHandler @ 0262d740 */
    FUN_021f03f8(PTR_DAT_049b44e8);
                    /* catch() { ... } // from try @ 0262dc98 with catch @ 0262dcb0 */
    FUN_021f03f8(PTR_DAT_049c9c60);
                    /* try { // try from 0262dcb4 to 0272dcbb has its CatchHandler @ 0262dd04 */
                    /* try { // try from 0262dcbc to 0272dcd3 has its CatchHandler @ 0262d740 */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 0262d8d8 with catch @ 0262dcc0 */
    FUN_021f03f8(PTR_DAT_049c9c68);
                    /* try { // try from 0262dcd4 to 0272dcd7 has its CatchHandler @ 0262dcf0 */
    FUN_021f03f8(PTR_DAT_049c9c70);
                    /* try { // try from 0262dcd8 to 0272dcf3 has its CatchHandler @ 0262d740 */
    FUN_021f03f8(PTR_DAT_049c9c78);
    FUN_021f03f8(PTR_DAT_049be5f0);
                    /* catch() { ... } // from try @ 0262dcd4 with catch @ 0262dcf0 */
                    /* try { // try from 0262dcf4 to 0272dcfb has its CatchHandler @ 0262dd04 */
    FUN_021f03f8(PTR_DAT_049c9c80);
                    /* try { // try from 0262dcfc to 0272dd07 has its CatchHandler @ 0262d740 */
                    /* catch() { ... } // from try @ 0262dc78 with catch @ 0262dd04
                       catch() { ... } // from try @ 0262dcb4 with catch @ 0262dd04
                       catch() { ... } // from try @ 0262dcf4 with catch @ 0262dd04 */
    FUN_021f03f8(PTR_DAT_049c9c88);
    FUN_021f03f8(PTR_DAT_049c9c90);
    FUN_021f03f8(PTR_DAT_049c9c98);
    FUN_021f03f8(PTR_DAT_049c9ca0);
    FUN_021f03f8(PTR_DAT_049c9ca8);
    FUN_021f03f8(PTR_DAT_049c9cb0);
    FUN_021f03f8(PTR_DAT_049c9cb8);
    FUN_021f03f8(PTR_DAT_049c9cc0);
    bRam0000000004f4bee1 = 1;
  }
  puVar5 = PTR_DAT_049c9c60;
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_049b44e8;
  PlayerPrefsEnum___Il2CppFullySharedGenericStructType___get_Value_290ff8c
            (*(long *)(lVar2 + 0xb8) + 0x28,&iStack_14,*(undefined8 *)puVar5);
  puVar4 = (undefined8 *)PTR_DAT_049be5f0;
  if (iStack_14 < 0x1d) {
    uVar3 = iStack_14 - 0xe;
    if (0xe < uVar3) goto LAB_0262dde8;
    puVar5 = &UNK_0460f038;
  }
  else {
    uVar3 = iStack_14 - 0x1e;
    if (0xb < uVar3) goto LAB_0262dde8;
    puVar5 = &UNK_0460f0b0;
  }
  puVar4 = *(undefined8 **)(puVar5 + (ulong)uVar3 * 8);
LAB_0262dde8:
  uVar6 = *puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Globalization_CultureInfo__GetCultureInfo_30802ac(uVar6,0);
  return;
}

